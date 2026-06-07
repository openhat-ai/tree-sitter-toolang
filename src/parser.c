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
#define STATE_COUNT 523
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 203
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 32
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 78

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
  sym_flow_condition_body = 139,
  sym_flow_inline_step_body = 140,
  sym_flow_inline_output_type = 141,
  sym_flow_inline_parallel_head = 142,
  sym_flow_inline_rank_head = 143,
  sym_flow_inline_each_head = 144,
  sym_flow_named_parallel_head = 145,
  sym_flow_parallelism = 146,
  sym_flow_rank_limit = 147,
  sym_flow_target_list = 148,
  sym_flow_inline_body = 149,
  sym_flow_repeat_count = 150,
  sym_flow_inline_text = 151,
  sym_directive = 152,
  sym_directive_key = 153,
  sym_directive_op = 154,
  sym_directive_csv = 155,
  sym_instruction_section = 156,
  sym_message_section = 157,
  sym_thunk_tail = 158,
  sym_roled_message = 159,
  sym_unroled_message = 160,
  sym_unroled_message_block = 161,
  sym_block_indented_implicit = 162,
  sym_context_block = 163,
  sym_instruct_block = 164,
  sym_roled_message_block = 165,
  sym_pass_statement = 166,
  sym_context_block_kind = 167,
  sym_instruct_block_kind = 168,
  sym_roled_message_kind = 169,
  sym_block_value = 170,
  sym_block_inline = 171,
  sym_block_name = 172,
  sym_block_content_inline = 173,
  sym_psyche_keyword = 174,
  sym_skill_keyword = 175,
  sym_service_keyword = 176,
  sym_prompt_keyword = 177,
  sym_context_keyword = 178,
  sym_instruct_keyword = 179,
  sym_assign_operator = 180,
  sym_fence_open = 181,
  sym_fence_close = 182,
  sym_cap_kind = 183,
  sym_inline_text = 184,
  aux_sym_source_file_repeat1 = 185,
  aux_sym_type_repeat1 = 186,
  aux_sym_struct_body_repeat1 = 187,
  aux_sym_cap_indented_repeat1 = 188,
  aux_sym_cap_markdown_repeat1 = 189,
  aux_sym_frontmatter_repeat1 = 190,
  aux_sym_block_indented_repeat1 = 191,
  aux_sym_block_fenced_repeat1 = 192,
  aux_sym_thunk_body_repeat1 = 193,
  aux_sym_thunk_body_repeat2 = 194,
  aux_sym_params_repeat1 = 195,
  aux_sym_flow_body_repeat1 = 196,
  aux_sym_flow_body_tail_repeat1 = 197,
  aux_sym_flow_body_tail_repeat2 = 198,
  aux_sym_flow_bare_thunk_body_repeat1 = 199,
  aux_sym_flow_target_list_repeat1 = 200,
  aux_sym_directive_csv_repeat1 = 201,
  aux_sym_message_section_repeat1 = 202,
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
  field_frontmatter = 10,
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
  [66] = {.index = 159, .length = 2},
  [67] = {.index = 161, .length = 2},
  [68] = {.index = 163, .length = 2},
  [69] = {.index = 165, .length = 7},
  [70] = {.index = 172, .length = 1},
  [71] = {.index = 173, .length = 1},
  [72] = {.index = 174, .length = 5},
  [73] = {.index = 179, .length = 3},
  [74] = {.index = 182, .length = 3},
  [75] = {.index = 185, .length = 2},
  [76] = {.index = 187, .length = 3},
  [77] = {.index = 190, .length = 3},
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
    {field_close, 3},
    {field_frontmatter, 2},
  [161] =
    {field_close, 4},
    {field_language, 1},
  [163] =
    {field_instruction, 2},
    {field_tail, 4},
  [165] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [172] =
    {field_text, 1},
  [173] =
    {field_text, 0},
  [174] =
    {field_colon, 3},
    {field_condition, 4},
    {field_condition_keyword, 2},
    {field_count, 1},
    {field_keyword, 0},
  [179] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [182] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [185] =
    {field_close, 4},
    {field_frontmatter, 2},
  [187] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [190] =
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
  [53] = 49,
  [54] = 47,
  [55] = 47,
  [56] = 49,
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
  [86] = 48,
  [87] = 46,
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
  [100] = 37,
  [101] = 98,
  [102] = 37,
  [103] = 103,
  [104] = 36,
  [105] = 38,
  [106] = 99,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 45,
  [111] = 47,
  [112] = 46,
  [113] = 48,
  [114] = 114,
  [115] = 115,
  [116] = 37,
  [117] = 98,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 99,
  [126] = 52,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 49,
  [132] = 48,
  [133] = 46,
  [134] = 134,
  [135] = 47,
  [136] = 118,
  [137] = 123,
  [138] = 119,
  [139] = 120,
  [140] = 121,
  [141] = 124,
  [142] = 122,
  [143] = 143,
  [144] = 128,
  [145] = 145,
  [146] = 49,
  [147] = 147,
  [148] = 47,
  [149] = 46,
  [150] = 150,
  [151] = 52,
  [152] = 48,
  [153] = 153,
  [154] = 154,
  [155] = 48,
  [156] = 49,
  [157] = 47,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 46,
  [163] = 47,
  [164] = 46,
  [165] = 165,
  [166] = 166,
  [167] = 52,
  [168] = 49,
  [169] = 48,
  [170] = 46,
  [171] = 49,
  [172] = 47,
  [173] = 48,
  [174] = 174,
  [175] = 175,
  [176] = 118,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 119,
  [193] = 120,
  [194] = 121,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 123,
  [235] = 49,
  [236] = 47,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
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
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 266,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 282,
  [286] = 268,
  [287] = 265,
  [288] = 266,
  [289] = 282,
  [290] = 268,
  [291] = 265,
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
  [308] = 306,
  [309] = 306,
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
  [320] = 310,
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
  [339] = 47,
  [340] = 340,
  [341] = 48,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 48,
  [349] = 46,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 47,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 329,
  [361] = 330,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 362,
  [367] = 367,
  [368] = 362,
  [369] = 365,
  [370] = 46,
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
  [383] = 47,
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
  [397] = 48,
  [398] = 46,
  [399] = 47,
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
  [410] = 402,
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
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 402,
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
  [445] = 402,
  [446] = 442,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 402,
  [453] = 442,
  [454] = 454,
  [455] = 455,
  [456] = 402,
  [457] = 442,
  [458] = 402,
  [459] = 402,
  [460] = 402,
  [461] = 402,
  [462] = 402,
  [463] = 463,
  [464] = 402,
  [465] = 465,
  [466] = 466,
  [467] = 422,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 49,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 48,
  [482] = 46,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 47,
  [487] = 47,
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
  [503] = 503,
  [504] = 471,
  [505] = 471,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(0);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(318);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'B') ADVANCE(344);
      if (lookahead == 'J') ADVANCE(346);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'P') ADVANCE(330);
      if (lookahead == 'T') ADVANCE(334);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(351);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(230);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(318);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'B') ADVANCE(344);
      if (lookahead == 'J') ADVANCE(346);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'P') ADVANCE(330);
      if (lookahead == 'T') ADVANCE(334);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(351);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(318);
      if (lookahead == '+') ADVANCE(542);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == 'B') ADVANCE(344);
      if (lookahead == 'J') ADVANCE(346);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'P') ADVANCE(330);
      if (lookahead == 'T') ADVANCE(334);
      if (lookahead == '[') ADVANCE(543);
      if (lookahead == '`') ADVANCE(545);
      if (lookahead == 'a') ADVANCE(663);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'f') ADVANCE(620);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == 'u') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(697);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(4);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(4);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(641);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'f') ADVANCE(620);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(553);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 's') ADVANCE(589);
      if (lookahead == 't') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(697);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == 'd') ADVANCE(641);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(643);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(697);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == 'd') ADVANCE(641);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(555);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 'u') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(697);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 230,
        '\r', 1,
        '#', 234,
        ')', 318,
        ',', 319,
        ':', 316,
        '[', 44,
        '`', 46,
        'm', 72,
        'p', 50,
        'u', 151,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 230,
        '\r', 1,
        '#', 234,
        '`', 252,
        'd', 362,
        'n', 382,
        '\t', 249,
        '\f', 249,
        ' ', 249,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(318);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(351);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(698);
      if (lookahead != 0) ADVANCE(704);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(699);
      if (lookahead != 0) ADVANCE(704);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(233);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(232);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(231);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(242);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\f') SKIP(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(418);
      END_STATE();
    case 29:
      if (lookahead == '\f') SKIP(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '\f') SKIP(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(697);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '=') ADVANCE(265);
      if (lookahead == '>') ADVANCE(315);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(244);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(37);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(38);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(39);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(264);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(265);
      if (lookahead == '>') ADVANCE(315);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(315);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(241);
      END_STATE();
    case 45:
      if (lookahead == '`') ADVANCE(320);
      END_STATE();
    case 46:
      if (lookahead == '`') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'k') ADVANCE(110);
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'k') ADVANCE(115);
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 118:
      if (lookahead == 'k') ADVANCE(300);
      END_STATE();
    case 119:
      if (lookahead == 'k') ADVANCE(300);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == 'k') ADVANCE(304);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(294);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 209:
      if (lookahead == 'v') ADVANCE(111);
      END_STATE();
    case 210:
      if (lookahead == 'v') ADVANCE(114);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 212:
      if (lookahead == 'w') ADVANCE(296);
      END_STATE();
    case 213:
      if (lookahead == 'x') ADVANCE(197);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 215:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 217:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(254);
      END_STATE();
    case 218:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(219);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(323);
      END_STATE();
    case 221:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(221);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 222:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(407);
      END_STATE();
    case 223:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 224:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(224);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(381);
      if (lookahead == 'f') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(410);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 225:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(225);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(411);
      END_STATE();
    case 226:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(226);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(406);
      END_STATE();
    case 227:
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\f') SKIP(227);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(412);
      END_STATE();
    case 228:
      if (eof) ADVANCE(229);
      ADVANCE_MAP(
        '\n', 230,
        '\r', 1,
        '#', 18,
        '(', 317,
        ')', 318,
        '+', 41,
        ',', 319,
        '-', 42,
        ':', 316,
        '=', 263,
        '?', 314,
        'B', 344,
        'J', 346,
        'N', 349,
        'P', 330,
        'T', 334,
        'c', 381,
        'f', 371,
        'i', 377,
        'p', 386,
        's', 357,
        't', 365,
        'u', 388,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(351);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_program_doc_comment);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'a') ADVANCE(246);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'o') ADVANCE(311);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'r') ADVANCE(313);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_flow_target);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      ADVANCE_MAP(
        '\n', 230,
        '\r', 1,
        '#', 234,
        '`', 252,
        'd', 362,
        'n', 382,
        '\t', 249,
        '\f', 249,
        ' ', 249,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ':') ADVANCE(326);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(327);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(328);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(325);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(323);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'k') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(367);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'w') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 230,
        0x0b, 539,
        '\f', 409,
        '\r', 1,
        '#', 413,
        'a', 516,
        'c', 496,
        'd', 491,
        'e', 421,
        'f', 475,
        'i', 489,
        'k', 451,
        'p', 425,
        'r', 422,
        's', 452,
        't', 459,
        'u', 488,
        '\t', 406,
        ' ', 406,
      );
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 230,
        '\f', 407,
        '\r', 1,
        '#', 413,
        'a', 517,
        'c', 496,
        'f', 476,
        'h', 419,
        'i', 489,
        'm', 492,
        'p', 424,
        'r', 445,
        's', 446,
        't', 457,
        'u', 513,
        '\t', 407,
        ' ', 407,
      );
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 230,
        '\f', 408,
        '\r', 1,
        '#', 413,
        'a', 517,
        'c', 496,
        'f', 476,
        'i', 489,
        'p', 425,
        's', 452,
        't', 458,
        'u', 513,
        '\t', 408,
        ' ', 408,
      );
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 230,
        '\f', 409,
        '\r', 1,
        '#', 413,
        'a', 516,
        'c', 496,
        'd', 491,
        'e', 421,
        'f', 475,
        'i', 489,
        'k', 451,
        'p', 425,
        'r', 422,
        's', 452,
        't', 459,
        'u', 488,
        '\t', 406,
        ' ', 406,
      );
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 230,
        '\f', 410,
        '\r', 1,
        '#', 413,
        'c', 381,
        'f', 371,
        'i', 377,
        'p', 386,
        's', 357,
        't', 365,
        'u', 388,
        '\t', 410,
        ' ', 410,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 230,
        '\f', 411,
        '\r', 1,
        '#', 413,
        'c', 496,
        'f', 476,
        'i', 489,
        'p', 507,
        's', 452,
        't', 459,
        'u', 520,
        '\t', 411,
        ' ', 411,
      );
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 230,
        '\f', 412,
        '\r', 1,
        '#', 413,
        'a', 517,
        'c', 496,
        'f', 476,
        'i', 489,
        'p', 507,
        's', 452,
        't', 458,
        'u', 513,
        '\t', 412,
        ' ', 412,
      );
      if (lookahead != 0) ADVANCE(539);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == '!') ADVANCE(417);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'k') ADVANCE(462);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == 'k') ADVANCE(466);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '-') ADVANCE(540);
      if (lookahead == '=') ADVANCE(265);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '=') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '`') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == '`') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'r') ADVANCE(646);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead == 'r') ADVANCE(646);
      if (lookahead == 's') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead == 's') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'p') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'd') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead == 'k') ADVANCE(602);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == 'k') ADVANCE(607);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead == 'k') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(652);
      if (lookahead == 't') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'f') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'h') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(300);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'k') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'l') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'm') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == 's') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'n') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(592);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'p') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == 's') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'r') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'u') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'v') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'w') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'x') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead == 'y') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_flow_bare_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == '`') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(698);
      if (lookahead != 0) ADVANCE(704);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(699);
      if (lookahead != 0) ADVANCE(704);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(704);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(704);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(704);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(704);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(704);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 221},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 222},
  [5] = {.lex_state = 222},
  [6] = {.lex_state = 222},
  [7] = {.lex_state = 222},
  [8] = {.lex_state = 222},
  [9] = {.lex_state = 222},
  [10] = {.lex_state = 222},
  [11] = {.lex_state = 222},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 221},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 221},
  [23] = {.lex_state = 221},
  [24] = {.lex_state = 221},
  [25] = {.lex_state = 221},
  [26] = {.lex_state = 221},
  [27] = {.lex_state = 221},
  [28] = {.lex_state = 223},
  [29] = {.lex_state = 223},
  [30] = {.lex_state = 223},
  [31] = {.lex_state = 223},
  [32] = {.lex_state = 223},
  [33] = {.lex_state = 222},
  [34] = {.lex_state = 223},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 226},
  [37] = {.lex_state = 226},
  [38] = {.lex_state = 226},
  [39] = {.lex_state = 221},
  [40] = {.lex_state = 221},
  [41] = {.lex_state = 221},
  [42] = {.lex_state = 227},
  [43] = {.lex_state = 227},
  [44] = {.lex_state = 227},
  [45] = {.lex_state = 222},
  [46] = {.lex_state = 222},
  [47] = {.lex_state = 222},
  [48] = {.lex_state = 222},
  [49] = {.lex_state = 222},
  [50] = {.lex_state = 221},
  [51] = {.lex_state = 221},
  [52] = {.lex_state = 226},
  [53] = {.lex_state = 226},
  [54] = {.lex_state = 226},
  [55] = {.lex_state = 221},
  [56] = {.lex_state = 221},
  [57] = {.lex_state = 221},
  [58] = {.lex_state = 221},
  [59] = {.lex_state = 221},
  [60] = {.lex_state = 221},
  [61] = {.lex_state = 221},
  [62] = {.lex_state = 221},
  [63] = {.lex_state = 221},
  [64] = {.lex_state = 221},
  [65] = {.lex_state = 221},
  [66] = {.lex_state = 221},
  [67] = {.lex_state = 221},
  [68] = {.lex_state = 221},
  [69] = {.lex_state = 221},
  [70] = {.lex_state = 221},
  [71] = {.lex_state = 221},
  [72] = {.lex_state = 221},
  [73] = {.lex_state = 221},
  [74] = {.lex_state = 221},
  [75] = {.lex_state = 221},
  [76] = {.lex_state = 221},
  [77] = {.lex_state = 221},
  [78] = {.lex_state = 221},
  [79] = {.lex_state = 221},
  [80] = {.lex_state = 221},
  [81] = {.lex_state = 221},
  [82] = {.lex_state = 221},
  [83] = {.lex_state = 221},
  [84] = {.lex_state = 221},
  [85] = {.lex_state = 221},
  [86] = {.lex_state = 221},
  [87] = {.lex_state = 221},
  [88] = {.lex_state = 221},
  [89] = {.lex_state = 221},
  [90] = {.lex_state = 221},
  [91] = {.lex_state = 221},
  [92] = {.lex_state = 221},
  [93] = {.lex_state = 223},
  [94] = {.lex_state = 223},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 223},
  [97] = {.lex_state = 223},
  [98] = {.lex_state = 223},
  [99] = {.lex_state = 223},
  [100] = {.lex_state = 223},
  [101] = {.lex_state = 227},
  [102] = {.lex_state = 227},
  [103] = {.lex_state = 224},
  [104] = {.lex_state = 227},
  [105] = {.lex_state = 227},
  [106] = {.lex_state = 227},
  [107] = {.lex_state = 224},
  [108] = {.lex_state = 224},
  [109] = {.lex_state = 223},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 228},
  [115] = {.lex_state = 228},
  [116] = {.lex_state = 225},
  [117] = {.lex_state = 225},
  [118] = {.lex_state = 223},
  [119] = {.lex_state = 223},
  [120] = {.lex_state = 223},
  [121] = {.lex_state = 223},
  [122] = {.lex_state = 223},
  [123] = {.lex_state = 223},
  [124] = {.lex_state = 223},
  [125] = {.lex_state = 225},
  [126] = {.lex_state = 223},
  [127] = {.lex_state = 223},
  [128] = {.lex_state = 223},
  [129] = {.lex_state = 223},
  [130] = {.lex_state = 223},
  [131] = {.lex_state = 223},
  [132] = {.lex_state = 223},
  [133] = {.lex_state = 223},
  [134] = {.lex_state = 223},
  [135] = {.lex_state = 223},
  [136] = {.lex_state = 227},
  [137] = {.lex_state = 227},
  [138] = {.lex_state = 227},
  [139] = {.lex_state = 227},
  [140] = {.lex_state = 227},
  [141] = {.lex_state = 227},
  [142] = {.lex_state = 227},
  [143] = {.lex_state = 227},
  [144] = {.lex_state = 227},
  [145] = {.lex_state = 227},
  [146] = {.lex_state = 227},
  [147] = {.lex_state = 227},
  [148] = {.lex_state = 227},
  [149] = {.lex_state = 227},
  [150] = {.lex_state = 227},
  [151] = {.lex_state = 227},
  [152] = {.lex_state = 227},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 224},
  [155] = {.lex_state = 224},
  [156] = {.lex_state = 224},
  [157] = {.lex_state = 224},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 224},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 224},
  [163] = {.lex_state = 225},
  [164] = {.lex_state = 228},
  [165] = {.lex_state = 228},
  [166] = {.lex_state = 228},
  [167] = {.lex_state = 225},
  [168] = {.lex_state = 225},
  [169] = {.lex_state = 225},
  [170] = {.lex_state = 225},
  [171] = {.lex_state = 228},
  [172] = {.lex_state = 228},
  [173] = {.lex_state = 228},
  [174] = {.lex_state = 221},
  [175] = {.lex_state = 221},
  [176] = {.lex_state = 221},
  [177] = {.lex_state = 221},
  [178] = {.lex_state = 221},
  [179] = {.lex_state = 221},
  [180] = {.lex_state = 221},
  [181] = {.lex_state = 221},
  [182] = {.lex_state = 221},
  [183] = {.lex_state = 221},
  [184] = {.lex_state = 221},
  [185] = {.lex_state = 221},
  [186] = {.lex_state = 221},
  [187] = {.lex_state = 221},
  [188] = {.lex_state = 221},
  [189] = {.lex_state = 221},
  [190] = {.lex_state = 221},
  [191] = {.lex_state = 221},
  [192] = {.lex_state = 221},
  [193] = {.lex_state = 221},
  [194] = {.lex_state = 221},
  [195] = {.lex_state = 221},
  [196] = {.lex_state = 221},
  [197] = {.lex_state = 221},
  [198] = {.lex_state = 221},
  [199] = {.lex_state = 221},
  [200] = {.lex_state = 221},
  [201] = {.lex_state = 221},
  [202] = {.lex_state = 221},
  [203] = {.lex_state = 221},
  [204] = {.lex_state = 221},
  [205] = {.lex_state = 221},
  [206] = {.lex_state = 221},
  [207] = {.lex_state = 221},
  [208] = {.lex_state = 221},
  [209] = {.lex_state = 221},
  [210] = {.lex_state = 221},
  [211] = {.lex_state = 221},
  [212] = {.lex_state = 221},
  [213] = {.lex_state = 221},
  [214] = {.lex_state = 221},
  [215] = {.lex_state = 221},
  [216] = {.lex_state = 221},
  [217] = {.lex_state = 221},
  [218] = {.lex_state = 221},
  [219] = {.lex_state = 221},
  [220] = {.lex_state = 221},
  [221] = {.lex_state = 221},
  [222] = {.lex_state = 221},
  [223] = {.lex_state = 221},
  [224] = {.lex_state = 221},
  [225] = {.lex_state = 221},
  [226] = {.lex_state = 221},
  [227] = {.lex_state = 221},
  [228] = {.lex_state = 221},
  [229] = {.lex_state = 221},
  [230] = {.lex_state = 221},
  [231] = {.lex_state = 221},
  [232] = {.lex_state = 221},
  [233] = {.lex_state = 221},
  [234] = {.lex_state = 221},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 228},
  [238] = {.lex_state = 228},
  [239] = {.lex_state = 228},
  [240] = {.lex_state = 228},
  [241] = {.lex_state = 228},
  [242] = {.lex_state = 228},
  [243] = {.lex_state = 228},
  [244] = {.lex_state = 228},
  [245] = {.lex_state = 228},
  [246] = {.lex_state = 228},
  [247] = {.lex_state = 228},
  [248] = {.lex_state = 228},
  [249] = {.lex_state = 228},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 15},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 37},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 16},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 16},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 38},
  [271] = {.lex_state = 16},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 16},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 16},
  [278] = {.lex_state = 16},
  [279] = {.lex_state = 16},
  [280] = {.lex_state = 16},
  [281] = {.lex_state = 13},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 13},
  [284] = {.lex_state = 13},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 16},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 16},
  [289] = {.lex_state = 16},
  [290] = {.lex_state = 16},
  [291] = {.lex_state = 16},
  [292] = {.lex_state = 38},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 31},
  [296] = {.lex_state = 16},
  [297] = {.lex_state = 39},
  [298] = {.lex_state = 14},
  [299] = {.lex_state = 31},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 31},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 221},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 39},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 39},
  [308] = {.lex_state = 10},
  [309] = {.lex_state = 10},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 10},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 10},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 10},
  [324] = {.lex_state = 14},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 228},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 10},
  [339] = {.lex_state = 14},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 14},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 10},
  [348] = {.lex_state = 15},
  [349] = {.lex_state = 15},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 15},
  [356] = {.lex_state = 10},
  [357] = {.lex_state = 10},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 228},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 228},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 228},
  [370] = {.lex_state = 14},
  [371] = {.lex_state = 217},
  [372] = {.lex_state = 14},
  [373] = {.lex_state = 228},
  [374] = {.lex_state = 228},
  [375] = {.lex_state = 10},
  [376] = {.lex_state = 16},
  [377] = {.lex_state = 16},
  [378] = {.lex_state = 16},
  [379] = {.lex_state = 10},
  [380] = {.lex_state = 10},
  [381] = {.lex_state = 14},
  [382] = {.lex_state = 16},
  [383] = {.lex_state = 31},
  [384] = {.lex_state = 10},
  [385] = {.lex_state = 28},
  [386] = {.lex_state = 31},
  [387] = {.lex_state = 228},
  [388] = {.lex_state = 10},
  [389] = {.lex_state = 218},
  [390] = {.lex_state = 228},
  [391] = {.lex_state = 228},
  [392] = {.lex_state = 10},
  [393] = {.lex_state = 228},
  [394] = {.lex_state = 16},
  [395] = {.lex_state = 16},
  [396] = {.lex_state = 217},
  [397] = {.lex_state = 16},
  [398] = {.lex_state = 16},
  [399] = {.lex_state = 16},
  [400] = {.lex_state = 28},
  [401] = {.lex_state = 14},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 228},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 228},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 228},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 11},
  [412] = {.lex_state = 228},
  [413] = {.lex_state = 228},
  [414] = {.lex_state = 228},
  [415] = {.lex_state = 228},
  [416] = {.lex_state = 228},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 228},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 228},
  [422] = {.lex_state = 219},
  [423] = {.lex_state = 218},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 14},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 14},
  [428] = {.lex_state = 228},
  [429] = {.lex_state = 228},
  [430] = {.lex_state = 14},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 228},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 14},
  [435] = {.lex_state = 228},
  [436] = {.lex_state = 29},
  [437] = {.lex_state = 228},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 228},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 228},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 228},
  [448] = {.lex_state = 228},
  [449] = {.lex_state = 14},
  [450] = {.lex_state = 228},
  [451] = {.lex_state = 14},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 10},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 228},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 228},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 219},
  [468] = {.lex_state = 14},
  [469] = {.lex_state = 11},
  [470] = {.lex_state = 228},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 228},
  [473] = {.lex_state = 29},
  [474] = {.lex_state = 217},
  [475] = {.lex_state = 228},
  [476] = {.lex_state = 228},
  [477] = {.lex_state = 14},
  [478] = {.lex_state = 228},
  [479] = {.lex_state = 228},
  [480] = {.lex_state = 228},
  [481] = {.lex_state = 28},
  [482] = {.lex_state = 28},
  [483] = {.lex_state = 228},
  [484] = {.lex_state = 228},
  [485] = {.lex_state = 228},
  [486] = {.lex_state = 28},
  [487] = {.lex_state = 29},
  [488] = {.lex_state = 228},
  [489] = {.lex_state = 228},
  [490] = {.lex_state = 219},
  [491] = {.lex_state = 228},
  [492] = {.lex_state = 228},
  [493] = {.lex_state = 14},
  [494] = {.lex_state = 228},
  [495] = {.lex_state = 228},
  [496] = {.lex_state = 228},
  [497] = {.lex_state = 228},
  [498] = {.lex_state = 228},
  [499] = {.lex_state = 228},
  [500] = {.lex_state = 228},
  [501] = {.lex_state = 11},
  [502] = {.lex_state = 11},
  [503] = {.lex_state = 228},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 228},
  [507] = {.lex_state = 228},
  [508] = {.lex_state = 219},
  [509] = {.lex_state = 228},
  [510] = {.lex_state = 228},
  [511] = {.lex_state = 228},
  [512] = {.lex_state = 228},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 228},
  [515] = {.lex_state = 228},
  [516] = {.lex_state = 228},
  [517] = {.lex_state = 228},
  [518] = {.lex_state = 14},
  [519] = {.lex_state = 228},
  [520] = {.lex_state = 14},
  [521] = {.lex_state = 228},
  [522] = {.lex_state = 228},
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
    [sym_source_file] = STATE(513),
    [sym_item] = STATE(27),
    [sym_newline] = STATE(56),
    [sym_blank_line] = STATE(27),
    [sym_use] = STATE(198),
    [sym_struct] = STATE(198),
    [sym_psyche] = STATE(198),
    [sym_skill] = STATE(198),
    [sym_service] = STATE(198),
    [sym_prompt] = STATE(198),
    [sym_instruct] = STATE(198),
    [sym_context] = STATE(198),
    [sym_thunk] = STATE(198),
    [sym_flow] = STATE(198),
    [sym_psyche_keyword] = STATE(434),
    [sym_skill_keyword] = STATE(449),
    [sym_service_keyword] = STATE(451),
    [sym_prompt_keyword] = STATE(468),
    [sym_context_keyword] = STATE(381),
    [sym_instruct_keyword] = STATE(401),
    [aux_sym_source_file_repeat1] = STATE(27),
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
    STATE(30), 1,
      sym_instruction_section,
    STATE(49), 1,
      sym_newline,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(223), 1,
      sym_thunk_tail,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
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
    STATE(32), 1,
      sym_instruction_section,
    STATE(49), 1,
      sym_newline,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(179), 1,
      sym_thunk_tail,
    STATE(180), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(33), 3,
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
    STATE(29), 1,
      sym_instruction_section,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(175), 1,
      sym_thunk_body,
    STATE(180), 1,
      sym_message_section,
    STATE(182), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
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
    STATE(29), 1,
      sym_instruction_section,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(182), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(226), 1,
      sym_thunk_body,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
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
    STATE(29), 1,
      sym_instruction_section,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(177), 1,
      sym_thunk_body,
    STATE(180), 1,
      sym_message_section,
    STATE(182), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
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
    STATE(29), 1,
      sym_instruction_section,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(182), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(184), 1,
      sym_thunk_body,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
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
    STATE(29), 1,
      sym_instruction_section,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(182), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(227), 1,
      sym_thunk_body,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
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
    STATE(29), 1,
      sym_instruction_section,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(182), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(197), 1,
      sym_thunk_body,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
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
    STATE(29), 1,
      sym_instruction_section,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(182), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(199), 1,
      sym_thunk_body,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
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
    STATE(29), 1,
      sym_instruction_section,
    STATE(94), 1,
      sym_context_block,
    STATE(97), 1,
      sym_instruct_block,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(182), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_thunk_body,
    STATE(365), 1,
      sym_directive_key,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
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
  [982] = 27,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(185), 1,
      sym_flow_body,
    STATE(188), 1,
      sym_flow_body_tail,
    STATE(189), 1,
      sym_pass_statement,
    STATE(235), 1,
      sym_newline,
    STATE(369), 1,
      sym_directive_key,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(95), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(74), 10,
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
  [1082] = 27,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(188), 1,
      sym_flow_body_tail,
    STATE(189), 1,
      sym_pass_statement,
    STATE(233), 1,
      sym_flow_body,
    STATE(235), 1,
      sym_newline,
    STATE(369), 1,
      sym_directive_key,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(95), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(74), 10,
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
  [1182] = 27,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(188), 1,
      sym_flow_body_tail,
    STATE(189), 1,
      sym_pass_statement,
    STATE(230), 1,
      sym_flow_body,
    STATE(235), 1,
      sym_newline,
    STATE(369), 1,
      sym_directive_key,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(95), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(74), 10,
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
  [1282] = 27,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(188), 1,
      sym_flow_body_tail,
    STATE(189), 1,
      sym_pass_statement,
    STATE(190), 1,
      sym_flow_body,
    STATE(235), 1,
      sym_newline,
    STATE(369), 1,
      sym_directive_key,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(95), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(74), 10,
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
  [1382] = 27,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(186), 1,
      sym_flow_body,
    STATE(188), 1,
      sym_flow_body_tail,
    STATE(189), 1,
      sym_pass_statement,
    STATE(235), 1,
      sym_newline,
    STATE(369), 1,
      sym_directive_key,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(95), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(74), 10,
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
  [1482] = 27,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(188), 1,
      sym_flow_body_tail,
    STATE(189), 1,
      sym_pass_statement,
    STATE(204), 1,
      sym_flow_body,
    STATE(235), 1,
      sym_newline,
    STATE(369), 1,
      sym_directive_key,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(95), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(74), 10,
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
  [1582] = 27,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(188), 1,
      sym_flow_body_tail,
    STATE(189), 1,
      sym_pass_statement,
    STATE(203), 1,
      sym_flow_body,
    STATE(235), 1,
      sym_newline,
    STATE(369), 1,
      sym_directive_key,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(95), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(74), 10,
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
  [1682] = 27,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(188), 1,
      sym_flow_body_tail,
    STATE(189), 1,
      sym_pass_statement,
    STATE(213), 1,
      sym_flow_body,
    STATE(235), 1,
      sym_newline,
    STATE(369), 1,
      sym_directive_key,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(95), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(74), 10,
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
  [1782] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(56), 1,
      sym_newline,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(187), 1,
      sym_pass_statement,
    ACTIONS(121), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(25), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(74), 10,
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
    ACTIONS(119), 12,
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
  [1869] = 26,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(24), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(189), 1,
      sym_pass_statement,
    STATE(225), 1,
      sym_flow_body_tail,
    STATE(235), 1,
      sym_newline,
    STATE(369), 1,
      sym_directive_key,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(95), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(95), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(74), 10,
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
  [1966] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(56), 1,
      sym_newline,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(187), 1,
      sym_pass_statement,
    ACTIONS(123), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(23), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(74), 10,
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
    ACTIONS(119), 12,
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
  [2053] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(56), 1,
      sym_newline,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(202), 1,
      sym_pass_statement,
    ACTIONS(121), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(25), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(74), 10,
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
    ACTIONS(125), 12,
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
  [2140] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(56), 1,
      sym_newline,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(217), 1,
      sym_pass_statement,
    ACTIONS(129), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(20), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(74), 10,
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
    ACTIONS(127), 12,
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
  [2227] = 19,
    ACTIONS(133), 1,
      aux_sym_newline_token1,
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
      sym_flow_bare_raw_text,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(56), 1,
      sym_newline,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    ACTIONS(136), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(25), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(74), 10,
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
    ACTIONS(131), 13,
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
  [2309] = 23,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      aux_sym_newline_token1,
    ACTIONS(174), 1,
      sym_program_doc_comment,
    ACTIONS(180), 1,
      anon_sym_context,
    ACTIONS(183), 1,
      anon_sym_instruct,
    ACTIONS(186), 1,
      sym_use_keyword,
    ACTIONS(189), 1,
      sym_struct_keyword,
    ACTIONS(192), 1,
      anon_sym_psyche,
    ACTIONS(195), 1,
      anon_sym_skill,
    ACTIONS(198), 1,
      anon_sym_service,
    ACTIONS(201), 1,
      anon_sym_prompt,
    ACTIONS(204), 1,
      sym_thunk_keyword,
    ACTIONS(207), 1,
      sym_flow_keyword,
    STATE(56), 1,
      sym_newline,
    STATE(381), 1,
      sym_context_keyword,
    STATE(401), 1,
      sym_instruct_keyword,
    STATE(434), 1,
      sym_psyche_keyword,
    STATE(449), 1,
      sym_skill_keyword,
    STATE(451), 1,
      sym_service_keyword,
    STATE(468), 1,
      sym_prompt_keyword,
    ACTIONS(177), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(26), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(198), 10,
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
  [2391] = 23,
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
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      sym_program_doc_comment,
    STATE(56), 1,
      sym_newline,
    STATE(381), 1,
      sym_context_keyword,
    STATE(401), 1,
      sym_instruct_keyword,
    STATE(434), 1,
      sym_psyche_keyword,
    STATE(449), 1,
      sym_skill_keyword,
    STATE(451), 1,
      sym_service_keyword,
    STATE(468), 1,
      sym_prompt_keyword,
    ACTIONS(214), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(26), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(198), 10,
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
  [2473] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(222), 1,
      sym_comment_line,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(131), 1,
      sym_newline,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(181), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(109), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(220), 12,
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
  [2543] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      sym_comment_line,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(131), 1,
      sym_newline,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_thunk_tail,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(28), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(42), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(226), 12,
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
  [2613] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      sym_comment_line,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(131), 1,
      sym_newline,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(178), 1,
      sym_thunk_tail,
    STATE(180), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(31), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(42), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(232), 12,
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
  [2683] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(222), 1,
      sym_comment_line,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(131), 1,
      sym_newline,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(195), 1,
      sym_thunk_tail,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(109), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(238), 12,
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
  [2753] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      sym_comment_line,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(131), 1,
      sym_newline,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(196), 1,
      sym_thunk_tail,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(34), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(42), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(242), 12,
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
  [2823] = 8,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      aux_sym_newline_token1,
    ACTIONS(253), 1,
      sym_comment_line,
    STATE(49), 1,
      sym_newline,
    STATE(365), 1,
      sym_directive_key,
    STATE(33), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(256), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(251), 17,
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
  [2873] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(222), 1,
      sym_comment_line,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(131), 1,
      sym_newline,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(180), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(209), 1,
      sym_thunk_tail,
    STATE(514), 1,
      sym_roled_message_kind,
    STATE(42), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(109), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(261), 12,
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
  [2943] = 22,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
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
      sym_flow_bare_raw_text,
    ACTIONS(263), 1,
      sym_doc_comment,
    ACTIONS(265), 1,
      sym_comment_line,
    STATE(22), 1,
      sym_flow_body_statement,
    STATE(41), 1,
      sym_flow_bare_content_line,
    STATE(57), 1,
      sym_flow_entry,
    STATE(75), 1,
      sym_flow_bare_thunk_body,
    STATE(217), 1,
      sym_pass_statement,
    STATE(235), 1,
      sym_newline,
    STATE(159), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(74), 10,
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
  [3020] = 6,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      aux_sym_newline_token1,
    ACTIONS(273), 1,
      sym_indented_raw_text,
    STATE(53), 1,
      sym_newline,
    STATE(37), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(271), 24,
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
  [3064] = 6,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    ACTIONS(282), 1,
      sym_indented_raw_text,
    STATE(53), 1,
      sym_newline,
    STATE(37), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(280), 24,
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
  [3108] = 6,
    ACTIONS(269), 1,
      aux_sym_newline_token1,
    ACTIONS(273), 1,
      sym_indented_raw_text,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_newline,
    STATE(36), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(287), 24,
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
  [3152] = 7,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(117), 1,
      sym_flow_bare_raw_text,
    STATE(50), 1,
      sym_blank_line,
    STATE(56), 1,
      sym_newline,
    ACTIONS(291), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(40), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(289), 22,
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
  [3197] = 7,
    ACTIONS(295), 1,
      aux_sym_newline_token1,
    ACTIONS(300), 1,
      sym_flow_bare_raw_text,
    STATE(436), 1,
      sym_blank_line,
    STATE(473), 1,
      sym_newline,
    ACTIONS(298), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(40), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(293), 22,
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
  [3242] = 7,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(117), 1,
      sym_flow_bare_raw_text,
    STATE(51), 1,
      sym_blank_line,
    STATE(56), 1,
      sym_newline,
    ACTIONS(305), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(39), 2,
      sym_flow_bare_content_line,
      aux_sym_flow_bare_thunk_body_repeat1,
    ACTIONS(303), 22,
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
  [3287] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    ACTIONS(313), 1,
      sym_comment_line,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(146), 1,
      sym_newline,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(514), 1,
      sym_roled_message_kind,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(44), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(311), 12,
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
  [3343] = 13,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(322), 1,
      sym_comment_line,
    ACTIONS(328), 1,
      sym_indented_raw_text,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(146), 1,
      sym_newline,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(514), 1,
      sym_roled_message_kind,
    ACTIONS(325), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(43), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(320), 12,
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
  [3399] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      sym_comment_line,
    STATE(105), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_unroled_message_block,
    STATE(146), 1,
      sym_newline,
    STATE(147), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_block_indented_implicit,
    STATE(514), 1,
      sym_roled_message_kind,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(43), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(333), 12,
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
  [3455] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 27,
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
  [3488] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 27,
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
  [3521] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 27,
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
  [3554] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 27,
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
  [3587] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 27,
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
  [3620] = 4,
    ACTIONS(117), 1,
      sym_flow_bare_raw_text,
    STATE(92), 1,
      sym_flow_bare_content_line,
    ACTIONS(359), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(357), 23,
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
  [3656] = 4,
    ACTIONS(117), 1,
      sym_flow_bare_raw_text,
    STATE(92), 1,
      sym_flow_bare_content_line,
    ACTIONS(291), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(289), 23,
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
  [3692] = 2,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 26,
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
  [3724] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 26,
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
  [3756] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 26,
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
  [3788] = 2,
    ACTIONS(347), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(345), 23,
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
  [3819] = 2,
    ACTIONS(355), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(353), 23,
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
  [3850] = 2,
    ACTIONS(367), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(365), 23,
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
  [3881] = 2,
    ACTIONS(371), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(369), 23,
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
  [3912] = 2,
    ACTIONS(375), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(373), 23,
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
  [3943] = 2,
    ACTIONS(379), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(377), 23,
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
  [3974] = 2,
    ACTIONS(383), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(381), 23,
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
  [4005] = 2,
    ACTIONS(387), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(385), 23,
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
  [4036] = 2,
    ACTIONS(391), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(389), 23,
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
  [4067] = 2,
    ACTIONS(395), 3,
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
  [4098] = 2,
    ACTIONS(399), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(397), 23,
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
  [4129] = 2,
    ACTIONS(403), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(401), 23,
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
  [4160] = 2,
    ACTIONS(407), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(405), 23,
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
  [4191] = 2,
    ACTIONS(411), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(409), 23,
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
  [4222] = 2,
    ACTIONS(415), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(413), 23,
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
  [4253] = 2,
    ACTIONS(419), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(417), 23,
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
  [4284] = 2,
    ACTIONS(423), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(421), 23,
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
  [4315] = 2,
    ACTIONS(427), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(425), 23,
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
  [4346] = 2,
    ACTIONS(431), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(429), 23,
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
  [4377] = 2,
    ACTIONS(435), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(433), 23,
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
  [4408] = 2,
    ACTIONS(439), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(437), 23,
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
  [4439] = 2,
    ACTIONS(443), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(441), 23,
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
  [4470] = 2,
    ACTIONS(447), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(445), 23,
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
  [4501] = 2,
    ACTIONS(451), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(449), 23,
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
  [4532] = 2,
    ACTIONS(455), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(453), 23,
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
  [4563] = 2,
    ACTIONS(459), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(457), 23,
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
  [4594] = 2,
    ACTIONS(463), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(461), 23,
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
  [4625] = 2,
    ACTIONS(467), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(465), 23,
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
  [4656] = 2,
    ACTIONS(471), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(469), 23,
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
  [4687] = 2,
    ACTIONS(475), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(473), 23,
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
  [4718] = 2,
    ACTIONS(479), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(477), 23,
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
  [4749] = 2,
    ACTIONS(351), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(349), 23,
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
  [4780] = 2,
    ACTIONS(343), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(341), 23,
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
  [4811] = 2,
    ACTIONS(483), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(481), 23,
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
  [4842] = 2,
    ACTIONS(487), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(485), 23,
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
  [4873] = 2,
    ACTIONS(491), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(489), 23,
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
  [4904] = 2,
    ACTIONS(495), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(493), 23,
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
  [4935] = 2,
    ACTIONS(298), 3,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(293), 23,
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
  [4966] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(222), 1,
      sym_comment_line,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      sym_context_block,
    STATE(131), 1,
      sym_newline,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(109), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(499), 16,
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
  [5010] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 1,
      sym_comment_line,
    STATE(131), 1,
      sym_newline,
    STATE(134), 1,
      sym_instruct_block,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(96), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(503), 16,
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
  [5054] = 5,
    STATE(369), 1,
      sym_directive_key,
    ACTIONS(509), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    STATE(95), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(511), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(507), 12,
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
  [5090] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(222), 1,
      sym_comment_line,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      sym_instruct_block,
    STATE(131), 1,
      sym_newline,
    STATE(510), 1,
      sym_instruct_block_kind,
    STATE(109), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(499), 16,
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
  [5134] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(514), 1,
      sym_comment_line,
    STATE(131), 1,
      sym_newline,
    STATE(134), 1,
      sym_context_block,
    STATE(500), 1,
      sym_context_block_kind,
    STATE(93), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(503), 16,
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
  [5178] = 6,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(520), 1,
      sym_indented_raw_text,
    STATE(131), 1,
      sym_newline,
    STATE(99), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(518), 17,
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
  [5215] = 6,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(520), 1,
      sym_indented_raw_text,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_newline,
    STATE(100), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(524), 17,
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
  [5252] = 6,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(526), 1,
      aux_sym_newline_token1,
    ACTIONS(529), 1,
      sym_indented_raw_text,
    STATE(131), 1,
      sym_newline,
    STATE(100), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(280), 17,
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
  [5289] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym_newline,
    STATE(106), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(518), 16,
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
  [5325] = 6,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(532), 1,
      aux_sym_newline_token1,
    ACTIONS(535), 1,
      sym_indented_raw_text,
    STATE(146), 1,
      sym_newline,
    STATE(102), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(280), 16,
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
  [5361] = 8,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 1,
      aux_sym_newline_token1,
    ACTIONS(545), 1,
      sym_value_name,
    ACTIONS(548), 1,
      sym_indented_raw_text,
    STATE(156), 1,
      sym_newline,
    STATE(421), 1,
      sym_property_key,
    STATE(103), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(543), 13,
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
  [5401] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    STATE(146), 1,
      sym_newline,
    STATE(102), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(271), 16,
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
  [5437] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    STATE(146), 1,
      sym_newline,
    STATE(104), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(287), 16,
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
  [5473] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym_newline,
    STATE(102), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(524), 16,
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
  [5509] = 8,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 1,
      aux_sym_newline_token1,
    ACTIONS(557), 1,
      sym_value_name,
    ACTIONS(559), 1,
      sym_indented_raw_text,
    STATE(156), 1,
      sym_newline,
    STATE(421), 1,
      sym_property_key,
    STATE(103), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(555), 13,
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
  [5549] = 8,
    ACTIONS(553), 1,
      aux_sym_newline_token1,
    ACTIONS(557), 1,
      sym_value_name,
    ACTIONS(559), 1,
      sym_indented_raw_text,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      sym_newline,
    STATE(421), 1,
      sym_property_key,
    STATE(107), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(563), 13,
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
  [5589] = 6,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    ACTIONS(567), 1,
      aux_sym_newline_token1,
    ACTIONS(572), 1,
      sym_comment_line,
    STATE(131), 1,
      sym_newline,
    STATE(109), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(570), 17,
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
  [5625] = 2,
    ACTIONS(339), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(337), 20,
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
  [5652] = 2,
    ACTIONS(347), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(345), 20,
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
  [5679] = 2,
    ACTIONS(343), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(341), 20,
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
  [5706] = 2,
    ACTIONS(351), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(349), 20,
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
  [5733] = 8,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    ACTIONS(583), 1,
      sym_value_name,
    STATE(171), 1,
      sym_newline,
    STATE(416), 1,
      sym_field_name,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(579), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(115), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(581), 10,
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
  [5771] = 8,
    ACTIONS(587), 1,
      aux_sym_newline_token1,
    ACTIONS(595), 1,
      sym_value_name,
    STATE(171), 1,
      sym_newline,
    STATE(416), 1,
      sym_field_name,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(590), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(115), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(593), 10,
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
  [5809] = 6,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(598), 1,
      aux_sym_newline_token1,
    ACTIONS(601), 1,
      sym_indented_raw_text,
    STATE(168), 1,
      sym_newline,
    STATE(116), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(280), 13,
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
  [5842] = 6,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 1,
      aux_sym_newline_token1,
    ACTIONS(606), 1,
      sym_indented_raw_text,
    STATE(168), 1,
      sym_newline,
    STATE(125), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(518), 13,
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
  [5875] = 2,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(610), 19,
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
  [5900] = 2,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    ACTIONS(614), 19,
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
  [5925] = 2,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(618), 19,
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
  [5950] = 2,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    ACTIONS(622), 19,
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
  [5975] = 2,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    ACTIONS(626), 19,
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
  [6000] = 2,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    ACTIONS(630), 19,
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
  [6025] = 2,
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
  [6050] = 6,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 1,
      aux_sym_newline_token1,
    ACTIONS(606), 1,
      sym_indented_raw_text,
    STATE(168), 1,
      sym_newline,
    STATE(116), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(524), 13,
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
  [6083] = 2,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 19,
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
  [6108] = 2,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(638), 19,
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
  [6133] = 2,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
    ACTIONS(642), 19,
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
  [6158] = 2,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
    ACTIONS(646), 19,
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
  [6183] = 2,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    ACTIONS(650), 19,
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
  [6208] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 19,
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
  [6233] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 19,
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
  [6258] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 19,
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
  [6283] = 2,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 19,
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
  [6308] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 19,
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
  [6333] = 2,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(610), 18,
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
  [6357] = 2,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    ACTIONS(630), 18,
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
  [6381] = 2,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    ACTIONS(614), 18,
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
  [6405] = 2,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(618), 18,
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
  [6429] = 2,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    ACTIONS(622), 18,
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
  [6453] = 2,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    ACTIONS(634), 18,
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
  [6477] = 2,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    ACTIONS(626), 18,
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
  [6501] = 2,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    ACTIONS(654), 18,
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
  [6525] = 2,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
    ACTIONS(642), 18,
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
  [6549] = 2,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
    ACTIONS(658), 18,
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
  [6573] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 18,
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
  [6597] = 2,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(662), 18,
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
  [6621] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 18,
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
  [6645] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 18,
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
  [6669] = 2,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(666), 18,
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
  [6693] = 2,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 18,
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
  [6717] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 18,
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
  [6741] = 13,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(668), 1,
      sym_inline_comment,
    ACTIONS(670), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(674), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(98), 1,
      sym_line_end,
    STATE(129), 1,
      sym_block_value,
    STATE(132), 1,
      sym_newline,
    STATE(308), 1,
      sym_fence_open,
    STATE(329), 1,
      sym_block_name,
    STATE(330), 1,
      sym_block_content_inline,
    STATE(443), 1,
      sym_inline_text,
    ACTIONS(672), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(128), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [6785] = 2,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    ACTIONS(678), 16,
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
  [6807] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 16,
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
  [6829] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 16,
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
  [6851] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 16,
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
  [6873] = 13,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    ACTIONS(670), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(674), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(680), 1,
      sym_inline_comment,
    STATE(101), 1,
      sym_line_end,
    STATE(145), 1,
      sym_block_value,
    STATE(152), 1,
      sym_newline,
    STATE(309), 1,
      sym_fence_open,
    STATE(360), 1,
      sym_block_name,
    STATE(361), 1,
      sym_block_content_inline,
    STATE(443), 1,
      sym_inline_text,
    ACTIONS(672), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(144), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [6917] = 7,
    ACTIONS(682), 1,
      aux_sym_newline_token1,
    ACTIONS(685), 1,
      sym_doc_comment,
    ACTIONS(688), 1,
      sym_comment_line,
    ACTIONS(693), 1,
      sym_flow_bare_raw_text,
    STATE(235), 1,
      sym_newline,
    STATE(159), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(691), 10,
      sym_pass_keyword,
      sym_flow_do_keyword,
      sym_flow_ask_keyword,
      sym_flow_unfold_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_rank_keyword,
      sym_flow_each_keyword,
      sym_flow_fold_keyword,
      sym_flow_repeat_keyword,
  [6949] = 2,
    ACTIONS(695), 1,
      ts_builtin_sym_end,
    ACTIONS(697), 16,
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
  [6971] = 13,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    ACTIONS(668), 1,
      sym_inline_comment,
    ACTIONS(670), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(674), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(98), 1,
      sym_line_end,
    STATE(130), 1,
      sym_block_value,
    STATE(132), 1,
      sym_newline,
    STATE(308), 1,
      sym_fence_open,
    STATE(329), 1,
      sym_block_name,
    STATE(330), 1,
      sym_block_content_inline,
    STATE(443), 1,
      sym_inline_text,
    ACTIONS(672), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(128), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [7015] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 16,
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
  [7037] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 15,
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
  [7058] = 2,
    ACTIONS(341), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(343), 13,
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
  [7079] = 2,
    ACTIONS(699), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(701), 13,
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
  [7100] = 2,
    ACTIONS(703), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(705), 13,
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
  [7121] = 2,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 15,
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
  [7142] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 15,
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
  [7163] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 15,
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
  [7184] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 15,
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
  [7205] = 2,
    ACTIONS(353), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(355), 13,
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
  [7226] = 2,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(347), 13,
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
  [7247] = 2,
    ACTIONS(349), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(351), 13,
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
  [7268] = 2,
    ACTIONS(709), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(707), 13,
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
  [7288] = 2,
    ACTIONS(713), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(711), 13,
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
  [7308] = 2,
    ACTIONS(610), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(608), 13,
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
  [7328] = 2,
    ACTIONS(717), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(715), 13,
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
  [7348] = 2,
    ACTIONS(721), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(719), 13,
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
  [7368] = 2,
    ACTIONS(725), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(723), 13,
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
  [7388] = 2,
    ACTIONS(729), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(727), 13,
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
  [7408] = 2,
    ACTIONS(733), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(731), 13,
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
  [7428] = 2,
    ACTIONS(737), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(735), 13,
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
  [7448] = 2,
    ACTIONS(741), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(739), 13,
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
  [7468] = 2,
    ACTIONS(745), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(743), 13,
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
  [7488] = 2,
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
  [7508] = 2,
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
  [7528] = 2,
    ACTIONS(755), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(125), 13,
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
  [7548] = 2,
    ACTIONS(759), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(757), 13,
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
  [7568] = 2,
    ACTIONS(761), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(127), 13,
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
  [7588] = 2,
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
  [7608] = 2,
    ACTIONS(769), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(767), 13,
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
  [7628] = 2,
    ACTIONS(614), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(612), 13,
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
  [7648] = 2,
    ACTIONS(618), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(616), 13,
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
  [7668] = 2,
    ACTIONS(622), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(620), 13,
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
  [7688] = 2,
    ACTIONS(773), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(771), 13,
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
  [7708] = 2,
    ACTIONS(777), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(775), 13,
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
  [7728] = 2,
    ACTIONS(781), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(779), 13,
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
  [7748] = 2,
    ACTIONS(785), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(783), 13,
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
  [7768] = 2,
    ACTIONS(789), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(787), 13,
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
  [7788] = 2,
    ACTIONS(793), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(791), 13,
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
  [7808] = 2,
    ACTIONS(797), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(795), 13,
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
  [7828] = 2,
    ACTIONS(801), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(799), 13,
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
  [7848] = 2,
    ACTIONS(805), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(803), 13,
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
  [7868] = 2,
    ACTIONS(809), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(807), 13,
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
  [7888] = 2,
    ACTIONS(813), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(811), 13,
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
  [7908] = 2,
    ACTIONS(817), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(815), 13,
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
  [7928] = 2,
    ACTIONS(821), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(819), 13,
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
  [7948] = 2,
    ACTIONS(825), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(823), 13,
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
  [7968] = 2,
    ACTIONS(829), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(827), 13,
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
  [7988] = 2,
    ACTIONS(833), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(831), 13,
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
  [8008] = 2,
    ACTIONS(837), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(835), 13,
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
  [8028] = 2,
    ACTIONS(841), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(839), 13,
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
  [8048] = 2,
    ACTIONS(845), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(843), 13,
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
  [8068] = 2,
    ACTIONS(849), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(847), 13,
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
  [8088] = 2,
    ACTIONS(853), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(851), 13,
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
  [8108] = 2,
    ACTIONS(857), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(855), 13,
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
  [8128] = 2,
    ACTIONS(859), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(119), 13,
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
  [8148] = 2,
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
  [8168] = 2,
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
  [8188] = 2,
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
  [8208] = 2,
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
  [8228] = 2,
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
  [8248] = 2,
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
  [8268] = 2,
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
  [8288] = 2,
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
  [8308] = 2,
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
  [8328] = 2,
    ACTIONS(899), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(897), 13,
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
  [8348] = 2,
    ACTIONS(903), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(901), 13,
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
  [8368] = 2,
    ACTIONS(907), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(905), 13,
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
  [8388] = 2,
    ACTIONS(911), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(909), 13,
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
  [8408] = 2,
    ACTIONS(915), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(913), 13,
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
  [8428] = 2,
    ACTIONS(919), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(917), 13,
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
  [8448] = 2,
    ACTIONS(923), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(921), 13,
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
  [8468] = 2,
    ACTIONS(630), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(628), 13,
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
  [8488] = 2,
    ACTIONS(355), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(353), 12,
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
  [8507] = 2,
    ACTIONS(347), 2,
      sym_comment_line,
      sym_flow_bare_raw_text,
    ACTIONS(345), 12,
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
  [8526] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(494), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8548] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(512), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8570] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(521), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8592] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(432), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8614] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(350), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8636] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(475), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8658] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(311), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8680] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(488), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8702] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(522), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8724] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(454), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8746] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(448), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8768] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(489), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8790] = 5,
    ACTIONS(927), 1,
      sym_type_name,
    STATE(254), 1,
      sym_base_type,
    STATE(497), 1,
      sym_type,
    STATE(272), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(925), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8812] = 8,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    ACTIONS(929), 1,
      sym_doc_comment,
    ACTIONS(931), 1,
      sym_comment_line,
    ACTIONS(933), 1,
      sym_value_name,
    STATE(171), 1,
      sym_newline,
    STATE(221), 1,
      sym_struct_body,
    STATE(416), 1,
      sym_field_name,
    STATE(114), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [8839] = 8,
    ACTIONS(935), 1,
      aux_sym_newline_token1,
    ACTIONS(937), 1,
      sym_inline_comment,
    ACTIONS(939), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(117), 1,
      sym_line_end,
    STATE(169), 1,
      sym_newline,
    STATE(228), 1,
      sym_context_body,
    STATE(306), 1,
      sym_fence_open,
    STATE(229), 2,
      sym_block_indented,
      sym_block_fenced,
  [8865] = 8,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(945), 1,
      sym_frontmatter_delimiter,
    ACTIONS(947), 1,
      sym_fenced_raw_text,
    STATE(206), 1,
      sym_fence_close,
    STATE(280), 1,
      sym_frontmatter,
    STATE(378), 1,
      sym_newline,
    STATE(271), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8891] = 8,
    ACTIONS(935), 1,
      aux_sym_newline_token1,
    ACTIONS(937), 1,
      sym_inline_comment,
    ACTIONS(939), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(117), 1,
      sym_line_end,
    STATE(169), 1,
      sym_newline,
    STATE(231), 1,
      sym_instruct_body,
    STATE(306), 1,
      sym_fence_open,
    STATE(232), 2,
      sym_block_indented,
      sym_block_fenced,
  [8917] = 4,
    ACTIONS(951), 1,
      sym_array_suffix,
    STATE(256), 1,
      aux_sym_type_repeat1,
    STATE(274), 1,
      sym_type_suffix,
    ACTIONS(949), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8935] = 4,
    ACTIONS(955), 1,
      sym_array_suffix,
    STATE(255), 1,
      aux_sym_type_repeat1,
    STATE(274), 1,
      sym_type_suffix,
    ACTIONS(953), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8953] = 4,
    ACTIONS(951), 1,
      sym_array_suffix,
    STATE(255), 1,
      aux_sym_type_repeat1,
    STATE(274), 1,
      sym_type_suffix,
    ACTIONS(958), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8971] = 8,
    ACTIONS(939), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(960), 1,
      aux_sym_newline_token1,
    ACTIONS(962), 1,
      sym_inline_comment,
    STATE(108), 1,
      sym_line_end,
    STATE(155), 1,
      sym_newline,
    STATE(211), 1,
      sym_cap_body,
    STATE(302), 1,
      sym_fence_open,
    STATE(201), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [8997] = 8,
    ACTIONS(939), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(960), 1,
      aux_sym_newline_token1,
    ACTIONS(962), 1,
      sym_inline_comment,
    STATE(108), 1,
      sym_line_end,
    STATE(155), 1,
      sym_newline,
    STATE(205), 1,
      sym_cap_body,
    STATE(302), 1,
      sym_fence_open,
    STATE(201), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [9023] = 8,
    ACTIONS(939), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(960), 1,
      aux_sym_newline_token1,
    ACTIONS(962), 1,
      sym_inline_comment,
    STATE(108), 1,
      sym_line_end,
    STATE(155), 1,
      sym_newline,
    STATE(200), 1,
      sym_cap_body,
    STATE(302), 1,
      sym_fence_open,
    STATE(201), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [9049] = 8,
    ACTIONS(939), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(960), 1,
      aux_sym_newline_token1,
    ACTIONS(962), 1,
      sym_inline_comment,
    STATE(108), 1,
      sym_line_end,
    STATE(155), 1,
      sym_newline,
    STATE(212), 1,
      sym_cap_body,
    STATE(302), 1,
      sym_fence_open,
    STATE(201), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [9075] = 9,
    ACTIONS(964), 1,
      sym_flow_target,
    ACTIONS(966), 1,
      sym_flow_to_keyword,
    ACTIONS(968), 1,
      sym_flow_par_keyword,
    ACTIONS(970), 1,
      sym_colon,
    STATE(89), 1,
      sym_flow_inline_step_body,
    STATE(364), 1,
      sym_flow_named_parallel_head,
    STATE(384), 1,
      sym_flow_inline_output_type,
    STATE(409), 1,
      sym_flow_inline_each_head,
    STATE(411), 1,
      sym_flow_parallelism,
  [9103] = 8,
    ACTIONS(935), 1,
      aux_sym_newline_token1,
    ACTIONS(937), 1,
      sym_inline_comment,
    ACTIONS(939), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(117), 1,
      sym_line_end,
    STATE(169), 1,
      sym_newline,
    STATE(219), 1,
      sym_context_body,
    STATE(306), 1,
      sym_fence_open,
    STATE(229), 2,
      sym_block_indented,
      sym_block_fenced,
  [9129] = 8,
    ACTIONS(935), 1,
      aux_sym_newline_token1,
    ACTIONS(937), 1,
      sym_inline_comment,
    ACTIONS(939), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(117), 1,
      sym_line_end,
    STATE(169), 1,
      sym_newline,
    STATE(220), 1,
      sym_instruct_body,
    STATE(306), 1,
      sym_fence_open,
    STATE(232), 2,
      sym_block_indented,
      sym_block_fenced,
  [9155] = 8,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(945), 1,
      sym_frontmatter_delimiter,
    ACTIONS(947), 1,
      sym_fenced_raw_text,
    STATE(191), 1,
      sym_fence_close,
    STATE(273), 1,
      sym_frontmatter,
    STATE(378), 1,
      sym_newline,
    STATE(277), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9181] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(972), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    STATE(121), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(296), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9201] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    ACTIONS(976), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(137), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(296), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9221] = 1,
    ACTIONS(978), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9231] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    STATE(192), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(279), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9251] = 1,
    ACTIONS(980), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9261] = 7,
    ACTIONS(964), 1,
      sym_flow_target,
    ACTIONS(968), 1,
      sym_flow_par_keyword,
    ACTIONS(970), 1,
      sym_colon,
    STATE(84), 1,
      sym_flow_inline_step_body,
    STATE(351), 1,
      sym_flow_named_parallel_head,
    STATE(465), 1,
      sym_flow_inline_parallel_head,
    STATE(469), 1,
      sym_flow_parallelism,
  [9283] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(947), 1,
      sym_fenced_raw_text,
    STATE(215), 1,
      sym_fence_close,
    STATE(378), 1,
      sym_newline,
    STATE(294), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9303] = 1,
    ACTIONS(982), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9313] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(947), 1,
      sym_fenced_raw_text,
    STATE(207), 1,
      sym_fence_close,
    STATE(378), 1,
      sym_newline,
    STATE(278), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9333] = 1,
    ACTIONS(984), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9343] = 1,
    ACTIONS(986), 7,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_par_keyword,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9353] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(947), 1,
      sym_fenced_raw_text,
    STATE(218), 1,
      sym_fence_close,
    STATE(378), 1,
      sym_newline,
    STATE(294), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9373] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(947), 1,
      sym_fenced_raw_text,
    STATE(208), 1,
      sym_fence_close,
    STATE(378), 1,
      sym_newline,
    STATE(294), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9393] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(947), 1,
      sym_fenced_raw_text,
    STATE(216), 1,
      sym_fence_close,
    STATE(378), 1,
      sym_newline,
    STATE(294), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9413] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    STATE(234), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(296), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9433] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(947), 1,
      sym_fenced_raw_text,
    STATE(214), 1,
      sym_fence_close,
    STATE(378), 1,
      sym_newline,
    STATE(276), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9453] = 7,
    ACTIONS(988), 1,
      aux_sym_newline_token1,
    ACTIONS(990), 1,
      sym_inline_comment,
    ACTIONS(992), 1,
      aux_sym_flow_inline_text_token1,
    STATE(358), 1,
      sym_flow_inline_body,
    STATE(385), 1,
      sym_line_end,
    STATE(466), 1,
      sym_flow_inline_text,
    STATE(481), 1,
      sym_newline,
  [9475] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    STATE(176), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(287), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9495] = 7,
    ACTIONS(988), 1,
      aux_sym_newline_token1,
    ACTIONS(990), 1,
      sym_inline_comment,
    ACTIONS(992), 1,
      aux_sym_flow_inline_text_token1,
    STATE(78), 1,
      sym_flow_condition_body,
    STATE(327), 1,
      sym_flow_inline_text,
    STATE(400), 1,
      sym_line_end,
    STATE(481), 1,
      sym_newline,
  [9517] = 7,
    ACTIONS(988), 1,
      aux_sym_newline_token1,
    ACTIONS(990), 1,
      sym_inline_comment,
    ACTIONS(992), 1,
      aux_sym_flow_inline_text_token1,
    STATE(81), 1,
      sym_flow_condition_body,
    STATE(327), 1,
      sym_flow_inline_text,
    STATE(400), 1,
      sym_line_end,
    STATE(481), 1,
      sym_newline,
  [9539] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(972), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    STATE(118), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(265), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9559] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(972), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    STATE(119), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(288), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9579] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(943), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    STATE(194), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(296), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9599] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(972), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    STATE(123), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(296), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9619] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    ACTIONS(976), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(136), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(291), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9639] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    ACTIONS(976), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(138), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(266), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9659] = 6,
    ACTIONS(941), 1,
      aux_sym_newline_token1,
    ACTIONS(974), 1,
      sym_fenced_raw_text,
    ACTIONS(976), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(140), 1,
      sym_fence_close,
    STATE(394), 1,
      sym_newline,
    STATE(296), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9679] = 7,
    ACTIONS(964), 1,
      sym_flow_target,
    ACTIONS(968), 1,
      sym_flow_par_keyword,
    ACTIONS(970), 1,
      sym_colon,
    STATE(85), 1,
      sym_flow_inline_step_body,
    STATE(353), 1,
      sym_flow_named_parallel_head,
    STATE(469), 1,
      sym_flow_parallelism,
    STATE(470), 1,
      sym_flow_inline_parallel_head,
  [9701] = 6,
    ACTIONS(994), 1,
      sym_arrow,
    ACTIONS(996), 1,
      sym_colon,
    ACTIONS(998), 1,
      sym_lparen,
    ACTIONS(1000), 1,
      sym_value_name,
    STATE(363), 1,
      sym_flow_name,
    STATE(403), 1,
      sym_params,
  [9720] = 5,
    ACTIONS(1002), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1007), 1,
      sym_fenced_raw_text,
    STATE(378), 1,
      sym_newline,
    STATE(294), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9737] = 5,
    ACTIONS(1010), 1,
      sym_frontmatter_comment,
    ACTIONS(1012), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1014), 1,
      sym_value_name,
    STATE(491), 1,
      sym_property_key,
    STATE(299), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [9754] = 5,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    ACTIONS(1019), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1021), 1,
      sym_fenced_raw_text,
    STATE(394), 1,
      sym_newline,
    STATE(296), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9771] = 6,
    ACTIONS(966), 1,
      sym_flow_to_keyword,
    ACTIONS(970), 1,
      sym_colon,
    ACTIONS(1024), 1,
      sym_flow_target,
    STATE(82), 1,
      sym_flow_inline_step_body,
    STATE(344), 1,
      sym_flow_target_list,
    STATE(444), 1,
      sym_flow_inline_output_type,
  [9790] = 6,
    ACTIONS(998), 1,
      sym_lparen,
    ACTIONS(1026), 1,
      sym_arrow,
    ACTIONS(1028), 1,
      sym_colon,
    ACTIONS(1030), 1,
      sym_value_name,
    STATE(328), 1,
      sym_thunk_name,
    STATE(441), 1,
      sym_params,
  [9809] = 5,
    ACTIONS(1014), 1,
      sym_value_name,
    ACTIONS(1032), 1,
      sym_frontmatter_comment,
    ACTIONS(1034), 1,
      sym_frontmatter_delimiter,
    STATE(491), 1,
      sym_property_key,
    STATE(301), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [9826] = 6,
    ACTIONS(970), 1,
      sym_colon,
    ACTIONS(1036), 1,
      sym_flow_target,
    ACTIONS(1038), 1,
      sym_integer_literal,
    STATE(88), 1,
      sym_flow_inline_step_body,
    STATE(406), 1,
      sym_flow_inline_rank_head,
    STATE(492), 1,
      sym_flow_rank_limit,
  [9845] = 5,
    ACTIONS(1040), 1,
      sym_frontmatter_comment,
    ACTIONS(1043), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1045), 1,
      sym_value_name,
    STATE(491), 1,
      sym_property_key,
    STATE(301), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [9862] = 5,
    ACTIONS(1048), 1,
      aux_sym_newline_token1,
    ACTIONS(1050), 1,
      sym_inline_comment,
    ACTIONS(1052), 1,
      sym_block_language,
    STATE(264), 1,
      sym_line_end,
    STATE(348), 1,
      sym_newline,
  [9878] = 2,
    STATE(389), 1,
      sym_cap_kind,
    ACTIONS(1054), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [9888] = 5,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    ACTIONS(1058), 1,
      sym_flow_until_keyword,
    STATE(73), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9904] = 5,
    ACTIONS(966), 1,
      sym_flow_to_keyword,
    ACTIONS(970), 1,
      sym_colon,
    ACTIONS(1060), 1,
      sym_flow_target,
    STATE(83), 1,
      sym_flow_inline_step_body,
    STATE(450), 1,
      sym_flow_inline_output_type,
  [9920] = 5,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    ACTIONS(1064), 1,
      sym_inline_comment,
    ACTIONS(1066), 1,
      sym_block_language,
    STATE(282), 1,
      sym_line_end,
    STATE(397), 1,
      sym_newline,
  [9936] = 5,
    ACTIONS(966), 1,
      sym_flow_to_keyword,
    ACTIONS(970), 1,
      sym_colon,
    ACTIONS(1068), 1,
      sym_flow_target,
    STATE(90), 1,
      sym_flow_inline_step_body,
    STATE(413), 1,
      sym_flow_inline_output_type,
  [9952] = 5,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    ACTIONS(1064), 1,
      sym_inline_comment,
    ACTIONS(1070), 1,
      sym_block_language,
    STATE(285), 1,
      sym_line_end,
    STATE(397), 1,
      sym_newline,
  [9968] = 5,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    ACTIONS(1064), 1,
      sym_inline_comment,
    ACTIONS(1072), 1,
      sym_block_language,
    STATE(289), 1,
      sym_line_end,
    STATE(397), 1,
      sym_newline,
  [9984] = 4,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_inline_comment,
    STATE(110), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [9997] = 4,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    ACTIONS(1078), 1,
      sym_inline_comment,
    STATE(165), 1,
      sym_line_end,
    STATE(173), 1,
      sym_newline,
  [10010] = 4,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    ACTIONS(1082), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(48), 1,
      sym_newline,
  [10023] = 4,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [10036] = 4,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [10049] = 3,
    ACTIONS(1086), 1,
      sym_comma,
    STATE(356), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1084), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10060] = 4,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    ACTIONS(1082), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(48), 1,
      sym_newline,
  [10073] = 3,
    ACTIONS(1086), 1,
      sym_comma,
    STATE(315), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1088), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10084] = 4,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [10097] = 4,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    ACTIONS(1082), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(48), 1,
      sym_newline,
  [10110] = 4,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    ACTIONS(1082), 1,
      sym_inline_comment,
    STATE(45), 1,
      sym_line_end,
    STATE(48), 1,
      sym_newline,
  [10123] = 4,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [10136] = 4,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    ACTIONS(1082), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(48), 1,
      sym_newline,
  [10149] = 3,
    ACTIONS(1092), 1,
      sym_comma,
    STATE(323), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1090), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10160] = 4,
    ACTIONS(1095), 1,
      sym_rparen,
    ACTIONS(1097), 1,
      sym_value_name,
    STATE(387), 1,
      sym_param,
    STATE(447), 1,
      sym_param_name,
  [10173] = 4,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [10186] = 4,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [10199] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(80), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10212] = 4,
    ACTIONS(998), 1,
      sym_lparen,
    ACTIONS(1099), 1,
      sym_arrow,
    ACTIONS(1101), 1,
      sym_colon,
    STATE(463), 1,
      sym_params,
  [10225] = 4,
    ACTIONS(1103), 1,
      aux_sym_newline_token1,
    ACTIONS(1105), 1,
      sym_inline_comment,
    STATE(122), 1,
      sym_line_end,
    STATE(132), 1,
      sym_newline,
  [10238] = 4,
    ACTIONS(1103), 1,
      aux_sym_newline_token1,
    ACTIONS(1105), 1,
      sym_inline_comment,
    STATE(124), 1,
      sym_line_end,
    STATE(132), 1,
      sym_newline,
  [10251] = 4,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_inline_comment,
    STATE(16), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [10264] = 4,
    ACTIONS(960), 1,
      aux_sym_newline_token1,
    ACTIONS(962), 1,
      sym_inline_comment,
    STATE(154), 1,
      sym_line_end,
    STATE(155), 1,
      sym_newline,
  [10277] = 4,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    ACTIONS(1082), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(48), 1,
      sym_newline,
  [10290] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(86), 1,
      sym_newline,
    STATE(174), 1,
      sym_line_end,
  [10303] = 4,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    ACTIONS(1082), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(48), 1,
      sym_newline,
  [10316] = 4,
    ACTIONS(1107), 1,
      aux_sym_newline_token1,
    ACTIONS(1109), 1,
      sym_inline_comment,
    STATE(250), 1,
      sym_line_end,
    STATE(341), 1,
      sym_newline,
  [10329] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(86), 1,
      sym_newline,
    STATE(222), 1,
      sym_line_end,
  [10342] = 3,
    ACTIONS(1113), 1,
      sym_comma,
    STATE(357), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1111), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10353] = 2,
    ACTIONS(347), 1,
      sym_comment_line,
    ACTIONS(345), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [10362] = 4,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    ACTIONS(1076), 1,
      sym_inline_comment,
    STATE(19), 1,
      sym_line_end,
    STATE(113), 1,
      sym_newline,
  [10375] = 2,
    ACTIONS(351), 1,
      sym_comment_line,
    ACTIONS(349), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [10384] = 1,
    ACTIONS(1115), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_target,
      sym_colon,
  [10391] = 4,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    ACTIONS(1082), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(48), 1,
      sym_newline,
  [10404] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(59), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10417] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(60), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10430] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(61), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10443] = 3,
    ACTIONS(1119), 1,
      sym_flow_par_keyword,
    STATE(405), 1,
      sym_flow_parallelism,
    ACTIONS(1117), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10454] = 1,
    ACTIONS(351), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [10461] = 1,
    ACTIONS(343), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [10468] = 4,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    ACTIONS(1078), 1,
      sym_inline_comment,
    STATE(166), 1,
      sym_line_end,
    STATE(173), 1,
      sym_newline,
  [10481] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(64), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10494] = 4,
    ACTIONS(1048), 1,
      aux_sym_newline_token1,
    ACTIONS(1050), 1,
      sym_inline_comment,
    STATE(252), 1,
      sym_line_end,
    STATE(348), 1,
      sym_newline,
  [10507] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(66), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10520] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(67), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10533] = 1,
    ACTIONS(347), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [10540] = 3,
    ACTIONS(1123), 1,
      sym_comma,
    STATE(356), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1121), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10551] = 3,
    ACTIONS(1113), 1,
      sym_comma,
    STATE(323), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1126), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10562] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(77), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10575] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(71), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10588] = 4,
    ACTIONS(1128), 1,
      aux_sym_newline_token1,
    ACTIONS(1130), 1,
      sym_inline_comment,
    STATE(142), 1,
      sym_line_end,
    STATE(152), 1,
      sym_newline,
  [10601] = 4,
    ACTIONS(1128), 1,
      aux_sym_newline_token1,
    ACTIONS(1130), 1,
      sym_inline_comment,
    STATE(141), 1,
      sym_line_end,
    STATE(152), 1,
      sym_newline,
  [10614] = 4,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    ACTIONS(1064), 1,
      sym_inline_comment,
    STATE(268), 1,
      sym_line_end,
    STATE(397), 1,
      sym_newline,
  [10627] = 4,
    ACTIONS(998), 1,
      sym_lparen,
    ACTIONS(1132), 1,
      sym_arrow,
    ACTIONS(1134), 1,
      sym_colon,
    STATE(412), 1,
      sym_params,
  [10640] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(70), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [10653] = 2,
    STATE(422), 1,
      sym_directive_op,
    ACTIONS(1136), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10662] = 4,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    ACTIONS(1064), 1,
      sym_inline_comment,
    STATE(286), 1,
      sym_line_end,
    STATE(397), 1,
      sym_newline,
  [10675] = 4,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    ACTIONS(1082), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(48), 1,
      sym_newline,
  [10688] = 4,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    ACTIONS(1064), 1,
      sym_inline_comment,
    STATE(290), 1,
      sym_line_end,
    STATE(397), 1,
      sym_newline,
  [10701] = 2,
    STATE(467), 1,
      sym_directive_op,
    ACTIONS(1136), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10710] = 2,
    ACTIONS(343), 1,
      sym_comment_line,
    ACTIONS(341), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [10719] = 3,
    ACTIONS(1138), 1,
      aux_sym_flow_inline_text_token1,
    STATE(408), 1,
      sym_property_value,
    STATE(440), 1,
      sym_inline_text,
  [10729] = 3,
    ACTIONS(1097), 1,
      sym_value_name,
    STATE(428), 1,
      sym_param,
    STATE(447), 1,
      sym_param_name,
  [10739] = 1,
    ACTIONS(1140), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [10745] = 1,
    ACTIONS(1142), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [10751] = 1,
    ACTIONS(1144), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [10757] = 1,
    ACTIONS(1146), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10763] = 1,
    ACTIONS(1148), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10769] = 1,
    ACTIONS(1150), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10775] = 1,
    ACTIONS(1121), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [10781] = 1,
    ACTIONS(1152), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_until_keyword,
  [10787] = 3,
    ACTIONS(1154), 1,
      sym_colon,
    ACTIONS(1156), 1,
      sym_value_name,
    STATE(472), 1,
      sym_context_name,
  [10797] = 1,
    ACTIONS(1158), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10803] = 1,
    ACTIONS(345), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [10809] = 3,
    ACTIONS(1119), 1,
      sym_flow_par_keyword,
    ACTIONS(1160), 1,
      sym_colon,
    STATE(517), 1,
      sym_flow_parallelism,
  [10819] = 3,
    ACTIONS(1162), 1,
      sym_indented_raw_text,
    STATE(38), 1,
      sym_block_indented_content_line,
    STATE(76), 1,
      sym_block_indented_implicit,
  [10829] = 1,
    ACTIONS(1164), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [10835] = 3,
    ACTIONS(1166), 1,
      sym_rparen,
    ACTIONS(1168), 1,
      sym_comma,
    STATE(391), 1,
      aux_sym_params_repeat1,
  [10845] = 1,
    ACTIONS(1170), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [10851] = 3,
    ACTIONS(1172), 1,
      sym_cap_uri,
    ACTIONS(1174), 1,
      sym_cap_shorthand,
    STATE(334), 1,
      sym_cap_ref,
  [10861] = 3,
    ACTIONS(1176), 1,
      sym_rparen,
    ACTIONS(1178), 1,
      sym_comma,
    STATE(390), 1,
      aux_sym_params_repeat1,
  [10871] = 3,
    ACTIONS(1168), 1,
      sym_comma,
    ACTIONS(1181), 1,
      sym_rparen,
    STATE(390), 1,
      aux_sym_params_repeat1,
  [10881] = 3,
    ACTIONS(1183), 1,
      sym_integer_literal,
    ACTIONS(1185), 1,
      sym_flow_until_keyword,
    STATE(304), 1,
      sym_flow_repeat_count,
  [10891] = 1,
    ACTIONS(1187), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10897] = 1,
    ACTIONS(1189), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10903] = 1,
    ACTIONS(1191), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10909] = 3,
    ACTIONS(1138), 1,
      aux_sym_flow_inline_text_token1,
    STATE(332), 1,
      sym_property_value,
    STATE(440), 1,
      sym_inline_text,
  [10919] = 1,
    ACTIONS(351), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10925] = 1,
    ACTIONS(343), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10931] = 1,
    ACTIONS(347), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10937] = 3,
    ACTIONS(1162), 1,
      sym_indented_raw_text,
    STATE(38), 1,
      sym_block_indented_content_line,
    STATE(79), 1,
      sym_block_indented_implicit,
  [10947] = 3,
    ACTIONS(1193), 1,
      sym_colon,
    ACTIONS(1195), 1,
      sym_value_name,
    STATE(485), 1,
      sym_instruct_name,
  [10957] = 2,
    ACTIONS(1197), 1,
      aux_sym_newline_token1,
    STATE(482), 1,
      sym_newline,
  [10964] = 2,
    ACTIONS(1199), 1,
      sym_arrow,
    ACTIONS(1201), 1,
      sym_colon,
  [10971] = 2,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    STATE(376), 1,
      sym_newline,
  [10978] = 1,
    ACTIONS(1203), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10983] = 2,
    ACTIONS(970), 1,
      sym_colon,
    STATE(68), 1,
      sym_flow_inline_step_body,
  [10990] = 2,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    STATE(382), 1,
      sym_newline,
  [10997] = 2,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    STATE(386), 1,
      sym_newline,
  [11004] = 2,
    ACTIONS(970), 1,
      sym_colon,
    STATE(69), 1,
      sym_flow_inline_step_body,
  [11011] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(87), 1,
      sym_newline,
  [11018] = 2,
    ACTIONS(1160), 1,
      sym_colon,
    ACTIONS(1207), 1,
      sym_flow_target,
  [11025] = 2,
    ACTIONS(1209), 1,
      sym_arrow,
    ACTIONS(1211), 1,
      sym_colon,
  [11032] = 2,
    ACTIONS(970), 1,
      sym_colon,
    STATE(72), 1,
      sym_flow_inline_step_body,
  [11039] = 1,
    ACTIONS(1213), 2,
      sym_optional_marker,
      sym_colon,
  [11044] = 1,
    ACTIONS(1215), 2,
      sym_arrow,
      sym_colon,
  [11049] = 2,
    ACTIONS(1217), 1,
      sym_optional_marker,
    ACTIONS(1219), 1,
      sym_colon,
  [11056] = 2,
    ACTIONS(1205), 1,
      aux_sym_newline_token1,
    STATE(295), 1,
      sym_newline,
  [11063] = 2,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    STATE(377), 1,
      sym_newline,
  [11070] = 1,
    ACTIONS(1221), 2,
      anon_sym_EQ,
      sym_colon,
  [11075] = 2,
    ACTIONS(960), 1,
      aux_sym_newline_token1,
    STATE(160), 1,
      sym_newline,
  [11082] = 2,
    ACTIONS(1223), 1,
      anon_sym_EQ,
    STATE(396), 1,
      sym_assign_operator,
  [11089] = 2,
    ACTIONS(1225), 1,
      sym_bare_value,
    STATE(320), 1,
      sym_directive_csv,
  [11096] = 2,
    ACTIONS(1227), 1,
      sym_cap_uri,
    ACTIONS(1229), 1,
      sym_cap_shorthand,
  [11103] = 1,
    ACTIONS(1231), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11108] = 1,
    ACTIONS(1233), 2,
      sym_colon,
      sym_value_name,
  [11113] = 2,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    STATE(395), 1,
      sym_newline,
  [11120] = 1,
    ACTIONS(1235), 2,
      sym_colon,
      sym_value_name,
  [11125] = 1,
    ACTIONS(1237), 2,
      sym_rparen,
      sym_comma,
  [11130] = 1,
    ACTIONS(1239), 2,
      sym_arrow,
      sym_colon,
  [11135] = 2,
    ACTIONS(1241), 1,
      sym_type_name,
    STATE(509), 1,
      sym_struct_name,
  [11142] = 2,
    ACTIONS(1080), 1,
      aux_sym_newline_token1,
    STATE(46), 1,
      sym_newline,
  [11149] = 1,
    ACTIONS(1243), 2,
      sym_rparen,
      sym_comma,
  [11154] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(91), 1,
      sym_newline,
  [11161] = 2,
    ACTIONS(1245), 1,
      sym_value_name,
    STATE(499), 1,
      sym_cap_name,
  [11168] = 1,
    ACTIONS(1247), 2,
      sym_arrow,
      sym_colon,
  [11173] = 2,
    ACTIONS(1249), 1,
      sym_flow_bare_raw_text,
    STATE(92), 1,
      sym_flow_bare_content_line,
  [11180] = 1,
    ACTIONS(1251), 2,
      sym_optional_marker,
      sym_colon,
  [11185] = 1,
    ACTIONS(1253), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11190] = 1,
    ACTIONS(1255), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11195] = 1,
    ACTIONS(1257), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11200] = 2,
    ACTIONS(1259), 1,
      sym_arrow,
    ACTIONS(1261), 1,
      sym_colon,
  [11207] = 2,
    ACTIONS(1128), 1,
      aux_sym_newline_token1,
    STATE(151), 1,
      sym_newline,
  [11214] = 1,
    ACTIONS(1263), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11219] = 2,
    ACTIONS(970), 1,
      sym_colon,
    STATE(58), 1,
      sym_flow_inline_step_body,
  [11226] = 2,
    ACTIONS(1074), 1,
      aux_sym_newline_token1,
    STATE(112), 1,
      sym_newline,
  [11233] = 2,
    ACTIONS(935), 1,
      aux_sym_newline_token1,
    STATE(167), 1,
      sym_newline,
  [11240] = 2,
    ACTIONS(1265), 1,
      sym_optional_marker,
    ACTIONS(1267), 1,
      sym_colon,
  [11247] = 1,
    ACTIONS(1269), 2,
      sym_rparen,
      sym_comma,
  [11252] = 2,
    ACTIONS(1245), 1,
      sym_value_name,
    STATE(516), 1,
      sym_cap_name,
  [11259] = 2,
    ACTIONS(970), 1,
      sym_colon,
    STATE(62), 1,
      sym_flow_inline_step_body,
  [11266] = 2,
    ACTIONS(1245), 1,
      sym_value_name,
    STATE(484), 1,
      sym_cap_name,
  [11273] = 2,
    ACTIONS(935), 1,
      aux_sym_newline_token1,
    STATE(170), 1,
      sym_newline,
  [11280] = 2,
    ACTIONS(1103), 1,
      aux_sym_newline_token1,
    STATE(126), 1,
      sym_newline,
  [11287] = 1,
    ACTIONS(1271), 2,
      sym_flow_par_keyword,
      sym_colon,
  [11292] = 1,
    ACTIONS(1273), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11297] = 2,
    ACTIONS(1107), 1,
      aux_sym_newline_token1,
    STATE(370), 1,
      sym_newline,
  [11304] = 2,
    ACTIONS(1275), 1,
      aux_sym_newline_token1,
    STATE(52), 1,
      sym_newline,
  [11311] = 2,
    ACTIONS(960), 1,
      aux_sym_newline_token1,
    STATE(162), 1,
      sym_newline,
  [11318] = 2,
    ACTIONS(1062), 1,
      aux_sym_newline_token1,
    STATE(398), 1,
      sym_newline,
  [11325] = 2,
    ACTIONS(1048), 1,
      aux_sym_newline_token1,
    STATE(349), 1,
      sym_newline,
  [11332] = 2,
    ACTIONS(1103), 1,
      aux_sym_newline_token1,
    STATE(133), 1,
      sym_newline,
  [11339] = 2,
    ACTIONS(1128), 1,
      aux_sym_newline_token1,
    STATE(149), 1,
      sym_newline,
  [11346] = 2,
    ACTIONS(1277), 1,
      sym_arrow,
    ACTIONS(1279), 1,
      sym_colon,
  [11353] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(164), 1,
      sym_newline,
  [11360] = 2,
    ACTIONS(970), 1,
      sym_colon,
    STATE(63), 1,
      sym_flow_inline_step_body,
  [11367] = 1,
    ACTIONS(1281), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11372] = 2,
    ACTIONS(1225), 1,
      sym_bare_value,
    STATE(310), 1,
      sym_directive_csv,
  [11379] = 2,
    ACTIONS(1245), 1,
      sym_value_name,
    STATE(496), 1,
      sym_cap_name,
  [11386] = 2,
    ACTIONS(1207), 1,
      sym_flow_target,
    ACTIONS(1283), 1,
      sym_colon,
  [11393] = 2,
    ACTIONS(970), 1,
      sym_colon,
    STATE(65), 1,
      sym_flow_inline_step_body,
  [11400] = 1,
    ACTIONS(1285), 1,
      aux_sym_newline_token1,
  [11404] = 1,
    ACTIONS(1287), 1,
      sym_colon,
  [11408] = 1,
    ACTIONS(353), 1,
      sym_flow_bare_raw_text,
  [11412] = 1,
    ACTIONS(1289), 1,
      aux_sym_flow_inline_text_token1,
  [11416] = 1,
    ACTIONS(1291), 1,
      sym_colon,
  [11420] = 1,
    ACTIONS(1293), 1,
      sym_colon,
  [11424] = 1,
    ACTIONS(1295), 1,
      sym_value_name,
  [11428] = 1,
    ACTIONS(1297), 1,
      sym_colon,
  [11432] = 1,
    ACTIONS(1299), 1,
      sym_colon,
  [11436] = 1,
    ACTIONS(1301), 1,
      sym_colon,
  [11440] = 1,
    ACTIONS(349), 1,
      sym_indented_raw_text,
  [11444] = 1,
    ACTIONS(341), 1,
      sym_indented_raw_text,
  [11448] = 1,
    ACTIONS(1303), 1,
      sym_colon,
  [11452] = 1,
    ACTIONS(1305), 1,
      sym_colon,
  [11456] = 1,
    ACTIONS(1307), 1,
      sym_colon,
  [11460] = 1,
    ACTIONS(345), 1,
      sym_indented_raw_text,
  [11464] = 1,
    ACTIONS(345), 1,
      sym_flow_bare_raw_text,
  [11468] = 1,
    ACTIONS(1309), 1,
      sym_colon,
  [11472] = 1,
    ACTIONS(1311), 1,
      sym_colon,
  [11476] = 1,
    ACTIONS(1313), 1,
      sym_bare_value,
  [11480] = 1,
    ACTIONS(1315), 1,
      sym_colon,
  [11484] = 1,
    ACTIONS(1317), 1,
      sym_colon,
  [11488] = 1,
    ACTIONS(1319), 1,
      sym_value_name,
  [11492] = 1,
    ACTIONS(1321), 1,
      sym_colon,
  [11496] = 1,
    ACTIONS(1323), 1,
      sym_colon,
  [11500] = 1,
    ACTIONS(1325), 1,
      sym_colon,
  [11504] = 1,
    ACTIONS(1327), 1,
      sym_colon,
  [11508] = 1,
    ACTIONS(1329), 1,
      sym_colon,
  [11512] = 1,
    ACTIONS(1331), 1,
      sym_colon,
  [11516] = 1,
    ACTIONS(1333), 1,
      sym_colon,
  [11520] = 1,
    ACTIONS(1335), 1,
      sym_flow_target,
  [11524] = 1,
    ACTIONS(1337), 1,
      sym_flow_target,
  [11528] = 1,
    ACTIONS(1339), 1,
      sym_integer_literal,
  [11532] = 1,
    ACTIONS(1341), 1,
      aux_sym_newline_token1,
  [11536] = 1,
    ACTIONS(1343), 1,
      aux_sym_newline_token1,
  [11540] = 1,
    ACTIONS(1345), 1,
      sym_colon,
  [11544] = 1,
    ACTIONS(1347), 1,
      sym_colon,
  [11548] = 1,
    ACTIONS(1349), 1,
      sym_bare_value,
  [11552] = 1,
    ACTIONS(1351), 1,
      sym_colon,
  [11556] = 1,
    ACTIONS(1353), 1,
      sym_colon,
  [11560] = 1,
    ACTIONS(1355), 1,
      sym_colon,
  [11564] = 1,
    ACTIONS(1357), 1,
      sym_colon,
  [11568] = 1,
    ACTIONS(1359), 1,
      ts_builtin_sym_end,
  [11572] = 1,
    ACTIONS(1361), 1,
      sym_colon,
  [11576] = 1,
    ACTIONS(1363), 1,
      sym_colon,
  [11580] = 1,
    ACTIONS(1365), 1,
      sym_colon,
  [11584] = 1,
    ACTIONS(1367), 1,
      sym_colon,
  [11588] = 1,
    ACTIONS(1369), 1,
      sym_value_name,
  [11592] = 1,
    ACTIONS(1371), 1,
      sym_colon,
  [11596] = 1,
    ACTIONS(1373), 1,
      sym_value_name,
  [11600] = 1,
    ACTIONS(1375), 1,
      sym_colon,
  [11604] = 1,
    ACTIONS(1377), 1,
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
  [SMALL_STATE(13)] = 1082,
  [SMALL_STATE(14)] = 1182,
  [SMALL_STATE(15)] = 1282,
  [SMALL_STATE(16)] = 1382,
  [SMALL_STATE(17)] = 1482,
  [SMALL_STATE(18)] = 1582,
  [SMALL_STATE(19)] = 1682,
  [SMALL_STATE(20)] = 1782,
  [SMALL_STATE(21)] = 1869,
  [SMALL_STATE(22)] = 1966,
  [SMALL_STATE(23)] = 2053,
  [SMALL_STATE(24)] = 2140,
  [SMALL_STATE(25)] = 2227,
  [SMALL_STATE(26)] = 2309,
  [SMALL_STATE(27)] = 2391,
  [SMALL_STATE(28)] = 2473,
  [SMALL_STATE(29)] = 2543,
  [SMALL_STATE(30)] = 2613,
  [SMALL_STATE(31)] = 2683,
  [SMALL_STATE(32)] = 2753,
  [SMALL_STATE(33)] = 2823,
  [SMALL_STATE(34)] = 2873,
  [SMALL_STATE(35)] = 2943,
  [SMALL_STATE(36)] = 3020,
  [SMALL_STATE(37)] = 3064,
  [SMALL_STATE(38)] = 3108,
  [SMALL_STATE(39)] = 3152,
  [SMALL_STATE(40)] = 3197,
  [SMALL_STATE(41)] = 3242,
  [SMALL_STATE(42)] = 3287,
  [SMALL_STATE(43)] = 3343,
  [SMALL_STATE(44)] = 3399,
  [SMALL_STATE(45)] = 3455,
  [SMALL_STATE(46)] = 3488,
  [SMALL_STATE(47)] = 3521,
  [SMALL_STATE(48)] = 3554,
  [SMALL_STATE(49)] = 3587,
  [SMALL_STATE(50)] = 3620,
  [SMALL_STATE(51)] = 3656,
  [SMALL_STATE(52)] = 3692,
  [SMALL_STATE(53)] = 3724,
  [SMALL_STATE(54)] = 3756,
  [SMALL_STATE(55)] = 3788,
  [SMALL_STATE(56)] = 3819,
  [SMALL_STATE(57)] = 3850,
  [SMALL_STATE(58)] = 3881,
  [SMALL_STATE(59)] = 3912,
  [SMALL_STATE(60)] = 3943,
  [SMALL_STATE(61)] = 3974,
  [SMALL_STATE(62)] = 4005,
  [SMALL_STATE(63)] = 4036,
  [SMALL_STATE(64)] = 4067,
  [SMALL_STATE(65)] = 4098,
  [SMALL_STATE(66)] = 4129,
  [SMALL_STATE(67)] = 4160,
  [SMALL_STATE(68)] = 4191,
  [SMALL_STATE(69)] = 4222,
  [SMALL_STATE(70)] = 4253,
  [SMALL_STATE(71)] = 4284,
  [SMALL_STATE(72)] = 4315,
  [SMALL_STATE(73)] = 4346,
  [SMALL_STATE(74)] = 4377,
  [SMALL_STATE(75)] = 4408,
  [SMALL_STATE(76)] = 4439,
  [SMALL_STATE(77)] = 4470,
  [SMALL_STATE(78)] = 4501,
  [SMALL_STATE(79)] = 4532,
  [SMALL_STATE(80)] = 4563,
  [SMALL_STATE(81)] = 4594,
  [SMALL_STATE(82)] = 4625,
  [SMALL_STATE(83)] = 4656,
  [SMALL_STATE(84)] = 4687,
  [SMALL_STATE(85)] = 4718,
  [SMALL_STATE(86)] = 4749,
  [SMALL_STATE(87)] = 4780,
  [SMALL_STATE(88)] = 4811,
  [SMALL_STATE(89)] = 4842,
  [SMALL_STATE(90)] = 4873,
  [SMALL_STATE(91)] = 4904,
  [SMALL_STATE(92)] = 4935,
  [SMALL_STATE(93)] = 4966,
  [SMALL_STATE(94)] = 5010,
  [SMALL_STATE(95)] = 5054,
  [SMALL_STATE(96)] = 5090,
  [SMALL_STATE(97)] = 5134,
  [SMALL_STATE(98)] = 5178,
  [SMALL_STATE(99)] = 5215,
  [SMALL_STATE(100)] = 5252,
  [SMALL_STATE(101)] = 5289,
  [SMALL_STATE(102)] = 5325,
  [SMALL_STATE(103)] = 5361,
  [SMALL_STATE(104)] = 5401,
  [SMALL_STATE(105)] = 5437,
  [SMALL_STATE(106)] = 5473,
  [SMALL_STATE(107)] = 5509,
  [SMALL_STATE(108)] = 5549,
  [SMALL_STATE(109)] = 5589,
  [SMALL_STATE(110)] = 5625,
  [SMALL_STATE(111)] = 5652,
  [SMALL_STATE(112)] = 5679,
  [SMALL_STATE(113)] = 5706,
  [SMALL_STATE(114)] = 5733,
  [SMALL_STATE(115)] = 5771,
  [SMALL_STATE(116)] = 5809,
  [SMALL_STATE(117)] = 5842,
  [SMALL_STATE(118)] = 5875,
  [SMALL_STATE(119)] = 5900,
  [SMALL_STATE(120)] = 5925,
  [SMALL_STATE(121)] = 5950,
  [SMALL_STATE(122)] = 5975,
  [SMALL_STATE(123)] = 6000,
  [SMALL_STATE(124)] = 6025,
  [SMALL_STATE(125)] = 6050,
  [SMALL_STATE(126)] = 6083,
  [SMALL_STATE(127)] = 6108,
  [SMALL_STATE(128)] = 6133,
  [SMALL_STATE(129)] = 6158,
  [SMALL_STATE(130)] = 6183,
  [SMALL_STATE(131)] = 6208,
  [SMALL_STATE(132)] = 6233,
  [SMALL_STATE(133)] = 6258,
  [SMALL_STATE(134)] = 6283,
  [SMALL_STATE(135)] = 6308,
  [SMALL_STATE(136)] = 6333,
  [SMALL_STATE(137)] = 6357,
  [SMALL_STATE(138)] = 6381,
  [SMALL_STATE(139)] = 6405,
  [SMALL_STATE(140)] = 6429,
  [SMALL_STATE(141)] = 6453,
  [SMALL_STATE(142)] = 6477,
  [SMALL_STATE(143)] = 6501,
  [SMALL_STATE(144)] = 6525,
  [SMALL_STATE(145)] = 6549,
  [SMALL_STATE(146)] = 6573,
  [SMALL_STATE(147)] = 6597,
  [SMALL_STATE(148)] = 6621,
  [SMALL_STATE(149)] = 6645,
  [SMALL_STATE(150)] = 6669,
  [SMALL_STATE(151)] = 6693,
  [SMALL_STATE(152)] = 6717,
  [SMALL_STATE(153)] = 6741,
  [SMALL_STATE(154)] = 6785,
  [SMALL_STATE(155)] = 6807,
  [SMALL_STATE(156)] = 6829,
  [SMALL_STATE(157)] = 6851,
  [SMALL_STATE(158)] = 6873,
  [SMALL_STATE(159)] = 6917,
  [SMALL_STATE(160)] = 6949,
  [SMALL_STATE(161)] = 6971,
  [SMALL_STATE(162)] = 7015,
  [SMALL_STATE(163)] = 7037,
  [SMALL_STATE(164)] = 7058,
  [SMALL_STATE(165)] = 7079,
  [SMALL_STATE(166)] = 7100,
  [SMALL_STATE(167)] = 7121,
  [SMALL_STATE(168)] = 7142,
  [SMALL_STATE(169)] = 7163,
  [SMALL_STATE(170)] = 7184,
  [SMALL_STATE(171)] = 7205,
  [SMALL_STATE(172)] = 7226,
  [SMALL_STATE(173)] = 7247,
  [SMALL_STATE(174)] = 7268,
  [SMALL_STATE(175)] = 7288,
  [SMALL_STATE(176)] = 7308,
  [SMALL_STATE(177)] = 7328,
  [SMALL_STATE(178)] = 7348,
  [SMALL_STATE(179)] = 7368,
  [SMALL_STATE(180)] = 7388,
  [SMALL_STATE(181)] = 7408,
  [SMALL_STATE(182)] = 7428,
  [SMALL_STATE(183)] = 7448,
  [SMALL_STATE(184)] = 7468,
  [SMALL_STATE(185)] = 7488,
  [SMALL_STATE(186)] = 7508,
  [SMALL_STATE(187)] = 7528,
  [SMALL_STATE(188)] = 7548,
  [SMALL_STATE(189)] = 7568,
  [SMALL_STATE(190)] = 7588,
  [SMALL_STATE(191)] = 7608,
  [SMALL_STATE(192)] = 7628,
  [SMALL_STATE(193)] = 7648,
  [SMALL_STATE(194)] = 7668,
  [SMALL_STATE(195)] = 7688,
  [SMALL_STATE(196)] = 7708,
  [SMALL_STATE(197)] = 7728,
  [SMALL_STATE(198)] = 7748,
  [SMALL_STATE(199)] = 7768,
  [SMALL_STATE(200)] = 7788,
  [SMALL_STATE(201)] = 7808,
  [SMALL_STATE(202)] = 7828,
  [SMALL_STATE(203)] = 7848,
  [SMALL_STATE(204)] = 7868,
  [SMALL_STATE(205)] = 7888,
  [SMALL_STATE(206)] = 7908,
  [SMALL_STATE(207)] = 7928,
  [SMALL_STATE(208)] = 7948,
  [SMALL_STATE(209)] = 7968,
  [SMALL_STATE(210)] = 7988,
  [SMALL_STATE(211)] = 8008,
  [SMALL_STATE(212)] = 8028,
  [SMALL_STATE(213)] = 8048,
  [SMALL_STATE(214)] = 8068,
  [SMALL_STATE(215)] = 8088,
  [SMALL_STATE(216)] = 8108,
  [SMALL_STATE(217)] = 8128,
  [SMALL_STATE(218)] = 8148,
  [SMALL_STATE(219)] = 8168,
  [SMALL_STATE(220)] = 8188,
  [SMALL_STATE(221)] = 8208,
  [SMALL_STATE(222)] = 8228,
  [SMALL_STATE(223)] = 8248,
  [SMALL_STATE(224)] = 8268,
  [SMALL_STATE(225)] = 8288,
  [SMALL_STATE(226)] = 8308,
  [SMALL_STATE(227)] = 8328,
  [SMALL_STATE(228)] = 8348,
  [SMALL_STATE(229)] = 8368,
  [SMALL_STATE(230)] = 8388,
  [SMALL_STATE(231)] = 8408,
  [SMALL_STATE(232)] = 8428,
  [SMALL_STATE(233)] = 8448,
  [SMALL_STATE(234)] = 8468,
  [SMALL_STATE(235)] = 8488,
  [SMALL_STATE(236)] = 8507,
  [SMALL_STATE(237)] = 8526,
  [SMALL_STATE(238)] = 8548,
  [SMALL_STATE(239)] = 8570,
  [SMALL_STATE(240)] = 8592,
  [SMALL_STATE(241)] = 8614,
  [SMALL_STATE(242)] = 8636,
  [SMALL_STATE(243)] = 8658,
  [SMALL_STATE(244)] = 8680,
  [SMALL_STATE(245)] = 8702,
  [SMALL_STATE(246)] = 8724,
  [SMALL_STATE(247)] = 8746,
  [SMALL_STATE(248)] = 8768,
  [SMALL_STATE(249)] = 8790,
  [SMALL_STATE(250)] = 8812,
  [SMALL_STATE(251)] = 8839,
  [SMALL_STATE(252)] = 8865,
  [SMALL_STATE(253)] = 8891,
  [SMALL_STATE(254)] = 8917,
  [SMALL_STATE(255)] = 8935,
  [SMALL_STATE(256)] = 8953,
  [SMALL_STATE(257)] = 8971,
  [SMALL_STATE(258)] = 8997,
  [SMALL_STATE(259)] = 9023,
  [SMALL_STATE(260)] = 9049,
  [SMALL_STATE(261)] = 9075,
  [SMALL_STATE(262)] = 9103,
  [SMALL_STATE(263)] = 9129,
  [SMALL_STATE(264)] = 9155,
  [SMALL_STATE(265)] = 9181,
  [SMALL_STATE(266)] = 9201,
  [SMALL_STATE(267)] = 9221,
  [SMALL_STATE(268)] = 9231,
  [SMALL_STATE(269)] = 9251,
  [SMALL_STATE(270)] = 9261,
  [SMALL_STATE(271)] = 9283,
  [SMALL_STATE(272)] = 9303,
  [SMALL_STATE(273)] = 9313,
  [SMALL_STATE(274)] = 9333,
  [SMALL_STATE(275)] = 9343,
  [SMALL_STATE(276)] = 9353,
  [SMALL_STATE(277)] = 9373,
  [SMALL_STATE(278)] = 9393,
  [SMALL_STATE(279)] = 9413,
  [SMALL_STATE(280)] = 9433,
  [SMALL_STATE(281)] = 9453,
  [SMALL_STATE(282)] = 9475,
  [SMALL_STATE(283)] = 9495,
  [SMALL_STATE(284)] = 9517,
  [SMALL_STATE(285)] = 9539,
  [SMALL_STATE(286)] = 9559,
  [SMALL_STATE(287)] = 9579,
  [SMALL_STATE(288)] = 9599,
  [SMALL_STATE(289)] = 9619,
  [SMALL_STATE(290)] = 9639,
  [SMALL_STATE(291)] = 9659,
  [SMALL_STATE(292)] = 9679,
  [SMALL_STATE(293)] = 9701,
  [SMALL_STATE(294)] = 9720,
  [SMALL_STATE(295)] = 9737,
  [SMALL_STATE(296)] = 9754,
  [SMALL_STATE(297)] = 9771,
  [SMALL_STATE(298)] = 9790,
  [SMALL_STATE(299)] = 9809,
  [SMALL_STATE(300)] = 9826,
  [SMALL_STATE(301)] = 9845,
  [SMALL_STATE(302)] = 9862,
  [SMALL_STATE(303)] = 9878,
  [SMALL_STATE(304)] = 9888,
  [SMALL_STATE(305)] = 9904,
  [SMALL_STATE(306)] = 9920,
  [SMALL_STATE(307)] = 9936,
  [SMALL_STATE(308)] = 9952,
  [SMALL_STATE(309)] = 9968,
  [SMALL_STATE(310)] = 9984,
  [SMALL_STATE(311)] = 9997,
  [SMALL_STATE(312)] = 10010,
  [SMALL_STATE(313)] = 10023,
  [SMALL_STATE(314)] = 10036,
  [SMALL_STATE(315)] = 10049,
  [SMALL_STATE(316)] = 10060,
  [SMALL_STATE(317)] = 10073,
  [SMALL_STATE(318)] = 10084,
  [SMALL_STATE(319)] = 10097,
  [SMALL_STATE(320)] = 10110,
  [SMALL_STATE(321)] = 10123,
  [SMALL_STATE(322)] = 10136,
  [SMALL_STATE(323)] = 10149,
  [SMALL_STATE(324)] = 10160,
  [SMALL_STATE(325)] = 10173,
  [SMALL_STATE(326)] = 10186,
  [SMALL_STATE(327)] = 10199,
  [SMALL_STATE(328)] = 10212,
  [SMALL_STATE(329)] = 10225,
  [SMALL_STATE(330)] = 10238,
  [SMALL_STATE(331)] = 10251,
  [SMALL_STATE(332)] = 10264,
  [SMALL_STATE(333)] = 10277,
  [SMALL_STATE(334)] = 10290,
  [SMALL_STATE(335)] = 10303,
  [SMALL_STATE(336)] = 10316,
  [SMALL_STATE(337)] = 10329,
  [SMALL_STATE(338)] = 10342,
  [SMALL_STATE(339)] = 10353,
  [SMALL_STATE(340)] = 10362,
  [SMALL_STATE(341)] = 10375,
  [SMALL_STATE(342)] = 10384,
  [SMALL_STATE(343)] = 10391,
  [SMALL_STATE(344)] = 10404,
  [SMALL_STATE(345)] = 10417,
  [SMALL_STATE(346)] = 10430,
  [SMALL_STATE(347)] = 10443,
  [SMALL_STATE(348)] = 10454,
  [SMALL_STATE(349)] = 10461,
  [SMALL_STATE(350)] = 10468,
  [SMALL_STATE(351)] = 10481,
  [SMALL_STATE(352)] = 10494,
  [SMALL_STATE(353)] = 10507,
  [SMALL_STATE(354)] = 10520,
  [SMALL_STATE(355)] = 10533,
  [SMALL_STATE(356)] = 10540,
  [SMALL_STATE(357)] = 10551,
  [SMALL_STATE(358)] = 10562,
  [SMALL_STATE(359)] = 10575,
  [SMALL_STATE(360)] = 10588,
  [SMALL_STATE(361)] = 10601,
  [SMALL_STATE(362)] = 10614,
  [SMALL_STATE(363)] = 10627,
  [SMALL_STATE(364)] = 10640,
  [SMALL_STATE(365)] = 10653,
  [SMALL_STATE(366)] = 10662,
  [SMALL_STATE(367)] = 10675,
  [SMALL_STATE(368)] = 10688,
  [SMALL_STATE(369)] = 10701,
  [SMALL_STATE(370)] = 10710,
  [SMALL_STATE(371)] = 10719,
  [SMALL_STATE(372)] = 10729,
  [SMALL_STATE(373)] = 10739,
  [SMALL_STATE(374)] = 10745,
  [SMALL_STATE(375)] = 10751,
  [SMALL_STATE(376)] = 10757,
  [SMALL_STATE(377)] = 10763,
  [SMALL_STATE(378)] = 10769,
  [SMALL_STATE(379)] = 10775,
  [SMALL_STATE(380)] = 10781,
  [SMALL_STATE(381)] = 10787,
  [SMALL_STATE(382)] = 10797,
  [SMALL_STATE(383)] = 10803,
  [SMALL_STATE(384)] = 10809,
  [SMALL_STATE(385)] = 10819,
  [SMALL_STATE(386)] = 10829,
  [SMALL_STATE(387)] = 10835,
  [SMALL_STATE(388)] = 10845,
  [SMALL_STATE(389)] = 10851,
  [SMALL_STATE(390)] = 10861,
  [SMALL_STATE(391)] = 10871,
  [SMALL_STATE(392)] = 10881,
  [SMALL_STATE(393)] = 10891,
  [SMALL_STATE(394)] = 10897,
  [SMALL_STATE(395)] = 10903,
  [SMALL_STATE(396)] = 10909,
  [SMALL_STATE(397)] = 10919,
  [SMALL_STATE(398)] = 10925,
  [SMALL_STATE(399)] = 10931,
  [SMALL_STATE(400)] = 10937,
  [SMALL_STATE(401)] = 10947,
  [SMALL_STATE(402)] = 10957,
  [SMALL_STATE(403)] = 10964,
  [SMALL_STATE(404)] = 10971,
  [SMALL_STATE(405)] = 10978,
  [SMALL_STATE(406)] = 10983,
  [SMALL_STATE(407)] = 10990,
  [SMALL_STATE(408)] = 10997,
  [SMALL_STATE(409)] = 11004,
  [SMALL_STATE(410)] = 11011,
  [SMALL_STATE(411)] = 11018,
  [SMALL_STATE(412)] = 11025,
  [SMALL_STATE(413)] = 11032,
  [SMALL_STATE(414)] = 11039,
  [SMALL_STATE(415)] = 11044,
  [SMALL_STATE(416)] = 11049,
  [SMALL_STATE(417)] = 11056,
  [SMALL_STATE(418)] = 11063,
  [SMALL_STATE(419)] = 11070,
  [SMALL_STATE(420)] = 11075,
  [SMALL_STATE(421)] = 11082,
  [SMALL_STATE(422)] = 11089,
  [SMALL_STATE(423)] = 11096,
  [SMALL_STATE(424)] = 11103,
  [SMALL_STATE(425)] = 11108,
  [SMALL_STATE(426)] = 11113,
  [SMALL_STATE(427)] = 11120,
  [SMALL_STATE(428)] = 11125,
  [SMALL_STATE(429)] = 11130,
  [SMALL_STATE(430)] = 11135,
  [SMALL_STATE(431)] = 11142,
  [SMALL_STATE(432)] = 11149,
  [SMALL_STATE(433)] = 11154,
  [SMALL_STATE(434)] = 11161,
  [SMALL_STATE(435)] = 11168,
  [SMALL_STATE(436)] = 11173,
  [SMALL_STATE(437)] = 11180,
  [SMALL_STATE(438)] = 11185,
  [SMALL_STATE(439)] = 11190,
  [SMALL_STATE(440)] = 11195,
  [SMALL_STATE(441)] = 11200,
  [SMALL_STATE(442)] = 11207,
  [SMALL_STATE(443)] = 11214,
  [SMALL_STATE(444)] = 11219,
  [SMALL_STATE(445)] = 11226,
  [SMALL_STATE(446)] = 11233,
  [SMALL_STATE(447)] = 11240,
  [SMALL_STATE(448)] = 11247,
  [SMALL_STATE(449)] = 11252,
  [SMALL_STATE(450)] = 11259,
  [SMALL_STATE(451)] = 11266,
  [SMALL_STATE(452)] = 11273,
  [SMALL_STATE(453)] = 11280,
  [SMALL_STATE(454)] = 11287,
  [SMALL_STATE(455)] = 11292,
  [SMALL_STATE(456)] = 11297,
  [SMALL_STATE(457)] = 11304,
  [SMALL_STATE(458)] = 11311,
  [SMALL_STATE(459)] = 11318,
  [SMALL_STATE(460)] = 11325,
  [SMALL_STATE(461)] = 11332,
  [SMALL_STATE(462)] = 11339,
  [SMALL_STATE(463)] = 11346,
  [SMALL_STATE(464)] = 11353,
  [SMALL_STATE(465)] = 11360,
  [SMALL_STATE(466)] = 11367,
  [SMALL_STATE(467)] = 11372,
  [SMALL_STATE(468)] = 11379,
  [SMALL_STATE(469)] = 11386,
  [SMALL_STATE(470)] = 11393,
  [SMALL_STATE(471)] = 11400,
  [SMALL_STATE(472)] = 11404,
  [SMALL_STATE(473)] = 11408,
  [SMALL_STATE(474)] = 11412,
  [SMALL_STATE(475)] = 11416,
  [SMALL_STATE(476)] = 11420,
  [SMALL_STATE(477)] = 11424,
  [SMALL_STATE(478)] = 11428,
  [SMALL_STATE(479)] = 11432,
  [SMALL_STATE(480)] = 11436,
  [SMALL_STATE(481)] = 11440,
  [SMALL_STATE(482)] = 11444,
  [SMALL_STATE(483)] = 11448,
  [SMALL_STATE(484)] = 11452,
  [SMALL_STATE(485)] = 11456,
  [SMALL_STATE(486)] = 11460,
  [SMALL_STATE(487)] = 11464,
  [SMALL_STATE(488)] = 11468,
  [SMALL_STATE(489)] = 11472,
  [SMALL_STATE(490)] = 11476,
  [SMALL_STATE(491)] = 11480,
  [SMALL_STATE(492)] = 11484,
  [SMALL_STATE(493)] = 11488,
  [SMALL_STATE(494)] = 11492,
  [SMALL_STATE(495)] = 11496,
  [SMALL_STATE(496)] = 11500,
  [SMALL_STATE(497)] = 11504,
  [SMALL_STATE(498)] = 11508,
  [SMALL_STATE(499)] = 11512,
  [SMALL_STATE(500)] = 11516,
  [SMALL_STATE(501)] = 11520,
  [SMALL_STATE(502)] = 11524,
  [SMALL_STATE(503)] = 11528,
  [SMALL_STATE(504)] = 11532,
  [SMALL_STATE(505)] = 11536,
  [SMALL_STATE(506)] = 11540,
  [SMALL_STATE(507)] = 11544,
  [SMALL_STATE(508)] = 11548,
  [SMALL_STATE(509)] = 11552,
  [SMALL_STATE(510)] = 11556,
  [SMALL_STATE(511)] = 11560,
  [SMALL_STATE(512)] = 11564,
  [SMALL_STATE(513)] = 11568,
  [SMALL_STATE(514)] = 11572,
  [SMALL_STATE(515)] = 11576,
  [SMALL_STATE(516)] = 11580,
  [SMALL_STATE(517)] = 11584,
  [SMALL_STATE(518)] = 11588,
  [SMALL_STATE(519)] = 11592,
  [SMALL_STATE(520)] = 11596,
  [SMALL_STATE(521)] = 11600,
  [SMALL_STATE(522)] = 11604,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 13),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 13),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 19),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 19),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 29),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 29),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 14),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 14),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 42),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 42),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 44),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 44),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 59),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 59),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(55),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(25),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(297),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(501),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(305),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(270),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(292),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(300),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(261),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(307),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(392),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(433),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(477),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 23),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 23),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 37),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 37),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_body, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_body, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_bare_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_body, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_body, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 56),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 56),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_body, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_body, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 22),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 22),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 3, 0, 47),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 3, 0, 47),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 3, 0, 48),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 3, 0, 48),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_ask_step, 3, 0, 49),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_ask_step, 3, 0, 49),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 3, 0, 49),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 3, 0, 49),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 3, 0, 47),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 3, 0, 47),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 3, 0, 47),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 3, 0, 47),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 3, 0, 51),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 3, 0, 51),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 3, 0, 47),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 3, 0, 47),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 3, 0, 51),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 3, 0, 51),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 3, 0, 49),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 3, 0, 49),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 3, 0, 47),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 3, 0, 47),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 3, 0, 47),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 3, 0, 47),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 3, 0, 51),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 3, 0, 51),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 3, 0, 49),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 3, 0, 49),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 3, 0, 47),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 3, 0, 47),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 3, 0, 50),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 3, 0, 50),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_thunk_step, 1, 0, 15),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_thunk_step, 1, 0, 15),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_step_body, 3, 0, 63),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_inline_step_body, 3, 0, 63),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_step_body, 3, 0, 64),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_inline_step_body, 3, 0, 64),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 4, 0, 65),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 4, 0, 65),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 70),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 70),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 71),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 71),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 5, 0, 72),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 5, 0, 72),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 2, 0, 32),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 2, 0, 32),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 2, 0, 32),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 2, 0, 32),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 2, 0, 32),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 2, 0, 32),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 2, 0, 32),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 2, 0, 32),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 2, 0, 32),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 2, 0, 32),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 2, 0, 32),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 2, 0, 32),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 2, 0, 32),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 2, 0, 32),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_bare_content_line, 2, 0, 22),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_bare_content_line, 2, 0, 22),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(135),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(109),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 34),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 34),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 52),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 52),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 53),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 53),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 57),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 57),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 67),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 67),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 22),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 22),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 40),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 40),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 40),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 40),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 40),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 40),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 73),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 73),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 22),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 22),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 28),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 28),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 41),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 41),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 7),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 7),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 35),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 35),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 39),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 39),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 43),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 43),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 35),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 35),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 7),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 7),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 10),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 10),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 43),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 43),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 34),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 3, 0, 34),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 54),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 54),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 55),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 55),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 58),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 58),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 60),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 60),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 16),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 16),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 60),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 60),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 58),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 58),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 16),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 16),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 52),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 52),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 66),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 66),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 53),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 53),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 68),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 5, 0, 68),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 69),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 69),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 16),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 16),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 16),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 16),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 69),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 69),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 74),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 74),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 67),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 67),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 75),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 75),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 76),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 6, 0, 76),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 17),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 17),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 17),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 17),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 18),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 18),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 21),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 2, 0, 21),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 25),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 25),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 24),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 24),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 30),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 30),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 30),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 30),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 3),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 18),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 18),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 20),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 20), SHIFT_REPEAT(267),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 6),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [1007] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1016] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [1021] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 62),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 62), SHIFT_REPEAT(502),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_target_list, 1, 0, 31),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_parallelism, 2, 0, 50),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_named_parallel_head, 1, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_target_list, 2, 0, 45),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 61),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 22),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_count, 1, 0, 0),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_each_head, 1, 0, 0),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 77),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 27),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 27), SHIFT_REPEAT(372),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 22),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_named_parallel_head, 2, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 26),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 28),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 41),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_output_type, 2, 0, 46),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_text, 1, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_body, 1, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_parallel_head, 1, 0, 0),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_rank_head, 1, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1359] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_limit, 1, 0, 33),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_each_head, 2, 0, 0),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
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
