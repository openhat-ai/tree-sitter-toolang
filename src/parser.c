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
#define STATE_COUNT 653
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
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
  anon_sym_psyche = 38,
  anon_sym_skill = 39,
  anon_sym_service = 40,
  anon_sym_prompt = 41,
  sym_thunk_keyword = 42,
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
  sym_optional_marker = 57,
  sym_arrow = 58,
  sym_colon = 59,
  sym_lparen = 60,
  sym_rparen = 61,
  sym_comma = 62,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 63,
  sym_frontmatter_delimiter = 64,
  sym_cap_uri = 65,
  sym_cap_shorthand = 66,
  sym_bare_value = 67,
  sym_type_name = 68,
  sym_value_name = 69,
  sym_indented_raw_text = 70,
  sym_flow_bare_raw_text = 71,
  sym_fenced_raw_text = 72,
  sym_source_file = 73,
  sym_item = 74,
  sym_newline = 75,
  sym_blank_line = 76,
  sym_line_end = 77,
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
  sym_cap_name = 93,
  sym_cap_ref = 94,
  sym_cap_body = 95,
  sym_cap_indented = 96,
  sym_cap_markdown = 97,
  sym_cap_indented_content_line = 98,
  sym_cap_fenced_content_line = 99,
  sym_frontmatter = 100,
  sym_property_eq = 101,
  sym_property_colon = 102,
  sym_property_key = 103,
  sym_property_value = 104,
  sym_instruct = 105,
  sym_instruct_name = 106,
  sym_instruct_body = 107,
  sym_context = 108,
  sym_context_name = 109,
  sym_context_body = 110,
  sym_block_indented = 111,
  sym_block_fenced = 112,
  sym_block_indented_content_line = 113,
  sym_block_fenced_content_line = 114,
  sym_thunk = 115,
  sym_thunk_name = 116,
  sym_thunk_body = 117,
  sym_params = 118,
  sym_param = 119,
  sym_param_name = 120,
  sym_flow = 121,
  sym_flow_name = 122,
  sym_flow_body = 123,
  sym_flow_body_tail = 124,
  sym_flow_body_statement = 125,
  sym_flow_entry = 126,
  sym_flow_bare_thunk_step = 127,
  sym_flow_bare_thunk_body = 128,
  sym_flow_bare_content_line = 129,
  sym_flow_do_step = 130,
  sym_flow_ask_step = 131,
  sym_flow_unfold_step = 132,
  sym_flow_keep_step = 133,
  sym_flow_drop_step = 134,
  sym_flow_rank_step = 135,
  sym_flow_each_step = 136,
  sym_flow_fold_step = 137,
  sym_flow_repeat_step = 138,
  sym_flow_repeat_block_body = 139,
  sym_flow_until_clause = 140,
  sym_flow_condition_body = 141,
  sym_flow_inline_step_body = 142,
  sym_flow_inline_output_type = 143,
  sym_flow_inline_parallel_head = 144,
  sym_flow_inline_rank_head = 145,
  sym_flow_inline_each_head = 146,
  sym_flow_named_parallel_head = 147,
  sym_flow_parallelism = 148,
  sym_flow_rank_limit = 149,
  sym_flow_target_list = 150,
  sym_flow_inline_body = 151,
  sym_flow_repeat_count = 152,
  sym_flow_inline_text = 153,
  sym_directive = 154,
  sym_directive_key = 155,
  sym_directive_op = 156,
  sym_directive_csv = 157,
  sym_instruction_section = 158,
  sym_message_section = 159,
  sym_thunk_tail = 160,
  sym_roled_message = 161,
  sym_unroled_message = 162,
  sym_unroled_message_block = 163,
  sym_block_indented_implicit = 164,
  sym_context_block = 165,
  sym_instruct_block = 166,
  sym_roled_message_block = 167,
  sym_pass_statement = 168,
  sym_context_block_kind = 169,
  sym_instruct_block_kind = 170,
  sym_roled_message_kind = 171,
  sym_block_value = 172,
  sym_block_inline = 173,
  sym_block_name = 174,
  sym_block_content_inline = 175,
  sym_psyche_keyword = 176,
  sym_skill_keyword = 177,
  sym_service_keyword = 178,
  sym_prompt_keyword = 179,
  sym_context_keyword = 180,
  sym_instruct_keyword = 181,
  sym_assign_operator = 182,
  sym_fence_open = 183,
  sym_fence_close = 184,
  sym_cap_kind = 185,
  sym_inline_text = 186,
  aux_sym_source_file_repeat1 = 187,
  aux_sym_type_repeat1 = 188,
  aux_sym_struct_body_repeat1 = 189,
  aux_sym_cap_indented_repeat1 = 190,
  aux_sym_cap_markdown_repeat1 = 191,
  aux_sym_frontmatter_repeat1 = 192,
  aux_sym_block_indented_repeat1 = 193,
  aux_sym_block_fenced_repeat1 = 194,
  aux_sym_thunk_body_repeat1 = 195,
  aux_sym_thunk_body_repeat2 = 196,
  aux_sym_params_repeat1 = 197,
  aux_sym_flow_body_repeat1 = 198,
  aux_sym_flow_body_tail_repeat1 = 199,
  aux_sym_flow_body_tail_repeat2 = 200,
  aux_sym_flow_bare_thunk_body_repeat1 = 201,
  aux_sym_flow_target_list_repeat1 = 202,
  aux_sym_directive_csv_repeat1 = 203,
  aux_sym_message_section_repeat1 = 204,
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
  [anon_sym_psyche] = "psyche",
  [anon_sym_skill] = "skill",
  [anon_sym_service] = "service",
  [anon_sym_prompt] = "prompt",
  [sym_thunk_keyword] = "thunk_keyword",
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
  [sym_cap_name] = "cap_name",
  [sym_cap_ref] = "cap_ref",
  [sym_cap_body] = "cap_body",
  [sym_cap_indented] = "cap_indented",
  [sym_cap_markdown] = "cap_markdown",
  [sym_cap_indented_content_line] = "cap_indented_content_line",
  [sym_cap_fenced_content_line] = "cap_fenced_content_line",
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
  [sym_psyche_keyword] = "psyche_keyword",
  [sym_skill_keyword] = "skill_keyword",
  [sym_service_keyword] = "service_keyword",
  [sym_prompt_keyword] = "prompt_keyword",
  [sym_context_keyword] = "context_keyword",
  [sym_instruct_keyword] = "instruct_keyword",
  [sym_assign_operator] = "assign_operator",
  [sym_fence_open] = "fence_open",
  [sym_fence_close] = "fence_close",
  [sym_cap_kind] = "cap_kind",
  [sym_inline_text] = "inline_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_cap_indented_repeat1] = "cap_indented_repeat1",
  [aux_sym_cap_markdown_repeat1] = "cap_markdown_repeat1",
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
  [anon_sym_psyche] = anon_sym_psyche,
  [anon_sym_skill] = anon_sym_skill,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_prompt] = anon_sym_prompt,
  [sym_thunk_keyword] = sym_thunk_keyword,
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
  [sym_cap_name] = sym_cap_name,
  [sym_cap_ref] = sym_cap_ref,
  [sym_cap_body] = sym_cap_body,
  [sym_cap_indented] = sym_cap_indented,
  [sym_cap_markdown] = sym_cap_markdown,
  [sym_cap_indented_content_line] = sym_cap_indented_content_line,
  [sym_cap_fenced_content_line] = sym_cap_fenced_content_line,
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
  [sym_psyche_keyword] = sym_psyche_keyword,
  [sym_skill_keyword] = sym_skill_keyword,
  [sym_service_keyword] = sym_service_keyword,
  [sym_prompt_keyword] = sym_prompt_keyword,
  [sym_context_keyword] = sym_context_keyword,
  [sym_instruct_keyword] = sym_instruct_keyword,
  [sym_assign_operator] = sym_assign_operator,
  [sym_fence_open] = sym_fence_open,
  [sym_fence_close] = sym_fence_close,
  [sym_cap_kind] = sym_cap_kind,
  [sym_inline_text] = sym_inline_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_cap_indented_repeat1] = aux_sym_cap_indented_repeat1,
  [aux_sym_cap_markdown_repeat1] = aux_sym_cap_markdown_repeat1,
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
  [anon_sym_psyche] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [sym_thunk_keyword] = {
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
  [sym_cap_name] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_body] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_indented] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_indented_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_fenced_content_line] = {
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
  [sym_cap_kind] = {
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
  [aux_sym_cap_indented_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cap_markdown_repeat1] = {
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
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 1},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 4},
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
  [56] = {.index = 126, .length = 3},
  [57] = {.index = 129, .length = 1},
  [58] = {.index = 130, .length = 6},
  [59] = {.index = 136, .length = 6},
  [60] = {.index = 142, .length = 6},
  [61] = {.index = 148, .length = 1},
  [62] = {.index = 149, .length = 2},
  [63] = {.index = 151, .length = 2},
  [64] = {.index = 153, .length = 2},
  [65] = {.index = 155, .length = 4},
  [66] = {.index = 159, .length = 1},
  [67] = {.index = 160, .length = 2},
  [68] = {.index = 162, .length = 2},
  [69] = {.index = 164, .length = 2},
  [70] = {.index = 166, .length = 7},
  [71] = {.index = 173, .length = 1},
  [72] = {.index = 174, .length = 1},
  [73] = {.index = 175, .length = 2},
  [74] = {.index = 177, .length = 1},
  [75] = {.index = 178, .length = 5},
  [76] = {.index = 183, .length = 4},
  [77] = {.index = 187, .length = 3},
  [78] = {.index = 190, .length = 3},
  [79] = {.index = 193, .length = 2},
  [80] = {.index = 195, .length = 2},
  [81] = {.index = 197, .length = 2},
  [82] = {.index = 199, .length = 3},
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
    {field_suffix, 0},
  [10] =
    {field_base, 0},
    {field_suffix, 1, .inherited = true},
  [12] =
    {field_body, 3},
    {field_colon, 1},
    {field_keyword, 0},
  [15] =
    {field_instruction, 0},
  [16] =
    {field_messages, 0},
  [17] =
    {field_tail, 0},
  [18] =
    {field_value, 0},
  [19] =
    {field_param, 1},
  [20] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [23] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [26] =
    {field_body, 0},
  [27] =
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
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
    {field_instruction, 1},
    {field_tail, 3},
  [124] =
    {field_instruction, 2},
    {field_tail, 3},
  [126] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [129] =
    {field_name, 0},
  [130] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [136] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [142] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [148] =
    {field_target, 1},
  [149] =
    {field_target, 0, .inherited = true},
    {field_target, 1, .inherited = true},
  [151] =
    {field_colon, 0},
    {field_value, 2},
  [153] =
    {field_colon, 0},
    {field_value, 1},
  [155] =
    {field_colon, 2},
    {field_condition, 3},
    {field_condition_keyword, 1},
    {field_keyword, 0},
  [159] =
    {field_entry, 0},
  [160] =
    {field_close, 3},
    {field_frontmatter, 2},
  [162] =
    {field_close, 4},
    {field_language, 1},
  [164] =
    {field_instruction, 2},
    {field_tail, 4},
  [166] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [173] =
    {field_text, 1},
  [174] =
    {field_text, 0},
  [175] =
    {field_condition, 1},
    {field_entry, 0},
  [177] =
    {field_entry, 1},
  [178] =
    {field_colon, 3},
    {field_condition, 4},
    {field_condition_keyword, 2},
    {field_count, 1},
    {field_keyword, 0},
  [183] =
    {field_body, 4},
    {field_colon, 2},
    {field_count, 1},
    {field_keyword, 0},
  [187] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [190] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [193] =
    {field_close, 4},
    {field_frontmatter, 2},
  [195] =
    {field_condition, 2},
    {field_entry, 0},
  [197] =
    {field_condition, 2},
    {field_entry, 1},
  [199] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 12,
  [24] = 24,
  [25] = 21,
  [26] = 22,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 30,
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
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 50,
  [58] = 52,
  [59] = 59,
  [60] = 54,
  [61] = 59,
  [62] = 49,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 66,
  [76] = 76,
  [77] = 67,
  [78] = 72,
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
  [90] = 73,
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
  [117] = 117,
  [118] = 118,
  [119] = 74,
  [120] = 66,
  [121] = 66,
  [122] = 69,
  [123] = 70,
  [124] = 67,
  [125] = 125,
  [126] = 111,
  [127] = 117,
  [128] = 103,
  [129] = 118,
  [130] = 105,
  [131] = 80,
  [132] = 106,
  [133] = 91,
  [134] = 107,
  [135] = 85,
  [136] = 92,
  [137] = 79,
  [138] = 108,
  [139] = 83,
  [140] = 109,
  [141] = 81,
  [142] = 110,
  [143] = 89,
  [144] = 66,
  [145] = 82,
  [146] = 93,
  [147] = 94,
  [148] = 69,
  [149] = 70,
  [150] = 104,
  [151] = 95,
  [152] = 86,
  [153] = 96,
  [154] = 67,
  [155] = 84,
  [156] = 87,
  [157] = 113,
  [158] = 114,
  [159] = 115,
  [160] = 116,
  [161] = 88,
  [162] = 97,
  [163] = 76,
  [164] = 98,
  [165] = 125,
  [166] = 99,
  [167] = 100,
  [168] = 101,
  [169] = 102,
  [170] = 112,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 47,
  [179] = 46,
  [180] = 176,
  [181] = 181,
  [182] = 182,
  [183] = 47,
  [184] = 45,
  [185] = 185,
  [186] = 186,
  [187] = 177,
  [188] = 68,
  [189] = 70,
  [190] = 67,
  [191] = 69,
  [192] = 192,
  [193] = 193,
  [194] = 66,
  [195] = 195,
  [196] = 196,
  [197] = 47,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 177,
  [205] = 176,
  [206] = 206,
  [207] = 207,
  [208] = 74,
  [209] = 209,
  [210] = 210,
  [211] = 69,
  [212] = 70,
  [213] = 67,
  [214] = 214,
  [215] = 215,
  [216] = 206,
  [217] = 195,
  [218] = 196,
  [219] = 198,
  [220] = 199,
  [221] = 200,
  [222] = 202,
  [223] = 223,
  [224] = 224,
  [225] = 66,
  [226] = 201,
  [227] = 74,
  [228] = 67,
  [229] = 69,
  [230] = 70,
  [231] = 66,
  [232] = 69,
  [233] = 233,
  [234] = 234,
  [235] = 70,
  [236] = 67,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 67,
  [242] = 242,
  [243] = 237,
  [244] = 70,
  [245] = 69,
  [246] = 66,
  [247] = 67,
  [248] = 248,
  [249] = 70,
  [250] = 74,
  [251] = 66,
  [252] = 69,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 199,
  [258] = 200,
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
  [276] = 196,
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
  [293] = 202,
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
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 198,
  [314] = 66,
  [315] = 67,
  [316] = 66,
  [317] = 69,
  [318] = 70,
  [319] = 67,
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
  [343] = 342,
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
  [365] = 349,
  [366] = 363,
  [367] = 367,
  [368] = 354,
  [369] = 369,
  [370] = 358,
  [371] = 349,
  [372] = 372,
  [373] = 369,
  [374] = 353,
  [375] = 356,
  [376] = 376,
  [377] = 372,
  [378] = 355,
  [379] = 354,
  [380] = 358,
  [381] = 353,
  [382] = 382,
  [383] = 362,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 388,
  [393] = 393,
  [394] = 389,
  [395] = 391,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 399,
  [403] = 400,
  [404] = 398,
  [405] = 398,
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
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 406,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 428,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 444,
  [448] = 67,
  [449] = 69,
  [450] = 70,
  [451] = 451,
  [452] = 452,
  [453] = 69,
  [454] = 70,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 67,
  [461] = 416,
  [462] = 462,
  [463] = 417,
  [464] = 418,
  [465] = 442,
  [466] = 466,
  [467] = 419,
  [468] = 414,
  [469] = 469,
  [470] = 420,
  [471] = 421,
  [472] = 429,
  [473] = 430,
  [474] = 474,
  [475] = 423,
  [476] = 476,
  [477] = 424,
  [478] = 478,
  [479] = 439,
  [480] = 407,
  [481] = 481,
  [482] = 439,
  [483] = 481,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 67,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 69,
  [496] = 70,
  [497] = 67,
  [498] = 498,
  [499] = 487,
  [500] = 500,
  [501] = 501,
  [502] = 488,
  [503] = 503,
  [504] = 504,
  [505] = 505,
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
  [530] = 515,
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
  [546] = 541,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 515,
  [552] = 515,
  [553] = 520,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 543,
  [562] = 550,
  [563] = 554,
  [564] = 559,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 565,
  [573] = 573,
  [574] = 574,
  [575] = 566,
  [576] = 555,
  [577] = 515,
  [578] = 520,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 515,
  [583] = 520,
  [584] = 515,
  [585] = 520,
  [586] = 515,
  [587] = 515,
  [588] = 515,
  [589] = 515,
  [590] = 515,
  [591] = 515,
  [592] = 515,
  [593] = 518,
  [594] = 567,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 69,
  [601] = 70,
  [602] = 602,
  [603] = 603,
  [604] = 602,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 67,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 67,
  [623] = 623,
  [624] = 624,
  [625] = 602,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 632,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 638,
  [644] = 644,
  [645] = 623,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 648,
  [650] = 66,
  [651] = 651,
  [652] = 652,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(0);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(326);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == 'B') ADVANCE(351);
      if (lookahead == 'J') ADVANCE(353);
      if (lookahead == 'N') ADVANCE(356);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(358);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(326);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == 'B') ADVANCE(351);
      if (lookahead == 'J') ADVANCE(353);
      if (lookahead == 'N') ADVANCE(356);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(358);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '+') ADVANCE(555);
      if (lookahead == ',') ADVANCE(326);
      if (lookahead == '-') ADVANCE(554);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == 'B') ADVANCE(351);
      if (lookahead == 'J') ADVANCE(353);
      if (lookahead == 'N') ADVANCE(356);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == '[') ADVANCE(556);
      if (lookahead == '`') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'c') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(587);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'h') ADVANCE(561);
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead == 'k') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(581);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == 'u') ADVANCE(644);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(711);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(4);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(4);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'c') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(655);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead == 'k') ADVANCE(596);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 's') ADVANCE(602);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead == 'u') ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(711);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'd') ADVANCE(655);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(561);
      if (lookahead == 'k') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(657);
      if (lookahead == 'p') ADVANCE(567);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == 'u') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(711);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'd') ADVANCE(655);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'k') ADVANCE(596);
      if (lookahead == 'p') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 'u') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(711);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'd') ADVANCE(655);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 'k') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 'u') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(711);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'c') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(655);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead == 'k') ADVANCE(596);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 's') ADVANCE(602);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead == 'u') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(711);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 237,
        '\r', 1,
        '#', 241,
        ')', 325,
        ',', 326,
        ':', 323,
        '[', 48,
        '`', 50,
        'm', 76,
        'p', 54,
        'u', 156,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 237,
        '\r', 1,
        '#', 241,
        '`', 259,
        'd', 369,
        'n', 389,
        '\t', 256,
        '\f', 256,
        ' ', 256,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(358);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(712);
      if (lookahead != 0) ADVANCE(718);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(713);
      if (lookahead != 0) ADVANCE(718);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(240);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(239);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(238);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(249);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\f') SKIP(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
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
          lookahead != '#') ADVANCE(711);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '>') ADVANCE(322);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(328);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(225);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(41);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(42);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(43);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
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
      if (lookahead == '=') ADVANCE(271);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '>') ADVANCE(322);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(322);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(248);
      END_STATE();
    case 49:
      if (lookahead == '`') ADVANCE(327);
      END_STATE();
    case 50:
      if (lookahead == '`') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'k') ADVANCE(114);
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'k') ADVANCE(119);
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'k') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(307);
      END_STATE();
    case 123:
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'k') ADVANCE(311);
      END_STATE();
    case 125:
      if (lookahead == 'k') ADVANCE(301);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 214:
      if (lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 215:
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 216:
      if (lookahead == 'v') ADVANCE(120);
      END_STATE();
    case 217:
      if (lookahead == 'w') ADVANCE(303);
      END_STATE();
    case 218:
      if (lookahead == 'x') ADVANCE(202);
      END_STATE();
    case 219:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 220:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 221:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 222:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(261);
      END_STATE();
    case 223:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 224:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(224);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 225:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(330);
      END_STATE();
    case 226:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(226);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 227:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(227);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(415);
      END_STATE();
    case 228:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(228);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(416);
      END_STATE();
    case 229:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(229);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(418);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 230:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(230);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(419);
      END_STATE();
    case 231:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 232:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(232);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(420);
      END_STATE();
    case 233:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(233);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(413);
      END_STATE();
    case 234:
      if (eof) ADVANCE(236);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\f') SKIP(234);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(414);
      END_STATE();
    case 235:
      if (eof) ADVANCE(236);
      ADVANCE_MAP(
        '\n', 237,
        '\r', 1,
        '#', 22,
        '(', 324,
        ')', 325,
        '+', 45,
        ',', 326,
        '-', 46,
        ':', 323,
        '=', 270,
        '?', 321,
        'B', 351,
        'J', 353,
        'N', 356,
        'P', 337,
        'T', 341,
        'c', 388,
        'f', 378,
        'i', 384,
        'p', 393,
        's', 364,
        't', 372,
        'u', 395,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(358);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_program_doc_comment);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'a') ADVANCE(253);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'o') ADVANCE(318);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'r') ADVANCE(320);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_flow_target);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      ADVANCE_MAP(
        '\n', 237,
        '\r', 1,
        '#', 241,
        '`', 259,
        'd', 369,
        'n', 389,
        '\t', 256,
        '\f', 256,
        ' ', 256,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(334);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(335);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(332);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(330);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'k') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'k') ADVANCE(374);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(387);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 237,
        0x0b, 552,
        '\f', 417,
        '\r', 1,
        '#', 422,
        'a', 529,
        'c', 509,
        'd', 504,
        'e', 430,
        'f', 487,
        'i', 502,
        'k', 460,
        'p', 434,
        'r', 431,
        's', 461,
        't', 469,
        'u', 498,
        '\t', 413,
        ' ', 413,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 237,
        0x0b, 552,
        '\f', 421,
        '\r', 1,
        '#', 422,
        'a', 529,
        'c', 509,
        'd', 504,
        'e', 430,
        'f', 487,
        'i', 502,
        'k', 460,
        'p', 434,
        'r', 431,
        's', 461,
        't', 469,
        'u', 501,
        '\t', 414,
        ' ', 414,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 237,
        '\f', 415,
        '\r', 1,
        '#', 422,
        'a', 530,
        'c', 509,
        'f', 488,
        'h', 428,
        'i', 502,
        'm', 505,
        'p', 433,
        'r', 454,
        's', 455,
        't', 467,
        'u', 526,
        '\t', 415,
        ' ', 415,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 237,
        '\f', 416,
        '\r', 1,
        '#', 422,
        'a', 530,
        'c', 509,
        'f', 488,
        'i', 502,
        'p', 434,
        's', 461,
        't', 468,
        'u', 526,
        '\t', 416,
        ' ', 416,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 237,
        '\f', 417,
        '\r', 1,
        '#', 422,
        'a', 529,
        'c', 509,
        'd', 504,
        'e', 430,
        'f', 487,
        'i', 502,
        'k', 460,
        'p', 434,
        'r', 431,
        's', 461,
        't', 469,
        'u', 498,
        '\t', 413,
        ' ', 413,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 237,
        '\f', 418,
        '\r', 1,
        '#', 422,
        'c', 388,
        'f', 378,
        'i', 384,
        'p', 393,
        's', 364,
        't', 372,
        'u', 395,
        '\t', 418,
        ' ', 418,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 237,
        '\f', 419,
        '\r', 1,
        '#', 422,
        'c', 509,
        'f', 488,
        'i', 502,
        'p', 520,
        's', 461,
        't', 469,
        'u', 533,
        '\t', 419,
        ' ', 419,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 237,
        '\f', 420,
        '\r', 1,
        '#', 422,
        'a', 530,
        'c', 509,
        'f', 488,
        'i', 502,
        'p', 520,
        's', 461,
        't', 468,
        'u', 526,
        '\t', 420,
        ' ', 420,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 237,
        '\f', 421,
        '\r', 1,
        '#', 422,
        'a', 529,
        'c', 509,
        'd', 504,
        'e', 430,
        'f', 487,
        'i', 502,
        'k', 460,
        'p', 434,
        'r', 431,
        's', 461,
        't', 469,
        'u', 501,
        '\t', 414,
        ' ', 414,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '!') ADVANCE(426);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == 's') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead == 'k') ADVANCE(472);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == 'k') ADVANCE(477);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(462);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == 's') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '-') ADVANCE(553);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '>') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '`') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == 's') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead == 's') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead == 'p') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead == 'k') ADVANCE(615);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead == 'k') ADVANCE(620);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == 'k') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(666);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(700);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead == 's') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(659);
      if (lookahead == 'o') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'm') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'w') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'x') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '`') ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(712);
      if (lookahead != 0) ADVANCE(718);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(713);
      if (lookahead != 0) ADVANCE(718);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(718);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(718);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(718);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(718);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(718);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 226},
  [2] = {.lex_state = 227},
  [3] = {.lex_state = 227},
  [4] = {.lex_state = 227},
  [5] = {.lex_state = 227},
  [6] = {.lex_state = 227},
  [7] = {.lex_state = 227},
  [8] = {.lex_state = 227},
  [9] = {.lex_state = 227},
  [10] = {.lex_state = 227},
  [11] = {.lex_state = 227},
  [12] = {.lex_state = 226},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 226},
  [22] = {.lex_state = 226},
  [23] = {.lex_state = 226},
  [24] = {.lex_state = 226},
  [25] = {.lex_state = 226},
  [26] = {.lex_state = 226},
  [27] = {.lex_state = 226},
  [28] = {.lex_state = 231},
  [29] = {.lex_state = 231},
  [30] = {.lex_state = 226},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 231},
  [33] = {.lex_state = 231},
  [34] = {.lex_state = 231},
  [35] = {.lex_state = 226},
  [36] = {.lex_state = 226},
  [37] = {.lex_state = 228},
  [38] = {.lex_state = 227},
  [39] = {.lex_state = 228},
  [40] = {.lex_state = 228},
  [41] = {.lex_state = 228},
  [42] = {.lex_state = 228},
  [43] = {.lex_state = 228},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 233},
  [46] = {.lex_state = 233},
  [47] = {.lex_state = 233},
  [48] = {.lex_state = 234},
  [49] = {.lex_state = 226},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 234},
  [52] = {.lex_state = 226},
  [53] = {.lex_state = 234},
  [54] = {.lex_state = 226},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 231},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 231},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 231},
  [63] = {.lex_state = 232},
  [64] = {.lex_state = 232},
  [65] = {.lex_state = 232},
  [66] = {.lex_state = 227},
  [67] = {.lex_state = 233},
  [68] = {.lex_state = 227},
  [69] = {.lex_state = 227},
  [70] = {.lex_state = 227},
  [71] = {.lex_state = 227},
  [72] = {.lex_state = 226},
  [73] = {.lex_state = 226},
  [74] = {.lex_state = 233},
  [75] = {.lex_state = 233},
  [76] = {.lex_state = 226},
  [77] = {.lex_state = 226},
  [78] = {.lex_state = 231},
  [79] = {.lex_state = 226},
  [80] = {.lex_state = 226},
  [81] = {.lex_state = 226},
  [82] = {.lex_state = 226},
  [83] = {.lex_state = 226},
  [84] = {.lex_state = 226},
  [85] = {.lex_state = 226},
  [86] = {.lex_state = 226},
  [87] = {.lex_state = 226},
  [88] = {.lex_state = 226},
  [89] = {.lex_state = 226},
  [90] = {.lex_state = 231},
  [91] = {.lex_state = 226},
  [92] = {.lex_state = 226},
  [93] = {.lex_state = 226},
  [94] = {.lex_state = 226},
  [95] = {.lex_state = 226},
  [96] = {.lex_state = 226},
  [97] = {.lex_state = 226},
  [98] = {.lex_state = 226},
  [99] = {.lex_state = 226},
  [100] = {.lex_state = 226},
  [101] = {.lex_state = 226},
  [102] = {.lex_state = 226},
  [103] = {.lex_state = 226},
  [104] = {.lex_state = 226},
  [105] = {.lex_state = 226},
  [106] = {.lex_state = 226},
  [107] = {.lex_state = 226},
  [108] = {.lex_state = 226},
  [109] = {.lex_state = 226},
  [110] = {.lex_state = 226},
  [111] = {.lex_state = 226},
  [112] = {.lex_state = 226},
  [113] = {.lex_state = 226},
  [114] = {.lex_state = 226},
  [115] = {.lex_state = 226},
  [116] = {.lex_state = 226},
  [117] = {.lex_state = 226},
  [118] = {.lex_state = 226},
  [119] = {.lex_state = 234},
  [120] = {.lex_state = 234},
  [121] = {.lex_state = 226},
  [122] = {.lex_state = 226},
  [123] = {.lex_state = 226},
  [124] = {.lex_state = 234},
  [125] = {.lex_state = 226},
  [126] = {.lex_state = 231},
  [127] = {.lex_state = 231},
  [128] = {.lex_state = 231},
  [129] = {.lex_state = 231},
  [130] = {.lex_state = 231},
  [131] = {.lex_state = 231},
  [132] = {.lex_state = 231},
  [133] = {.lex_state = 231},
  [134] = {.lex_state = 231},
  [135] = {.lex_state = 231},
  [136] = {.lex_state = 231},
  [137] = {.lex_state = 231},
  [138] = {.lex_state = 231},
  [139] = {.lex_state = 231},
  [140] = {.lex_state = 231},
  [141] = {.lex_state = 231},
  [142] = {.lex_state = 231},
  [143] = {.lex_state = 231},
  [144] = {.lex_state = 231},
  [145] = {.lex_state = 231},
  [146] = {.lex_state = 231},
  [147] = {.lex_state = 231},
  [148] = {.lex_state = 231},
  [149] = {.lex_state = 231},
  [150] = {.lex_state = 231},
  [151] = {.lex_state = 231},
  [152] = {.lex_state = 231},
  [153] = {.lex_state = 231},
  [154] = {.lex_state = 231},
  [155] = {.lex_state = 231},
  [156] = {.lex_state = 231},
  [157] = {.lex_state = 231},
  [158] = {.lex_state = 231},
  [159] = {.lex_state = 231},
  [160] = {.lex_state = 231},
  [161] = {.lex_state = 231},
  [162] = {.lex_state = 231},
  [163] = {.lex_state = 231},
  [164] = {.lex_state = 231},
  [165] = {.lex_state = 231},
  [166] = {.lex_state = 231},
  [167] = {.lex_state = 231},
  [168] = {.lex_state = 231},
  [169] = {.lex_state = 231},
  [170] = {.lex_state = 231},
  [171] = {.lex_state = 228},
  [172] = {.lex_state = 228},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 228},
  [175] = {.lex_state = 228},
  [176] = {.lex_state = 228},
  [177] = {.lex_state = 228},
  [178] = {.lex_state = 228},
  [179] = {.lex_state = 232},
  [180] = {.lex_state = 232},
  [181] = {.lex_state = 229},
  [182] = {.lex_state = 229},
  [183] = {.lex_state = 232},
  [184] = {.lex_state = 232},
  [185] = {.lex_state = 228},
  [186] = {.lex_state = 229},
  [187] = {.lex_state = 232},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 235},
  [193] = {.lex_state = 235},
  [194] = {.lex_state = 228},
  [195] = {.lex_state = 228},
  [196] = {.lex_state = 228},
  [197] = {.lex_state = 230},
  [198] = {.lex_state = 228},
  [199] = {.lex_state = 228},
  [200] = {.lex_state = 228},
  [201] = {.lex_state = 228},
  [202] = {.lex_state = 228},
  [203] = {.lex_state = 228},
  [204] = {.lex_state = 230},
  [205] = {.lex_state = 230},
  [206] = {.lex_state = 228},
  [207] = {.lex_state = 228},
  [208] = {.lex_state = 228},
  [209] = {.lex_state = 228},
  [210] = {.lex_state = 228},
  [211] = {.lex_state = 228},
  [212] = {.lex_state = 228},
  [213] = {.lex_state = 228},
  [214] = {.lex_state = 232},
  [215] = {.lex_state = 232},
  [216] = {.lex_state = 232},
  [217] = {.lex_state = 232},
  [218] = {.lex_state = 232},
  [219] = {.lex_state = 232},
  [220] = {.lex_state = 232},
  [221] = {.lex_state = 232},
  [222] = {.lex_state = 232},
  [223] = {.lex_state = 232},
  [224] = {.lex_state = 232},
  [225] = {.lex_state = 232},
  [226] = {.lex_state = 232},
  [227] = {.lex_state = 232},
  [228] = {.lex_state = 232},
  [229] = {.lex_state = 232},
  [230] = {.lex_state = 232},
  [231] = {.lex_state = 229},
  [232] = {.lex_state = 229},
  [233] = {.lex_state = 16},
  [234] = {.lex_state = 229},
  [235] = {.lex_state = 229},
  [236] = {.lex_state = 229},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 229},
  [239] = {.lex_state = 16},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 230},
  [242] = {.lex_state = 235},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 230},
  [245] = {.lex_state = 230},
  [246] = {.lex_state = 235},
  [247] = {.lex_state = 235},
  [248] = {.lex_state = 235},
  [249] = {.lex_state = 235},
  [250] = {.lex_state = 230},
  [251] = {.lex_state = 230},
  [252] = {.lex_state = 235},
  [253] = {.lex_state = 226},
  [254] = {.lex_state = 226},
  [255] = {.lex_state = 226},
  [256] = {.lex_state = 226},
  [257] = {.lex_state = 226},
  [258] = {.lex_state = 226},
  [259] = {.lex_state = 226},
  [260] = {.lex_state = 226},
  [261] = {.lex_state = 226},
  [262] = {.lex_state = 226},
  [263] = {.lex_state = 226},
  [264] = {.lex_state = 226},
  [265] = {.lex_state = 226},
  [266] = {.lex_state = 226},
  [267] = {.lex_state = 226},
  [268] = {.lex_state = 226},
  [269] = {.lex_state = 226},
  [270] = {.lex_state = 226},
  [271] = {.lex_state = 226},
  [272] = {.lex_state = 226},
  [273] = {.lex_state = 226},
  [274] = {.lex_state = 226},
  [275] = {.lex_state = 226},
  [276] = {.lex_state = 226},
  [277] = {.lex_state = 226},
  [278] = {.lex_state = 226},
  [279] = {.lex_state = 226},
  [280] = {.lex_state = 226},
  [281] = {.lex_state = 226},
  [282] = {.lex_state = 226},
  [283] = {.lex_state = 226},
  [284] = {.lex_state = 226},
  [285] = {.lex_state = 226},
  [286] = {.lex_state = 226},
  [287] = {.lex_state = 226},
  [288] = {.lex_state = 226},
  [289] = {.lex_state = 226},
  [290] = {.lex_state = 226},
  [291] = {.lex_state = 226},
  [292] = {.lex_state = 226},
  [293] = {.lex_state = 226},
  [294] = {.lex_state = 226},
  [295] = {.lex_state = 226},
  [296] = {.lex_state = 226},
  [297] = {.lex_state = 226},
  [298] = {.lex_state = 226},
  [299] = {.lex_state = 226},
  [300] = {.lex_state = 226},
  [301] = {.lex_state = 226},
  [302] = {.lex_state = 226},
  [303] = {.lex_state = 226},
  [304] = {.lex_state = 226},
  [305] = {.lex_state = 226},
  [306] = {.lex_state = 226},
  [307] = {.lex_state = 226},
  [308] = {.lex_state = 226},
  [309] = {.lex_state = 226},
  [310] = {.lex_state = 226},
  [311] = {.lex_state = 226},
  [312] = {.lex_state = 226},
  [313] = {.lex_state = 226},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 8},
  [316] = {.lex_state = 10},
  [317] = {.lex_state = 10},
  [318] = {.lex_state = 10},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 235},
  [321] = {.lex_state = 235},
  [322] = {.lex_state = 235},
  [323] = {.lex_state = 235},
  [324] = {.lex_state = 235},
  [325] = {.lex_state = 235},
  [326] = {.lex_state = 235},
  [327] = {.lex_state = 235},
  [328] = {.lex_state = 235},
  [329] = {.lex_state = 235},
  [330] = {.lex_state = 235},
  [331] = {.lex_state = 235},
  [332] = {.lex_state = 235},
  [333] = {.lex_state = 18},
  [334] = {.lex_state = 14},
  [335] = {.lex_state = 14},
  [336] = {.lex_state = 19},
  [337] = {.lex_state = 14},
  [338] = {.lex_state = 14},
  [339] = {.lex_state = 14},
  [340] = {.lex_state = 14},
  [341] = {.lex_state = 14},
  [342] = {.lex_state = 41},
  [343] = {.lex_state = 41},
  [344] = {.lex_state = 14},
  [345] = {.lex_state = 14},
  [346] = {.lex_state = 19},
  [347] = {.lex_state = 14},
  [348] = {.lex_state = 14},
  [349] = {.lex_state = 20},
  [350] = {.lex_state = 20},
  [351] = {.lex_state = 20},
  [352] = {.lex_state = 20},
  [353] = {.lex_state = 20},
  [354] = {.lex_state = 20},
  [355] = {.lex_state = 17},
  [356] = {.lex_state = 17},
  [357] = {.lex_state = 20},
  [358] = {.lex_state = 20},
  [359] = {.lex_state = 14},
  [360] = {.lex_state = 14},
  [361] = {.lex_state = 14},
  [362] = {.lex_state = 42},
  [363] = {.lex_state = 42},
  [364] = {.lex_state = 14},
  [365] = {.lex_state = 20},
  [366] = {.lex_state = 42},
  [367] = {.lex_state = 14},
  [368] = {.lex_state = 20},
  [369] = {.lex_state = 17},
  [370] = {.lex_state = 20},
  [371] = {.lex_state = 20},
  [372] = {.lex_state = 17},
  [373] = {.lex_state = 17},
  [374] = {.lex_state = 20},
  [375] = {.lex_state = 17},
  [376] = {.lex_state = 20},
  [377] = {.lex_state = 17},
  [378] = {.lex_state = 17},
  [379] = {.lex_state = 20},
  [380] = {.lex_state = 20},
  [381] = {.lex_state = 20},
  [382] = {.lex_state = 20},
  [383] = {.lex_state = 42},
  [384] = {.lex_state = 35},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 20},
  [387] = {.lex_state = 35},
  [388] = {.lex_state = 43},
  [389] = {.lex_state = 15},
  [390] = {.lex_state = 18},
  [391] = {.lex_state = 14},
  [392] = {.lex_state = 43},
  [393] = {.lex_state = 18},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 14},
  [396] = {.lex_state = 35},
  [397] = {.lex_state = 14},
  [398] = {.lex_state = 14},
  [399] = {.lex_state = 43},
  [400] = {.lex_state = 43},
  [401] = {.lex_state = 226},
  [402] = {.lex_state = 43},
  [403] = {.lex_state = 43},
  [404] = {.lex_state = 14},
  [405] = {.lex_state = 14},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 14},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 14},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 18},
  [435] = {.lex_state = 235},
  [436] = {.lex_state = 14},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 235},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 235},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 235},
  [448] = {.lex_state = 18},
  [449] = {.lex_state = 18},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 19},
  [454] = {.lex_state = 19},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 14},
  [459] = {.lex_state = 14},
  [460] = {.lex_state = 19},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 14},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 14},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 14},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 14},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 14},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 14},
  [485] = {.lex_state = 222},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 32},
  [488] = {.lex_state = 32},
  [489] = {.lex_state = 35},
  [490] = {.lex_state = 235},
  [491] = {.lex_state = 20},
  [492] = {.lex_state = 235},
  [493] = {.lex_state = 18},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 20},
  [497] = {.lex_state = 20},
  [498] = {.lex_state = 235},
  [499] = {.lex_state = 32},
  [500] = {.lex_state = 18},
  [501] = {.lex_state = 20},
  [502] = {.lex_state = 32},
  [503] = {.lex_state = 235},
  [504] = {.lex_state = 14},
  [505] = {.lex_state = 223},
  [506] = {.lex_state = 20},
  [507] = {.lex_state = 14},
  [508] = {.lex_state = 14},
  [509] = {.lex_state = 35},
  [510] = {.lex_state = 235},
  [511] = {.lex_state = 20},
  [512] = {.lex_state = 235},
  [513] = {.lex_state = 18},
  [514] = {.lex_state = 222},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 18},
  [517] = {.lex_state = 235},
  [518] = {.lex_state = 224},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 18},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 18},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 235},
  [528] = {.lex_state = 235},
  [529] = {.lex_state = 235},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 235},
  [532] = {.lex_state = 235},
  [533] = {.lex_state = 235},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 18},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 18},
  [540] = {.lex_state = 18},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 235},
  [543] = {.lex_state = 235},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 235},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 235},
  [548] = {.lex_state = 14},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 235},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 235},
  [555] = {.lex_state = 33},
  [556] = {.lex_state = 235},
  [557] = {.lex_state = 235},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 235},
  [560] = {.lex_state = 235},
  [561] = {.lex_state = 235},
  [562] = {.lex_state = 235},
  [563] = {.lex_state = 235},
  [564] = {.lex_state = 235},
  [565] = {.lex_state = 235},
  [566] = {.lex_state = 235},
  [567] = {.lex_state = 235},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 18},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 235},
  [572] = {.lex_state = 235},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 235},
  [575] = {.lex_state = 235},
  [576] = {.lex_state = 33},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 15},
  [580] = {.lex_state = 235},
  [581] = {.lex_state = 223},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 224},
  [594] = {.lex_state = 235},
  [595] = {.lex_state = 15},
  [596] = {.lex_state = 235},
  [597] = {.lex_state = 235},
  [598] = {.lex_state = 18},
  [599] = {.lex_state = 235},
  [600] = {.lex_state = 32},
  [601] = {.lex_state = 32},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 235},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 18},
  [606] = {.lex_state = 235},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 235},
  [609] = {.lex_state = 235},
  [610] = {.lex_state = 235},
  [611] = {.lex_state = 235},
  [612] = {.lex_state = 32},
  [613] = {.lex_state = 18},
  [614] = {.lex_state = 235},
  [615] = {.lex_state = 235},
  [616] = {.lex_state = 235},
  [617] = {.lex_state = 235},
  [618] = {.lex_state = 15},
  [619] = {.lex_state = 235},
  [620] = {.lex_state = 235},
  [621] = {.lex_state = 235},
  [622] = {.lex_state = 33},
  [623] = {.lex_state = 235},
  [624] = {.lex_state = 235},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 235},
  [627] = {.lex_state = 235},
  [628] = {.lex_state = 235},
  [629] = {.lex_state = 235},
  [630] = {.lex_state = 18},
  [631] = {.lex_state = 235},
  [632] = {.lex_state = 15},
  [633] = {.lex_state = 235},
  [634] = {.lex_state = 224},
  [635] = {.lex_state = 15},
  [636] = {.lex_state = 235},
  [637] = {.lex_state = 235},
  [638] = {.lex_state = 235},
  [639] = {.lex_state = 222},
  [640] = {.lex_state = 235},
  [641] = {.lex_state = 235},
  [642] = {.lex_state = 235},
  [643] = {.lex_state = 235},
  [644] = {.lex_state = 235},
  [645] = {.lex_state = 235},
  [646] = {.lex_state = 235},
  [647] = {.lex_state = 224},
  [648] = {.lex_state = 235},
  [649] = {.lex_state = 235},
  [650] = {.lex_state = 33},
  [651] = {.lex_state = 235},
  [652] = {.lex_state = 235},
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
    [anon_sym_skills] = ACTIONS(1),
    [anon_sym_services] = ACTIONS(1),
    [anon_sym_psyches] = ACTIONS(1),
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
    [anon_sym_psyche] = ACTIONS(1),
    [anon_sym_skill] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [sym_thunk_keyword] = ACTIONS(1),
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
    [sym_type_name] = ACTIONS(1),
    [sym_flow_bare_raw_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(607),
    [sym_item] = STATE(36),
    [sym_newline] = STATE(144),
    [sym_blank_line] = STATE(36),
    [sym_use] = STATE(312),
    [sym_struct] = STATE(312),
    [sym_psyche] = STATE(312),
    [sym_skill] = STATE(312),
    [sym_service] = STATE(312),
    [sym_prompt] = STATE(312),
    [sym_instruct] = STATE(312),
    [sym_context] = STATE(312),
    [sym_thunk] = STATE(312),
    [sym_flow] = STATE(312),
    [sym_psyche_keyword] = STATE(569),
    [sym_skill_keyword] = STATE(539),
    [sym_service_keyword] = STATE(516),
    [sym_prompt_keyword] = STATE(537),
    [sym_context_keyword] = STATE(513),
    [sym_instruct_keyword] = STATE(493),
    [aux_sym_source_file_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [sym_program_doc_comment] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_comment_line] = ACTIONS(9),
    [anon_sym_context] = ACTIONS(11),
    [anon_sym_instruct] = ACTIONS(13),
    [sym_use_keyword] = ACTIONS(15),
    [sym_struct_keyword] = ACTIONS(17),
    [anon_sym_psyche] = ACTIONS(19),
    [anon_sym_skill] = ACTIONS(21),
    [anon_sym_service] = ACTIONS(23),
    [anon_sym_prompt] = ACTIONS(25),
    [sym_thunk_keyword] = ACTIONS(27),
    [sym_flow_keyword] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(37), 1,
      sym_comment_line,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    STATE(41), 1,
      sym_instruction_section,
    STATE(66), 1,
      sym_newline,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(301), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_thunk_tail,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(3), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(35), 10,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [103] = 27,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_comment_line,
    STATE(39), 1,
      sym_instruction_section,
    STATE(66), 1,
      sym_newline,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(285), 1,
      sym_thunk_tail,
    STATE(301), 1,
      sym_pass_statement,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(38), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(53), 10,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [206] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(37), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(271), 1,
      sym_thunk_tail,
    STATE(281), 1,
      sym_thunk_body,
    STATE(301), 1,
      sym_pass_statement,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(59), 12,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [303] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(37), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(262), 1,
      sym_thunk_body,
    STATE(270), 1,
      sym_message_section,
    STATE(271), 1,
      sym_thunk_tail,
    STATE(301), 1,
      sym_pass_statement,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(63), 12,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [400] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(37), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(260), 1,
      sym_thunk_body,
    STATE(270), 1,
      sym_message_section,
    STATE(271), 1,
      sym_thunk_tail,
    STATE(301), 1,
      sym_pass_statement,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(67), 12,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [497] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(37), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(271), 1,
      sym_thunk_tail,
    STATE(300), 1,
      sym_thunk_body,
    STATE(301), 1,
      sym_pass_statement,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(71), 12,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [594] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(37), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(268), 1,
      sym_thunk_body,
    STATE(270), 1,
      sym_message_section,
    STATE(271), 1,
      sym_thunk_tail,
    STATE(301), 1,
      sym_pass_statement,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(75), 12,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [691] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(37), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(271), 1,
      sym_thunk_tail,
    STATE(274), 1,
      sym_thunk_body,
    STATE(301), 1,
      sym_pass_statement,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(79), 12,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [788] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(37), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(271), 1,
      sym_thunk_tail,
    STATE(296), 1,
      sym_thunk_body,
    STATE(301), 1,
      sym_pass_statement,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(83), 12,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [885] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(37), 1,
      sym_instruction_section,
    STATE(172), 1,
      sym_context_block,
    STATE(174), 1,
      sym_instruct_block,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(271), 1,
      sym_thunk_tail,
    STATE(277), 1,
      sym_thunk_body,
    STATE(301), 1,
      sym_pass_statement,
    STATE(447), 1,
      sym_directive_key,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(87), 12,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [982] = 21,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(113), 1,
      sym_flow_until_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(118), 1,
      sym_flow_until_clause,
    STATE(121), 1,
      sym_newline,
    ACTIONS(93), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(30), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(80), 10,
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
    ACTIONS(89), 13,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [1070] = 27,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_doc_comment,
    ACTIONS(121), 1,
      sym_comment_line,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(29), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(298), 1,
      sym_pass_statement,
    STATE(310), 1,
      sym_flow_body,
    STATE(311), 1,
      sym_flow_body_tail,
    STATE(314), 1,
      sym_newline,
    STATE(444), 1,
      sym_directive_key,
    STATE(31), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(44), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(123), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(131), 10,
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
  [1170] = 27,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_doc_comment,
    ACTIONS(121), 1,
      sym_comment_line,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(29), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(273), 1,
      sym_flow_body,
    STATE(298), 1,
      sym_pass_statement,
    STATE(311), 1,
      sym_flow_body_tail,
    STATE(314), 1,
      sym_newline,
    STATE(444), 1,
      sym_directive_key,
    STATE(31), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(44), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(123), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(131), 10,
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
  [1270] = 27,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_doc_comment,
    ACTIONS(121), 1,
      sym_comment_line,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(29), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(272), 1,
      sym_flow_body,
    STATE(298), 1,
      sym_pass_statement,
    STATE(311), 1,
      sym_flow_body_tail,
    STATE(314), 1,
      sym_newline,
    STATE(444), 1,
      sym_directive_key,
    STATE(31), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(44), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(123), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(131), 10,
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
  [1370] = 27,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_doc_comment,
    ACTIONS(121), 1,
      sym_comment_line,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(29), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(298), 1,
      sym_pass_statement,
    STATE(302), 1,
      sym_flow_body,
    STATE(311), 1,
      sym_flow_body_tail,
    STATE(314), 1,
      sym_newline,
    STATE(444), 1,
      sym_directive_key,
    STATE(31), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(44), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(123), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(131), 10,
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
  [1470] = 27,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_doc_comment,
    ACTIONS(121), 1,
      sym_comment_line,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(29), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(294), 1,
      sym_flow_body,
    STATE(298), 1,
      sym_pass_statement,
    STATE(311), 1,
      sym_flow_body_tail,
    STATE(314), 1,
      sym_newline,
    STATE(444), 1,
      sym_directive_key,
    STATE(31), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(44), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(123), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(131), 10,
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
  [1570] = 27,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_doc_comment,
    ACTIONS(121), 1,
      sym_comment_line,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(29), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(288), 1,
      sym_flow_body,
    STATE(298), 1,
      sym_pass_statement,
    STATE(311), 1,
      sym_flow_body_tail,
    STATE(314), 1,
      sym_newline,
    STATE(444), 1,
      sym_directive_key,
    STATE(31), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(44), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(123), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(131), 10,
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
  [1670] = 27,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_doc_comment,
    ACTIONS(121), 1,
      sym_comment_line,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(29), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(287), 1,
      sym_flow_body,
    STATE(298), 1,
      sym_pass_statement,
    STATE(311), 1,
      sym_flow_body_tail,
    STATE(314), 1,
      sym_newline,
    STATE(444), 1,
      sym_directive_key,
    STATE(31), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(44), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(123), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(131), 10,
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
  [1770] = 27,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_doc_comment,
    ACTIONS(121), 1,
      sym_comment_line,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(29), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(298), 1,
      sym_pass_statement,
    STATE(303), 1,
      sym_flow_body,
    STATE(311), 1,
      sym_flow_body_tail,
    STATE(314), 1,
      sym_newline,
    STATE(444), 1,
      sym_directive_key,
    STATE(31), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(44), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(123), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(131), 10,
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
  [1870] = 21,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(151), 1,
      sym_flow_until_keyword,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(121), 1,
      sym_newline,
    STATE(170), 1,
      sym_flow_until_clause,
    ACTIONS(149), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(22), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(80), 10,
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
    ACTIONS(147), 13,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [1958] = 21,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(151), 1,
      sym_flow_until_keyword,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(121), 1,
      sym_newline,
    STATE(159), 1,
      sym_flow_until_clause,
    ACTIONS(93), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(30), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(80), 10,
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
    ACTIONS(153), 13,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [2046] = 21,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(151), 1,
      sym_flow_until_keyword,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(121), 1,
      sym_newline,
    STATE(129), 1,
      sym_flow_until_clause,
    ACTIONS(93), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(30), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(80), 10,
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
    ACTIONS(89), 13,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [2134] = 21,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(151), 1,
      sym_flow_until_keyword,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(121), 1,
      sym_newline,
    STATE(160), 1,
      sym_flow_until_clause,
    ACTIONS(157), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(23), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(80), 10,
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
    ACTIONS(155), 13,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [2222] = 21,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(113), 1,
      sym_flow_until_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(112), 1,
      sym_flow_until_clause,
    STATE(121), 1,
      sym_newline,
    ACTIONS(159), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(26), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(80), 10,
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
    ACTIONS(147), 13,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [2310] = 21,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(113), 1,
      sym_flow_until_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(115), 1,
      sym_flow_until_clause,
    STATE(121), 1,
      sym_newline,
    ACTIONS(93), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(30), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(80), 10,
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
    ACTIONS(153), 13,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [2398] = 21,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(113), 1,
      sym_flow_until_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(116), 1,
      sym_flow_until_clause,
    STATE(121), 1,
      sym_newline,
    ACTIONS(161), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(12), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(80), 10,
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
    ACTIONS(155), 13,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [2486] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(144), 1,
      sym_newline,
    STATE(253), 1,
      sym_pass_statement,
    ACTIONS(165), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(34), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(131), 10,
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
    ACTIONS(163), 12,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [2573] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(144), 1,
      sym_newline,
    STATE(267), 1,
      sym_pass_statement,
    ACTIONS(169), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(28), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(131), 10,
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
    ACTIONS(167), 12,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [2660] = 19,
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
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(121), 1,
      sym_newline,
    ACTIONS(176), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(30), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(80), 10,
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
    ACTIONS(171), 14,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_flow_until_keyword,
  [2743] = 26,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(119), 1,
      sym_doc_comment,
    ACTIONS(121), 1,
      sym_comment_line,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(29), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(269), 1,
      sym_flow_body_tail,
    STATE(298), 1,
      sym_pass_statement,
    STATE(314), 1,
      sym_newline,
    STATE(444), 1,
      sym_directive_key,
    STATE(44), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(173), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(123), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(131), 10,
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
  [2840] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(144), 1,
      sym_newline,
    STATE(284), 1,
      sym_pass_statement,
    ACTIONS(165), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(34), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(131), 10,
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
    ACTIONS(209), 12,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [2927] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(144), 1,
      sym_newline,
    STATE(253), 1,
      sym_pass_statement,
    ACTIONS(211), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(32), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(131), 10,
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
    ACTIONS(163), 12,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [3014] = 19,
    ACTIONS(213), 1,
      aux_sym_newline_token1,
    ACTIONS(219), 1,
      sym_flow_do_keyword,
    ACTIONS(222), 1,
      sym_flow_ask_keyword,
    ACTIONS(225), 1,
      sym_flow_unfold_keyword,
    ACTIONS(228), 1,
      sym_flow_keep_keyword,
    ACTIONS(231), 1,
      sym_flow_drop_keyword,
    ACTIONS(234), 1,
      sym_flow_rank_keyword,
    ACTIONS(237), 1,
      sym_flow_each_keyword,
    ACTIONS(240), 1,
      sym_flow_fold_keyword,
    ACTIONS(243), 1,
      sym_flow_repeat_keyword,
    ACTIONS(246), 1,
      sym_flow_bare_raw_text,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(144), 1,
      sym_newline,
    ACTIONS(216), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(34), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(131), 10,
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
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [3096] = 23,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    ACTIONS(254), 1,
      sym_program_doc_comment,
    ACTIONS(260), 1,
      anon_sym_context,
    ACTIONS(263), 1,
      anon_sym_instruct,
    ACTIONS(266), 1,
      sym_use_keyword,
    ACTIONS(269), 1,
      sym_struct_keyword,
    ACTIONS(272), 1,
      anon_sym_psyche,
    ACTIONS(275), 1,
      anon_sym_skill,
    ACTIONS(278), 1,
      anon_sym_service,
    ACTIONS(281), 1,
      anon_sym_prompt,
    ACTIONS(284), 1,
      sym_thunk_keyword,
    ACTIONS(287), 1,
      sym_flow_keyword,
    STATE(144), 1,
      sym_newline,
    STATE(493), 1,
      sym_instruct_keyword,
    STATE(513), 1,
      sym_context_keyword,
    STATE(516), 1,
      sym_service_keyword,
    STATE(537), 1,
      sym_prompt_keyword,
    STATE(539), 1,
      sym_skill_keyword,
    STATE(569), 1,
      sym_psyche_keyword,
    ACTIONS(257), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(35), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(312), 10,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_context,
      sym_thunk,
      sym_flow,
  [3178] = 23,
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
      anon_sym_psyche,
    ACTIONS(21), 1,
      anon_sym_skill,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(25), 1,
      anon_sym_prompt,
    ACTIONS(27), 1,
      sym_thunk_keyword,
    ACTIONS(29), 1,
      sym_flow_keyword,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      sym_program_doc_comment,
    STATE(144), 1,
      sym_newline,
    STATE(493), 1,
      sym_instruct_keyword,
    STATE(513), 1,
      sym_context_keyword,
    STATE(516), 1,
      sym_service_keyword,
    STATE(537), 1,
      sym_prompt_keyword,
    STATE(539), 1,
      sym_skill_keyword,
    STATE(569), 1,
      sym_psyche_keyword,
    ACTIONS(294), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(35), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(312), 10,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_context,
      sym_thunk,
      sym_flow,
  [3260] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(302), 1,
      sym_comment_line,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(256), 1,
      sym_thunk_tail,
    STATE(270), 1,
      sym_message_section,
    STATE(301), 1,
      sym_pass_statement,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(43), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(300), 12,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [3330] = 8,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      aux_sym_newline_token1,
    ACTIONS(311), 1,
      sym_comment_line,
    STATE(66), 1,
      sym_newline,
    STATE(447), 1,
      sym_directive_key,
    STATE(38), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(314), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(309), 17,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3380] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(321), 1,
      sym_comment_line,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(265), 1,
      sym_thunk_tail,
    STATE(270), 1,
      sym_message_section,
    STATE(301), 1,
      sym_pass_statement,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(40), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(319), 12,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [3450] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      sym_comment_line,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(295), 1,
      sym_thunk_tail,
    STATE(301), 1,
      sym_pass_statement,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(185), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(325), 12,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [3520] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      sym_comment_line,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(282), 1,
      sym_thunk_tail,
    STATE(301), 1,
      sym_pass_statement,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(42), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(331), 12,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [3590] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_comment_line,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(259), 1,
      sym_thunk_tail,
    STATE(270), 1,
      sym_message_section,
    STATE(301), 1,
      sym_pass_statement,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(185), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(337), 12,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [3660] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_comment_line,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(194), 1,
      sym_newline,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(270), 1,
      sym_message_section,
    STATE(286), 1,
      sym_thunk_tail,
    STATE(301), 1,
      sym_pass_statement,
    STATE(633), 1,
      sym_roled_message_kind,
    STATE(64), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(185), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(341), 12,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [3730] = 22,
    ACTIONS(117), 1,
      aux_sym_newline_token1,
    ACTIONS(125), 1,
      sym_pass_keyword,
    ACTIONS(127), 1,
      sym_flow_do_keyword,
    ACTIONS(129), 1,
      sym_flow_ask_keyword,
    ACTIONS(131), 1,
      sym_flow_unfold_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_rank_keyword,
    ACTIONS(139), 1,
      sym_flow_each_keyword,
    ACTIONS(141), 1,
      sym_flow_fold_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    ACTIONS(343), 1,
      sym_doc_comment,
    ACTIONS(345), 1,
      sym_comment_line,
    STATE(33), 1,
      sym_flow_body_statement,
    STATE(62), 1,
      sym_flow_bare_content_line,
    STATE(137), 1,
      sym_flow_entry,
    STATE(141), 1,
      sym_flow_bare_thunk_body,
    STATE(267), 1,
      sym_pass_statement,
    STATE(314), 1,
      sym_newline,
    STATE(237), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(131), 10,
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
  [3807] = 6,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      aux_sym_newline_token1,
    ACTIONS(353), 1,
      sym_indented_raw_text,
    STATE(75), 1,
      sym_newline,
    STATE(47), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(351), 25,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [3852] = 6,
    ACTIONS(349), 1,
      aux_sym_newline_token1,
    ACTIONS(353), 1,
      sym_indented_raw_text,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_newline,
    STATE(45), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(357), 25,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [3897] = 6,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    ACTIONS(366), 1,
      sym_indented_raw_text,
    STATE(75), 1,
      sym_newline,
    STATE(47), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(364), 25,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [3942] = 6,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 1,
      aux_sym_newline_token1,
    ACTIONS(371), 1,
      sym_indented_raw_text,
    STATE(120), 1,
      sym_newline,
    STATE(51), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(357), 24,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [3986] = 7,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    STATE(72), 1,
      sym_blank_line,
    STATE(121), 1,
      sym_newline,
    ACTIONS(375), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(52), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(373), 23,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [4032] = 21,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(379), 1,
      sym_doc_comment,
    ACTIONS(381), 1,
      sym_comment_line,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(158), 1,
      sym_flow_repeat_block_body,
    STATE(316), 1,
      sym_newline,
    STATE(59), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(80), 10,
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
  [4106] = 6,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 1,
      aux_sym_newline_token1,
    ACTIONS(371), 1,
      sym_indented_raw_text,
    STATE(120), 1,
      sym_newline,
    STATE(53), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(351), 24,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [4150] = 7,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    STATE(73), 1,
      sym_blank_line,
    STATE(121), 1,
      sym_newline,
    ACTIONS(385), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(54), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(383), 23,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [4196] = 6,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(387), 1,
      aux_sym_newline_token1,
    ACTIONS(390), 1,
      sym_indented_raw_text,
    STATE(120), 1,
      sym_newline,
    STATE(53), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(364), 24,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [4240] = 7,
    ACTIONS(395), 1,
      aux_sym_newline_token1,
    ACTIONS(400), 1,
      sym_flow_bare_raw_text,
    STATE(576), 1,
      sym_blank_line,
    STATE(650), 1,
      sym_newline,
    ACTIONS(398), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(54), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(393), 23,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [4286] = 21,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(379), 1,
      sym_doc_comment,
    ACTIONS(381), 1,
      sym_comment_line,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(140), 1,
      sym_flow_repeat_block_body,
    STATE(316), 1,
      sym_newline,
    STATE(59), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(80), 10,
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
  [4360] = 21,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(403), 1,
      sym_doc_comment,
    ACTIONS(405), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(109), 1,
      sym_flow_repeat_block_body,
    STATE(316), 1,
      sym_newline,
    STATE(61), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(80), 10,
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
  [4434] = 21,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(403), 1,
      sym_doc_comment,
    ACTIONS(405), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(114), 1,
      sym_flow_repeat_block_body,
    STATE(316), 1,
      sym_newline,
    STATE(61), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(80), 10,
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
  [4508] = 7,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(90), 1,
      sym_blank_line,
    STATE(144), 1,
      sym_newline,
    ACTIONS(385), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(60), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(383), 22,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [4553] = 20,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(407), 1,
      sym_doc_comment,
    ACTIONS(409), 1,
      sym_comment_line,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(316), 1,
      sym_newline,
    STATE(243), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(80), 10,
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
  [4624] = 7,
    ACTIONS(395), 1,
      aux_sym_newline_token1,
    ACTIONS(411), 1,
      sym_flow_bare_raw_text,
    STATE(555), 1,
      sym_blank_line,
    STATE(650), 1,
      sym_newline,
    ACTIONS(398), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(60), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(393), 22,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [4669] = 20,
    ACTIONS(95), 1,
      sym_flow_do_keyword,
    ACTIONS(97), 1,
      sym_flow_ask_keyword,
    ACTIONS(99), 1,
      sym_flow_unfold_keyword,
    ACTIONS(101), 1,
      sym_flow_keep_keyword,
    ACTIONS(103), 1,
      sym_flow_drop_keyword,
    ACTIONS(105), 1,
      sym_flow_rank_keyword,
    ACTIONS(107), 1,
      sym_flow_each_keyword,
    ACTIONS(109), 1,
      sym_flow_fold_keyword,
    ACTIONS(111), 1,
      sym_flow_repeat_keyword,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(407), 1,
      sym_doc_comment,
    ACTIONS(409), 1,
      sym_comment_line,
    STATE(27), 1,
      sym_flow_body_statement,
    STATE(49), 1,
      sym_flow_bare_content_line,
    STATE(79), 1,
      sym_flow_entry,
    STATE(81), 1,
      sym_flow_bare_thunk_body,
    STATE(316), 1,
      sym_newline,
    STATE(243), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(80), 10,
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
  [4740] = 7,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(78), 1,
      sym_blank_line,
    STATE(144), 1,
      sym_newline,
    ACTIONS(375), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(58), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(373), 22,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [4785] = 13,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 1,
      aux_sym_newline_token1,
    ACTIONS(421), 1,
      sym_comment_line,
    ACTIONS(427), 1,
      sym_indented_raw_text,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(225), 1,
      sym_newline,
    STATE(633), 1,
      sym_roled_message_kind,
    ACTIONS(424), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(63), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(419), 12,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [4841] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 1,
      aux_sym_newline_token1,
    ACTIONS(436), 1,
      sym_comment_line,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(225), 1,
      sym_newline,
    STATE(633), 1,
      sym_roled_message_kind,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(65), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(434), 12,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [4897] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(432), 1,
      aux_sym_newline_token1,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(442), 1,
      sym_comment_line,
    STATE(179), 1,
      sym_block_indented_content_line,
    STATE(214), 1,
      sym_unroled_message_block,
    STATE(215), 1,
      sym_block_indented_implicit,
    STATE(224), 1,
      sym_roled_message_block,
    STATE(225), 1,
      sym_newline,
    STATE(633), 1,
      sym_roled_message_kind,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(63), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(440), 12,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [4953] = 2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 27,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [4986] = 2,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 27,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5019] = 2,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    ACTIONS(454), 27,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5052] = 2,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 27,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5085] = 2,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(462), 27,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5118] = 2,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 27,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [5151] = 4,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    STATE(105), 1,
      sym_flow_bare_content_line,
    ACTIONS(385), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(383), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5188] = 4,
    ACTIONS(115), 1,
      sym_flow_bare_raw_text,
    STATE(105), 1,
      sym_flow_bare_content_line,
    ACTIONS(466), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(464), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5225] = 2,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    ACTIONS(470), 27,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5258] = 2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 27,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5291] = 2,
    ACTIONS(474), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(472), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5323] = 2,
    ACTIONS(450), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(448), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5355] = 4,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(130), 1,
      sym_flow_bare_content_line,
    ACTIONS(385), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(383), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5391] = 2,
    ACTIONS(478), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(476), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5423] = 2,
    ACTIONS(482), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(480), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5455] = 2,
    ACTIONS(486), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(484), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5487] = 2,
    ACTIONS(490), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(488), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5519] = 2,
    ACTIONS(494), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(492), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5551] = 2,
    ACTIONS(498), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(496), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5583] = 2,
    ACTIONS(502), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(500), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5615] = 2,
    ACTIONS(506), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(504), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5647] = 2,
    ACTIONS(510), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(508), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5679] = 2,
    ACTIONS(514), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(512), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5711] = 2,
    ACTIONS(518), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(516), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5743] = 4,
    ACTIONS(145), 1,
      sym_flow_bare_raw_text,
    STATE(130), 1,
      sym_flow_bare_content_line,
    ACTIONS(466), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(464), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5779] = 2,
    ACTIONS(522), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(520), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5811] = 2,
    ACTIONS(526), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(524), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5843] = 2,
    ACTIONS(530), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(528), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5875] = 2,
    ACTIONS(534), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(532), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5907] = 2,
    ACTIONS(538), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(536), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
    ACTIONS(542), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(540), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [5971] = 2,
    ACTIONS(546), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(544), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6003] = 2,
    ACTIONS(550), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(548), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6035] = 2,
    ACTIONS(554), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(552), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6067] = 2,
    ACTIONS(558), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(556), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6099] = 2,
    ACTIONS(562), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(560), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6131] = 2,
    ACTIONS(566), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(564), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6163] = 2,
    ACTIONS(570), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(568), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6195] = 2,
    ACTIONS(574), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(572), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6227] = 2,
    ACTIONS(398), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(393), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6259] = 2,
    ACTIONS(578), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(576), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6291] = 2,
    ACTIONS(582), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(580), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6323] = 2,
    ACTIONS(586), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(584), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6355] = 2,
    ACTIONS(590), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(588), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6387] = 2,
    ACTIONS(594), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(592), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
    ACTIONS(598), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(596), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6451] = 2,
    ACTIONS(602), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(600), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
    ACTIONS(606), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(604), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6515] = 2,
    ACTIONS(610), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(608), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6547] = 2,
    ACTIONS(614), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(612), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6579] = 2,
    ACTIONS(618), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(616), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6611] = 2,
    ACTIONS(622), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(620), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6643] = 2,
    ACTIONS(626), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(624), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6675] = 2,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    ACTIONS(470), 26,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6707] = 2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 26,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6739] = 2,
    ACTIONS(446), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(444), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6771] = 2,
    ACTIONS(458), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(456), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6803] = 2,
    ACTIONS(462), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(460), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6835] = 2,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 26,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6867] = 2,
    ACTIONS(630), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(628), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6899] = 2,
    ACTIONS(598), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(596), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6930] = 2,
    ACTIONS(622), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(620), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6961] = 2,
    ACTIONS(570), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(568), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [6992] = 2,
    ACTIONS(626), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(624), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7023] = 2,
    ACTIONS(398), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(393), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7054] = 2,
    ACTIONS(482), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(480), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7085] = 2,
    ACTIONS(578), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(576), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7116] = 2,
    ACTIONS(522), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(520), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7147] = 2,
    ACTIONS(582), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(580), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7178] = 2,
    ACTIONS(502), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(500), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7209] = 2,
    ACTIONS(526), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(524), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7240] = 2,
    ACTIONS(478), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(476), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7271] = 2,
    ACTIONS(586), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(584), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7302] = 2,
    ACTIONS(494), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(492), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7333] = 2,
    ACTIONS(590), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(588), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7364] = 2,
    ACTIONS(486), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(484), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7395] = 2,
    ACTIONS(594), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(592), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7426] = 2,
    ACTIONS(518), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(516), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7457] = 2,
    ACTIONS(446), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(444), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7488] = 2,
    ACTIONS(490), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(488), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7519] = 2,
    ACTIONS(530), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(528), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7550] = 2,
    ACTIONS(534), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(532), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7581] = 2,
    ACTIONS(458), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(456), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7612] = 2,
    ACTIONS(462), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(460), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7643] = 2,
    ACTIONS(574), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(572), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7674] = 2,
    ACTIONS(538), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(536), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7705] = 2,
    ACTIONS(506), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(504), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7736] = 2,
    ACTIONS(542), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(540), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7767] = 2,
    ACTIONS(450), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(448), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7798] = 2,
    ACTIONS(498), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(496), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
    ACTIONS(510), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(508), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7860] = 2,
    ACTIONS(606), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(604), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7891] = 2,
    ACTIONS(610), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(608), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7922] = 2,
    ACTIONS(614), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(612), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7953] = 2,
    ACTIONS(618), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(616), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [7984] = 2,
    ACTIONS(514), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(512), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8015] = 2,
    ACTIONS(546), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(544), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8046] = 2,
    ACTIONS(474), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(472), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8077] = 2,
    ACTIONS(550), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(548), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8108] = 2,
    ACTIONS(630), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(628), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8139] = 2,
    ACTIONS(554), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(552), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8170] = 2,
    ACTIONS(558), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(556), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8201] = 2,
    ACTIONS(562), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(560), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8232] = 2,
    ACTIONS(566), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(564), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8263] = 2,
    ACTIONS(602), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(600), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
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
  [8294] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_comment_line,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym_newline,
    STATE(203), 1,
      sym_context_block,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(185), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(634), 16,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [8338] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 1,
      sym_comment_line,
    STATE(194), 1,
      sym_newline,
    STATE(207), 1,
      sym_instruct_block,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(175), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(638), 16,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [8382] = 5,
    STATE(444), 1,
      sym_directive_key,
    ACTIONS(644), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    STATE(173), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(646), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(642), 12,
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
  [8418] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(649), 1,
      sym_comment_line,
    STATE(194), 1,
      sym_newline,
    STATE(207), 1,
      sym_context_block,
    STATE(603), 1,
      sym_context_block_kind,
    STATE(171), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(638), 16,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [8462] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_comment_line,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym_newline,
    STATE(203), 1,
      sym_instruct_block,
    STATE(621), 1,
      sym_instruct_block_kind,
    STATE(185), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(634), 16,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [8506] = 6,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
    ACTIONS(655), 1,
      sym_indented_raw_text,
    STATE(194), 1,
      sym_newline,
    STATE(178), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(653), 17,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [8543] = 6,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(655), 1,
      sym_indented_raw_text,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym_newline,
    STATE(176), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(659), 17,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [8580] = 6,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(661), 1,
      aux_sym_newline_token1,
    ACTIONS(664), 1,
      sym_indented_raw_text,
    STATE(194), 1,
      sym_newline,
    STATE(178), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(364), 17,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [8617] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 1,
      aux_sym_newline_token1,
    STATE(225), 1,
      sym_newline,
    STATE(184), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(357), 16,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8653] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(432), 1,
      aux_sym_newline_token1,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_newline,
    STATE(183), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(653), 16,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8689] = 8,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
    ACTIONS(669), 1,
      aux_sym_newline_token1,
    ACTIONS(674), 1,
      sym_value_name,
    ACTIONS(677), 1,
      sym_indented_raw_text,
    STATE(231), 1,
      sym_newline,
    STATE(527), 1,
      sym_property_key,
    STATE(181), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(672), 13,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8729] = 8,
    ACTIONS(680), 1,
      ts_builtin_sym_end,
    ACTIONS(682), 1,
      aux_sym_newline_token1,
    ACTIONS(686), 1,
      sym_value_name,
    ACTIONS(688), 1,
      sym_indented_raw_text,
    STATE(231), 1,
      sym_newline,
    STATE(527), 1,
      sym_property_key,
    STATE(186), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(684), 13,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8769] = 6,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(690), 1,
      aux_sym_newline_token1,
    ACTIONS(693), 1,
      sym_indented_raw_text,
    STATE(225), 1,
      sym_newline,
    STATE(183), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(364), 16,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8805] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 1,
      aux_sym_newline_token1,
    STATE(225), 1,
      sym_newline,
    STATE(183), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(351), 16,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8841] = 6,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(698), 1,
      aux_sym_newline_token1,
    ACTIONS(703), 1,
      sym_comment_line,
    STATE(194), 1,
      sym_newline,
    STATE(185), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(701), 17,
      sym_program_doc_comment,
      sym_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [8877] = 8,
    ACTIONS(682), 1,
      aux_sym_newline_token1,
    ACTIONS(686), 1,
      sym_value_name,
    ACTIONS(688), 1,
      sym_indented_raw_text,
    ACTIONS(706), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      sym_newline,
    STATE(527), 1,
      sym_property_key,
    STATE(181), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(708), 13,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8917] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(432), 1,
      aux_sym_newline_token1,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_newline,
    STATE(180), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(659), 16,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8953] = 2,
    ACTIONS(454), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(452), 20,
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
  [8980] = 2,
    ACTIONS(462), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(460), 20,
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
  [9007] = 2,
    ACTIONS(450), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(448), 20,
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
  [9034] = 2,
    ACTIONS(458), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(456), 20,
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
  [9061] = 8,
    ACTIONS(712), 1,
      aux_sym_newline_token1,
    ACTIONS(718), 1,
      sym_value_name,
    STATE(246), 1,
      sym_newline,
    STATE(580), 1,
      sym_field_name,
    ACTIONS(710), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(714), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(193), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(716), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9099] = 8,
    ACTIONS(722), 1,
      aux_sym_newline_token1,
    ACTIONS(730), 1,
      sym_value_name,
    STATE(246), 1,
      sym_newline,
    STATE(580), 1,
      sym_field_name,
    ACTIONS(720), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(725), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(193), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(728), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9137] = 2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9162] = 2,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    ACTIONS(735), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9187] = 2,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
    ACTIONS(739), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9212] = 6,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(741), 1,
      aux_sym_newline_token1,
    ACTIONS(744), 1,
      sym_indented_raw_text,
    STATE(251), 1,
      sym_newline,
    STATE(197), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(364), 13,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9245] = 2,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
    ACTIONS(749), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9270] = 2,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
    ACTIONS(753), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9295] = 2,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    ACTIONS(757), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9320] = 2,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    ACTIONS(761), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9345] = 2,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    ACTIONS(765), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9370] = 2,
    ACTIONS(767), 1,
      ts_builtin_sym_end,
    ACTIONS(769), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9395] = 6,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    ACTIONS(771), 1,
      aux_sym_newline_token1,
    ACTIONS(773), 1,
      sym_indented_raw_text,
    STATE(251), 1,
      sym_newline,
    STATE(205), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(659), 13,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9428] = 6,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
    ACTIONS(771), 1,
      aux_sym_newline_token1,
    ACTIONS(773), 1,
      sym_indented_raw_text,
    STATE(251), 1,
      sym_newline,
    STATE(197), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(653), 13,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9461] = 2,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    ACTIONS(777), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9486] = 2,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    ACTIONS(634), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9511] = 2,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    ACTIONS(470), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9536] = 2,
    ACTIONS(779), 1,
      ts_builtin_sym_end,
    ACTIONS(781), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9561] = 2,
    ACTIONS(783), 1,
      ts_builtin_sym_end,
    ACTIONS(785), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9586] = 2,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9611] = 2,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(462), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9636] = 2,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 19,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [9661] = 2,
    ACTIONS(787), 1,
      ts_builtin_sym_end,
    ACTIONS(789), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9685] = 2,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
    ACTIONS(793), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9709] = 2,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    ACTIONS(777), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9733] = 2,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    ACTIONS(735), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9757] = 2,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
    ACTIONS(739), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9781] = 2,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
    ACTIONS(749), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9805] = 2,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
    ACTIONS(753), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9829] = 2,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    ACTIONS(757), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9853] = 2,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    ACTIONS(765), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9877] = 2,
    ACTIONS(795), 1,
      ts_builtin_sym_end,
    ACTIONS(797), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9901] = 2,
    ACTIONS(799), 1,
      ts_builtin_sym_end,
    ACTIONS(801), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9925] = 2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9949] = 2,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    ACTIONS(761), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9973] = 2,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    ACTIONS(470), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [9997] = 2,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [10021] = 2,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [10045] = 2,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(462), 18,
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
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [10069] = 2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 16,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [10091] = 2,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 16,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [10113] = 13,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(803), 1,
      sym_inline_comment,
    ACTIONS(805), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(809), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(177), 1,
      sym_line_end,
    STATE(209), 1,
      sym_block_value,
    STATE(211), 1,
      sym_newline,
    STATE(404), 1,
      sym_fence_open,
    STATE(429), 1,
      sym_block_name,
    STATE(430), 1,
      sym_block_content_inline,
    STATE(538), 1,
      sym_inline_text,
    ACTIONS(807), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(206), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [10157] = 2,
    ACTIONS(811), 1,
      ts_builtin_sym_end,
    ACTIONS(813), 16,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [10179] = 2,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(462), 16,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [10201] = 2,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 16,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [10223] = 7,
    ACTIONS(815), 1,
      aux_sym_newline_token1,
    ACTIONS(818), 1,
      sym_doc_comment,
    ACTIONS(821), 1,
      sym_comment_line,
    ACTIONS(826), 1,
      sym_flow_bare_raw_text,
    STATE(314), 1,
      sym_newline,
    STATE(237), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(824), 10,
      sym_pass_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [10255] = 2,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    ACTIONS(830), 16,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [10277] = 13,
    ACTIONS(432), 1,
      aux_sym_newline_token1,
    ACTIONS(805), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(809), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(832), 1,
      sym_inline_comment,
    STATE(187), 1,
      sym_line_end,
    STATE(223), 1,
      sym_block_value,
    STATE(229), 1,
      sym_newline,
    STATE(405), 1,
      sym_fence_open,
    STATE(472), 1,
      sym_block_name,
    STATE(473), 1,
      sym_block_content_inline,
    STATE(538), 1,
      sym_inline_text,
    ACTIONS(807), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(216), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [10321] = 13,
    ACTIONS(298), 1,
      aux_sym_newline_token1,
    ACTIONS(803), 1,
      sym_inline_comment,
    ACTIONS(805), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(809), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(177), 1,
      sym_line_end,
    STATE(210), 1,
      sym_block_value,
    STATE(211), 1,
      sym_newline,
    STATE(404), 1,
      sym_fence_open,
    STATE(429), 1,
      sym_block_name,
    STATE(430), 1,
      sym_block_content_inline,
    STATE(538), 1,
      sym_inline_text,
    ACTIONS(807), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(206), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [10365] = 2,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 15,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [10386] = 2,
    ACTIONS(834), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(836), 13,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
  [10407] = 7,
    ACTIONS(826), 1,
      sym_flow_bare_raw_text,
    ACTIONS(838), 1,
      aux_sym_newline_token1,
    ACTIONS(841), 1,
      sym_doc_comment,
    ACTIONS(844), 1,
      sym_comment_line,
    STATE(316), 1,
      sym_newline,
    STATE(243), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(824), 9,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [10438] = 2,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(462), 15,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [10459] = 2,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 15,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [10480] = 2,
    ACTIONS(444), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(446), 13,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
  [10501] = 2,
    ACTIONS(448), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(450), 13,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
  [10522] = 2,
    ACTIONS(847), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(849), 13,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
  [10543] = 2,
    ACTIONS(460), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(462), 13,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
  [10564] = 2,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    ACTIONS(470), 15,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [10585] = 2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 15,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_indented_raw_text,
  [10606] = 2,
    ACTIONS(456), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(458), 13,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_value_name,
  [10627] = 2,
    ACTIONS(851), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10647] = 2,
    ACTIONS(855), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(853), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10667] = 2,
    ACTIONS(859), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(857), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10687] = 2,
    ACTIONS(863), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(861), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10707] = 2,
    ACTIONS(753), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(751), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10727] = 2,
    ACTIONS(757), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(755), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10747] = 2,
    ACTIONS(867), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(865), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10767] = 2,
    ACTIONS(871), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(869), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10787] = 2,
    ACTIONS(875), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(873), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10807] = 2,
    ACTIONS(879), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(877), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10827] = 2,
    ACTIONS(883), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(881), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10847] = 2,
    ACTIONS(887), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(885), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10867] = 2,
    ACTIONS(891), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(889), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10887] = 2,
    ACTIONS(895), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(893), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10907] = 2,
    ACTIONS(897), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(163), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10927] = 2,
    ACTIONS(901), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(899), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10947] = 2,
    ACTIONS(905), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(903), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10967] = 2,
    ACTIONS(909), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(907), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [10987] = 2,
    ACTIONS(913), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(911), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11007] = 2,
    ACTIONS(917), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(915), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11027] = 2,
    ACTIONS(921), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(919), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11047] = 2,
    ACTIONS(925), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(923), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11067] = 2,
    ACTIONS(929), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(927), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11087] = 2,
    ACTIONS(739), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(737), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11107] = 2,
    ACTIONS(933), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(931), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11127] = 2,
    ACTIONS(937), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(935), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11147] = 2,
    ACTIONS(941), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(939), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11167] = 2,
    ACTIONS(945), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(943), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11187] = 2,
    ACTIONS(949), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(947), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11207] = 2,
    ACTIONS(953), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(951), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11227] = 2,
    ACTIONS(957), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(955), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11247] = 2,
    ACTIONS(961), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(959), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11267] = 2,
    ACTIONS(965), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(963), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11287] = 2,
    ACTIONS(969), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(967), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11307] = 2,
    ACTIONS(973), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(971), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11327] = 2,
    ACTIONS(977), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(975), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11347] = 2,
    ACTIONS(981), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(979), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11367] = 2,
    ACTIONS(985), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(983), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11387] = 2,
    ACTIONS(989), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(987), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11407] = 2,
    ACTIONS(993), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(991), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11427] = 2,
    ACTIONS(765), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(763), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11447] = 2,
    ACTIONS(997), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(995), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11467] = 2,
    ACTIONS(1001), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(999), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11487] = 2,
    ACTIONS(1005), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1003), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11507] = 2,
    ACTIONS(1009), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1007), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11527] = 2,
    ACTIONS(1011), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11547] = 2,
    ACTIONS(1015), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1013), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11567] = 2,
    ACTIONS(1019), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1017), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11587] = 2,
    ACTIONS(1023), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1021), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11607] = 2,
    ACTIONS(1027), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1025), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11627] = 2,
    ACTIONS(1031), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1029), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11647] = 2,
    ACTIONS(1035), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1033), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11667] = 2,
    ACTIONS(1039), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1037), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11687] = 2,
    ACTIONS(1043), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1041), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11707] = 2,
    ACTIONS(1047), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1045), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11727] = 2,
    ACTIONS(1051), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1049), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11747] = 2,
    ACTIONS(1055), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1053), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11767] = 2,
    ACTIONS(1059), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1057), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11787] = 2,
    ACTIONS(1063), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1061), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11807] = 2,
    ACTIONS(1067), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(1065), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11827] = 2,
    ACTIONS(749), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(747), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [11847] = 2,
    ACTIONS(446), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(444), 12,
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
  [11866] = 2,
    ACTIONS(450), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(448), 12,
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
  [11885] = 2,
    ACTIONS(446), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(444), 11,
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
  [11903] = 2,
    ACTIONS(458), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(456), 11,
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
  [11921] = 2,
    ACTIONS(462), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(460), 11,
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
  [11939] = 2,
    ACTIONS(450), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(448), 11,
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
  [11957] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(548), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [11979] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(597), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12001] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(606), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12023] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(455), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12045] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(533), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12067] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(474), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12089] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(616), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12111] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(542), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12133] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(596), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12155] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(599), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12177] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(611), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12199] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12221] = 5,
    ACTIONS(1071), 1,
      sym_type_name,
    STATE(338), 1,
      sym_base_type,
    STATE(608), 1,
      sym_type,
    STATE(359), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(1069), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [12243] = 8,
    ACTIONS(712), 1,
      aux_sym_newline_token1,
    ACTIONS(1073), 1,
      sym_doc_comment,
    ACTIONS(1075), 1,
      sym_comment_line,
    ACTIONS(1077), 1,
      sym_value_name,
    STATE(246), 1,
      sym_newline,
    STATE(297), 1,
      sym_struct_body,
    STATE(580), 1,
      sym_field_name,
    STATE(192), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [12270] = 8,
    ACTIONS(1079), 1,
      aux_sym_newline_token1,
    ACTIONS(1081), 1,
      sym_inline_comment,
    ACTIONS(1083), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(182), 1,
      sym_line_end,
    STATE(232), 1,
      sym_newline,
    STATE(278), 1,
      sym_cap_body,
    STATE(397), 1,
      sym_fence_open,
    STATE(275), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [12296] = 8,
    ACTIONS(1079), 1,
      aux_sym_newline_token1,
    ACTIONS(1081), 1,
      sym_inline_comment,
    ACTIONS(1083), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(182), 1,
      sym_line_end,
    STATE(232), 1,
      sym_newline,
    STATE(280), 1,
      sym_cap_body,
    STATE(397), 1,
      sym_fence_open,
    STATE(275), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [12322] = 8,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1089), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1091), 1,
      sym_fenced_raw_text,
    STATE(307), 1,
      sym_fence_close,
    STATE(350), 1,
      sym_frontmatter,
    STATE(486), 1,
      sym_newline,
    STATE(357), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [12348] = 8,
    ACTIONS(1079), 1,
      aux_sym_newline_token1,
    ACTIONS(1081), 1,
      sym_inline_comment,
    ACTIONS(1083), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(182), 1,
      sym_line_end,
    STATE(232), 1,
      sym_newline,
    STATE(279), 1,
      sym_cap_body,
    STATE(397), 1,
      sym_fence_open,
    STATE(275), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [12374] = 4,
    ACTIONS(1095), 1,
      sym_array_suffix,
    STATE(344), 1,
      aux_sym_type_repeat1,
    STATE(364), 1,
      sym_type_suffix,
    ACTIONS(1093), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12392] = 8,
    ACTIONS(1083), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1097), 1,
      aux_sym_newline_token1,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(204), 1,
      sym_line_end,
    STATE(245), 1,
      sym_newline,
    STATE(261), 1,
      sym_instruct_body,
    STATE(398), 1,
      sym_fence_open,
    STATE(263), 2,
      sym_block_indented,
      sym_block_fenced,
  [12418] = 8,
    ACTIONS(1079), 1,
      aux_sym_newline_token1,
    ACTIONS(1081), 1,
      sym_inline_comment,
    ACTIONS(1083), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(182), 1,
      sym_line_end,
    STATE(232), 1,
      sym_newline,
    STATE(266), 1,
      sym_cap_body,
    STATE(397), 1,
      sym_fence_open,
    STATE(275), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [12444] = 8,
    ACTIONS(1083), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1097), 1,
      aux_sym_newline_token1,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(204), 1,
      sym_line_end,
    STATE(245), 1,
      sym_newline,
    STATE(283), 1,
      sym_context_body,
    STATE(398), 1,
      sym_fence_open,
    STATE(255), 2,
      sym_block_indented,
      sym_block_fenced,
  [12470] = 9,
    ACTIONS(1101), 1,
      sym_flow_target,
    ACTIONS(1103), 1,
      sym_flow_to_keyword,
    ACTIONS(1105), 1,
      sym_flow_par_keyword,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(156), 1,
      sym_flow_inline_step_body,
    STATE(475), 1,
      sym_flow_named_parallel_head,
    STATE(504), 1,
      sym_flow_inline_output_type,
    STATE(575), 1,
      sym_flow_inline_each_head,
    STATE(579), 1,
      sym_flow_parallelism,
  [12498] = 9,
    ACTIONS(1101), 1,
      sym_flow_target,
    ACTIONS(1103), 1,
      sym_flow_to_keyword,
    ACTIONS(1105), 1,
      sym_flow_par_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(87), 1,
      sym_flow_inline_step_body,
    STATE(423), 1,
      sym_flow_named_parallel_head,
    STATE(504), 1,
      sym_flow_inline_output_type,
    STATE(566), 1,
      sym_flow_inline_each_head,
    STATE(579), 1,
      sym_flow_parallelism,
  [12526] = 4,
    ACTIONS(1095), 1,
      sym_array_suffix,
    STATE(347), 1,
      aux_sym_type_repeat1,
    STATE(364), 1,
      sym_type_suffix,
    ACTIONS(1111), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12544] = 8,
    ACTIONS(1083), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1097), 1,
      aux_sym_newline_token1,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(204), 1,
      sym_line_end,
    STATE(245), 1,
      sym_newline,
    STATE(289), 1,
      sym_instruct_body,
    STATE(398), 1,
      sym_fence_open,
    STATE(263), 2,
      sym_block_indented,
      sym_block_fenced,
  [12570] = 8,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1089), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1091), 1,
      sym_fenced_raw_text,
    STATE(290), 1,
      sym_fence_close,
    STATE(376), 1,
      sym_frontmatter,
    STATE(486), 1,
      sym_newline,
    STATE(382), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [12596] = 4,
    ACTIONS(1115), 1,
      sym_array_suffix,
    STATE(347), 1,
      aux_sym_type_repeat1,
    STATE(364), 1,
      sym_type_suffix,
    ACTIONS(1113), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12614] = 8,
    ACTIONS(1083), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1097), 1,
      aux_sym_newline_token1,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(204), 1,
      sym_line_end,
    STATE(245), 1,
      sym_newline,
    STATE(254), 1,
      sym_context_body,
    STATE(398), 1,
      sym_fence_open,
    STATE(255), 2,
      sym_block_indented,
      sym_block_fenced,
  [12640] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1118), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    STATE(221), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(386), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12660] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1091), 1,
      sym_fenced_raw_text,
    STATE(291), 1,
      sym_fence_close,
    STATE(486), 1,
      sym_newline,
    STATE(351), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [12680] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1091), 1,
      sym_fenced_raw_text,
    STATE(306), 1,
      sym_fence_close,
    STATE(486), 1,
      sym_newline,
    STATE(385), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [12700] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1091), 1,
      sym_fenced_raw_text,
    STATE(309), 1,
      sym_fence_close,
    STATE(486), 1,
      sym_newline,
    STATE(385), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [12720] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    STATE(293), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(386), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12740] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    STATE(276), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(365), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12760] = 7,
    ACTIONS(1122), 1,
      aux_sym_newline_token1,
    ACTIONS(1124), 1,
      sym_inline_comment,
    ACTIONS(1126), 1,
      aux_sym_flow_inline_text_token1,
    STATE(127), 1,
      sym_flow_condition_body,
    STATE(465), 1,
      sym_flow_inline_text,
    STATE(488), 1,
      sym_line_end,
    STATE(600), 1,
      sym_newline,
  [12782] = 7,
    ACTIONS(1122), 1,
      aux_sym_newline_token1,
    ACTIONS(1124), 1,
      sym_inline_comment,
    ACTIONS(1126), 1,
      aux_sym_flow_inline_text_token1,
    STATE(157), 1,
      sym_flow_condition_body,
    STATE(465), 1,
      sym_flow_inline_text,
    STATE(488), 1,
      sym_line_end,
    STATE(600), 1,
      sym_newline,
  [12804] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1091), 1,
      sym_fenced_raw_text,
    STATE(292), 1,
      sym_fence_close,
    STATE(486), 1,
      sym_newline,
    STATE(385), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [12824] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    STATE(313), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(353), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12844] = 1,
    ACTIONS(1128), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12854] = 1,
    ACTIONS(1130), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12864] = 1,
    ACTIONS(1132), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12874] = 7,
    ACTIONS(1101), 1,
      sym_flow_target,
    ACTIONS(1105), 1,
      sym_flow_par_keyword,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(155), 1,
      sym_flow_inline_step_body,
    STATE(467), 1,
      sym_flow_named_parallel_head,
    STATE(554), 1,
      sym_flow_inline_parallel_head,
    STATE(595), 1,
      sym_flow_parallelism,
  [12896] = 7,
    ACTIONS(1101), 1,
      sym_flow_target,
    ACTIONS(1105), 1,
      sym_flow_par_keyword,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(135), 1,
      sym_flow_inline_step_body,
    STATE(470), 1,
      sym_flow_named_parallel_head,
    STATE(559), 1,
      sym_flow_inline_parallel_head,
    STATE(595), 1,
      sym_flow_parallelism,
  [12918] = 1,
    ACTIONS(1134), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12928] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    STATE(258), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(386), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [12948] = 7,
    ACTIONS(1101), 1,
      sym_flow_target,
    ACTIONS(1105), 1,
      sym_flow_par_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(85), 1,
      sym_flow_inline_step_body,
    STATE(420), 1,
      sym_flow_named_parallel_head,
    STATE(564), 1,
      sym_flow_inline_parallel_head,
    STATE(595), 1,
      sym_flow_parallelism,
  [12970] = 1,
    ACTIONS(1136), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [12980] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    ACTIONS(1138), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(196), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(371), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13000] = 7,
    ACTIONS(1122), 1,
      aux_sym_newline_token1,
    ACTIONS(1124), 1,
      sym_inline_comment,
    ACTIONS(1126), 1,
      aux_sym_flow_inline_text_token1,
    STATE(428), 1,
      sym_flow_inline_body,
    STATE(499), 1,
      sym_line_end,
    STATE(558), 1,
      sym_flow_inline_text,
    STATE(600), 1,
      sym_newline,
  [13022] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    ACTIONS(1138), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(198), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(374), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13042] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    ACTIONS(1138), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(200), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(386), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13062] = 7,
    ACTIONS(1122), 1,
      aux_sym_newline_token1,
    ACTIONS(1124), 1,
      sym_inline_comment,
    ACTIONS(1126), 1,
      aux_sym_flow_inline_text_token1,
    STATE(108), 1,
      sym_flow_condition_body,
    STATE(442), 1,
      sym_flow_inline_text,
    STATE(502), 1,
      sym_line_end,
    STATE(600), 1,
      sym_newline,
  [13084] = 7,
    ACTIONS(1122), 1,
      aux_sym_newline_token1,
    ACTIONS(1124), 1,
      sym_inline_comment,
    ACTIONS(1126), 1,
      aux_sym_flow_inline_text_token1,
    STATE(437), 1,
      sym_flow_inline_body,
    STATE(487), 1,
      sym_line_end,
    STATE(558), 1,
      sym_flow_inline_text,
    STATE(600), 1,
      sym_newline,
  [13106] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    ACTIONS(1138), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(202), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(386), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13126] = 7,
    ACTIONS(1122), 1,
      aux_sym_newline_token1,
    ACTIONS(1124), 1,
      sym_inline_comment,
    ACTIONS(1126), 1,
      aux_sym_flow_inline_text_token1,
    STATE(113), 1,
      sym_flow_condition_body,
    STATE(442), 1,
      sym_flow_inline_text,
    STATE(502), 1,
      sym_line_end,
    STATE(600), 1,
      sym_newline,
  [13148] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1091), 1,
      sym_fenced_raw_text,
    STATE(304), 1,
      sym_fence_close,
    STATE(486), 1,
      sym_newline,
    STATE(352), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [13168] = 7,
    ACTIONS(1122), 1,
      aux_sym_newline_token1,
    ACTIONS(1124), 1,
      sym_inline_comment,
    ACTIONS(1126), 1,
      aux_sym_flow_inline_text_token1,
    STATE(138), 1,
      sym_flow_condition_body,
    STATE(465), 1,
      sym_flow_inline_text,
    STATE(488), 1,
      sym_line_end,
    STATE(600), 1,
      sym_newline,
  [13190] = 7,
    ACTIONS(1122), 1,
      aux_sym_newline_token1,
    ACTIONS(1124), 1,
      sym_inline_comment,
    ACTIONS(1126), 1,
      aux_sym_flow_inline_text_token1,
    STATE(117), 1,
      sym_flow_condition_body,
    STATE(442), 1,
      sym_flow_inline_text,
    STATE(502), 1,
      sym_line_end,
    STATE(600), 1,
      sym_newline,
  [13212] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1118), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    STATE(218), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(349), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13232] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1118), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    STATE(219), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(381), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13252] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1118), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1120), 1,
      sym_fenced_raw_text,
    STATE(222), 1,
      sym_fence_close,
    STATE(491), 1,
      sym_newline,
    STATE(386), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13272] = 6,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1091), 1,
      sym_fenced_raw_text,
    STATE(305), 1,
      sym_fence_close,
    STATE(486), 1,
      sym_newline,
    STATE(385), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [13292] = 7,
    ACTIONS(1101), 1,
      sym_flow_target,
    ACTIONS(1105), 1,
      sym_flow_par_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(84), 1,
      sym_flow_inline_step_body,
    STATE(419), 1,
      sym_flow_named_parallel_head,
    STATE(563), 1,
      sym_flow_inline_parallel_head,
    STATE(595), 1,
      sym_flow_parallelism,
  [13314] = 5,
    ACTIONS(1140), 1,
      sym_frontmatter_comment,
    ACTIONS(1142), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1144), 1,
      sym_value_name,
    STATE(642), 1,
      sym_property_key,
    STATE(387), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [13331] = 5,
    ACTIONS(1146), 1,
      aux_sym_newline_token1,
    ACTIONS(1149), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1151), 1,
      sym_fenced_raw_text,
    STATE(486), 1,
      sym_newline,
    STATE(385), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [13348] = 5,
    ACTIONS(1154), 1,
      aux_sym_newline_token1,
    ACTIONS(1157), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1159), 1,
      sym_fenced_raw_text,
    STATE(491), 1,
      sym_newline,
    STATE(386), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [13365] = 5,
    ACTIONS(1144), 1,
      sym_value_name,
    ACTIONS(1162), 1,
      sym_frontmatter_comment,
    ACTIONS(1164), 1,
      sym_frontmatter_delimiter,
    STATE(642), 1,
      sym_property_key,
    STATE(396), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [13382] = 6,
    ACTIONS(1103), 1,
      sym_flow_to_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    ACTIONS(1166), 1,
      sym_flow_target,
    STATE(82), 1,
      sym_flow_inline_step_body,
    STATE(416), 1,
      sym_flow_target_list,
    STATE(561), 1,
      sym_flow_inline_output_type,
  [13401] = 6,
    ACTIONS(1107), 1,
      sym_colon,
    ACTIONS(1168), 1,
      sym_flow_target,
    ACTIONS(1170), 1,
      sym_integer_literal,
    STATE(152), 1,
      sym_flow_inline_step_body,
    STATE(572), 1,
      sym_flow_inline_rank_head,
    STATE(615), 1,
      sym_flow_rank_limit,
  [13420] = 6,
    ACTIONS(1172), 1,
      sym_arrow,
    ACTIONS(1174), 1,
      sym_colon,
    ACTIONS(1176), 1,
      sym_lparen,
    ACTIONS(1178), 1,
      sym_value_name,
    STATE(441), 1,
      sym_flow_name,
    STATE(571), 1,
      sym_params,
  [13439] = 6,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    ACTIONS(1182), 1,
      sym_flow_until_keyword,
    ACTIONS(1184), 1,
      sym_colon,
    STATE(148), 1,
      sym_newline,
    STATE(150), 1,
      sym_line_end,
  [13458] = 6,
    ACTIONS(1103), 1,
      sym_flow_to_keyword,
    ACTIONS(1107), 1,
      sym_colon,
    ACTIONS(1166), 1,
      sym_flow_target,
    STATE(145), 1,
      sym_flow_inline_step_body,
    STATE(461), 1,
      sym_flow_target_list,
    STATE(543), 1,
      sym_flow_inline_output_type,
  [13477] = 6,
    ACTIONS(1176), 1,
      sym_lparen,
    ACTIONS(1186), 1,
      sym_arrow,
    ACTIONS(1188), 1,
      sym_colon,
    ACTIONS(1190), 1,
      sym_value_name,
    STATE(435), 1,
      sym_thunk_name,
    STATE(560), 1,
      sym_params,
  [13496] = 6,
    ACTIONS(1109), 1,
      sym_colon,
    ACTIONS(1170), 1,
      sym_integer_literal,
    ACTIONS(1192), 1,
      sym_flow_target,
    STATE(86), 1,
      sym_flow_inline_step_body,
    STATE(565), 1,
      sym_flow_inline_rank_head,
    STATE(615), 1,
      sym_flow_rank_limit,
  [13515] = 6,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    ACTIONS(1196), 1,
      sym_flow_until_keyword,
    ACTIONS(1198), 1,
      sym_colon,
    STATE(104), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [13534] = 5,
    ACTIONS(1200), 1,
      sym_frontmatter_comment,
    ACTIONS(1203), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1205), 1,
      sym_value_name,
    STATE(642), 1,
      sym_property_key,
    STATE(396), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [13551] = 5,
    ACTIONS(1208), 1,
      aux_sym_newline_token1,
    ACTIONS(1210), 1,
      sym_inline_comment,
    ACTIONS(1212), 1,
      sym_block_language,
    STATE(336), 1,
      sym_line_end,
    STATE(453), 1,
      sym_newline,
  [13567] = 5,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    ACTIONS(1218), 1,
      sym_block_language,
    STATE(354), 1,
      sym_line_end,
    STATE(495), 1,
      sym_newline,
  [13583] = 5,
    ACTIONS(1103), 1,
      sym_flow_to_keyword,
    ACTIONS(1107), 1,
      sym_colon,
    ACTIONS(1220), 1,
      sym_flow_target,
    STATE(139), 1,
      sym_flow_inline_step_body,
    STATE(550), 1,
      sym_flow_inline_output_type,
  [13599] = 5,
    ACTIONS(1103), 1,
      sym_flow_to_keyword,
    ACTIONS(1107), 1,
      sym_colon,
    ACTIONS(1222), 1,
      sym_flow_target,
    STATE(161), 1,
      sym_flow_inline_step_body,
    STATE(594), 1,
      sym_flow_inline_output_type,
  [13615] = 2,
    STATE(505), 1,
      sym_cap_kind,
    ACTIONS(1224), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [13625] = 5,
    ACTIONS(1103), 1,
      sym_flow_to_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    ACTIONS(1226), 1,
      sym_flow_target,
    STATE(83), 1,
      sym_flow_inline_step_body,
    STATE(562), 1,
      sym_flow_inline_output_type,
  [13641] = 5,
    ACTIONS(1103), 1,
      sym_flow_to_keyword,
    ACTIONS(1109), 1,
      sym_colon,
    ACTIONS(1228), 1,
      sym_flow_target,
    STATE(88), 1,
      sym_flow_inline_step_body,
    STATE(567), 1,
      sym_flow_inline_output_type,
  [13657] = 5,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    ACTIONS(1230), 1,
      sym_block_language,
    STATE(368), 1,
      sym_line_end,
    STATE(495), 1,
      sym_newline,
  [13673] = 5,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    ACTIONS(1232), 1,
      sym_block_language,
    STATE(379), 1,
      sym_line_end,
    STATE(495), 1,
      sym_newline,
  [13689] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(188), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
  [13702] = 4,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(1238), 1,
      sym_inline_comment,
    STATE(55), 1,
      sym_line_end,
    STATE(317), 1,
      sym_newline,
  [13715] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(69), 1,
      sym_newline,
  [13728] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(16), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
  [13741] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(19), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
  [13754] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
  [13767] = 4,
    ACTIONS(1208), 1,
      aux_sym_newline_token1,
    ACTIONS(1210), 1,
      sym_inline_comment,
    STATE(346), 1,
      sym_line_end,
    STATE(453), 1,
      sym_newline,
  [13780] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(69), 1,
      sym_newline,
  [13793] = 4,
    ACTIONS(1244), 1,
      sym_integer_literal,
    ACTIONS(1246), 1,
      sym_flow_until_keyword,
    ACTIONS(1248), 1,
      sym_colon,
    STATE(391), 1,
      sym_flow_repeat_count,
  [13806] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(69), 1,
      sym_newline,
  [13819] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(92), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [13832] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(93), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [13845] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [13858] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(97), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [13871] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(98), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [13884] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(122), 1,
      sym_newline,
    STATE(125), 1,
      sym_line_end,
  [13897] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
  [13910] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(101), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [13923] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(102), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [13936] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
  [13949] = 3,
    ACTIONS(1252), 1,
      sym_comma,
    STATE(458), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1250), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [13960] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(68), 1,
      sym_line_end,
    STATE(69), 1,
      sym_newline,
  [13973] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [13986] = 4,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    ACTIONS(1256), 1,
      sym_inline_comment,
    STATE(195), 1,
      sym_line_end,
    STATE(211), 1,
      sym_newline,
  [13999] = 4,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    ACTIONS(1256), 1,
      sym_inline_comment,
    STATE(201), 1,
      sym_line_end,
    STATE(211), 1,
      sym_newline,
  [14012] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
  [14025] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(69), 1,
      sym_newline,
  [14038] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(69), 1,
      sym_newline,
  [14051] = 4,
    ACTIONS(1258), 1,
      sym_rparen,
    ACTIONS(1260), 1,
      sym_value_name,
    STATE(490), 1,
      sym_param,
    STATE(528), 1,
      sym_param_name,
  [14064] = 4,
    ACTIONS(1176), 1,
      sym_lparen,
    ACTIONS(1262), 1,
      sym_arrow,
    ACTIONS(1264), 1,
      sym_colon,
    STATE(547), 1,
      sym_params,
  [14077] = 3,
    ACTIONS(1268), 1,
      sym_comma,
    STATE(462), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1266), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14088] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(134), 1,
      sym_line_end,
    STATE(148), 1,
      sym_newline,
  [14101] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
  [14114] = 4,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(358), 1,
      sym_line_end,
    STATE(495), 1,
      sym_newline,
  [14127] = 1,
    ACTIONS(1270), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_target,
      sym_colon,
  [14134] = 4,
    ACTIONS(1176), 1,
      sym_lparen,
    ACTIONS(1272), 1,
      sym_arrow,
    ACTIONS(1274), 1,
      sym_colon,
    STATE(531), 1,
      sym_params,
  [14147] = 4,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(1194), 1,
      sym_inline_comment,
    STATE(111), 1,
      sym_line_end,
    STATE(122), 1,
      sym_newline,
  [14160] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(69), 1,
      sym_newline,
  [14173] = 2,
    STATE(593), 1,
      sym_directive_op,
    ACTIONS(1276), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14182] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_newline,
    STATE(299), 1,
      sym_line_end,
  [14195] = 4,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    ACTIONS(1236), 1,
      sym_inline_comment,
    STATE(20), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
  [14208] = 2,
    STATE(518), 1,
      sym_directive_op,
    ACTIONS(1276), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14217] = 2,
    ACTIONS(450), 1,
      sym_comment_line,
    ACTIONS(448), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [14226] = 2,
    ACTIONS(458), 1,
      sym_comment_line,
    ACTIONS(456), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [14235] = 2,
    ACTIONS(462), 1,
      sym_comment_line,
    ACTIONS(460), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [14244] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(69), 1,
      sym_newline,
  [14257] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_newline,
    STATE(264), 1,
      sym_line_end,
  [14270] = 1,
    ACTIONS(458), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [14277] = 1,
    ACTIONS(462), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [14284] = 4,
    ACTIONS(712), 1,
      aux_sym_newline_token1,
    ACTIONS(1278), 1,
      sym_inline_comment,
    STATE(242), 1,
      sym_line_end,
    STATE(252), 1,
      sym_newline,
  [14297] = 4,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    ACTIONS(1242), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(69), 1,
      sym_newline,
  [14310] = 4,
    ACTIONS(1280), 1,
      aux_sym_newline_token1,
    ACTIONS(1282), 1,
      sym_inline_comment,
    STATE(333), 1,
      sym_line_end,
    STATE(449), 1,
      sym_newline,
  [14323] = 3,
    ACTIONS(1252), 1,
      sym_comma,
    STATE(476), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1284), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14334] = 3,
    ACTIONS(1268), 1,
      sym_comma,
    STATE(436), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1286), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14345] = 1,
    ACTIONS(450), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [14352] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(136), 1,
      sym_line_end,
    STATE(148), 1,
      sym_newline,
  [14365] = 3,
    ACTIONS(1290), 1,
      sym_comma,
    STATE(462), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1288), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14376] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(146), 1,
      sym_line_end,
    STATE(148), 1,
      sym_newline,
  [14389] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(147), 1,
      sym_line_end,
    STATE(148), 1,
      sym_newline,
  [14402] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(126), 1,
      sym_line_end,
    STATE(148), 1,
      sym_newline,
  [14415] = 3,
    ACTIONS(1295), 1,
      sym_flow_par_keyword,
    STATE(570), 1,
      sym_flow_parallelism,
    ACTIONS(1293), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14426] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_newline,
    STATE(162), 1,
      sym_line_end,
  [14439] = 4,
    ACTIONS(1244), 1,
      sym_integer_literal,
    ACTIONS(1297), 1,
      sym_flow_until_keyword,
    ACTIONS(1299), 1,
      sym_colon,
    STATE(395), 1,
      sym_flow_repeat_count,
  [14452] = 4,
    ACTIONS(1079), 1,
      aux_sym_newline_token1,
    ACTIONS(1081), 1,
      sym_inline_comment,
    STATE(232), 1,
      sym_newline,
    STATE(234), 1,
      sym_line_end,
  [14465] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_newline,
    STATE(164), 1,
      sym_line_end,
  [14478] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_newline,
    STATE(165), 1,
      sym_line_end,
  [14491] = 4,
    ACTIONS(1301), 1,
      aux_sym_newline_token1,
    ACTIONS(1303), 1,
      sym_inline_comment,
    STATE(217), 1,
      sym_line_end,
    STATE(229), 1,
      sym_newline,
  [14504] = 4,
    ACTIONS(1301), 1,
      aux_sym_newline_token1,
    ACTIONS(1303), 1,
      sym_inline_comment,
    STATE(226), 1,
      sym_line_end,
    STATE(229), 1,
      sym_newline,
  [14517] = 4,
    ACTIONS(712), 1,
      aux_sym_newline_token1,
    ACTIONS(1278), 1,
      sym_inline_comment,
    STATE(248), 1,
      sym_line_end,
    STATE(252), 1,
      sym_newline,
  [14530] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_newline,
    STATE(168), 1,
      sym_line_end,
  [14543] = 3,
    ACTIONS(1307), 1,
      sym_comma,
    STATE(476), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1305), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [14554] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1180), 1,
      sym_inline_comment,
    STATE(148), 1,
      sym_newline,
    STATE(169), 1,
      sym_line_end,
  [14567] = 1,
    ACTIONS(1310), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_until_keyword,
      sym_colon,
  [14574] = 4,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(370), 1,
      sym_line_end,
    STATE(495), 1,
      sym_newline,
  [14587] = 4,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(1238), 1,
      sym_inline_comment,
    STATE(56), 1,
      sym_line_end,
    STATE(317), 1,
      sym_newline,
  [14600] = 4,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(1238), 1,
      sym_inline_comment,
    STATE(57), 1,
      sym_line_end,
    STATE(317), 1,
      sym_newline,
  [14613] = 4,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    ACTIONS(1216), 1,
      sym_inline_comment,
    STATE(380), 1,
      sym_line_end,
    STATE(495), 1,
      sym_newline,
  [14626] = 4,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    ACTIONS(1238), 1,
      sym_inline_comment,
    STATE(50), 1,
      sym_line_end,
    STATE(317), 1,
      sym_newline,
  [14639] = 1,
    ACTIONS(1312), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [14645] = 3,
    ACTIONS(1314), 1,
      aux_sym_flow_inline_text_token1,
    STATE(469), 1,
      sym_property_value,
    STATE(568), 1,
      sym_inline_text,
  [14655] = 1,
    ACTIONS(1316), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14661] = 3,
    ACTIONS(1318), 1,
      sym_indented_raw_text,
    STATE(48), 1,
      sym_block_indented_content_line,
    STATE(132), 1,
      sym_block_indented_implicit,
  [14671] = 3,
    ACTIONS(1318), 1,
      sym_indented_raw_text,
    STATE(48), 1,
      sym_block_indented_content_line,
    STATE(142), 1,
      sym_block_indented_implicit,
  [14681] = 1,
    ACTIONS(448), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [14687] = 3,
    ACTIONS(1320), 1,
      sym_rparen,
    ACTIONS(1322), 1,
      sym_comma,
    STATE(503), 1,
      aux_sym_params_repeat1,
  [14697] = 1,
    ACTIONS(1324), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14703] = 3,
    ACTIONS(1326), 1,
      sym_rparen,
    ACTIONS(1328), 1,
      sym_comma,
    STATE(492), 1,
      aux_sym_params_repeat1,
  [14713] = 3,
    ACTIONS(1331), 1,
      sym_colon,
    ACTIONS(1333), 1,
      sym_value_name,
    STATE(609), 1,
      sym_instruct_name,
  [14723] = 1,
    ACTIONS(1335), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14729] = 1,
    ACTIONS(458), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14735] = 1,
    ACTIONS(462), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14741] = 1,
    ACTIONS(450), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14747] = 1,
    ACTIONS(1337), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14753] = 3,
    ACTIONS(1339), 1,
      sym_indented_raw_text,
    STATE(46), 1,
      sym_block_indented_content_line,
    STATE(106), 1,
      sym_block_indented_implicit,
  [14763] = 3,
    ACTIONS(1260), 1,
      sym_value_name,
    STATE(528), 1,
      sym_param_name,
    STATE(529), 1,
      sym_param,
  [14773] = 1,
    ACTIONS(1341), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14779] = 3,
    ACTIONS(1339), 1,
      sym_indented_raw_text,
    STATE(46), 1,
      sym_block_indented_content_line,
    STATE(110), 1,
      sym_block_indented_implicit,
  [14789] = 3,
    ACTIONS(1322), 1,
      sym_comma,
    ACTIONS(1343), 1,
      sym_rparen,
    STATE(492), 1,
      aux_sym_params_repeat1,
  [14799] = 3,
    ACTIONS(1295), 1,
      sym_flow_par_keyword,
    ACTIONS(1345), 1,
      sym_colon,
    STATE(627), 1,
      sym_flow_parallelism,
  [14809] = 3,
    ACTIONS(1347), 1,
      sym_cap_uri,
    ACTIONS(1349), 1,
      sym_cap_shorthand,
    STATE(452), 1,
      sym_cap_ref,
  [14819] = 1,
    ACTIONS(1351), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14825] = 1,
    ACTIONS(1305), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [14831] = 1,
    ACTIONS(1353), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [14837] = 1,
    ACTIONS(1355), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [14843] = 1,
    ACTIONS(1357), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [14849] = 1,
    ACTIONS(1359), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [14855] = 1,
    ACTIONS(1361), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [14861] = 3,
    ACTIONS(1363), 1,
      sym_colon,
    ACTIONS(1365), 1,
      sym_value_name,
    STATE(652), 1,
      sym_context_name,
  [14871] = 3,
    ACTIONS(1314), 1,
      aux_sym_flow_inline_text_token1,
    STATE(522), 1,
      sym_property_value,
    STATE(568), 1,
      sym_inline_text,
  [14881] = 2,
    ACTIONS(377), 1,
      aux_sym_newline_token1,
    STATE(318), 1,
      sym_newline,
  [14888] = 2,
    ACTIONS(1367), 1,
      sym_value_name,
    STATE(644), 1,
      sym_cap_name,
  [14895] = 1,
    ACTIONS(1369), 2,
      anon_sym_EQ,
      sym_colon,
  [14900] = 2,
    ACTIONS(1371), 1,
      sym_bare_value,
    STATE(427), 1,
      sym_directive_csv,
  [14907] = 2,
    ACTIONS(1079), 1,
      aux_sym_newline_token1,
    STATE(238), 1,
      sym_newline,
  [14914] = 2,
    ACTIONS(1301), 1,
      aux_sym_newline_token1,
    STATE(227), 1,
      sym_newline,
  [14921] = 1,
    ACTIONS(1373), 2,
      sym_colon,
      sym_value_name,
  [14926] = 2,
    ACTIONS(1375), 1,
      aux_sym_newline_token1,
    STATE(509), 1,
      sym_newline,
  [14933] = 2,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    STATE(511), 1,
      sym_newline,
  [14940] = 1,
    ACTIONS(1377), 2,
      sym_colon,
      sym_value_name,
  [14945] = 2,
    ACTIONS(1375), 1,
      aux_sym_newline_token1,
    STATE(384), 1,
      sym_newline,
  [14952] = 2,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    STATE(501), 1,
      sym_newline,
  [14959] = 2,
    ACTIONS(1379), 1,
      anon_sym_EQ,
    STATE(485), 1,
      sym_assign_operator,
  [14966] = 2,
    ACTIONS(1381), 1,
      sym_optional_marker,
    ACTIONS(1383), 1,
      sym_colon,
  [14973] = 1,
    ACTIONS(1385), 2,
      sym_rparen,
      sym_comma,
  [14978] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(149), 1,
      sym_newline,
  [14985] = 2,
    ACTIONS(1387), 1,
      sym_arrow,
    ACTIONS(1389), 1,
      sym_colon,
  [14992] = 1,
    ACTIONS(1391), 2,
      sym_arrow,
      sym_colon,
  [14997] = 1,
    ACTIONS(1393), 2,
      sym_rparen,
      sym_comma,
  [15002] = 1,
    ACTIONS(1395), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15007] = 1,
    ACTIONS(1397), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15012] = 1,
    ACTIONS(1399), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15017] = 2,
    ACTIONS(1367), 1,
      sym_value_name,
    STATE(646), 1,
      sym_cap_name,
  [15024] = 1,
    ACTIONS(1401), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15029] = 2,
    ACTIONS(1367), 1,
      sym_value_name,
    STATE(641), 1,
      sym_cap_name,
  [15036] = 2,
    ACTIONS(1403), 1,
      sym_type_name,
    STATE(629), 1,
      sym_struct_name,
  [15043] = 2,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    STATE(89), 1,
      sym_newline,
  [15050] = 1,
    ACTIONS(1405), 2,
      sym_rparen,
      sym_comma,
  [15055] = 2,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(133), 1,
      sym_flow_inline_step_body,
  [15062] = 2,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    STATE(494), 1,
      sym_newline,
  [15069] = 1,
    ACTIONS(1407), 2,
      sym_arrow,
      sym_colon,
  [15074] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(143), 1,
      sym_newline,
  [15081] = 2,
    ACTIONS(1409), 1,
      sym_arrow,
    ACTIONS(1411), 1,
      sym_colon,
  [15088] = 1,
    ACTIONS(1413), 2,
      sym_flow_par_keyword,
      sym_colon,
  [15093] = 1,
    ACTIONS(1415), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15098] = 2,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(151), 1,
      sym_flow_inline_step_body,
  [15105] = 2,
    ACTIONS(1240), 1,
      aux_sym_newline_token1,
    STATE(70), 1,
      sym_newline,
  [15112] = 2,
    ACTIONS(1234), 1,
      aux_sym_newline_token1,
    STATE(189), 1,
      sym_newline,
  [15119] = 2,
    ACTIONS(1097), 1,
      aux_sym_newline_token1,
    STATE(250), 1,
      sym_newline,
  [15126] = 2,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(153), 1,
      sym_flow_inline_step_body,
  [15133] = 2,
    ACTIONS(1417), 1,
      sym_flow_bare_raw_text,
    STATE(130), 1,
      sym_flow_bare_content_line,
  [15140] = 1,
    ACTIONS(1419), 2,
      sym_optional_marker,
      sym_colon,
  [15145] = 1,
    ACTIONS(1421), 2,
      sym_arrow,
      sym_colon,
  [15150] = 1,
    ACTIONS(1423), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15155] = 2,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(163), 1,
      sym_flow_inline_step_body,
  [15162] = 2,
    ACTIONS(1425), 1,
      sym_arrow,
    ACTIONS(1427), 1,
      sym_colon,
  [15169] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(91), 1,
      sym_flow_inline_step_body,
  [15176] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(95), 1,
      sym_flow_inline_step_body,
  [15183] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(96), 1,
      sym_flow_inline_step_body,
  [15190] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(76), 1,
      sym_flow_inline_step_body,
  [15197] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(99), 1,
      sym_flow_inline_step_body,
  [15204] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(100), 1,
      sym_flow_inline_step_body,
  [15211] = 2,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(103), 1,
      sym_flow_inline_step_body,
  [15218] = 1,
    ACTIONS(1429), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15223] = 2,
    ACTIONS(1367), 1,
      sym_value_name,
    STATE(637), 1,
      sym_cap_name,
  [15230] = 1,
    ACTIONS(1431), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [15235] = 2,
    ACTIONS(1433), 1,
      sym_arrow,
    ACTIONS(1435), 1,
      sym_colon,
  [15242] = 2,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(166), 1,
      sym_flow_inline_step_body,
  [15249] = 2,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    STATE(506), 1,
      sym_newline,
  [15256] = 1,
    ACTIONS(1437), 2,
      sym_optional_marker,
      sym_colon,
  [15261] = 2,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(167), 1,
      sym_flow_inline_step_body,
  [15268] = 2,
    ACTIONS(1439), 1,
      sym_flow_bare_raw_text,
    STATE(105), 1,
      sym_flow_bare_content_line,
  [15275] = 2,
    ACTIONS(1097), 1,
      aux_sym_newline_token1,
    STATE(244), 1,
      sym_newline,
  [15282] = 2,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    STATE(208), 1,
      sym_newline,
  [15289] = 2,
    ACTIONS(1345), 1,
      sym_colon,
    ACTIONS(1441), 1,
      sym_flow_target,
  [15296] = 2,
    ACTIONS(1443), 1,
      sym_optional_marker,
    ACTIONS(1445), 1,
      sym_colon,
  [15303] = 2,
    ACTIONS(1447), 1,
      sym_cap_uri,
    ACTIONS(1449), 1,
      sym_cap_shorthand,
  [15310] = 2,
    ACTIONS(1280), 1,
      aux_sym_newline_token1,
    STATE(450), 1,
      sym_newline,
  [15317] = 2,
    ACTIONS(1451), 1,
      aux_sym_newline_token1,
    STATE(119), 1,
      sym_newline,
  [15324] = 2,
    ACTIONS(1079), 1,
      aux_sym_newline_token1,
    STATE(235), 1,
      sym_newline,
  [15331] = 2,
    ACTIONS(1453), 1,
      aux_sym_newline_token1,
    STATE(74), 1,
      sym_newline,
  [15338] = 2,
    ACTIONS(1214), 1,
      aux_sym_newline_token1,
    STATE(496), 1,
      sym_newline,
  [15345] = 2,
    ACTIONS(1208), 1,
      aux_sym_newline_token1,
    STATE(454), 1,
      sym_newline,
  [15352] = 2,
    ACTIONS(1254), 1,
      aux_sym_newline_token1,
    STATE(212), 1,
      sym_newline,
  [15359] = 2,
    ACTIONS(1301), 1,
      aux_sym_newline_token1,
    STATE(230), 1,
      sym_newline,
  [15366] = 2,
    ACTIONS(1455), 1,
      aux_sym_newline_token1,
    STATE(601), 1,
      sym_newline,
  [15373] = 2,
    ACTIONS(712), 1,
      aux_sym_newline_token1,
    STATE(249), 1,
      sym_newline,
  [15380] = 2,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    STATE(123), 1,
      sym_newline,
  [15387] = 2,
    ACTIONS(1371), 1,
      sym_bare_value,
    STATE(406), 1,
      sym_directive_csv,
  [15394] = 2,
    ACTIONS(1107), 1,
      sym_colon,
    STATE(128), 1,
      sym_flow_inline_step_body,
  [15401] = 2,
    ACTIONS(1441), 1,
      sym_flow_target,
    ACTIONS(1457), 1,
      sym_colon,
  [15408] = 1,
    ACTIONS(1459), 1,
      sym_colon,
  [15412] = 1,
    ACTIONS(1461), 1,
      sym_colon,
  [15416] = 1,
    ACTIONS(1463), 1,
      sym_value_name,
  [15420] = 1,
    ACTIONS(1465), 1,
      sym_colon,
  [15424] = 1,
    ACTIONS(456), 1,
      sym_indented_raw_text,
  [15428] = 1,
    ACTIONS(460), 1,
      sym_indented_raw_text,
  [15432] = 1,
    ACTIONS(1467), 1,
      aux_sym_newline_token1,
  [15436] = 1,
    ACTIONS(1469), 1,
      sym_colon,
  [15440] = 1,
    ACTIONS(1471), 1,
      aux_sym_newline_token1,
  [15444] = 1,
    ACTIONS(1473), 1,
      sym_value_name,
  [15448] = 1,
    ACTIONS(1475), 1,
      sym_colon,
  [15452] = 1,
    ACTIONS(1477), 1,
      ts_builtin_sym_end,
  [15456] = 1,
    ACTIONS(1479), 1,
      sym_colon,
  [15460] = 1,
    ACTIONS(1481), 1,
      sym_colon,
  [15464] = 1,
    ACTIONS(1483), 1,
      sym_colon,
  [15468] = 1,
    ACTIONS(1485), 1,
      sym_colon,
  [15472] = 1,
    ACTIONS(448), 1,
      sym_indented_raw_text,
  [15476] = 1,
    ACTIONS(1487), 1,
      sym_value_name,
  [15480] = 1,
    ACTIONS(1489), 1,
      sym_colon,
  [15484] = 1,
    ACTIONS(1491), 1,
      sym_colon,
  [15488] = 1,
    ACTIONS(1493), 1,
      sym_colon,
  [15492] = 1,
    ACTIONS(1495), 1,
      sym_colon,
  [15496] = 1,
    ACTIONS(1497), 1,
      sym_flow_target,
  [15500] = 1,
    ACTIONS(1499), 1,
      sym_colon,
  [15504] = 1,
    ACTIONS(1501), 1,
      sym_colon,
  [15508] = 1,
    ACTIONS(1503), 1,
      sym_colon,
  [15512] = 1,
    ACTIONS(448), 1,
      sym_flow_bare_raw_text,
  [15516] = 1,
    ACTIONS(1505), 1,
      sym_colon,
  [15520] = 1,
    ACTIONS(1507), 1,
      sym_colon,
  [15524] = 1,
    ACTIONS(1509), 1,
      aux_sym_newline_token1,
  [15528] = 1,
    ACTIONS(1511), 1,
      sym_colon,
  [15532] = 1,
    ACTIONS(1513), 1,
      sym_colon,
  [15536] = 1,
    ACTIONS(1515), 1,
      sym_colon,
  [15540] = 1,
    ACTIONS(1517), 1,
      sym_colon,
  [15544] = 1,
    ACTIONS(1519), 1,
      sym_value_name,
  [15548] = 1,
    ACTIONS(1521), 1,
      sym_integer_literal,
  [15552] = 1,
    ACTIONS(1523), 1,
      sym_flow_target,
  [15556] = 1,
    ACTIONS(1525), 1,
      sym_colon,
  [15560] = 1,
    ACTIONS(1527), 1,
      sym_bare_value,
  [15564] = 1,
    ACTIONS(1529), 1,
      sym_flow_target,
  [15568] = 1,
    ACTIONS(1531), 1,
      sym_colon,
  [15572] = 1,
    ACTIONS(1533), 1,
      sym_colon,
  [15576] = 1,
    ACTIONS(1535), 1,
      sym_colon,
  [15580] = 1,
    ACTIONS(1537), 1,
      aux_sym_flow_inline_text_token1,
  [15584] = 1,
    ACTIONS(1539), 1,
      sym_colon,
  [15588] = 1,
    ACTIONS(1541), 1,
      sym_colon,
  [15592] = 1,
    ACTIONS(1543), 1,
      sym_colon,
  [15596] = 1,
    ACTIONS(1545), 1,
      sym_colon,
  [15600] = 1,
    ACTIONS(1547), 1,
      sym_colon,
  [15604] = 1,
    ACTIONS(1549), 1,
      sym_colon,
  [15608] = 1,
    ACTIONS(1551), 1,
      sym_colon,
  [15612] = 1,
    ACTIONS(1553), 1,
      sym_bare_value,
  [15616] = 1,
    ACTIONS(1555), 1,
      sym_colon,
  [15620] = 1,
    ACTIONS(1557), 1,
      sym_colon,
  [15624] = 1,
    ACTIONS(444), 1,
      sym_flow_bare_raw_text,
  [15628] = 1,
    ACTIONS(1559), 1,
      sym_colon,
  [15632] = 1,
    ACTIONS(1561), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 103,
  [SMALL_STATE(4)] = 206,
  [SMALL_STATE(5)] = 303,
  [SMALL_STATE(6)] = 400,
  [SMALL_STATE(7)] = 497,
  [SMALL_STATE(8)] = 594,
  [SMALL_STATE(9)] = 691,
  [SMALL_STATE(10)] = 788,
  [SMALL_STATE(11)] = 885,
  [SMALL_STATE(12)] = 982,
  [SMALL_STATE(13)] = 1070,
  [SMALL_STATE(14)] = 1170,
  [SMALL_STATE(15)] = 1270,
  [SMALL_STATE(16)] = 1370,
  [SMALL_STATE(17)] = 1470,
  [SMALL_STATE(18)] = 1570,
  [SMALL_STATE(19)] = 1670,
  [SMALL_STATE(20)] = 1770,
  [SMALL_STATE(21)] = 1870,
  [SMALL_STATE(22)] = 1958,
  [SMALL_STATE(23)] = 2046,
  [SMALL_STATE(24)] = 2134,
  [SMALL_STATE(25)] = 2222,
  [SMALL_STATE(26)] = 2310,
  [SMALL_STATE(27)] = 2398,
  [SMALL_STATE(28)] = 2486,
  [SMALL_STATE(29)] = 2573,
  [SMALL_STATE(30)] = 2660,
  [SMALL_STATE(31)] = 2743,
  [SMALL_STATE(32)] = 2840,
  [SMALL_STATE(33)] = 2927,
  [SMALL_STATE(34)] = 3014,
  [SMALL_STATE(35)] = 3096,
  [SMALL_STATE(36)] = 3178,
  [SMALL_STATE(37)] = 3260,
  [SMALL_STATE(38)] = 3330,
  [SMALL_STATE(39)] = 3380,
  [SMALL_STATE(40)] = 3450,
  [SMALL_STATE(41)] = 3520,
  [SMALL_STATE(42)] = 3590,
  [SMALL_STATE(43)] = 3660,
  [SMALL_STATE(44)] = 3730,
  [SMALL_STATE(45)] = 3807,
  [SMALL_STATE(46)] = 3852,
  [SMALL_STATE(47)] = 3897,
  [SMALL_STATE(48)] = 3942,
  [SMALL_STATE(49)] = 3986,
  [SMALL_STATE(50)] = 4032,
  [SMALL_STATE(51)] = 4106,
  [SMALL_STATE(52)] = 4150,
  [SMALL_STATE(53)] = 4196,
  [SMALL_STATE(54)] = 4240,
  [SMALL_STATE(55)] = 4286,
  [SMALL_STATE(56)] = 4360,
  [SMALL_STATE(57)] = 4434,
  [SMALL_STATE(58)] = 4508,
  [SMALL_STATE(59)] = 4553,
  [SMALL_STATE(60)] = 4624,
  [SMALL_STATE(61)] = 4669,
  [SMALL_STATE(62)] = 4740,
  [SMALL_STATE(63)] = 4785,
  [SMALL_STATE(64)] = 4841,
  [SMALL_STATE(65)] = 4897,
  [SMALL_STATE(66)] = 4953,
  [SMALL_STATE(67)] = 4986,
  [SMALL_STATE(68)] = 5019,
  [SMALL_STATE(69)] = 5052,
  [SMALL_STATE(70)] = 5085,
  [SMALL_STATE(71)] = 5118,
  [SMALL_STATE(72)] = 5151,
  [SMALL_STATE(73)] = 5188,
  [SMALL_STATE(74)] = 5225,
  [SMALL_STATE(75)] = 5258,
  [SMALL_STATE(76)] = 5291,
  [SMALL_STATE(77)] = 5323,
  [SMALL_STATE(78)] = 5355,
  [SMALL_STATE(79)] = 5391,
  [SMALL_STATE(80)] = 5423,
  [SMALL_STATE(81)] = 5455,
  [SMALL_STATE(82)] = 5487,
  [SMALL_STATE(83)] = 5519,
  [SMALL_STATE(84)] = 5551,
  [SMALL_STATE(85)] = 5583,
  [SMALL_STATE(86)] = 5615,
  [SMALL_STATE(87)] = 5647,
  [SMALL_STATE(88)] = 5679,
  [SMALL_STATE(89)] = 5711,
  [SMALL_STATE(90)] = 5743,
  [SMALL_STATE(91)] = 5779,
  [SMALL_STATE(92)] = 5811,
  [SMALL_STATE(93)] = 5843,
  [SMALL_STATE(94)] = 5875,
  [SMALL_STATE(95)] = 5907,
  [SMALL_STATE(96)] = 5939,
  [SMALL_STATE(97)] = 5971,
  [SMALL_STATE(98)] = 6003,
  [SMALL_STATE(99)] = 6035,
  [SMALL_STATE(100)] = 6067,
  [SMALL_STATE(101)] = 6099,
  [SMALL_STATE(102)] = 6131,
  [SMALL_STATE(103)] = 6163,
  [SMALL_STATE(104)] = 6195,
  [SMALL_STATE(105)] = 6227,
  [SMALL_STATE(106)] = 6259,
  [SMALL_STATE(107)] = 6291,
  [SMALL_STATE(108)] = 6323,
  [SMALL_STATE(109)] = 6355,
  [SMALL_STATE(110)] = 6387,
  [SMALL_STATE(111)] = 6419,
  [SMALL_STATE(112)] = 6451,
  [SMALL_STATE(113)] = 6483,
  [SMALL_STATE(114)] = 6515,
  [SMALL_STATE(115)] = 6547,
  [SMALL_STATE(116)] = 6579,
  [SMALL_STATE(117)] = 6611,
  [SMALL_STATE(118)] = 6643,
  [SMALL_STATE(119)] = 6675,
  [SMALL_STATE(120)] = 6707,
  [SMALL_STATE(121)] = 6739,
  [SMALL_STATE(122)] = 6771,
  [SMALL_STATE(123)] = 6803,
  [SMALL_STATE(124)] = 6835,
  [SMALL_STATE(125)] = 6867,
  [SMALL_STATE(126)] = 6899,
  [SMALL_STATE(127)] = 6930,
  [SMALL_STATE(128)] = 6961,
  [SMALL_STATE(129)] = 6992,
  [SMALL_STATE(130)] = 7023,
  [SMALL_STATE(131)] = 7054,
  [SMALL_STATE(132)] = 7085,
  [SMALL_STATE(133)] = 7116,
  [SMALL_STATE(134)] = 7147,
  [SMALL_STATE(135)] = 7178,
  [SMALL_STATE(136)] = 7209,
  [SMALL_STATE(137)] = 7240,
  [SMALL_STATE(138)] = 7271,
  [SMALL_STATE(139)] = 7302,
  [SMALL_STATE(140)] = 7333,
  [SMALL_STATE(141)] = 7364,
  [SMALL_STATE(142)] = 7395,
  [SMALL_STATE(143)] = 7426,
  [SMALL_STATE(144)] = 7457,
  [SMALL_STATE(145)] = 7488,
  [SMALL_STATE(146)] = 7519,
  [SMALL_STATE(147)] = 7550,
  [SMALL_STATE(148)] = 7581,
  [SMALL_STATE(149)] = 7612,
  [SMALL_STATE(150)] = 7643,
  [SMALL_STATE(151)] = 7674,
  [SMALL_STATE(152)] = 7705,
  [SMALL_STATE(153)] = 7736,
  [SMALL_STATE(154)] = 7767,
  [SMALL_STATE(155)] = 7798,
  [SMALL_STATE(156)] = 7829,
  [SMALL_STATE(157)] = 7860,
  [SMALL_STATE(158)] = 7891,
  [SMALL_STATE(159)] = 7922,
  [SMALL_STATE(160)] = 7953,
  [SMALL_STATE(161)] = 7984,
  [SMALL_STATE(162)] = 8015,
  [SMALL_STATE(163)] = 8046,
  [SMALL_STATE(164)] = 8077,
  [SMALL_STATE(165)] = 8108,
  [SMALL_STATE(166)] = 8139,
  [SMALL_STATE(167)] = 8170,
  [SMALL_STATE(168)] = 8201,
  [SMALL_STATE(169)] = 8232,
  [SMALL_STATE(170)] = 8263,
  [SMALL_STATE(171)] = 8294,
  [SMALL_STATE(172)] = 8338,
  [SMALL_STATE(173)] = 8382,
  [SMALL_STATE(174)] = 8418,
  [SMALL_STATE(175)] = 8462,
  [SMALL_STATE(176)] = 8506,
  [SMALL_STATE(177)] = 8543,
  [SMALL_STATE(178)] = 8580,
  [SMALL_STATE(179)] = 8617,
  [SMALL_STATE(180)] = 8653,
  [SMALL_STATE(181)] = 8689,
  [SMALL_STATE(182)] = 8729,
  [SMALL_STATE(183)] = 8769,
  [SMALL_STATE(184)] = 8805,
  [SMALL_STATE(185)] = 8841,
  [SMALL_STATE(186)] = 8877,
  [SMALL_STATE(187)] = 8917,
  [SMALL_STATE(188)] = 8953,
  [SMALL_STATE(189)] = 8980,
  [SMALL_STATE(190)] = 9007,
  [SMALL_STATE(191)] = 9034,
  [SMALL_STATE(192)] = 9061,
  [SMALL_STATE(193)] = 9099,
  [SMALL_STATE(194)] = 9137,
  [SMALL_STATE(195)] = 9162,
  [SMALL_STATE(196)] = 9187,
  [SMALL_STATE(197)] = 9212,
  [SMALL_STATE(198)] = 9245,
  [SMALL_STATE(199)] = 9270,
  [SMALL_STATE(200)] = 9295,
  [SMALL_STATE(201)] = 9320,
  [SMALL_STATE(202)] = 9345,
  [SMALL_STATE(203)] = 9370,
  [SMALL_STATE(204)] = 9395,
  [SMALL_STATE(205)] = 9428,
  [SMALL_STATE(206)] = 9461,
  [SMALL_STATE(207)] = 9486,
  [SMALL_STATE(208)] = 9511,
  [SMALL_STATE(209)] = 9536,
  [SMALL_STATE(210)] = 9561,
  [SMALL_STATE(211)] = 9586,
  [SMALL_STATE(212)] = 9611,
  [SMALL_STATE(213)] = 9636,
  [SMALL_STATE(214)] = 9661,
  [SMALL_STATE(215)] = 9685,
  [SMALL_STATE(216)] = 9709,
  [SMALL_STATE(217)] = 9733,
  [SMALL_STATE(218)] = 9757,
  [SMALL_STATE(219)] = 9781,
  [SMALL_STATE(220)] = 9805,
  [SMALL_STATE(221)] = 9829,
  [SMALL_STATE(222)] = 9853,
  [SMALL_STATE(223)] = 9877,
  [SMALL_STATE(224)] = 9901,
  [SMALL_STATE(225)] = 9925,
  [SMALL_STATE(226)] = 9949,
  [SMALL_STATE(227)] = 9973,
  [SMALL_STATE(228)] = 9997,
  [SMALL_STATE(229)] = 10021,
  [SMALL_STATE(230)] = 10045,
  [SMALL_STATE(231)] = 10069,
  [SMALL_STATE(232)] = 10091,
  [SMALL_STATE(233)] = 10113,
  [SMALL_STATE(234)] = 10157,
  [SMALL_STATE(235)] = 10179,
  [SMALL_STATE(236)] = 10201,
  [SMALL_STATE(237)] = 10223,
  [SMALL_STATE(238)] = 10255,
  [SMALL_STATE(239)] = 10277,
  [SMALL_STATE(240)] = 10321,
  [SMALL_STATE(241)] = 10365,
  [SMALL_STATE(242)] = 10386,
  [SMALL_STATE(243)] = 10407,
  [SMALL_STATE(244)] = 10438,
  [SMALL_STATE(245)] = 10459,
  [SMALL_STATE(246)] = 10480,
  [SMALL_STATE(247)] = 10501,
  [SMALL_STATE(248)] = 10522,
  [SMALL_STATE(249)] = 10543,
  [SMALL_STATE(250)] = 10564,
  [SMALL_STATE(251)] = 10585,
  [SMALL_STATE(252)] = 10606,
  [SMALL_STATE(253)] = 10627,
  [SMALL_STATE(254)] = 10647,
  [SMALL_STATE(255)] = 10667,
  [SMALL_STATE(256)] = 10687,
  [SMALL_STATE(257)] = 10707,
  [SMALL_STATE(258)] = 10727,
  [SMALL_STATE(259)] = 10747,
  [SMALL_STATE(260)] = 10767,
  [SMALL_STATE(261)] = 10787,
  [SMALL_STATE(262)] = 10807,
  [SMALL_STATE(263)] = 10827,
  [SMALL_STATE(264)] = 10847,
  [SMALL_STATE(265)] = 10867,
  [SMALL_STATE(266)] = 10887,
  [SMALL_STATE(267)] = 10907,
  [SMALL_STATE(268)] = 10927,
  [SMALL_STATE(269)] = 10947,
  [SMALL_STATE(270)] = 10967,
  [SMALL_STATE(271)] = 10987,
  [SMALL_STATE(272)] = 11007,
  [SMALL_STATE(273)] = 11027,
  [SMALL_STATE(274)] = 11047,
  [SMALL_STATE(275)] = 11067,
  [SMALL_STATE(276)] = 11087,
  [SMALL_STATE(277)] = 11107,
  [SMALL_STATE(278)] = 11127,
  [SMALL_STATE(279)] = 11147,
  [SMALL_STATE(280)] = 11167,
  [SMALL_STATE(281)] = 11187,
  [SMALL_STATE(282)] = 11207,
  [SMALL_STATE(283)] = 11227,
  [SMALL_STATE(284)] = 11247,
  [SMALL_STATE(285)] = 11267,
  [SMALL_STATE(286)] = 11287,
  [SMALL_STATE(287)] = 11307,
  [SMALL_STATE(288)] = 11327,
  [SMALL_STATE(289)] = 11347,
  [SMALL_STATE(290)] = 11367,
  [SMALL_STATE(291)] = 11387,
  [SMALL_STATE(292)] = 11407,
  [SMALL_STATE(293)] = 11427,
  [SMALL_STATE(294)] = 11447,
  [SMALL_STATE(295)] = 11467,
  [SMALL_STATE(296)] = 11487,
  [SMALL_STATE(297)] = 11507,
  [SMALL_STATE(298)] = 11527,
  [SMALL_STATE(299)] = 11547,
  [SMALL_STATE(300)] = 11567,
  [SMALL_STATE(301)] = 11587,
  [SMALL_STATE(302)] = 11607,
  [SMALL_STATE(303)] = 11627,
  [SMALL_STATE(304)] = 11647,
  [SMALL_STATE(305)] = 11667,
  [SMALL_STATE(306)] = 11687,
  [SMALL_STATE(307)] = 11707,
  [SMALL_STATE(308)] = 11727,
  [SMALL_STATE(309)] = 11747,
  [SMALL_STATE(310)] = 11767,
  [SMALL_STATE(311)] = 11787,
  [SMALL_STATE(312)] = 11807,
  [SMALL_STATE(313)] = 11827,
  [SMALL_STATE(314)] = 11847,
  [SMALL_STATE(315)] = 11866,
  [SMALL_STATE(316)] = 11885,
  [SMALL_STATE(317)] = 11903,
  [SMALL_STATE(318)] = 11921,
  [SMALL_STATE(319)] = 11939,
  [SMALL_STATE(320)] = 11957,
  [SMALL_STATE(321)] = 11979,
  [SMALL_STATE(322)] = 12001,
  [SMALL_STATE(323)] = 12023,
  [SMALL_STATE(324)] = 12045,
  [SMALL_STATE(325)] = 12067,
  [SMALL_STATE(326)] = 12089,
  [SMALL_STATE(327)] = 12111,
  [SMALL_STATE(328)] = 12133,
  [SMALL_STATE(329)] = 12155,
  [SMALL_STATE(330)] = 12177,
  [SMALL_STATE(331)] = 12199,
  [SMALL_STATE(332)] = 12221,
  [SMALL_STATE(333)] = 12243,
  [SMALL_STATE(334)] = 12270,
  [SMALL_STATE(335)] = 12296,
  [SMALL_STATE(336)] = 12322,
  [SMALL_STATE(337)] = 12348,
  [SMALL_STATE(338)] = 12374,
  [SMALL_STATE(339)] = 12392,
  [SMALL_STATE(340)] = 12418,
  [SMALL_STATE(341)] = 12444,
  [SMALL_STATE(342)] = 12470,
  [SMALL_STATE(343)] = 12498,
  [SMALL_STATE(344)] = 12526,
  [SMALL_STATE(345)] = 12544,
  [SMALL_STATE(346)] = 12570,
  [SMALL_STATE(347)] = 12596,
  [SMALL_STATE(348)] = 12614,
  [SMALL_STATE(349)] = 12640,
  [SMALL_STATE(350)] = 12660,
  [SMALL_STATE(351)] = 12680,
  [SMALL_STATE(352)] = 12700,
  [SMALL_STATE(353)] = 12720,
  [SMALL_STATE(354)] = 12740,
  [SMALL_STATE(355)] = 12760,
  [SMALL_STATE(356)] = 12782,
  [SMALL_STATE(357)] = 12804,
  [SMALL_STATE(358)] = 12824,
  [SMALL_STATE(359)] = 12844,
  [SMALL_STATE(360)] = 12854,
  [SMALL_STATE(361)] = 12864,
  [SMALL_STATE(362)] = 12874,
  [SMALL_STATE(363)] = 12896,
  [SMALL_STATE(364)] = 12918,
  [SMALL_STATE(365)] = 12928,
  [SMALL_STATE(366)] = 12948,
  [SMALL_STATE(367)] = 12970,
  [SMALL_STATE(368)] = 12980,
  [SMALL_STATE(369)] = 13000,
  [SMALL_STATE(370)] = 13022,
  [SMALL_STATE(371)] = 13042,
  [SMALL_STATE(372)] = 13062,
  [SMALL_STATE(373)] = 13084,
  [SMALL_STATE(374)] = 13106,
  [SMALL_STATE(375)] = 13126,
  [SMALL_STATE(376)] = 13148,
  [SMALL_STATE(377)] = 13168,
  [SMALL_STATE(378)] = 13190,
  [SMALL_STATE(379)] = 13212,
  [SMALL_STATE(380)] = 13232,
  [SMALL_STATE(381)] = 13252,
  [SMALL_STATE(382)] = 13272,
  [SMALL_STATE(383)] = 13292,
  [SMALL_STATE(384)] = 13314,
  [SMALL_STATE(385)] = 13331,
  [SMALL_STATE(386)] = 13348,
  [SMALL_STATE(387)] = 13365,
  [SMALL_STATE(388)] = 13382,
  [SMALL_STATE(389)] = 13401,
  [SMALL_STATE(390)] = 13420,
  [SMALL_STATE(391)] = 13439,
  [SMALL_STATE(392)] = 13458,
  [SMALL_STATE(393)] = 13477,
  [SMALL_STATE(394)] = 13496,
  [SMALL_STATE(395)] = 13515,
  [SMALL_STATE(396)] = 13534,
  [SMALL_STATE(397)] = 13551,
  [SMALL_STATE(398)] = 13567,
  [SMALL_STATE(399)] = 13583,
  [SMALL_STATE(400)] = 13599,
  [SMALL_STATE(401)] = 13615,
  [SMALL_STATE(402)] = 13625,
  [SMALL_STATE(403)] = 13641,
  [SMALL_STATE(404)] = 13657,
  [SMALL_STATE(405)] = 13673,
  [SMALL_STATE(406)] = 13689,
  [SMALL_STATE(407)] = 13702,
  [SMALL_STATE(408)] = 13715,
  [SMALL_STATE(409)] = 13728,
  [SMALL_STATE(410)] = 13741,
  [SMALL_STATE(411)] = 13754,
  [SMALL_STATE(412)] = 13767,
  [SMALL_STATE(413)] = 13780,
  [SMALL_STATE(414)] = 13793,
  [SMALL_STATE(415)] = 13806,
  [SMALL_STATE(416)] = 13819,
  [SMALL_STATE(417)] = 13832,
  [SMALL_STATE(418)] = 13845,
  [SMALL_STATE(419)] = 13858,
  [SMALL_STATE(420)] = 13871,
  [SMALL_STATE(421)] = 13884,
  [SMALL_STATE(422)] = 13897,
  [SMALL_STATE(423)] = 13910,
  [SMALL_STATE(424)] = 13923,
  [SMALL_STATE(425)] = 13936,
  [SMALL_STATE(426)] = 13949,
  [SMALL_STATE(427)] = 13960,
  [SMALL_STATE(428)] = 13973,
  [SMALL_STATE(429)] = 13986,
  [SMALL_STATE(430)] = 13999,
  [SMALL_STATE(431)] = 14012,
  [SMALL_STATE(432)] = 14025,
  [SMALL_STATE(433)] = 14038,
  [SMALL_STATE(434)] = 14051,
  [SMALL_STATE(435)] = 14064,
  [SMALL_STATE(436)] = 14077,
  [SMALL_STATE(437)] = 14088,
  [SMALL_STATE(438)] = 14101,
  [SMALL_STATE(439)] = 14114,
  [SMALL_STATE(440)] = 14127,
  [SMALL_STATE(441)] = 14134,
  [SMALL_STATE(442)] = 14147,
  [SMALL_STATE(443)] = 14160,
  [SMALL_STATE(444)] = 14173,
  [SMALL_STATE(445)] = 14182,
  [SMALL_STATE(446)] = 14195,
  [SMALL_STATE(447)] = 14208,
  [SMALL_STATE(448)] = 14217,
  [SMALL_STATE(449)] = 14226,
  [SMALL_STATE(450)] = 14235,
  [SMALL_STATE(451)] = 14244,
  [SMALL_STATE(452)] = 14257,
  [SMALL_STATE(453)] = 14270,
  [SMALL_STATE(454)] = 14277,
  [SMALL_STATE(455)] = 14284,
  [SMALL_STATE(456)] = 14297,
  [SMALL_STATE(457)] = 14310,
  [SMALL_STATE(458)] = 14323,
  [SMALL_STATE(459)] = 14334,
  [SMALL_STATE(460)] = 14345,
  [SMALL_STATE(461)] = 14352,
  [SMALL_STATE(462)] = 14365,
  [SMALL_STATE(463)] = 14376,
  [SMALL_STATE(464)] = 14389,
  [SMALL_STATE(465)] = 14402,
  [SMALL_STATE(466)] = 14415,
  [SMALL_STATE(467)] = 14426,
  [SMALL_STATE(468)] = 14439,
  [SMALL_STATE(469)] = 14452,
  [SMALL_STATE(470)] = 14465,
  [SMALL_STATE(471)] = 14478,
  [SMALL_STATE(472)] = 14491,
  [SMALL_STATE(473)] = 14504,
  [SMALL_STATE(474)] = 14517,
  [SMALL_STATE(475)] = 14530,
  [SMALL_STATE(476)] = 14543,
  [SMALL_STATE(477)] = 14554,
  [SMALL_STATE(478)] = 14567,
  [SMALL_STATE(479)] = 14574,
  [SMALL_STATE(480)] = 14587,
  [SMALL_STATE(481)] = 14600,
  [SMALL_STATE(482)] = 14613,
  [SMALL_STATE(483)] = 14626,
  [SMALL_STATE(484)] = 14639,
  [SMALL_STATE(485)] = 14645,
  [SMALL_STATE(486)] = 14655,
  [SMALL_STATE(487)] = 14661,
  [SMALL_STATE(488)] = 14671,
  [SMALL_STATE(489)] = 14681,
  [SMALL_STATE(490)] = 14687,
  [SMALL_STATE(491)] = 14697,
  [SMALL_STATE(492)] = 14703,
  [SMALL_STATE(493)] = 14713,
  [SMALL_STATE(494)] = 14723,
  [SMALL_STATE(495)] = 14729,
  [SMALL_STATE(496)] = 14735,
  [SMALL_STATE(497)] = 14741,
  [SMALL_STATE(498)] = 14747,
  [SMALL_STATE(499)] = 14753,
  [SMALL_STATE(500)] = 14763,
  [SMALL_STATE(501)] = 14773,
  [SMALL_STATE(502)] = 14779,
  [SMALL_STATE(503)] = 14789,
  [SMALL_STATE(504)] = 14799,
  [SMALL_STATE(505)] = 14809,
  [SMALL_STATE(506)] = 14819,
  [SMALL_STATE(507)] = 14825,
  [SMALL_STATE(508)] = 14831,
  [SMALL_STATE(509)] = 14837,
  [SMALL_STATE(510)] = 14843,
  [SMALL_STATE(511)] = 14849,
  [SMALL_STATE(512)] = 14855,
  [SMALL_STATE(513)] = 14861,
  [SMALL_STATE(514)] = 14871,
  [SMALL_STATE(515)] = 14881,
  [SMALL_STATE(516)] = 14888,
  [SMALL_STATE(517)] = 14895,
  [SMALL_STATE(518)] = 14900,
  [SMALL_STATE(519)] = 14907,
  [SMALL_STATE(520)] = 14914,
  [SMALL_STATE(521)] = 14921,
  [SMALL_STATE(522)] = 14926,
  [SMALL_STATE(523)] = 14933,
  [SMALL_STATE(524)] = 14940,
  [SMALL_STATE(525)] = 14945,
  [SMALL_STATE(526)] = 14952,
  [SMALL_STATE(527)] = 14959,
  [SMALL_STATE(528)] = 14966,
  [SMALL_STATE(529)] = 14973,
  [SMALL_STATE(530)] = 14978,
  [SMALL_STATE(531)] = 14985,
  [SMALL_STATE(532)] = 14992,
  [SMALL_STATE(533)] = 14997,
  [SMALL_STATE(534)] = 15002,
  [SMALL_STATE(535)] = 15007,
  [SMALL_STATE(536)] = 15012,
  [SMALL_STATE(537)] = 15017,
  [SMALL_STATE(538)] = 15024,
  [SMALL_STATE(539)] = 15029,
  [SMALL_STATE(540)] = 15036,
  [SMALL_STATE(541)] = 15043,
  [SMALL_STATE(542)] = 15050,
  [SMALL_STATE(543)] = 15055,
  [SMALL_STATE(544)] = 15062,
  [SMALL_STATE(545)] = 15069,
  [SMALL_STATE(546)] = 15074,
  [SMALL_STATE(547)] = 15081,
  [SMALL_STATE(548)] = 15088,
  [SMALL_STATE(549)] = 15093,
  [SMALL_STATE(550)] = 15098,
  [SMALL_STATE(551)] = 15105,
  [SMALL_STATE(552)] = 15112,
  [SMALL_STATE(553)] = 15119,
  [SMALL_STATE(554)] = 15126,
  [SMALL_STATE(555)] = 15133,
  [SMALL_STATE(556)] = 15140,
  [SMALL_STATE(557)] = 15145,
  [SMALL_STATE(558)] = 15150,
  [SMALL_STATE(559)] = 15155,
  [SMALL_STATE(560)] = 15162,
  [SMALL_STATE(561)] = 15169,
  [SMALL_STATE(562)] = 15176,
  [SMALL_STATE(563)] = 15183,
  [SMALL_STATE(564)] = 15190,
  [SMALL_STATE(565)] = 15197,
  [SMALL_STATE(566)] = 15204,
  [SMALL_STATE(567)] = 15211,
  [SMALL_STATE(568)] = 15218,
  [SMALL_STATE(569)] = 15223,
  [SMALL_STATE(570)] = 15230,
  [SMALL_STATE(571)] = 15235,
  [SMALL_STATE(572)] = 15242,
  [SMALL_STATE(573)] = 15249,
  [SMALL_STATE(574)] = 15256,
  [SMALL_STATE(575)] = 15261,
  [SMALL_STATE(576)] = 15268,
  [SMALL_STATE(577)] = 15275,
  [SMALL_STATE(578)] = 15282,
  [SMALL_STATE(579)] = 15289,
  [SMALL_STATE(580)] = 15296,
  [SMALL_STATE(581)] = 15303,
  [SMALL_STATE(582)] = 15310,
  [SMALL_STATE(583)] = 15317,
  [SMALL_STATE(584)] = 15324,
  [SMALL_STATE(585)] = 15331,
  [SMALL_STATE(586)] = 15338,
  [SMALL_STATE(587)] = 15345,
  [SMALL_STATE(588)] = 15352,
  [SMALL_STATE(589)] = 15359,
  [SMALL_STATE(590)] = 15366,
  [SMALL_STATE(591)] = 15373,
  [SMALL_STATE(592)] = 15380,
  [SMALL_STATE(593)] = 15387,
  [SMALL_STATE(594)] = 15394,
  [SMALL_STATE(595)] = 15401,
  [SMALL_STATE(596)] = 15408,
  [SMALL_STATE(597)] = 15412,
  [SMALL_STATE(598)] = 15416,
  [SMALL_STATE(599)] = 15420,
  [SMALL_STATE(600)] = 15424,
  [SMALL_STATE(601)] = 15428,
  [SMALL_STATE(602)] = 15432,
  [SMALL_STATE(603)] = 15436,
  [SMALL_STATE(604)] = 15440,
  [SMALL_STATE(605)] = 15444,
  [SMALL_STATE(606)] = 15448,
  [SMALL_STATE(607)] = 15452,
  [SMALL_STATE(608)] = 15456,
  [SMALL_STATE(609)] = 15460,
  [SMALL_STATE(610)] = 15464,
  [SMALL_STATE(611)] = 15468,
  [SMALL_STATE(612)] = 15472,
  [SMALL_STATE(613)] = 15476,
  [SMALL_STATE(614)] = 15480,
  [SMALL_STATE(615)] = 15484,
  [SMALL_STATE(616)] = 15488,
  [SMALL_STATE(617)] = 15492,
  [SMALL_STATE(618)] = 15496,
  [SMALL_STATE(619)] = 15500,
  [SMALL_STATE(620)] = 15504,
  [SMALL_STATE(621)] = 15508,
  [SMALL_STATE(622)] = 15512,
  [SMALL_STATE(623)] = 15516,
  [SMALL_STATE(624)] = 15520,
  [SMALL_STATE(625)] = 15524,
  [SMALL_STATE(626)] = 15528,
  [SMALL_STATE(627)] = 15532,
  [SMALL_STATE(628)] = 15536,
  [SMALL_STATE(629)] = 15540,
  [SMALL_STATE(630)] = 15544,
  [SMALL_STATE(631)] = 15548,
  [SMALL_STATE(632)] = 15552,
  [SMALL_STATE(633)] = 15556,
  [SMALL_STATE(634)] = 15560,
  [SMALL_STATE(635)] = 15564,
  [SMALL_STATE(636)] = 15568,
  [SMALL_STATE(637)] = 15572,
  [SMALL_STATE(638)] = 15576,
  [SMALL_STATE(639)] = 15580,
  [SMALL_STATE(640)] = 15584,
  [SMALL_STATE(641)] = 15588,
  [SMALL_STATE(642)] = 15592,
  [SMALL_STATE(643)] = 15596,
  [SMALL_STATE(644)] = 15600,
  [SMALL_STATE(645)] = 15604,
  [SMALL_STATE(646)] = 15608,
  [SMALL_STATE(647)] = 15612,
  [SMALL_STATE(648)] = 15616,
  [SMALL_STATE(649)] = 15620,
  [SMALL_STATE(650)] = 15624,
  [SMALL_STATE(651)] = 15628,
  [SMALL_STATE(652)] = 15632,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 19),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 19),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 14),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 14),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 13),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 13),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 29),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 29),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 42),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 42),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 59),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 59),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 44),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 74),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 1, 0, 66),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 2, 0, 66),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 2, 0, 74),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(77),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(388),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(632),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(402),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(383),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(366),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(394),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(343),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(403),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(468),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(541),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(154),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(392),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(635),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(399),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(362),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(363),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(389),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(342),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(400),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(414),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(546),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(540),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(598),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(613),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(630),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(605),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 37),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 37),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 23),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 23),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(585),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_body, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_body, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_body, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_body, 2, 0, 0),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(583),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(622),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(541),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(626),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 56),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 56),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_body, 3, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_body, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 22),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 22),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 3, 0, 47),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 3, 0, 47),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_step, 1, 0, 15),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_step, 1, 0, 15),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 2, 0, 32),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 2, 0, 32),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 2, 0, 32),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 2, 0, 32),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 2, 0, 32),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 2, 0, 32),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 2, 0, 32),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 2, 0, 32),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 2, 0, 32),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 2, 0, 32),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 2, 0, 32),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 2, 0, 32),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 2, 0, 32),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 2, 0, 32),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_content_line, 2, 0, 22),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_content_line, 2, 0, 22),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 3, 0, 47),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 3, 0, 47),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 3, 0, 48),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 3, 0, 48),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_ask_step, 3, 0, 49),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_ask_step, 3, 0, 49),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 3, 0, 49),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 3, 0, 49),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 3, 0, 47),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 3, 0, 47),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 3, 0, 47),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 3, 0, 47),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 3, 0, 51),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 3, 0, 51),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 3, 0, 51),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 3, 0, 51),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 3, 0, 47),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 3, 0, 47),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 3, 0, 47),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 3, 0, 47),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 3, 0, 51),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 3, 0, 51),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 3, 0, 49),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 3, 0, 49),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 3, 0, 47),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 3, 0, 47),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 3, 0, 50),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 3, 0, 50),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_step_body, 3, 0, 63),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_inline_step_body, 3, 0, 63),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_step_body, 3, 0, 64),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_inline_step_body, 3, 0, 64),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 4, 0, 65),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 4, 0, 65),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 4, 0, 7),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 4, 0, 7),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 71),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 71),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 72),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 72),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 2, 0, 73),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_block_body, 2, 0, 73),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 5, 0, 75),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 5, 0, 75),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 5, 0, 76),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 5, 0, 76),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 80),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 80),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 81),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_block_body, 3, 0, 81),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_until_clause, 3, 0, 83),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_until_clause, 3, 0, 83),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_block_body, 4, 0, 84),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_block_body, 4, 0, 84),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 3, 0, 49),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 3, 0, 49),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [693] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(213),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(185),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(574),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 57),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 57),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 34),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 34),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 52),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 52),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 53),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 53),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 22),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 22),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 68),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 68),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 40),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 40),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 40),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 40),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 40),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 40),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 77),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 77),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [821] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 22),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 22),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 28),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 28),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 41),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 41),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 25),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 25),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 54),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 54),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 30),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 30),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 55),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 55),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 16),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 16),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 7),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 7),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 24),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 24),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 30),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 30),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 18),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 18),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 58),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 58),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 60),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 60),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 16),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 16),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 16),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 16),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 16),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 16),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 35),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 35),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 17),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 17),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 39),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 39),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 60),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 60),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 58),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 58),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 17),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 17),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 52),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 52),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 67),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 67),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 53),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 53),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 43),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 43),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 69),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 5, 0, 69),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 70),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 70),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 18),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 18),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 21),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 2, 0, 21),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 43),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 43),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 35),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 35),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 70),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 70),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 78),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 78),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 68),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 68),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 79),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 79),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 34),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 3, 0, 34),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 82),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 6, 0, 82),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 7),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 7),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 10),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 10),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 6),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 20),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 20), SHIFT_REPEAT(360),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [1151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [1154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [1159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [1205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_target_list, 2, 0, 45),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_parallelism, 2, 0, 50),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_target_list, 1, 0, 31),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 62),
  [1290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 62), SHIFT_REPEAT(618),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_named_parallel_head, 1, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(647),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_count, 1, 0, 0),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 61),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 27),
  [1328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 27), SHIFT_REPEAT(500),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 22),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 22),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_each_head, 1, 0, 0),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 85),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 26),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 28),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 41),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_output_type, 2, 0, 46),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_text, 1, 0, 0),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_body, 1, 0, 0),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_named_parallel_head, 2, 0, 0),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_parallel_head, 1, 0, 0),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1477] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_limit, 1, 0, 33),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_rank_head, 1, 0, 0),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_each_head, 2, 0, 0),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
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
