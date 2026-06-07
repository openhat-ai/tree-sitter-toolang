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
#define STATE_COUNT 519
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 32
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 76

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
  sym_fenced_raw_text = 71,
  sym_source_file = 72,
  sym_item = 73,
  sym_newline = 74,
  sym_blank_line = 75,
  sym_line_end = 76,
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
  sym_cap_name = 92,
  sym_cap_ref = 93,
  sym_cap_body = 94,
  sym_cap_indented = 95,
  sym_cap_markdown = 96,
  sym_cap_indented_content_line = 97,
  sym_cap_fenced_content_line = 98,
  sym_frontmatter = 99,
  sym_property_eq = 100,
  sym_property_colon = 101,
  sym_property_key = 102,
  sym_property_value = 103,
  sym_instruct = 104,
  sym_instruct_name = 105,
  sym_instruct_body = 106,
  sym_context = 107,
  sym_context_name = 108,
  sym_context_body = 109,
  sym_block_indented = 110,
  sym_block_fenced = 111,
  sym_block_indented_content_line = 112,
  sym_block_fenced_content_line = 113,
  sym_thunk = 114,
  sym_thunk_name = 115,
  sym_thunk_body = 116,
  sym_params = 117,
  sym_param = 118,
  sym_param_name = 119,
  sym_flow = 120,
  sym_flow_name = 121,
  sym_flow_body = 122,
  sym_flow_body_tail = 123,
  sym_flow_body_statement = 124,
  sym_flow_entry = 125,
  sym_flow_do_step = 126,
  sym_flow_ask_step = 127,
  sym_flow_unfold_step = 128,
  sym_flow_keep_step = 129,
  sym_flow_drop_step = 130,
  sym_flow_rank_step = 131,
  sym_flow_each_step = 132,
  sym_flow_fold_step = 133,
  sym_flow_repeat_step = 134,
  sym_flow_condition_body = 135,
  sym_flow_step_body = 136,
  sym_flow_unfold_head = 137,
  sym_flow_item_filter_head = 138,
  sym_flow_rank_head = 139,
  sym_flow_each_head = 140,
  sym_flow_fold_head = 141,
  sym_flow_output_type = 142,
  sym_flow_parallelism = 143,
  sym_flow_rank_limit = 144,
  sym_flow_target_list = 145,
  sym_flow_inline_body = 146,
  sym_flow_repeat_count = 147,
  sym_flow_inline_text = 148,
  sym_directive = 149,
  sym_directive_key = 150,
  sym_directive_op = 151,
  sym_directive_csv = 152,
  sym_instruction_section = 153,
  sym_message_section = 154,
  sym_thunk_tail = 155,
  sym_roled_message = 156,
  sym_unroled_message = 157,
  sym_unroled_message_block = 158,
  sym_block_indented_implicit = 159,
  sym_context_block = 160,
  sym_instruct_block = 161,
  sym_roled_message_block = 162,
  sym_pass_statement = 163,
  sym_context_block_kind = 164,
  sym_instruct_block_kind = 165,
  sym_roled_message_kind = 166,
  sym_block_value = 167,
  sym_block_inline = 168,
  sym_block_name = 169,
  sym_block_content_inline = 170,
  sym_psyche_keyword = 171,
  sym_skill_keyword = 172,
  sym_service_keyword = 173,
  sym_prompt_keyword = 174,
  sym_context_keyword = 175,
  sym_instruct_keyword = 176,
  sym_assign_operator = 177,
  sym_fence_open = 178,
  sym_fence_close = 179,
  sym_cap_kind = 180,
  sym_inline_text = 181,
  aux_sym_source_file_repeat1 = 182,
  aux_sym_type_repeat1 = 183,
  aux_sym_struct_body_repeat1 = 184,
  aux_sym_cap_indented_repeat1 = 185,
  aux_sym_cap_markdown_repeat1 = 186,
  aux_sym_frontmatter_repeat1 = 187,
  aux_sym_block_indented_repeat1 = 188,
  aux_sym_block_fenced_repeat1 = 189,
  aux_sym_thunk_body_repeat1 = 190,
  aux_sym_thunk_body_repeat2 = 191,
  aux_sym_params_repeat1 = 192,
  aux_sym_flow_body_repeat1 = 193,
  aux_sym_flow_body_tail_repeat1 = 194,
  aux_sym_flow_body_tail_repeat2 = 195,
  aux_sym_flow_target_list_repeat1 = 196,
  aux_sym_directive_csv_repeat1 = 197,
  aux_sym_message_section_repeat1 = 198,
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
  [sym_flow_step_body] = "flow_step_body",
  [sym_flow_unfold_head] = "flow_unfold_head",
  [sym_flow_item_filter_head] = "flow_item_filter_head",
  [sym_flow_rank_head] = "flow_rank_head",
  [sym_flow_each_head] = "flow_each_head",
  [sym_flow_fold_head] = "flow_fold_head",
  [sym_flow_output_type] = "flow_output_type",
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
  [sym_flow_do_step] = sym_flow_do_step,
  [sym_flow_ask_step] = sym_flow_do_step,
  [sym_flow_unfold_step] = sym_flow_do_step,
  [sym_flow_keep_step] = sym_flow_do_step,
  [sym_flow_drop_step] = sym_flow_do_step,
  [sym_flow_rank_step] = sym_flow_do_step,
  [sym_flow_each_step] = sym_flow_do_step,
  [sym_flow_fold_step] = sym_flow_do_step,
  [sym_flow_repeat_step] = sym_flow_do_step,
  [sym_flow_condition_body] = sym_flow_condition_body,
  [sym_flow_step_body] = sym_flow_step_body,
  [sym_flow_unfold_head] = sym_flow_unfold_head,
  [sym_flow_item_filter_head] = sym_flow_item_filter_head,
  [sym_flow_rank_head] = sym_flow_rank_head,
  [sym_flow_each_head] = sym_flow_each_head,
  [sym_flow_fold_head] = sym_flow_fold_head,
  [sym_flow_output_type] = sym_flow_output_type,
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
  [sym_flow_step_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_unfold_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_item_filter_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_rank_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_each_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_fold_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_output_type] = {
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
  [15] = {.index = 26, .length = 4},
  [16] = {.index = 30, .length = 4},
  [17] = {.index = 34, .length = 4},
  [18] = {.index = 38, .length = 4},
  [19] = {.index = 42, .length = 2},
  [20] = {.index = 44, .length = 1},
  [21] = {.index = 45, .length = 1},
  [22] = {.index = 46, .length = 1},
  [23] = {.index = 47, .length = 1},
  [24] = {.index = 48, .length = 2},
  [25] = {.index = 50, .length = 2},
  [26] = {.index = 52, .length = 2},
  [27] = {.index = 54, .length = 3},
  [28] = {.index = 57, .length = 4},
  [29] = {.index = 61, .length = 4},
  [30] = {.index = 65, .length = 1},
  [31] = {.index = 66, .length = 2},
  [32] = {.index = 68, .length = 1},
  [33] = {.index = 69, .length = 1},
  [34] = {.index = 70, .length = 5},
  [35] = {.index = 75, .length = 2},
  [36] = {.index = 77, .length = 1},
  [37] = {.index = 78, .length = 1},
  [38] = {.index = 79, .length = 2},
  [39] = {.index = 81, .length = 3},
  [40] = {.index = 84, .length = 4},
  [41] = {.index = 88, .length = 5},
  [42] = {.index = 93, .length = 5},
  [43] = {.index = 98, .length = 5},
  [44] = {.index = 103, .length = 2},
  [45] = {.index = 105, .length = 2},
  [46] = {.index = 107, .length = 2},
  [47] = {.index = 109, .length = 2},
  [48] = {.index = 111, .length = 3},
  [49] = {.index = 114, .length = 2},
  [50] = {.index = 116, .length = 2},
  [51] = {.index = 118, .length = 1},
  [52] = {.index = 119, .length = 2},
  [53] = {.index = 121, .length = 2},
  [54] = {.index = 123, .length = 3},
  [55] = {.index = 126, .length = 1},
  [56] = {.index = 127, .length = 6},
  [57] = {.index = 133, .length = 6},
  [58] = {.index = 139, .length = 6},
  [59] = {.index = 145, .length = 1},
  [60] = {.index = 146, .length = 2},
  [61] = {.index = 148, .length = 2},
  [62] = {.index = 150, .length = 2},
  [63] = {.index = 152, .length = 4},
  [64] = {.index = 156, .length = 2},
  [65] = {.index = 158, .length = 2},
  [66] = {.index = 160, .length = 2},
  [67] = {.index = 162, .length = 7},
  [68] = {.index = 169, .length = 1},
  [69] = {.index = 170, .length = 1},
  [70] = {.index = 171, .length = 5},
  [71] = {.index = 176, .length = 3},
  [72] = {.index = 179, .length = 3},
  [73] = {.index = 182, .length = 2},
  [74] = {.index = 184, .length = 3},
  [75] = {.index = 187, .length = 3},
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
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
  [30] =
    {field_body, 3},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [34] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [38] =
    {field_arrow, 1},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [42] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [44] =
    {field_keyword, 0},
  [45] =
    {field_content, 0},
  [46] =
    {field_instruction, 1},
  [47] =
    {field_tail, 1},
  [48] =
    {field_instruction, 0},
    {field_tail, 1},
  [50] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [52] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [54] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [57] =
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [61] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [65] =
    {field_target, 0},
  [66] =
    {field_body, 1},
    {field_keyword, 0},
  [68] =
    {field_count, 0},
  [69] =
    {field_close, 2},
  [70] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [75] =
    {field_instruction, 1},
    {field_tail, 2},
  [77] =
    {field_instruction, 2},
  [78] =
    {field_tail, 2},
  [79] =
    {field_instruction, 0},
    {field_tail, 2},
  [81] =
    {field_colon, 1},
    {field_kind, 0},
    {field_value, 2},
  [84] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [88] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [93] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [98] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [103] =
    {field_target, 0},
    {field_target, 1, .inherited = true},
  [105] =
    {field_keyword, 0},
    {field_targets, 1},
  [107] =
    {field_keyword, 0},
    {field_target, 1},
  [109] =
    {field_keyword, 0},
    {field_type, 1},
  [111] =
    {field_body, 2},
    {field_head, 1},
    {field_keyword, 0},
  [114] =
    {field_count, 1},
    {field_keyword, 0},
  [116] =
    {field_close, 3},
    {field_language, 1},
  [118] =
    {field_close, 3},
  [119] =
    {field_instruction, 1},
    {field_tail, 3},
  [121] =
    {field_instruction, 2},
    {field_tail, 3},
  [123] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [126] =
    {field_name, 0},
  [127] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [133] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [139] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [145] =
    {field_target, 1},
  [146] =
    {field_target, 0, .inherited = true},
    {field_target, 1, .inherited = true},
  [148] =
    {field_colon, 0},
    {field_value, 2},
  [150] =
    {field_colon, 0},
    {field_value, 1},
  [152] =
    {field_colon, 2},
    {field_condition, 3},
    {field_condition_keyword, 1},
    {field_keyword, 0},
  [156] =
    {field_close, 3},
    {field_frontmatter, 2},
  [158] =
    {field_close, 4},
    {field_language, 1},
  [160] =
    {field_instruction, 2},
    {field_tail, 4},
  [162] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [169] =
    {field_text, 1},
  [170] =
    {field_text, 0},
  [171] =
    {field_colon, 3},
    {field_condition, 4},
    {field_condition_keyword, 2},
    {field_count, 1},
    {field_keyword, 0},
  [176] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [179] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [182] =
    {field_close, 4},
    {field_frontmatter, 2},
  [184] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [187] =
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
  [48] = 43,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 42,
  [76] = 44,
  [77] = 45,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 37,
  [86] = 38,
  [87] = 87,
  [88] = 36,
  [89] = 37,
  [90] = 83,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 84,
  [95] = 46,
  [96] = 43,
  [97] = 44,
  [98] = 45,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 37,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 83,
  [108] = 108,
  [109] = 84,
  [110] = 70,
  [111] = 111,
  [112] = 112,
  [113] = 42,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 44,
  [118] = 45,
  [119] = 43,
  [120] = 120,
  [121] = 101,
  [122] = 106,
  [123] = 114,
  [124] = 124,
  [125] = 69,
  [126] = 126,
  [127] = 68,
  [128] = 105,
  [129] = 120,
  [130] = 102,
  [131] = 104,
  [132] = 108,
  [133] = 42,
  [134] = 45,
  [135] = 70,
  [136] = 43,
  [137] = 44,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 43,
  [145] = 42,
  [146] = 45,
  [147] = 44,
  [148] = 42,
  [149] = 70,
  [150] = 150,
  [151] = 151,
  [152] = 43,
  [153] = 45,
  [154] = 44,
  [155] = 43,
  [156] = 42,
  [157] = 45,
  [158] = 44,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 120,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
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
  [185] = 102,
  [186] = 101,
  [187] = 104,
  [188] = 188,
  [189] = 189,
  [190] = 43,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 108,
  [198] = 42,
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
  [218] = 44,
  [219] = 45,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 42,
  [225] = 43,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 234,
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
  [272] = 247,
  [273] = 249,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 279,
  [281] = 269,
  [282] = 271,
  [283] = 278,
  [284] = 279,
  [285] = 269,
  [286] = 271,
  [287] = 278,
  [288] = 248,
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
  [308] = 304,
  [309] = 263,
  [310] = 261,
  [311] = 260,
  [312] = 262,
  [313] = 264,
  [314] = 314,
  [315] = 304,
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
  [328] = 306,
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
  [346] = 43,
  [347] = 347,
  [348] = 44,
  [349] = 45,
  [350] = 350,
  [351] = 351,
  [352] = 317,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 44,
  [359] = 45,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 43,
  [364] = 364,
  [365] = 344,
  [366] = 345,
  [367] = 355,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 371,
  [374] = 371,
  [375] = 375,
  [376] = 45,
  [377] = 43,
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
  [391] = 44,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 43,
  [396] = 396,
  [397] = 397,
  [398] = 398,
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
  [422] = 414,
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
  [447] = 414,
  [448] = 429,
  [449] = 449,
  [450] = 450,
  [451] = 414,
  [452] = 429,
  [453] = 453,
  [454] = 454,
  [455] = 414,
  [456] = 456,
  [457] = 414,
  [458] = 429,
  [459] = 414,
  [460] = 414,
  [461] = 414,
  [462] = 462,
  [463] = 414,
  [464] = 414,
  [465] = 414,
  [466] = 414,
  [467] = 467,
  [468] = 468,
  [469] = 450,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 44,
  [479] = 45,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 43,
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
  [499] = 489,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 489,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(214);
      ADVANCE_MAP(
        '\n', 215,
        '\r', 1,
        '#', 219,
        '(', 301,
        ')', 302,
        '+', 32,
        ',', 303,
        '-', 27,
        ':', 300,
        '=', 248,
        '?', 298,
        'B', 328,
        'J', 330,
        'N', 333,
        'P', 314,
        'T', 318,
        '[', 34,
        '`', 36,
        'a', 164,
        'c', 145,
        'd', 66,
        'e', 37,
        'f', 118,
        'h', 39,
        'i', 132,
        'k', 76,
        'm', 61,
        'n', 148,
        'p', 38,
        'r', 41,
        's', 67,
        't', 91,
        'u', 129,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(335);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'k') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(391);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\f') SKIP(3);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'k') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(394);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 215,
        '\r', 1,
        '#', 219,
        ')', 302,
        ',', 303,
        ':', 300,
        '[', 34,
        'p', 229,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(6);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 215,
        '\r', 1,
        '#', 219,
        '`', 237,
        'd', 346,
        'n', 366,
        '\t', 234,
        '\f', 234,
        ' ', 234,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '(') ADVANCE(301);
      if (lookahead == ')') ADVANCE(302);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(555);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0) ADVANCE(558);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead != 0) ADVANCE(558);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(218);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(217);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(216);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(227);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\f') SKIP(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(404);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(205);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(226);
      END_STATE();
    case 35:
      if (lookahead == '`') ADVANCE(304);
      END_STATE();
    case 36:
      if (lookahead == '`') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(103);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(290);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(285);
      END_STATE();
    case 107:
      if (lookahead == 'k') ADVANCE(285);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(289);
      END_STATE();
    case 109:
      if (lookahead == 'k') ADVANCE(279);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 194:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 195:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 196:
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 197:
      if (lookahead == 'w') ADVANCE(281);
      END_STATE();
    case 198:
      if (lookahead == 'x') ADVANCE(183);
      END_STATE();
    case 199:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 200:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 201:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 202:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(239);
      END_STATE();
    case 203:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 204:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(204);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(307);
      END_STATE();
    case 206:
      if (eof) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\f') SKIP(206);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(390);
      END_STATE();
    case 207:
      if (eof) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\f') SKIP(207);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'k') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(392);
      END_STATE();
    case 208:
      if (eof) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\f') SKIP(208);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(393);
      END_STATE();
    case 209:
      if (eof) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\f') SKIP(209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 210:
      if (eof) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\f') SKIP(210);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      END_STATE();
    case 211:
      if (eof) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\f') SKIP(211);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(397);
      END_STATE();
    case 212:
      if (eof) ADVANCE(214);
      ADVANCE_MAP(
        '\n', 215,
        '\r', 1,
        '#', 14,
        'c', 145,
        'f', 117,
        'i', 132,
        'p', 160,
        's', 83,
        't', 90,
        'u', 179,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(335);
      END_STATE();
    case 213:
      if (eof) ADVANCE(214);
      ADVANCE_MAP(
        '\n', 215,
        '\r', 1,
        '#', 14,
        'c', 365,
        'f', 355,
        'i', 361,
        'p', 370,
        's', 341,
        't', 349,
        'u', 372,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(213);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_program_doc_comment);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'a') ADVANCE(231);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'o') ADVANCE(295);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_flow_target);
      if (lookahead == 'r') ADVANCE(297);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_flow_target);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      ADVANCE_MAP(
        '\n', 215,
        '\r', 1,
        '#', 219,
        '`', 237,
        'd', 346,
        'n', 366,
        '\t', 234,
        '\f', 234,
        ' ', 234,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_flow_do_keyword);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_flow_unfold_keyword);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_flow_each_keyword);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_flow_fold_keyword);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(311);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(312);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(309);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(307);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'k') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(351);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'w') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 215,
        '\f', 390,
        '\r', 1,
        '#', 398,
        'a', 527,
        'c', 498,
        'f', 474,
        'h', 405,
        'i', 491,
        'm', 494,
        'p', 411,
        'r', 437,
        's', 438,
        't', 452,
        'u', 523,
        '\t', 390,
        ' ', 390,
      );
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 215,
        '\f', 391,
        '\r', 1,
        '#', 399,
        'a', 526,
        'd', 493,
        'e', 407,
        'f', 501,
        'h', 405,
        'k', 443,
        'm', 494,
        'p', 413,
        'r', 408,
        's', 446,
        't', 503,
        'u', 490,
        '\t', 391,
        ' ', 391,
      );
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 215,
        '\f', 392,
        '\r', 1,
        '#', 398,
        'a', 526,
        'c', 498,
        'd', 493,
        'e', 407,
        'f', 473,
        'i', 491,
        'k', 443,
        'p', 412,
        'r', 409,
        's', 447,
        't', 454,
        'u', 489,
        '\t', 392,
        ' ', 392,
      );
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 215,
        '\f', 393,
        '\r', 1,
        '#', 398,
        'a', 527,
        'c', 498,
        'f', 474,
        'i', 491,
        'p', 412,
        's', 447,
        't', 453,
        'u', 523,
        '\t', 393,
        ' ', 393,
      );
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 215,
        '\f', 394,
        '\r', 1,
        '#', 399,
        'a', 526,
        'd', 493,
        'e', 407,
        'f', 501,
        'k', 443,
        'p', 414,
        'r', 409,
        'u', 490,
        '\t', 394,
        ' ', 394,
      );
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 215,
        '\f', 395,
        '\r', 1,
        '#', 398,
        'c', 365,
        'f', 355,
        'i', 361,
        'p', 370,
        's', 341,
        't', 349,
        'u', 372,
        '\t', 395,
        ' ', 395,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 215,
        '\f', 396,
        '\r', 1,
        '#', 398,
        'c', 498,
        'f', 474,
        'i', 491,
        'p', 512,
        's', 447,
        't', 454,
        'u', 530,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 215,
        '\f', 397,
        '\r', 1,
        '#', 398,
        'a', 527,
        'c', 498,
        'f', 474,
        'i', 491,
        'p', 512,
        's', 447,
        't', 453,
        'u', 523,
        '\t', 397,
        ' ', 397,
      );
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(401);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '!') ADVANCE(403);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == 's') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'p') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == 'k') ADVANCE(458);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'k') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == 'k') ADVANCE(464);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(541);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(541);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(555);
      if (lookahead == '`') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0) ADVANCE(558);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead != 0) ADVANCE(558);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(558);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(558);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(558);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(558);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(558);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 212},
  [2] = {.lex_state = 206},
  [3] = {.lex_state = 206},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 206},
  [6] = {.lex_state = 206},
  [7] = {.lex_state = 206},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 206},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 206},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 206},
  [15] = {.lex_state = 206},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 206},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 207},
  [21] = {.lex_state = 207},
  [22] = {.lex_state = 207},
  [23] = {.lex_state = 207},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 207},
  [26] = {.lex_state = 212},
  [27] = {.lex_state = 212},
  [28] = {.lex_state = 208},
  [29] = {.lex_state = 208},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 206},
  [32] = {.lex_state = 208},
  [33] = {.lex_state = 208},
  [34] = {.lex_state = 208},
  [35] = {.lex_state = 208},
  [36] = {.lex_state = 207},
  [37] = {.lex_state = 207},
  [38] = {.lex_state = 207},
  [39] = {.lex_state = 211},
  [40] = {.lex_state = 211},
  [41] = {.lex_state = 211},
  [42] = {.lex_state = 206},
  [43] = {.lex_state = 206},
  [44] = {.lex_state = 206},
  [45] = {.lex_state = 206},
  [46] = {.lex_state = 206},
  [47] = {.lex_state = 207},
  [48] = {.lex_state = 207},
  [49] = {.lex_state = 207},
  [50] = {.lex_state = 207},
  [51] = {.lex_state = 207},
  [52] = {.lex_state = 207},
  [53] = {.lex_state = 207},
  [54] = {.lex_state = 207},
  [55] = {.lex_state = 207},
  [56] = {.lex_state = 207},
  [57] = {.lex_state = 207},
  [58] = {.lex_state = 207},
  [59] = {.lex_state = 207},
  [60] = {.lex_state = 207},
  [61] = {.lex_state = 207},
  [62] = {.lex_state = 207},
  [63] = {.lex_state = 207},
  [64] = {.lex_state = 207},
  [65] = {.lex_state = 207},
  [66] = {.lex_state = 207},
  [67] = {.lex_state = 207},
  [68] = {.lex_state = 207},
  [69] = {.lex_state = 207},
  [70] = {.lex_state = 207},
  [71] = {.lex_state = 207},
  [72] = {.lex_state = 207},
  [73] = {.lex_state = 207},
  [74] = {.lex_state = 207},
  [75] = {.lex_state = 207},
  [76] = {.lex_state = 207},
  [77] = {.lex_state = 207},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 208},
  [80] = {.lex_state = 208},
  [81] = {.lex_state = 208},
  [82] = {.lex_state = 208},
  [83] = {.lex_state = 208},
  [84] = {.lex_state = 208},
  [85] = {.lex_state = 208},
  [86] = {.lex_state = 211},
  [87] = {.lex_state = 209},
  [88] = {.lex_state = 211},
  [89] = {.lex_state = 211},
  [90] = {.lex_state = 211},
  [91] = {.lex_state = 209},
  [92] = {.lex_state = 208},
  [93] = {.lex_state = 209},
  [94] = {.lex_state = 211},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 213},
  [100] = {.lex_state = 213},
  [101] = {.lex_state = 208},
  [102] = {.lex_state = 208},
  [103] = {.lex_state = 210},
  [104] = {.lex_state = 208},
  [105] = {.lex_state = 208},
  [106] = {.lex_state = 208},
  [107] = {.lex_state = 210},
  [108] = {.lex_state = 208},
  [109] = {.lex_state = 210},
  [110] = {.lex_state = 208},
  [111] = {.lex_state = 208},
  [112] = {.lex_state = 208},
  [113] = {.lex_state = 208},
  [114] = {.lex_state = 208},
  [115] = {.lex_state = 208},
  [116] = {.lex_state = 208},
  [117] = {.lex_state = 208},
  [118] = {.lex_state = 208},
  [119] = {.lex_state = 208},
  [120] = {.lex_state = 208},
  [121] = {.lex_state = 211},
  [122] = {.lex_state = 211},
  [123] = {.lex_state = 211},
  [124] = {.lex_state = 211},
  [125] = {.lex_state = 211},
  [126] = {.lex_state = 211},
  [127] = {.lex_state = 211},
  [128] = {.lex_state = 211},
  [129] = {.lex_state = 211},
  [130] = {.lex_state = 211},
  [131] = {.lex_state = 211},
  [132] = {.lex_state = 211},
  [133] = {.lex_state = 211},
  [134] = {.lex_state = 211},
  [135] = {.lex_state = 211},
  [136] = {.lex_state = 211},
  [137] = {.lex_state = 211},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 209},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 209},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 209},
  [145] = {.lex_state = 209},
  [146] = {.lex_state = 209},
  [147] = {.lex_state = 209},
  [148] = {.lex_state = 210},
  [149] = {.lex_state = 210},
  [150] = {.lex_state = 213},
  [151] = {.lex_state = 213},
  [152] = {.lex_state = 213},
  [153] = {.lex_state = 213},
  [154] = {.lex_state = 210},
  [155] = {.lex_state = 210},
  [156] = {.lex_state = 213},
  [157] = {.lex_state = 210},
  [158] = {.lex_state = 213},
  [159] = {.lex_state = 212},
  [160] = {.lex_state = 212},
  [161] = {.lex_state = 212},
  [162] = {.lex_state = 212},
  [163] = {.lex_state = 212},
  [164] = {.lex_state = 212},
  [165] = {.lex_state = 212},
  [166] = {.lex_state = 212},
  [167] = {.lex_state = 212},
  [168] = {.lex_state = 212},
  [169] = {.lex_state = 212},
  [170] = {.lex_state = 212},
  [171] = {.lex_state = 212},
  [172] = {.lex_state = 212},
  [173] = {.lex_state = 212},
  [174] = {.lex_state = 212},
  [175] = {.lex_state = 212},
  [176] = {.lex_state = 212},
  [177] = {.lex_state = 212},
  [178] = {.lex_state = 212},
  [179] = {.lex_state = 212},
  [180] = {.lex_state = 212},
  [181] = {.lex_state = 212},
  [182] = {.lex_state = 212},
  [183] = {.lex_state = 212},
  [184] = {.lex_state = 212},
  [185] = {.lex_state = 212},
  [186] = {.lex_state = 212},
  [187] = {.lex_state = 212},
  [188] = {.lex_state = 212},
  [189] = {.lex_state = 212},
  [190] = {.lex_state = 212},
  [191] = {.lex_state = 212},
  [192] = {.lex_state = 212},
  [193] = {.lex_state = 212},
  [194] = {.lex_state = 212},
  [195] = {.lex_state = 212},
  [196] = {.lex_state = 212},
  [197] = {.lex_state = 212},
  [198] = {.lex_state = 212},
  [199] = {.lex_state = 212},
  [200] = {.lex_state = 212},
  [201] = {.lex_state = 212},
  [202] = {.lex_state = 212},
  [203] = {.lex_state = 212},
  [204] = {.lex_state = 212},
  [205] = {.lex_state = 212},
  [206] = {.lex_state = 212},
  [207] = {.lex_state = 212},
  [208] = {.lex_state = 212},
  [209] = {.lex_state = 212},
  [210] = {.lex_state = 212},
  [211] = {.lex_state = 212},
  [212] = {.lex_state = 212},
  [213] = {.lex_state = 212},
  [214] = {.lex_state = 212},
  [215] = {.lex_state = 212},
  [216] = {.lex_state = 212},
  [217] = {.lex_state = 212},
  [218] = {.lex_state = 212},
  [219] = {.lex_state = 212},
  [220] = {.lex_state = 212},
  [221] = {.lex_state = 212},
  [222] = {.lex_state = 212},
  [223] = {.lex_state = 212},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 12},
  [266] = {.lex_state = 9},
  [267] = {.lex_state = 12},
  [268] = {.lex_state = 12},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 12},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 12},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 12},
  [282] = {.lex_state = 12},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 12},
  [285] = {.lex_state = 12},
  [286] = {.lex_state = 12},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 10},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 25},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 25},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 12},
  [302] = {.lex_state = 25},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 212},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 10},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 5},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 10},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 10},
  [349] = {.lex_state = 10},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 5},
  [358] = {.lex_state = 11},
  [359] = {.lex_state = 11},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 11},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 5},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 10},
  [376] = {.lex_state = 12},
  [377] = {.lex_state = 12},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 12},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 10},
  [382] = {.lex_state = 24},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 24},
  [386] = {.lex_state = 10},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 12},
  [392] = {.lex_state = 12},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 25},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 202},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 12},
  [403] = {.lex_state = 202},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 12},
  [406] = {.lex_state = 25},
  [407] = {.lex_state = 12},
  [408] = {.lex_state = 203},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 12},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 5},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 10},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 212},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 10},
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
  [434] = {.lex_state = 10},
  [435] = {.lex_state = 10},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 10},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 204},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 203},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 204},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 10},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 24},
  [479] = {.lex_state = 24},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 10},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 24},
  [484] = {.lex_state = 204},
  [485] = {.lex_state = 204},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 202},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 5},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 10},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 10},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 10},
  [517] = {.lex_state = 5},
  [518] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(495),
    [sym_item] = STATE(26),
    [sym_newline] = STATE(198),
    [sym_blank_line] = STATE(26),
    [sym_use] = STATE(213),
    [sym_struct] = STATE(213),
    [sym_psyche] = STATE(213),
    [sym_skill] = STATE(213),
    [sym_service] = STATE(213),
    [sym_prompt] = STATE(213),
    [sym_instruct] = STATE(213),
    [sym_context] = STATE(213),
    [sym_thunk] = STATE(213),
    [sym_flow] = STATE(213),
    [sym_psyche_keyword] = STATE(423),
    [sym_skill_keyword] = STATE(434),
    [sym_service_keyword] = STATE(435),
    [sym_prompt_keyword] = STATE(437),
    [sym_context_keyword] = STATE(375),
    [sym_instruct_keyword] = STATE(381),
    [aux_sym_source_file_repeat1] = STATE(26),
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
    STATE(32), 1,
      sym_instruction_section,
    STATE(42), 1,
      sym_newline,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_message_section,
    STATE(182), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
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
    STATE(29), 1,
      sym_instruction_section,
    STATE(42), 1,
      sym_newline,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_thunk_tail,
    STATE(178), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(31), 3,
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
  [206] = 27,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(176), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(209), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    STATE(317), 1,
      sym_directive_key,
    ACTIONS(59), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [307] = 25,
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
    STATE(35), 1,
      sym_instruction_section,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(177), 1,
      sym_thunk_body,
    STATE(178), 1,
      sym_message_section,
    STATE(179), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
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
  [404] = 25,
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
    STATE(35), 1,
      sym_instruction_section,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_message_section,
    STATE(179), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_thunk_body,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
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
  [501] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(35), 1,
      sym_instruction_section,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_message_section,
    STATE(179), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(214), 1,
      sym_thunk_body,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
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
    ACTIONS(91), 12,
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
  [598] = 27,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(164), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(209), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    STATE(317), 1,
      sym_directive_key,
    ACTIONS(59), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [699] = 27,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(165), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(209), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    STATE(317), 1,
      sym_directive_key,
    ACTIONS(59), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [800] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(35), 1,
      sym_instruction_section,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(169), 1,
      sym_thunk_body,
    STATE(178), 1,
      sym_message_section,
    STATE(179), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
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
    ACTIONS(95), 12,
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
  [897] = 27,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(207), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(209), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    STATE(317), 1,
      sym_directive_key,
    ACTIONS(59), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [998] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(35), 1,
      sym_instruction_section,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(175), 1,
      sym_thunk_body,
    STATE(178), 1,
      sym_message_section,
    STATE(179), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
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
    ACTIONS(99), 12,
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
  [1095] = 27,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(181), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(209), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    STATE(317), 1,
      sym_directive_key,
    ACTIONS(59), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [1196] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(35), 1,
      sym_instruction_section,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(159), 1,
      sym_thunk_body,
    STATE(178), 1,
      sym_message_section,
    STATE(179), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
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
    ACTIONS(103), 12,
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
  [1293] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(35), 1,
      sym_instruction_section,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_message_section,
    STATE(179), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(191), 1,
      sym_thunk_body,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
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
    ACTIONS(107), 12,
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
  [1390] = 27,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(193), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(209), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    STATE(317), 1,
      sym_directive_key,
    ACTIONS(59), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [1491] = 27,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(194), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(209), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    STATE(317), 1,
      sym_directive_key,
    ACTIONS(59), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [1592] = 25,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(35), 1,
      sym_instruction_section,
    STATE(80), 1,
      sym_instruct_block,
    STATE(82), 1,
      sym_context_block,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_message_section,
    STATE(179), 1,
      sym_thunk_tail,
    STATE(183), 1,
      sym_pass_statement,
    STATE(200), 1,
      sym_thunk_body,
    STATE(352), 1,
      sym_directive_key,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
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
    ACTIONS(111), 12,
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
  [1689] = 27,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(201), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(209), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    STATE(317), 1,
      sym_directive_key,
    ACTIONS(59), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [1790] = 23,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      aux_sym_newline_token1,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(75), 1,
      sym_newline,
    STATE(180), 1,
      sym_pass_statement,
    ACTIONS(119), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(25), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(117), 11,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1882] = 23,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    ACTIONS(115), 1,
      aux_sym_newline_token1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(75), 1,
      sym_newline,
    STATE(161), 1,
      sym_pass_statement,
    ACTIONS(125), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(20), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(123), 11,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1974] = 23,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      aux_sym_newline_token1,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(75), 1,
      sym_newline,
    STATE(180), 1,
      sym_pass_statement,
    ACTIONS(127), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(23), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(117), 11,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [2066] = 23,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    ACTIONS(115), 1,
      aux_sym_newline_token1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(75), 1,
      sym_newline,
    STATE(192), 1,
      sym_pass_statement,
    ACTIONS(119), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(25), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(131), 11,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [2158] = 26,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(162), 1,
      sym_flow_body_tail,
    STATE(209), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    STATE(317), 1,
      sym_directive_key,
    ACTIONS(59), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(78), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [2256] = 21,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      aux_sym_newline_token1,
    ACTIONS(143), 1,
      sym_flow_do_keyword,
    ACTIONS(146), 1,
      sym_flow_ask_keyword,
    ACTIONS(149), 1,
      sym_flow_unfold_keyword,
    ACTIONS(152), 1,
      sym_flow_keep_keyword,
    ACTIONS(155), 1,
      sym_flow_drop_keyword,
    ACTIONS(158), 1,
      sym_flow_rank_keyword,
    ACTIONS(161), 1,
      sym_flow_each_keyword,
    ACTIONS(164), 1,
      sym_flow_fold_keyword,
    ACTIONS(167), 1,
      sym_flow_repeat_keyword,
    ACTIONS(170), 1,
      sym_indented_raw_text,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(75), 1,
      sym_newline,
    ACTIONS(140), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(25), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
    ACTIONS(138), 12,
      sym_program_doc_comment,
      anon_sym_context,
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
  [2343] = 23,
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
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym_program_doc_comment,
    STATE(198), 1,
      sym_newline,
    STATE(375), 1,
      sym_context_keyword,
    STATE(381), 1,
      sym_instruct_keyword,
    STATE(423), 1,
      sym_psyche_keyword,
    STATE(434), 1,
      sym_skill_keyword,
    STATE(435), 1,
      sym_service_keyword,
    STATE(437), 1,
      sym_prompt_keyword,
    ACTIONS(177), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(27), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(213), 10,
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
  [2425] = 23,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      aux_sym_newline_token1,
    ACTIONS(184), 1,
      sym_program_doc_comment,
    ACTIONS(190), 1,
      anon_sym_context,
    ACTIONS(193), 1,
      anon_sym_instruct,
    ACTIONS(196), 1,
      sym_use_keyword,
    ACTIONS(199), 1,
      sym_struct_keyword,
    ACTIONS(202), 1,
      anon_sym_psyche,
    ACTIONS(205), 1,
      anon_sym_skill,
    ACTIONS(208), 1,
      anon_sym_service,
    ACTIONS(211), 1,
      anon_sym_prompt,
    ACTIONS(214), 1,
      sym_thunk_keyword,
    ACTIONS(217), 1,
      sym_flow_keyword,
    STATE(198), 1,
      sym_newline,
    STATE(375), 1,
      sym_context_keyword,
    STATE(381), 1,
      sym_instruct_keyword,
    STATE(423), 1,
      sym_psyche_keyword,
    STATE(434), 1,
      sym_skill_keyword,
    STATE(435), 1,
      sym_service_keyword,
    STATE(437), 1,
      sym_prompt_keyword,
    ACTIONS(187), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(27), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(213), 10,
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
  [2507] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      sym_comment_line,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(113), 1,
      sym_newline,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(188), 1,
      sym_thunk_tail,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(92), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(224), 12,
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
  [2577] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym_comment_line,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(113), 1,
      sym_newline,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(189), 1,
      sym_thunk_tail,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(33), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(40), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(230), 12,
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
  [2647] = 22,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(57), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_flow_do_keyword,
    ACTIONS(63), 1,
      sym_flow_ask_keyword,
    ACTIONS(65), 1,
      sym_flow_unfold_keyword,
    ACTIONS(67), 1,
      sym_flow_keep_keyword,
    ACTIONS(69), 1,
      sym_flow_drop_keyword,
    ACTIONS(71), 1,
      sym_flow_rank_keyword,
    ACTIONS(73), 1,
      sym_flow_each_keyword,
    ACTIONS(75), 1,
      sym_flow_fold_keyword,
    ACTIONS(77), 1,
      sym_flow_repeat_keyword,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    STATE(22), 1,
      sym_flow_body_statement,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(68), 1,
      sym_unroled_message_block,
    STATE(69), 1,
      sym_block_indented_implicit,
    STATE(161), 1,
      sym_pass_statement,
    STATE(224), 1,
      sym_newline,
    ACTIONS(234), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(49), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(139), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(50), 9,
      sym_flow_do_step,
      sym_flow_ask_step,
      sym_flow_unfold_step,
      sym_flow_keep_step,
      sym_flow_drop_step,
      sym_flow_rank_step,
      sym_flow_each_step,
      sym_flow_fold_step,
      sym_flow_repeat_step,
  [2725] = 8,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      aux_sym_newline_token1,
    ACTIONS(243), 1,
      sym_comment_line,
    STATE(42), 1,
      sym_newline,
    STATE(352), 1,
      sym_directive_key,
    STATE(31), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(246), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(241), 17,
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
  [2775] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      sym_comment_line,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(113), 1,
      sym_newline,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(170), 1,
      sym_thunk_tail,
    STATE(178), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(28), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(40), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(251), 12,
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
  [2845] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      sym_comment_line,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(113), 1,
      sym_newline,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(199), 1,
      sym_thunk_tail,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(92), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(257), 12,
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
  [2915] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      sym_comment_line,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(113), 1,
      sym_newline,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(174), 1,
      sym_thunk_tail,
    STATE(178), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(40), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(92), 2,
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
  [2985] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      sym_comment_line,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(113), 1,
      sym_newline,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_message_section,
    STATE(183), 1,
      sym_pass_statement,
    STATE(202), 1,
      sym_thunk_tail,
    STATE(513), 1,
      sym_roled_message_kind,
    STATE(34), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(40), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(265), 12,
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
  [3055] = 6,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    ACTIONS(115), 1,
      aux_sym_newline_token1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_newline,
    STATE(38), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(271), 23,
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
  [3098] = 6,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    ACTIONS(280), 1,
      sym_indented_raw_text,
    STATE(75), 1,
      sym_newline,
    STATE(37), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(278), 23,
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
  [3141] = 6,
    ACTIONS(79), 1,
      sym_indented_raw_text,
    ACTIONS(115), 1,
      aux_sym_newline_token1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_newline,
    STATE(37), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(285), 23,
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
  [3184] = 13,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 1,
      aux_sym_newline_token1,
    ACTIONS(294), 1,
      sym_comment_line,
    ACTIONS(300), 1,
      sym_indented_raw_text,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(133), 1,
      sym_newline,
    STATE(513), 1,
      sym_roled_message_kind,
    ACTIONS(297), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(39), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(292), 12,
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
  [3240] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      aux_sym_newline_token1,
    ACTIONS(309), 1,
      sym_comment_line,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(133), 1,
      sym_newline,
    STATE(513), 1,
      sym_roled_message_kind,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(41), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(307), 12,
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
  [3296] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(305), 1,
      aux_sym_newline_token1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      sym_comment_line,
    STATE(88), 1,
      sym_block_indented_content_line,
    STATE(124), 1,
      sym_roled_message_block,
    STATE(125), 1,
      sym_block_indented_implicit,
    STATE(127), 1,
      sym_unroled_message_block,
    STATE(133), 1,
      sym_newline,
    STATE(513), 1,
      sym_roled_message_kind,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(39), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(313), 12,
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
  [3352] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 27,
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
  [3385] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 27,
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
  [3418] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 27,
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
  [3451] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 27,
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
  [3484] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 27,
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
  [3517] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 25,
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
  [3548] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 25,
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
  [3579] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 25,
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
  [3610] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 25,
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
  [3641] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 25,
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
  [3672] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 25,
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
  [3703] = 2,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 25,
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
  [3734] = 2,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 25,
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
  [3765] = 2,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 25,
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
  [3796] = 2,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 25,
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
  [3827] = 2,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 25,
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
  [3858] = 2,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(379), 25,
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
  [3889] = 2,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    ACTIONS(383), 25,
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
  [3920] = 2,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    ACTIONS(387), 25,
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
  [3951] = 2,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    ACTIONS(391), 25,
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
  [3982] = 2,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 25,
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
  [4013] = 2,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 25,
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
  [4044] = 2,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 25,
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
  [4075] = 2,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 25,
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
  [4106] = 2,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(411), 25,
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
  [4137] = 2,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 25,
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
  [4168] = 2,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 25,
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
  [4199] = 2,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 25,
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
  [4230] = 2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 25,
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
  [4261] = 2,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(431), 25,
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
  [4292] = 2,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(435), 25,
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
  [4323] = 2,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 25,
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
  [4354] = 2,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(443), 25,
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
  [4385] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 25,
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
  [4416] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 25,
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
  [4447] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 25,
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
  [4478] = 4,
    STATE(317), 1,
      sym_directive_key,
    STATE(78), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(447), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(445), 14,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_pass_keyword,
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
  [4512] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      sym_comment_line,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_instruct_block,
    STATE(113), 1,
      sym_newline,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(92), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(452), 16,
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
  [4556] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 1,
      sym_comment_line,
    STATE(111), 1,
      sym_context_block,
    STATE(113), 1,
      sym_newline,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(81), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(456), 16,
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
  [4600] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      sym_comment_line,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_context_block,
    STATE(113), 1,
      sym_newline,
    STATE(510), 1,
      sym_context_block_kind,
    STATE(92), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(452), 16,
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
  [4644] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 1,
      sym_comment_line,
    STATE(111), 1,
      sym_instruct_block,
    STATE(113), 1,
      sym_newline,
    STATE(512), 1,
      sym_instruct_block_kind,
    STATE(79), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(456), 16,
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
  [4688] = 6,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(466), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_newline,
    STATE(85), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(464), 17,
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
  [4725] = 6,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(466), 1,
      sym_indented_raw_text,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_newline,
    STATE(83), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(470), 17,
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
  [4762] = 6,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 1,
      aux_sym_newline_token1,
    ACTIONS(475), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_newline,
    STATE(85), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(278), 17,
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
  [4799] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      aux_sym_newline_token1,
    STATE(133), 1,
      sym_newline,
    STATE(89), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(285), 16,
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
  [4835] = 8,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 1,
      aux_sym_newline_token1,
    ACTIONS(484), 1,
      sym_value_name,
    ACTIONS(486), 1,
      sym_indented_raw_text,
    STATE(145), 1,
      sym_newline,
    STATE(468), 1,
      sym_property_key,
    STATE(91), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(482), 13,
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
  [4875] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      aux_sym_newline_token1,
    STATE(133), 1,
      sym_newline,
    STATE(86), 3,
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
  [4911] = 6,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(488), 1,
      aux_sym_newline_token1,
    ACTIONS(491), 1,
      sym_indented_raw_text,
    STATE(133), 1,
      sym_newline,
    STATE(89), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(278), 16,
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
  [4947] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(305), 1,
      aux_sym_newline_token1,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_newline,
    STATE(89), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(464), 16,
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
  [4983] = 8,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    ACTIONS(496), 1,
      aux_sym_newline_token1,
    ACTIONS(501), 1,
      sym_value_name,
    ACTIONS(504), 1,
      sym_indented_raw_text,
    STATE(145), 1,
      sym_newline,
    STATE(468), 1,
      sym_property_key,
    STATE(91), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(499), 13,
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
  [5023] = 6,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 1,
      aux_sym_newline_token1,
    ACTIONS(514), 1,
      sym_comment_line,
    STATE(113), 1,
      sym_newline,
    STATE(92), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(512), 17,
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
  [5059] = 8,
    ACTIONS(480), 1,
      aux_sym_newline_token1,
    ACTIONS(484), 1,
      sym_value_name,
    ACTIONS(486), 1,
      sym_indented_raw_text,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      sym_newline,
    STATE(468), 1,
      sym_property_key,
    STATE(87), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(519), 13,
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
  [5099] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(305), 1,
      aux_sym_newline_token1,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_newline,
    STATE(90), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(470), 16,
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
  [5135] = 1,
    ACTIONS(335), 22,
      aux_sym_newline_token1,
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
      sym_pass_keyword,
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
  [5160] = 1,
    ACTIONS(323), 22,
      aux_sym_newline_token1,
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
      sym_pass_keyword,
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
  [5185] = 1,
    ACTIONS(327), 22,
      aux_sym_newline_token1,
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
      sym_pass_keyword,
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
  [5210] = 1,
    ACTIONS(331), 22,
      aux_sym_newline_token1,
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
      sym_pass_keyword,
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
  [5235] = 8,
    ACTIONS(523), 1,
      aux_sym_newline_token1,
    ACTIONS(531), 1,
      sym_value_name,
    STATE(156), 1,
      sym_newline,
    STATE(443), 1,
      sym_field_name,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(526), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(99), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(529), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [5273] = 8,
    ACTIONS(536), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_value_name,
    STATE(156), 1,
      sym_newline,
    STATE(443), 1,
      sym_field_name,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(538), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(99), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(540), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [5311] = 2,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 19,
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
  [5336] = 2,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(550), 19,
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
  [5361] = 6,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 1,
      aux_sym_newline_token1,
    ACTIONS(555), 1,
      sym_indented_raw_text,
    STATE(148), 1,
      sym_newline,
    STATE(103), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(278), 13,
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
  [5394] = 2,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    ACTIONS(560), 19,
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
  [5419] = 2,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 19,
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
  [5444] = 2,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    ACTIONS(568), 19,
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
  [5469] = 6,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      aux_sym_newline_token1,
    ACTIONS(572), 1,
      sym_indented_raw_text,
    STATE(148), 1,
      sym_newline,
    STATE(103), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(464), 13,
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
  [5502] = 2,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 19,
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
  [5527] = 6,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      aux_sym_newline_token1,
    ACTIONS(572), 1,
      sym_indented_raw_text,
    STATE(148), 1,
      sym_newline,
    STATE(107), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(470), 13,
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
  [5560] = 2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 19,
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
  [5585] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 19,
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
  [5610] = 2,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(580), 19,
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
  [5635] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 19,
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
  [5660] = 2,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 19,
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
  [5685] = 2,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(588), 19,
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
  [5710] = 2,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    ACTIONS(592), 19,
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
  [5735] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 19,
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
  [5760] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 19,
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
  [5785] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 19,
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
  [5810] = 2,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 19,
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
  [5835] = 2,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
    ACTIONS(546), 18,
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
  [5859] = 2,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
    ACTIONS(568), 18,
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
  [5883] = 2,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 18,
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
  [5907] = 2,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 18,
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
  [5931] = 2,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 18,
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
  [5955] = 2,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 18,
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
  [5979] = 2,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 18,
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
  [6003] = 2,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 18,
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
  [6027] = 2,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 18,
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
  [6051] = 2,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
    ACTIONS(550), 18,
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
  [6075] = 2,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    ACTIONS(560), 18,
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
  [6099] = 2,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 18,
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
  [6123] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 18,
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
  [6147] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 18,
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
  [6171] = 2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 18,
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
  [6195] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 18,
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
  [6219] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 18,
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
  [6243] = 13,
    ACTIONS(305), 1,
      aux_sym_newline_token1,
    ACTIONS(606), 1,
      sym_inline_comment,
    ACTIONS(608), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(612), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(94), 1,
      sym_line_end,
    STATE(126), 1,
      sym_block_value,
    STATE(137), 1,
      sym_newline,
    STATE(304), 1,
      sym_fence_open,
    STATE(366), 1,
      sym_block_name,
    STATE(367), 1,
      sym_block_content_inline,
    STATE(430), 1,
      sym_inline_text,
    ACTIONS(610), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(123), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [6287] = 5,
    ACTIONS(614), 1,
      aux_sym_newline_token1,
    STATE(224), 1,
      sym_newline,
    ACTIONS(617), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(139), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(620), 11,
      sym_pass_keyword,
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
  [6315] = 2,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    ACTIONS(624), 16,
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
  [6337] = 13,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(608), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(612), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(626), 1,
      sym_inline_comment,
    STATE(84), 1,
      sym_line_end,
    STATE(116), 1,
      sym_block_value,
    STATE(117), 1,
      sym_newline,
    STATE(315), 1,
      sym_fence_open,
    STATE(345), 1,
      sym_block_name,
    STATE(355), 1,
      sym_block_content_inline,
    STATE(430), 1,
      sym_inline_text,
    ACTIONS(610), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(114), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [6381] = 2,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    ACTIONS(630), 16,
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
  [6403] = 13,
    ACTIONS(222), 1,
      aux_sym_newline_token1,
    ACTIONS(608), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(612), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(626), 1,
      sym_inline_comment,
    STATE(84), 1,
      sym_line_end,
    STATE(115), 1,
      sym_block_value,
    STATE(117), 1,
      sym_newline,
    STATE(315), 1,
      sym_fence_open,
    STATE(345), 1,
      sym_block_name,
    STATE(355), 1,
      sym_block_content_inline,
    STATE(430), 1,
      sym_inline_text,
    ACTIONS(610), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(114), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [6447] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 16,
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
  [6469] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 16,
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
  [6491] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 16,
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
  [6513] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 16,
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
  [6535] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 15,
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
  [6556] = 2,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 15,
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
  [6577] = 2,
    ACTIONS(632), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(634), 13,
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
  [6598] = 2,
    ACTIONS(636), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(638), 13,
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
  [6619] = 2,
    ACTIONS(321), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(323), 13,
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
  [6640] = 2,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(331), 13,
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
  [6661] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 15,
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
  [6682] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 15,
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
  [6703] = 2,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(319), 13,
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
  [6724] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 15,
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
  [6745] = 2,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(327), 13,
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
  [6766] = 2,
    ACTIONS(642), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(640), 13,
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
  [6786] = 2,
    ACTIONS(646), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(644), 13,
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
  [6806] = 2,
    ACTIONS(117), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(113), 13,
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
  [6826] = 2,
    ACTIONS(650), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(648), 13,
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
  [6846] = 2,
    ACTIONS(654), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(652), 13,
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
  [6866] = 2,
    ACTIONS(658), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(656), 13,
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
  [6886] = 2,
    ACTIONS(662), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(660), 13,
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
  [6906] = 2,
    ACTIONS(666), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(664), 13,
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
  [6926] = 2,
    ACTIONS(596), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(594), 13,
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
  [6946] = 2,
    ACTIONS(670), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(668), 13,
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
  [6966] = 2,
    ACTIONS(674), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(672), 13,
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
  [6986] = 2,
    ACTIONS(678), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(676), 13,
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
  [7006] = 2,
    ACTIONS(682), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(680), 13,
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
  [7026] = 2,
    ACTIONS(686), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(684), 13,
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
  [7046] = 2,
    ACTIONS(690), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(688), 13,
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
  [7066] = 2,
    ACTIONS(694), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(692), 13,
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
  [7086] = 2,
    ACTIONS(698), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(696), 13,
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
  [7106] = 2,
    ACTIONS(702), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(700), 13,
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
  [7126] = 2,
    ACTIONS(706), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(704), 13,
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
  [7146] = 2,
    ACTIONS(710), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(708), 13,
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
  [7166] = 2,
    ACTIONS(714), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(712), 13,
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
  [7186] = 2,
    ACTIONS(131), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(129), 13,
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
  [7206] = 2,
    ACTIONS(718), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(716), 13,
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
  [7226] = 2,
    ACTIONS(722), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(720), 13,
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
  [7246] = 2,
    ACTIONS(726), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(724), 13,
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
  [7266] = 2,
    ACTIONS(730), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(728), 13,
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
  [7286] = 2,
    ACTIONS(550), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(548), 13,
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
  [7306] = 2,
    ACTIONS(546), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(544), 13,
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
  [7326] = 2,
    ACTIONS(560), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(558), 13,
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
  [7346] = 2,
    ACTIONS(734), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(732), 13,
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
  [7366] = 2,
    ACTIONS(738), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(736), 13,
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
  [7386] = 2,
    ACTIONS(323), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(321), 13,
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
  [7406] = 2,
    ACTIONS(742), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(740), 13,
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
  [7426] = 2,
    ACTIONS(746), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(744), 13,
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
  [7446] = 2,
    ACTIONS(750), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(748), 13,
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
  [7466] = 2,
    ACTIONS(754), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(752), 13,
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
  [7486] = 2,
    ACTIONS(758), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(756), 13,
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
  [7506] = 2,
    ACTIONS(762), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(760), 13,
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
  [7526] = 2,
    ACTIONS(576), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(574), 13,
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
  [7546] = 2,
    ACTIONS(319), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(317), 13,
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
  [7566] = 2,
    ACTIONS(766), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(764), 13,
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
  [7586] = 2,
    ACTIONS(770), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(768), 13,
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
  [7606] = 2,
    ACTIONS(774), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(772), 13,
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
  [7626] = 2,
    ACTIONS(778), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(776), 13,
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
  [7646] = 2,
    ACTIONS(782), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(780), 13,
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
  [7666] = 2,
    ACTIONS(786), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(784), 13,
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
  [7686] = 2,
    ACTIONS(790), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(788), 13,
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
  [7706] = 2,
    ACTIONS(794), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(792), 13,
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
  [7726] = 2,
    ACTIONS(798), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(796), 13,
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
  [7746] = 2,
    ACTIONS(802), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(800), 13,
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
  [7766] = 2,
    ACTIONS(123), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(121), 13,
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
  [7786] = 2,
    ACTIONS(806), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(804), 13,
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
  [7806] = 2,
    ACTIONS(810), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(808), 13,
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
  [7826] = 2,
    ACTIONS(814), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(812), 13,
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
  [7846] = 2,
    ACTIONS(818), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(816), 13,
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
  [7866] = 2,
    ACTIONS(822), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(820), 13,
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
  [7886] = 2,
    ACTIONS(826), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(824), 13,
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
  [7906] = 2,
    ACTIONS(830), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(828), 13,
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
  [7926] = 2,
    ACTIONS(834), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(832), 13,
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
  [7946] = 2,
    ACTIONS(327), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(325), 13,
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
  [7966] = 2,
    ACTIONS(331), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(329), 13,
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
  [7986] = 2,
    ACTIONS(838), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(836), 13,
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
  [8006] = 2,
    ACTIONS(842), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(840), 13,
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
  [8026] = 2,
    ACTIONS(846), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(844), 13,
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
  [8046] = 2,
    ACTIONS(850), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(848), 13,
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
  [8066] = 1,
    ACTIONS(319), 14,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_pass_keyword,
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
  [8083] = 1,
    ACTIONS(323), 14,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_pass_keyword,
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
  [8100] = 12,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(856), 1,
      sym_flow_target,
    ACTIONS(858), 1,
      sym_flow_to_keyword,
    ACTIONS(860), 1,
      sym_flow_par_keyword,
    ACTIONS(862), 1,
      sym_colon,
    STATE(63), 1,
      sym_line_end,
    STATE(74), 1,
      sym_flow_step_body,
    STATE(76), 1,
      sym_newline,
    STATE(290), 1,
      sym_flow_each_head,
    STATE(291), 1,
      sym_flow_output_type,
    STATE(334), 1,
      sym_flow_parallelism,
  [8137] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(420), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8159] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(496), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8181] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(482), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8203] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(493), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8225] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(518), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8247] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(498), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8269] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(432), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8291] = 5,
    ACTIONS(870), 1,
      sym_type_name,
    STATE(272), 1,
      sym_base_type,
    STATE(328), 1,
      sym_type,
    STATE(311), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(868), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8313] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(503), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8335] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(480), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8357] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(353), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8379] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(306), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8401] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(327), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8423] = 5,
    ACTIONS(866), 1,
      sym_type_name,
    STATE(247), 1,
      sym_base_type,
    STATE(507), 1,
      sym_type,
    STATE(260), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(864), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [8445] = 8,
    ACTIONS(536), 1,
      aux_sym_newline_token1,
    ACTIONS(872), 1,
      sym_doc_comment,
    ACTIONS(874), 1,
      sym_comment_line,
    ACTIONS(876), 1,
      sym_value_name,
    STATE(156), 1,
      sym_newline,
    STATE(222), 1,
      sym_struct_body,
    STATE(443), 1,
      sym_field_name,
    STATE(100), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [8472] = 10,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      sym_colon,
    ACTIONS(878), 1,
      sym_flow_target,
    ACTIONS(880), 1,
      sym_flow_to_keyword,
    STATE(60), 1,
      sym_flow_step_body,
    STATE(63), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
    STATE(299), 1,
      sym_flow_fold_head,
    STATE(357), 1,
      sym_flow_output_type,
  [8503] = 10,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(858), 1,
      sym_flow_to_keyword,
    ACTIONS(862), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym_flow_target,
    STATE(63), 1,
      sym_line_end,
    STATE(67), 1,
      sym_flow_step_body,
    STATE(76), 1,
      sym_newline,
    STATE(289), 1,
      sym_flow_unfold_head,
    STATE(383), 1,
      sym_flow_output_type,
  [8534] = 10,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(860), 1,
      sym_flow_par_keyword,
    ACTIONS(862), 1,
      sym_colon,
    ACTIONS(884), 1,
      sym_flow_target,
    STATE(63), 1,
      sym_line_end,
    STATE(71), 1,
      sym_flow_step_body,
    STATE(76), 1,
      sym_newline,
    STATE(300), 1,
      sym_flow_item_filter_head,
    STATE(360), 1,
      sym_flow_parallelism,
  [8565] = 10,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(860), 1,
      sym_flow_par_keyword,
    ACTIONS(862), 1,
      sym_colon,
    ACTIONS(884), 1,
      sym_flow_target,
    STATE(63), 1,
      sym_line_end,
    STATE(72), 1,
      sym_flow_step_body,
    STATE(76), 1,
      sym_newline,
    STATE(298), 1,
      sym_flow_item_filter_head,
    STATE(360), 1,
      sym_flow_parallelism,
  [8596] = 10,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      sym_colon,
    ACTIONS(886), 1,
      sym_flow_target,
    ACTIONS(888), 1,
      sym_integer_literal,
    STATE(63), 1,
      sym_line_end,
    STATE(73), 1,
      sym_flow_step_body,
    STATE(76), 1,
      sym_newline,
    STATE(293), 1,
      sym_flow_rank_head,
    STATE(413), 1,
      sym_flow_rank_limit,
  [8627] = 5,
    ACTIONS(892), 1,
      sym_array_suffix,
    STATE(249), 1,
      aux_sym_type_repeat1,
    STATE(264), 1,
      sym_type_suffix,
    ACTIONS(894), 2,
      sym_flow_target,
      sym_flow_par_keyword,
    ACTIONS(890), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8648] = 5,
    ACTIONS(898), 1,
      sym_array_suffix,
    STATE(248), 1,
      aux_sym_type_repeat1,
    STATE(264), 1,
      sym_type_suffix,
    ACTIONS(901), 2,
      sym_flow_target,
      sym_flow_par_keyword,
    ACTIONS(896), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8669] = 5,
    ACTIONS(892), 1,
      sym_array_suffix,
    STATE(248), 1,
      aux_sym_type_repeat1,
    STATE(264), 1,
      sym_type_suffix,
    ACTIONS(905), 2,
      sym_flow_target,
      sym_flow_par_keyword,
    ACTIONS(903), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8690] = 8,
    ACTIONS(907), 1,
      aux_sym_newline_token1,
    ACTIONS(909), 1,
      sym_inline_comment,
    ACTIONS(911), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(93), 1,
      sym_line_end,
    STATE(147), 1,
      sym_newline,
    STATE(216), 1,
      sym_cap_body,
    STATE(305), 1,
      sym_fence_open,
    STATE(212), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [8716] = 8,
    ACTIONS(911), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(913), 1,
      aux_sym_newline_token1,
    ACTIONS(915), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
    STATE(154), 1,
      sym_newline,
    STATE(221), 1,
      sym_instruct_body,
    STATE(308), 1,
      sym_fence_open,
    STATE(171), 2,
      sym_block_indented,
      sym_block_fenced,
  [8742] = 8,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(921), 1,
      sym_frontmatter_delimiter,
    ACTIONS(923), 1,
      sym_fenced_raw_text,
    STATE(184), 1,
      sym_fence_close,
    STATE(275), 1,
      sym_frontmatter,
    STATE(410), 1,
      sym_newline,
    STATE(276), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8768] = 8,
    ACTIONS(911), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(913), 1,
      aux_sym_newline_token1,
    ACTIONS(915), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
    STATE(154), 1,
      sym_newline,
    STATE(163), 1,
      sym_context_body,
    STATE(308), 1,
      sym_fence_open,
    STATE(166), 2,
      sym_block_indented,
      sym_block_fenced,
  [8794] = 8,
    ACTIONS(907), 1,
      aux_sym_newline_token1,
    ACTIONS(909), 1,
      sym_inline_comment,
    ACTIONS(911), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(93), 1,
      sym_line_end,
    STATE(147), 1,
      sym_newline,
    STATE(217), 1,
      sym_cap_body,
    STATE(305), 1,
      sym_fence_open,
    STATE(212), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [8820] = 8,
    ACTIONS(911), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(913), 1,
      aux_sym_newline_token1,
    ACTIONS(915), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
    STATE(154), 1,
      sym_newline,
    STATE(168), 1,
      sym_instruct_body,
    STATE(308), 1,
      sym_fence_open,
    STATE(171), 2,
      sym_block_indented,
      sym_block_fenced,
  [8846] = 8,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(921), 1,
      sym_frontmatter_delimiter,
    ACTIONS(923), 1,
      sym_fenced_raw_text,
    STATE(195), 1,
      sym_fence_close,
    STATE(267), 1,
      sym_frontmatter,
    STATE(410), 1,
      sym_newline,
    STATE(268), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8872] = 8,
    ACTIONS(907), 1,
      aux_sym_newline_token1,
    ACTIONS(909), 1,
      sym_inline_comment,
    ACTIONS(911), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(93), 1,
      sym_line_end,
    STATE(147), 1,
      sym_newline,
    STATE(211), 1,
      sym_cap_body,
    STATE(305), 1,
      sym_fence_open,
    STATE(212), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [8898] = 8,
    ACTIONS(911), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(913), 1,
      aux_sym_newline_token1,
    ACTIONS(915), 1,
      sym_inline_comment,
    STATE(109), 1,
      sym_line_end,
    STATE(154), 1,
      sym_newline,
    STATE(220), 1,
      sym_context_body,
    STATE(308), 1,
      sym_fence_open,
    STATE(166), 2,
      sym_block_indented,
      sym_block_fenced,
  [8924] = 8,
    ACTIONS(907), 1,
      aux_sym_newline_token1,
    ACTIONS(909), 1,
      sym_inline_comment,
    ACTIONS(911), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(93), 1,
      sym_line_end,
    STATE(147), 1,
      sym_newline,
    STATE(215), 1,
      sym_cap_body,
    STATE(305), 1,
      sym_fence_open,
    STATE(212), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [8950] = 2,
    ACTIONS(927), 2,
      sym_flow_target,
      sym_flow_par_keyword,
    ACTIONS(925), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8963] = 2,
    ACTIONS(931), 2,
      sym_flow_target,
      sym_flow_par_keyword,
    ACTIONS(929), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8976] = 2,
    ACTIONS(935), 2,
      sym_flow_target,
      sym_flow_par_keyword,
    ACTIONS(933), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8989] = 2,
    ACTIONS(939), 2,
      sym_flow_target,
      sym_flow_par_keyword,
    ACTIONS(937), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9002] = 2,
    ACTIONS(943), 2,
      sym_flow_target,
      sym_flow_par_keyword,
    ACTIONS(941), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9015] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(923), 1,
      sym_fenced_raw_text,
    STATE(206), 1,
      sym_fence_close,
    STATE(410), 1,
      sym_newline,
    STATE(301), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9035] = 7,
    ACTIONS(945), 1,
      aux_sym_newline_token1,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      aux_sym_flow_inline_text_token1,
    STATE(66), 1,
      sym_flow_condition_body,
    STATE(336), 1,
      sym_flow_inline_text,
    STATE(382), 1,
      sym_line_end,
    STATE(478), 1,
      sym_newline,
  [9057] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(923), 1,
      sym_fenced_raw_text,
    STATE(203), 1,
      sym_fence_close,
    STATE(410), 1,
      sym_newline,
    STATE(265), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9077] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(923), 1,
      sym_fenced_raw_text,
    STATE(204), 1,
      sym_fence_close,
    STATE(410), 1,
      sym_newline,
    STATE(301), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9097] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    STATE(185), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(278), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9117] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(923), 1,
      sym_fenced_raw_text,
    STATE(205), 1,
      sym_fence_close,
    STATE(410), 1,
      sym_newline,
    STATE(301), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9137] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    STATE(187), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(294), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9157] = 4,
    ACTIONS(953), 1,
      sym_array_suffix,
    STATE(273), 1,
      aux_sym_type_repeat1,
    STATE(313), 1,
      sym_type_suffix,
    ACTIONS(890), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_target,
      sym_colon,
  [9173] = 4,
    ACTIONS(953), 1,
      sym_array_suffix,
    STATE(288), 1,
      aux_sym_type_repeat1,
    STATE(313), 1,
      sym_type_suffix,
    ACTIONS(903), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_target,
      sym_colon,
  [9189] = 7,
    ACTIONS(945), 1,
      aux_sym_newline_token1,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      aux_sym_flow_inline_text_token1,
    STATE(47), 1,
      sym_flow_condition_body,
    STATE(336), 1,
      sym_flow_inline_text,
    STATE(382), 1,
      sym_line_end,
    STATE(478), 1,
      sym_newline,
  [9211] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(923), 1,
      sym_fenced_raw_text,
    STATE(196), 1,
      sym_fence_close,
    STATE(410), 1,
      sym_newline,
    STATE(270), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9231] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(923), 1,
      sym_fenced_raw_text,
    STATE(223), 1,
      sym_fence_close,
    STATE(410), 1,
      sym_newline,
    STATE(301), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9251] = 7,
    ACTIONS(945), 1,
      aux_sym_newline_token1,
    ACTIONS(947), 1,
      sym_inline_comment,
    ACTIONS(949), 1,
      aux_sym_flow_inline_text_token1,
    STATE(343), 1,
      sym_flow_inline_body,
    STATE(385), 1,
      sym_line_end,
    STATE(440), 1,
      sym_flow_inline_text,
    STATE(478), 1,
      sym_newline,
  [9273] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    STATE(197), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(294), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9293] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(919), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    STATE(167), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(271), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9313] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    ACTIONS(955), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(120), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(282), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9333] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    ACTIONS(955), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(102), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(283), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9353] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    ACTIONS(955), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(104), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(294), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9373] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    ACTIONS(955), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(108), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(294), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9393] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    ACTIONS(957), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(129), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(286), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9413] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    ACTIONS(957), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(130), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(287), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9433] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    ACTIONS(957), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(131), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(294), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9453] = 6,
    ACTIONS(917), 1,
      aux_sym_newline_token1,
    ACTIONS(951), 1,
      sym_fenced_raw_text,
    ACTIONS(957), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(132), 1,
      sym_fence_close,
    STATE(407), 1,
      sym_newline,
    STATE(294), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9473] = 4,
    ACTIONS(959), 1,
      sym_array_suffix,
    STATE(288), 1,
      aux_sym_type_repeat1,
    STATE(313), 1,
      sym_type_suffix,
    ACTIONS(896), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_target,
      sym_colon,
  [9489] = 6,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      sym_colon,
    STATE(53), 1,
      sym_flow_step_body,
    STATE(63), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [9508] = 6,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      sym_colon,
    STATE(57), 1,
      sym_flow_step_body,
    STATE(63), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [9527] = 4,
    ACTIONS(860), 1,
      sym_flow_par_keyword,
    ACTIONS(964), 1,
      sym_flow_target,
    STATE(370), 1,
      sym_flow_parallelism,
    ACTIONS(962), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [9542] = 6,
    ACTIONS(966), 1,
      sym_arrow,
    ACTIONS(968), 1,
      sym_colon,
    ACTIONS(970), 1,
      sym_lparen,
    ACTIONS(972), 1,
      sym_value_name,
    STATE(364), 1,
      sym_thunk_name,
    STATE(428), 1,
      sym_params,
  [9561] = 6,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      sym_colon,
    STATE(56), 1,
      sym_flow_step_body,
    STATE(63), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [9580] = 5,
    ACTIONS(974), 1,
      aux_sym_newline_token1,
    ACTIONS(977), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(979), 1,
      sym_fenced_raw_text,
    STATE(407), 1,
      sym_newline,
    STATE(294), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9597] = 5,
    ACTIONS(982), 1,
      sym_frontmatter_comment,
    ACTIONS(984), 1,
      sym_frontmatter_delimiter,
    ACTIONS(986), 1,
      sym_value_name,
    STATE(473), 1,
      sym_property_key,
    STATE(297), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [9614] = 6,
    ACTIONS(970), 1,
      sym_lparen,
    ACTIONS(988), 1,
      sym_arrow,
    ACTIONS(990), 1,
      sym_colon,
    ACTIONS(992), 1,
      sym_value_name,
    STATE(324), 1,
      sym_flow_name,
    STATE(438), 1,
      sym_params,
  [9633] = 5,
    ACTIONS(986), 1,
      sym_value_name,
    ACTIONS(994), 1,
      sym_frontmatter_comment,
    ACTIONS(996), 1,
      sym_frontmatter_delimiter,
    STATE(473), 1,
      sym_property_key,
    STATE(302), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [9650] = 6,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      sym_colon,
    STATE(55), 1,
      sym_flow_step_body,
    STATE(63), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [9669] = 6,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      sym_colon,
    STATE(58), 1,
      sym_flow_step_body,
    STATE(63), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [9688] = 6,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      sym_colon,
    STATE(54), 1,
      sym_flow_step_body,
    STATE(63), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [9707] = 5,
    ACTIONS(998), 1,
      aux_sym_newline_token1,
    ACTIONS(1001), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    STATE(410), 1,
      sym_newline,
    STATE(301), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9724] = 5,
    ACTIONS(1006), 1,
      sym_frontmatter_comment,
    ACTIONS(1009), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1011), 1,
      sym_value_name,
    STATE(473), 1,
      sym_property_key,
    STATE(302), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [9741] = 5,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(1014), 1,
      sym_flow_until_keyword,
    STATE(59), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [9757] = 5,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    ACTIONS(1018), 1,
      sym_inline_comment,
    ACTIONS(1020), 1,
      sym_block_language,
    STATE(284), 1,
      sym_line_end,
    STATE(391), 1,
      sym_newline,
  [9773] = 5,
    ACTIONS(1022), 1,
      aux_sym_newline_token1,
    ACTIONS(1024), 1,
      sym_inline_comment,
    ACTIONS(1026), 1,
      sym_block_language,
    STATE(252), 1,
      sym_line_end,
    STATE(358), 1,
      sym_newline,
  [9789] = 2,
    ACTIONS(1030), 2,
      sym_flow_target,
      sym_flow_par_keyword,
    ACTIONS(1028), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [9799] = 3,
    ACTIONS(1034), 1,
      sym_flow_par_keyword,
    STATE(409), 1,
      sym_flow_parallelism,
    ACTIONS(1032), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [9811] = 5,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    ACTIONS(1018), 1,
      sym_inline_comment,
    ACTIONS(1036), 1,
      sym_block_language,
    STATE(279), 1,
      sym_line_end,
    STATE(391), 1,
      sym_newline,
  [9827] = 1,
    ACTIONS(937), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_target,
      sym_colon,
  [9835] = 1,
    ACTIONS(929), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_target,
      sym_colon,
  [9843] = 1,
    ACTIONS(925), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_target,
      sym_colon,
  [9851] = 1,
    ACTIONS(933), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_target,
      sym_colon,
  [9859] = 1,
    ACTIONS(941), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_flow_target,
      sym_colon,
  [9867] = 2,
    STATE(408), 1,
      sym_cap_kind,
    ACTIONS(1038), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [9877] = 5,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    ACTIONS(1018), 1,
      sym_inline_comment,
    ACTIONS(1040), 1,
      sym_block_language,
    STATE(280), 1,
      sym_line_end,
    STATE(391), 1,
      sym_newline,
  [9893] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(44), 1,
      sym_newline,
  [9906] = 2,
    STATE(469), 1,
      sym_directive_op,
    ACTIONS(1046), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9915] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1048), 1,
      sym_inline_comment,
    STATE(160), 1,
      sym_line_end,
    STATE(218), 1,
      sym_newline,
  [9928] = 3,
    ACTIONS(1052), 1,
      sym_comma,
    STATE(319), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1050), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9939] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
    STATE(44), 1,
      sym_newline,
  [9952] = 3,
    ACTIONS(1057), 1,
      sym_comma,
    STATE(319), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1055), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9963] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(44), 1,
      sym_newline,
  [9976] = 4,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    ACTIONS(1061), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(97), 1,
      sym_newline,
  [9989] = 4,
    ACTIONS(970), 1,
      sym_lparen,
    ACTIONS(1063), 1,
      sym_arrow,
    ACTIONS(1065), 1,
      sym_colon,
    STATE(441), 1,
      sym_params,
  [10002] = 4,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    ACTIONS(1061), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(97), 1,
      sym_newline,
  [10015] = 4,
    ACTIONS(1067), 1,
      sym_rparen,
    ACTIONS(1069), 1,
      sym_value_name,
    STATE(400), 1,
      sym_param,
    STATE(431), 1,
      sym_param_name,
  [10028] = 4,
    ACTIONS(536), 1,
      aux_sym_newline_token1,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(150), 1,
      sym_line_end,
    STATE(158), 1,
      sym_newline,
  [10041] = 1,
    ACTIONS(1028), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_target,
      sym_colon,
  [10048] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1048), 1,
      sym_inline_comment,
    STATE(173), 1,
      sym_line_end,
    STATE(218), 1,
      sym_newline,
  [10061] = 4,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    ACTIONS(1061), 1,
      sym_inline_comment,
    STATE(19), 1,
      sym_line_end,
    STATE(97), 1,
      sym_newline,
  [10074] = 4,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    ACTIONS(1061), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
    STATE(97), 1,
      sym_newline,
  [10087] = 4,
    ACTIONS(1073), 1,
      aux_sym_newline_token1,
    ACTIONS(1075), 1,
      sym_inline_comment,
    STATE(241), 1,
      sym_line_end,
    STATE(348), 1,
      sym_newline,
  [10100] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_line_end,
    STATE(44), 1,
      sym_newline,
  [10113] = 2,
    ACTIONS(1077), 1,
      sym_flow_target,
    ACTIONS(962), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10122] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_end,
    STATE(44), 1,
      sym_newline,
  [10135] = 4,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    STATE(65), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [10148] = 4,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    ACTIONS(1061), 1,
      sym_inline_comment,
    STATE(16), 1,
      sym_line_end,
    STATE(97), 1,
      sym_newline,
  [10161] = 3,
    ACTIONS(1057), 1,
      sym_comma,
    STATE(321), 1,
      aux_sym_flow_target_list_repeat1,
    ACTIONS(1079), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10172] = 4,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    STATE(51), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [10185] = 3,
    ACTIONS(1083), 1,
      sym_comma,
    STATE(340), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1081), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10196] = 4,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    STATE(52), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [10209] = 3,
    ACTIONS(1088), 1,
      sym_comma,
    STATE(361), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1086), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10220] = 4,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    STATE(62), 1,
      sym_line_end,
    STATE(76), 1,
      sym_newline,
  [10233] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(44), 1,
      sym_newline,
    STATE(46), 1,
      sym_line_end,
  [10246] = 4,
    ACTIONS(1090), 1,
      aux_sym_newline_token1,
    ACTIONS(1092), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_line_end,
    STATE(117), 1,
      sym_newline,
  [10259] = 2,
    ACTIONS(323), 1,
      sym_comment_line,
    ACTIONS(321), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [10268] = 4,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    ACTIONS(1061), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(97), 1,
      sym_newline,
  [10281] = 2,
    ACTIONS(327), 1,
      sym_comment_line,
    ACTIONS(325), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [10290] = 2,
    ACTIONS(331), 1,
      sym_comment_line,
    ACTIONS(329), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [10299] = 4,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    ACTIONS(1061), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_line_end,
    STATE(97), 1,
      sym_newline,
  [10312] = 1,
    ACTIONS(1094), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_target,
      sym_colon,
  [10319] = 2,
    STATE(450), 1,
      sym_directive_op,
    ACTIONS(1046), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10328] = 4,
    ACTIONS(536), 1,
      aux_sym_newline_token1,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(151), 1,
      sym_line_end,
    STATE(158), 1,
      sym_newline,
  [10341] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(44), 1,
      sym_newline,
  [10354] = 4,
    ACTIONS(1090), 1,
      aux_sym_newline_token1,
    ACTIONS(1092), 1,
      sym_inline_comment,
    STATE(106), 1,
      sym_line_end,
    STATE(117), 1,
      sym_newline,
  [10367] = 4,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    ACTIONS(1061), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(97), 1,
      sym_newline,
  [10380] = 2,
    ACTIONS(1098), 1,
      sym_flow_target,
    ACTIONS(1096), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10389] = 1,
    ACTIONS(327), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [10396] = 1,
    ACTIONS(331), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [10403] = 2,
    ACTIONS(1100), 1,
      sym_flow_target,
    ACTIONS(1032), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10412] = 3,
    ACTIONS(1088), 1,
      sym_comma,
    STATE(340), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1102), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10423] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_end,
    STATE(44), 1,
      sym_newline,
  [10436] = 1,
    ACTIONS(323), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [10443] = 4,
    ACTIONS(970), 1,
      sym_lparen,
    ACTIONS(1104), 1,
      sym_arrow,
    ACTIONS(1106), 1,
      sym_colon,
    STATE(436), 1,
      sym_params,
  [10456] = 4,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    ACTIONS(1061), 1,
      sym_inline_comment,
    STATE(95), 1,
      sym_line_end,
    STATE(97), 1,
      sym_newline,
  [10469] = 4,
    ACTIONS(1108), 1,
      aux_sym_newline_token1,
    ACTIONS(1110), 1,
      sym_inline_comment,
    STATE(128), 1,
      sym_line_end,
    STATE(137), 1,
      sym_newline,
  [10482] = 4,
    ACTIONS(1108), 1,
      aux_sym_newline_token1,
    ACTIONS(1110), 1,
      sym_inline_comment,
    STATE(122), 1,
      sym_line_end,
    STATE(137), 1,
      sym_newline,
  [10495] = 4,
    ACTIONS(907), 1,
      aux_sym_newline_token1,
    ACTIONS(909), 1,
      sym_inline_comment,
    STATE(140), 1,
      sym_line_end,
    STATE(147), 1,
      sym_newline,
  [10508] = 4,
    ACTIONS(1022), 1,
      aux_sym_newline_token1,
    ACTIONS(1024), 1,
      sym_inline_comment,
    STATE(256), 1,
      sym_line_end,
    STATE(358), 1,
      sym_newline,
  [10521] = 2,
    ACTIONS(1114), 1,
      sym_flow_target,
    ACTIONS(1112), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10530] = 4,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    ACTIONS(1018), 1,
      sym_inline_comment,
    STATE(281), 1,
      sym_line_end,
    STATE(391), 1,
      sym_newline,
  [10543] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(44), 1,
      sym_newline,
  [10556] = 4,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    ACTIONS(1018), 1,
      sym_inline_comment,
    STATE(285), 1,
      sym_line_end,
    STATE(391), 1,
      sym_newline,
  [10569] = 4,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    ACTIONS(1018), 1,
      sym_inline_comment,
    STATE(269), 1,
      sym_line_end,
    STATE(391), 1,
      sym_newline,
  [10582] = 3,
    ACTIONS(1116), 1,
      sym_colon,
    ACTIONS(1118), 1,
      sym_value_name,
    STATE(477), 1,
      sym_context_name,
  [10592] = 1,
    ACTIONS(331), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10598] = 1,
    ACTIONS(323), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10604] = 1,
    ACTIONS(1096), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10610] = 1,
    ACTIONS(1120), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10616] = 1,
    ACTIONS(1122), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [10622] = 3,
    ACTIONS(1124), 1,
      sym_colon,
    ACTIONS(1126), 1,
      sym_value_name,
    STATE(472), 1,
      sym_instruct_name,
  [10632] = 3,
    ACTIONS(1128), 1,
      sym_indented_raw_text,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(64), 1,
      sym_block_indented_implicit,
  [10642] = 1,
    ACTIONS(1130), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10648] = 1,
    ACTIONS(1132), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [10654] = 3,
    ACTIONS(1128), 1,
      sym_indented_raw_text,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(61), 1,
      sym_block_indented_implicit,
  [10664] = 3,
    ACTIONS(1069), 1,
      sym_value_name,
    STATE(417), 1,
      sym_param,
    STATE(431), 1,
      sym_param_name,
  [10674] = 1,
    ACTIONS(1134), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10680] = 3,
    ACTIONS(1136), 1,
      sym_rparen,
    ACTIONS(1138), 1,
      sym_comma,
    STATE(397), 1,
      aux_sym_params_repeat1,
  [10690] = 1,
    ACTIONS(1140), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10696] = 1,
    ACTIONS(1142), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [10702] = 1,
    ACTIONS(327), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10708] = 1,
    ACTIONS(1144), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10714] = 1,
    ACTIONS(1146), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10720] = 1,
    ACTIONS(1148), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10726] = 1,
    ACTIONS(321), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [10732] = 1,
    ACTIONS(1150), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_until_keyword,
  [10738] = 3,
    ACTIONS(1152), 1,
      sym_rparen,
    ACTIONS(1154), 1,
      sym_comma,
    STATE(397), 1,
      aux_sym_params_repeat1,
  [10748] = 1,
    ACTIONS(1112), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10754] = 3,
    ACTIONS(1157), 1,
      aux_sym_flow_inline_text_token1,
    STATE(368), 1,
      sym_property_value,
    STATE(433), 1,
      sym_inline_text,
  [10764] = 3,
    ACTIONS(1138), 1,
      sym_comma,
    ACTIONS(1159), 1,
      sym_rparen,
    STATE(388), 1,
      aux_sym_params_repeat1,
  [10774] = 1,
    ACTIONS(1161), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [10780] = 1,
    ACTIONS(1163), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10786] = 3,
    ACTIONS(1157), 1,
      aux_sym_flow_inline_text_token1,
    STATE(433), 1,
      sym_inline_text,
    STATE(449), 1,
      sym_property_value,
  [10796] = 3,
    ACTIONS(1165), 1,
      sym_integer_literal,
    ACTIONS(1167), 1,
      sym_flow_until_keyword,
    STATE(303), 1,
      sym_flow_repeat_count,
  [10806] = 1,
    ACTIONS(1169), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10812] = 1,
    ACTIONS(1171), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [10818] = 1,
    ACTIONS(1173), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10824] = 3,
    ACTIONS(1175), 1,
      sym_cap_uri,
    ACTIONS(1177), 1,
      sym_cap_shorthand,
    STATE(329), 1,
      sym_cap_ref,
  [10834] = 1,
    ACTIONS(1179), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10840] = 1,
    ACTIONS(1181), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [10846] = 1,
    ACTIONS(1081), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [10852] = 1,
    ACTIONS(962), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10858] = 1,
    ACTIONS(1183), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [10864] = 2,
    ACTIONS(1022), 1,
      aux_sym_newline_token1,
    STATE(359), 1,
      sym_newline,
  [10871] = 2,
    ACTIONS(1185), 1,
      sym_flow_target,
    STATE(339), 1,
      sym_flow_target_list,
  [10878] = 2,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    STATE(392), 1,
      sym_newline,
  [10885] = 1,
    ACTIONS(1187), 2,
      sym_rparen,
      sym_comma,
  [10890] = 1,
    ACTIONS(1189), 2,
      sym_arrow,
      sym_colon,
  [10895] = 1,
    ACTIONS(1191), 2,
      sym_colon,
      sym_value_name,
  [10900] = 1,
    ACTIONS(1193), 2,
      sym_rparen,
      sym_comma,
  [10905] = 2,
    ACTIONS(1195), 1,
      sym_type_name,
    STATE(514), 1,
      sym_struct_name,
  [10912] = 2,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    STATE(45), 1,
      sym_newline,
  [10919] = 2,
    ACTIONS(1197), 1,
      sym_value_name,
    STATE(502), 1,
      sym_cap_name,
  [10926] = 1,
    ACTIONS(1199), 2,
      sym_arrow,
      sym_colon,
  [10931] = 1,
    ACTIONS(1201), 2,
      sym_optional_marker,
      sym_colon,
  [10936] = 1,
    ACTIONS(1203), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10941] = 1,
    ACTIONS(1205), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10946] = 2,
    ACTIONS(1207), 1,
      sym_arrow,
    ACTIONS(1209), 1,
      sym_colon,
  [10953] = 2,
    ACTIONS(1108), 1,
      aux_sym_newline_token1,
    STATE(135), 1,
      sym_newline,
  [10960] = 1,
    ACTIONS(1211), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10965] = 2,
    ACTIONS(1213), 1,
      sym_optional_marker,
    ACTIONS(1215), 1,
      sym_colon,
  [10972] = 1,
    ACTIONS(1217), 2,
      sym_rparen,
      sym_comma,
  [10977] = 1,
    ACTIONS(1219), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10982] = 2,
    ACTIONS(1197), 1,
      sym_value_name,
    STATE(504), 1,
      sym_cap_name,
  [10989] = 2,
    ACTIONS(1197), 1,
      sym_value_name,
    STATE(505), 1,
      sym_cap_name,
  [10996] = 2,
    ACTIONS(1221), 1,
      sym_arrow,
    ACTIONS(1223), 1,
      sym_colon,
  [11003] = 2,
    ACTIONS(1197), 1,
      sym_value_name,
    STATE(508), 1,
      sym_cap_name,
  [11010] = 2,
    ACTIONS(1225), 1,
      sym_arrow,
    ACTIONS(1227), 1,
      sym_colon,
  [11017] = 1,
    ACTIONS(1229), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11022] = 1,
    ACTIONS(1231), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11027] = 2,
    ACTIONS(1233), 1,
      sym_arrow,
    ACTIONS(1235), 1,
      sym_colon,
  [11034] = 1,
    ACTIONS(1237), 2,
      sym_optional_marker,
      sym_colon,
  [11039] = 2,
    ACTIONS(1239), 1,
      sym_optional_marker,
    ACTIONS(1241), 1,
      sym_colon,
  [11046] = 1,
    ACTIONS(1243), 2,
      sym_arrow,
      sym_colon,
  [11051] = 2,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    STATE(402), 1,
      sym_newline,
  [11058] = 2,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    STATE(405), 1,
      sym_newline,
  [11065] = 2,
    ACTIONS(1059), 1,
      aux_sym_newline_token1,
    STATE(98), 1,
      sym_newline,
  [11072] = 2,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    STATE(70), 1,
      sym_newline,
  [11079] = 2,
    ACTIONS(1245), 1,
      aux_sym_newline_token1,
    STATE(406), 1,
      sym_newline,
  [11086] = 2,
    ACTIONS(1247), 1,
      sym_bare_value,
    STATE(344), 1,
      sym_directive_csv,
  [11093] = 2,
    ACTIONS(913), 1,
      aux_sym_newline_token1,
    STATE(157), 1,
      sym_newline,
  [11100] = 2,
    ACTIONS(913), 1,
      aux_sym_newline_token1,
    STATE(149), 1,
      sym_newline,
  [11107] = 2,
    ACTIONS(1249), 1,
      sym_cap_uri,
    ACTIONS(1251), 1,
      sym_cap_shorthand,
  [11114] = 1,
    ACTIONS(1253), 2,
      anon_sym_EQ,
      sym_colon,
  [11119] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(219), 1,
      sym_newline,
  [11126] = 2,
    ACTIONS(907), 1,
      aux_sym_newline_token1,
    STATE(142), 1,
      sym_newline,
  [11133] = 2,
    ACTIONS(1073), 1,
      aux_sym_newline_token1,
    STATE(349), 1,
      sym_newline,
  [11140] = 2,
    ACTIONS(1090), 1,
      aux_sym_newline_token1,
    STATE(110), 1,
      sym_newline,
  [11147] = 2,
    ACTIONS(907), 1,
      aux_sym_newline_token1,
    STATE(146), 1,
      sym_newline,
  [11154] = 2,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    STATE(376), 1,
      sym_newline,
  [11161] = 2,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    STATE(77), 1,
      sym_newline,
  [11168] = 2,
    ACTIONS(1245), 1,
      aux_sym_newline_token1,
    STATE(295), 1,
      sym_newline,
  [11175] = 2,
    ACTIONS(1090), 1,
      aux_sym_newline_token1,
    STATE(118), 1,
      sym_newline,
  [11182] = 2,
    ACTIONS(1108), 1,
      aux_sym_newline_token1,
    STATE(134), 1,
      sym_newline,
  [11189] = 2,
    ACTIONS(1255), 1,
      aux_sym_newline_token1,
    STATE(479), 1,
      sym_newline,
  [11196] = 2,
    ACTIONS(536), 1,
      aux_sym_newline_token1,
    STATE(153), 1,
      sym_newline,
  [11203] = 2,
    ACTIONS(1016), 1,
      aux_sym_newline_token1,
    STATE(379), 1,
      sym_newline,
  [11210] = 2,
    ACTIONS(1257), 1,
      anon_sym_EQ,
    STATE(399), 1,
      sym_assign_operator,
  [11217] = 2,
    ACTIONS(1247), 1,
      sym_bare_value,
    STATE(365), 1,
      sym_directive_csv,
  [11224] = 1,
    ACTIONS(1259), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11229] = 1,
    ACTIONS(1261), 2,
      sym_colon,
      sym_value_name,
  [11234] = 1,
    ACTIONS(1263), 1,
      sym_colon,
  [11238] = 1,
    ACTIONS(1265), 1,
      sym_colon,
  [11242] = 1,
    ACTIONS(1267), 1,
      sym_colon,
  [11246] = 1,
    ACTIONS(1269), 1,
      sym_colon,
  [11250] = 1,
    ACTIONS(1271), 1,
      sym_colon,
  [11254] = 1,
    ACTIONS(1273), 1,
      sym_colon,
  [11258] = 1,
    ACTIONS(325), 1,
      sym_indented_raw_text,
  [11262] = 1,
    ACTIONS(329), 1,
      sym_indented_raw_text,
  [11266] = 1,
    ACTIONS(1275), 1,
      sym_colon,
  [11270] = 1,
    ACTIONS(1277), 1,
      sym_value_name,
  [11274] = 1,
    ACTIONS(1279), 1,
      sym_colon,
  [11278] = 1,
    ACTIONS(321), 1,
      sym_indented_raw_text,
  [11282] = 1,
    ACTIONS(1281), 1,
      sym_bare_value,
  [11286] = 1,
    ACTIONS(1283), 1,
      sym_bare_value,
  [11290] = 1,
    ACTIONS(1285), 1,
      sym_colon,
  [11294] = 1,
    ACTIONS(1287), 1,
      sym_colon,
  [11298] = 1,
    ACTIONS(1289), 1,
      sym_colon,
  [11302] = 1,
    ACTIONS(1291), 1,
      aux_sym_newline_token1,
  [11306] = 1,
    ACTIONS(1293), 1,
      sym_colon,
  [11310] = 1,
    ACTIONS(1295), 1,
      sym_colon,
  [11314] = 1,
    ACTIONS(1297), 1,
      sym_integer_literal,
  [11318] = 1,
    ACTIONS(1299), 1,
      sym_colon,
  [11322] = 1,
    ACTIONS(1301), 1,
      aux_sym_flow_inline_text_token1,
  [11326] = 1,
    ACTIONS(1303), 1,
      ts_builtin_sym_end,
  [11330] = 1,
    ACTIONS(1305), 1,
      sym_colon,
  [11334] = 1,
    ACTIONS(1307), 1,
      sym_flow_target,
  [11338] = 1,
    ACTIONS(1309), 1,
      sym_colon,
  [11342] = 1,
    ACTIONS(1311), 1,
      aux_sym_newline_token1,
  [11346] = 1,
    ACTIONS(1313), 1,
      sym_value_name,
  [11350] = 1,
    ACTIONS(1315), 1,
      sym_colon,
  [11354] = 1,
    ACTIONS(1317), 1,
      sym_colon,
  [11358] = 1,
    ACTIONS(1319), 1,
      sym_colon,
  [11362] = 1,
    ACTIONS(1321), 1,
      sym_colon,
  [11366] = 1,
    ACTIONS(1323), 1,
      sym_colon,
  [11370] = 1,
    ACTIONS(1325), 1,
      sym_colon,
  [11374] = 1,
    ACTIONS(1327), 1,
      sym_colon,
  [11378] = 1,
    ACTIONS(1329), 1,
      sym_colon,
  [11382] = 1,
    ACTIONS(1331), 1,
      aux_sym_newline_token1,
  [11386] = 1,
    ACTIONS(1333), 1,
      sym_colon,
  [11390] = 1,
    ACTIONS(1335), 1,
      sym_value_name,
  [11394] = 1,
    ACTIONS(1337), 1,
      sym_colon,
  [11398] = 1,
    ACTIONS(1339), 1,
      sym_colon,
  [11402] = 1,
    ACTIONS(1341), 1,
      sym_colon,
  [11406] = 1,
    ACTIONS(1343), 1,
      sym_colon,
  [11410] = 1,
    ACTIONS(1345), 1,
      sym_value_name,
  [11414] = 1,
    ACTIONS(1347), 1,
      sym_flow_target,
  [11418] = 1,
    ACTIONS(1349), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 103,
  [SMALL_STATE(4)] = 206,
  [SMALL_STATE(5)] = 307,
  [SMALL_STATE(6)] = 404,
  [SMALL_STATE(7)] = 501,
  [SMALL_STATE(8)] = 598,
  [SMALL_STATE(9)] = 699,
  [SMALL_STATE(10)] = 800,
  [SMALL_STATE(11)] = 897,
  [SMALL_STATE(12)] = 998,
  [SMALL_STATE(13)] = 1095,
  [SMALL_STATE(14)] = 1196,
  [SMALL_STATE(15)] = 1293,
  [SMALL_STATE(16)] = 1390,
  [SMALL_STATE(17)] = 1491,
  [SMALL_STATE(18)] = 1592,
  [SMALL_STATE(19)] = 1689,
  [SMALL_STATE(20)] = 1790,
  [SMALL_STATE(21)] = 1882,
  [SMALL_STATE(22)] = 1974,
  [SMALL_STATE(23)] = 2066,
  [SMALL_STATE(24)] = 2158,
  [SMALL_STATE(25)] = 2256,
  [SMALL_STATE(26)] = 2343,
  [SMALL_STATE(27)] = 2425,
  [SMALL_STATE(28)] = 2507,
  [SMALL_STATE(29)] = 2577,
  [SMALL_STATE(30)] = 2647,
  [SMALL_STATE(31)] = 2725,
  [SMALL_STATE(32)] = 2775,
  [SMALL_STATE(33)] = 2845,
  [SMALL_STATE(34)] = 2915,
  [SMALL_STATE(35)] = 2985,
  [SMALL_STATE(36)] = 3055,
  [SMALL_STATE(37)] = 3098,
  [SMALL_STATE(38)] = 3141,
  [SMALL_STATE(39)] = 3184,
  [SMALL_STATE(40)] = 3240,
  [SMALL_STATE(41)] = 3296,
  [SMALL_STATE(42)] = 3352,
  [SMALL_STATE(43)] = 3385,
  [SMALL_STATE(44)] = 3418,
  [SMALL_STATE(45)] = 3451,
  [SMALL_STATE(46)] = 3484,
  [SMALL_STATE(47)] = 3517,
  [SMALL_STATE(48)] = 3548,
  [SMALL_STATE(49)] = 3579,
  [SMALL_STATE(50)] = 3610,
  [SMALL_STATE(51)] = 3641,
  [SMALL_STATE(52)] = 3672,
  [SMALL_STATE(53)] = 3703,
  [SMALL_STATE(54)] = 3734,
  [SMALL_STATE(55)] = 3765,
  [SMALL_STATE(56)] = 3796,
  [SMALL_STATE(57)] = 3827,
  [SMALL_STATE(58)] = 3858,
  [SMALL_STATE(59)] = 3889,
  [SMALL_STATE(60)] = 3920,
  [SMALL_STATE(61)] = 3951,
  [SMALL_STATE(62)] = 3982,
  [SMALL_STATE(63)] = 4013,
  [SMALL_STATE(64)] = 4044,
  [SMALL_STATE(65)] = 4075,
  [SMALL_STATE(66)] = 4106,
  [SMALL_STATE(67)] = 4137,
  [SMALL_STATE(68)] = 4168,
  [SMALL_STATE(69)] = 4199,
  [SMALL_STATE(70)] = 4230,
  [SMALL_STATE(71)] = 4261,
  [SMALL_STATE(72)] = 4292,
  [SMALL_STATE(73)] = 4323,
  [SMALL_STATE(74)] = 4354,
  [SMALL_STATE(75)] = 4385,
  [SMALL_STATE(76)] = 4416,
  [SMALL_STATE(77)] = 4447,
  [SMALL_STATE(78)] = 4478,
  [SMALL_STATE(79)] = 4512,
  [SMALL_STATE(80)] = 4556,
  [SMALL_STATE(81)] = 4600,
  [SMALL_STATE(82)] = 4644,
  [SMALL_STATE(83)] = 4688,
  [SMALL_STATE(84)] = 4725,
  [SMALL_STATE(85)] = 4762,
  [SMALL_STATE(86)] = 4799,
  [SMALL_STATE(87)] = 4835,
  [SMALL_STATE(88)] = 4875,
  [SMALL_STATE(89)] = 4911,
  [SMALL_STATE(90)] = 4947,
  [SMALL_STATE(91)] = 4983,
  [SMALL_STATE(92)] = 5023,
  [SMALL_STATE(93)] = 5059,
  [SMALL_STATE(94)] = 5099,
  [SMALL_STATE(95)] = 5135,
  [SMALL_STATE(96)] = 5160,
  [SMALL_STATE(97)] = 5185,
  [SMALL_STATE(98)] = 5210,
  [SMALL_STATE(99)] = 5235,
  [SMALL_STATE(100)] = 5273,
  [SMALL_STATE(101)] = 5311,
  [SMALL_STATE(102)] = 5336,
  [SMALL_STATE(103)] = 5361,
  [SMALL_STATE(104)] = 5394,
  [SMALL_STATE(105)] = 5419,
  [SMALL_STATE(106)] = 5444,
  [SMALL_STATE(107)] = 5469,
  [SMALL_STATE(108)] = 5502,
  [SMALL_STATE(109)] = 5527,
  [SMALL_STATE(110)] = 5560,
  [SMALL_STATE(111)] = 5585,
  [SMALL_STATE(112)] = 5610,
  [SMALL_STATE(113)] = 5635,
  [SMALL_STATE(114)] = 5660,
  [SMALL_STATE(115)] = 5685,
  [SMALL_STATE(116)] = 5710,
  [SMALL_STATE(117)] = 5735,
  [SMALL_STATE(118)] = 5760,
  [SMALL_STATE(119)] = 5785,
  [SMALL_STATE(120)] = 5810,
  [SMALL_STATE(121)] = 5835,
  [SMALL_STATE(122)] = 5859,
  [SMALL_STATE(123)] = 5883,
  [SMALL_STATE(124)] = 5907,
  [SMALL_STATE(125)] = 5931,
  [SMALL_STATE(126)] = 5955,
  [SMALL_STATE(127)] = 5979,
  [SMALL_STATE(128)] = 6003,
  [SMALL_STATE(129)] = 6027,
  [SMALL_STATE(130)] = 6051,
  [SMALL_STATE(131)] = 6075,
  [SMALL_STATE(132)] = 6099,
  [SMALL_STATE(133)] = 6123,
  [SMALL_STATE(134)] = 6147,
  [SMALL_STATE(135)] = 6171,
  [SMALL_STATE(136)] = 6195,
  [SMALL_STATE(137)] = 6219,
  [SMALL_STATE(138)] = 6243,
  [SMALL_STATE(139)] = 6287,
  [SMALL_STATE(140)] = 6315,
  [SMALL_STATE(141)] = 6337,
  [SMALL_STATE(142)] = 6381,
  [SMALL_STATE(143)] = 6403,
  [SMALL_STATE(144)] = 6447,
  [SMALL_STATE(145)] = 6469,
  [SMALL_STATE(146)] = 6491,
  [SMALL_STATE(147)] = 6513,
  [SMALL_STATE(148)] = 6535,
  [SMALL_STATE(149)] = 6556,
  [SMALL_STATE(150)] = 6577,
  [SMALL_STATE(151)] = 6598,
  [SMALL_STATE(152)] = 6619,
  [SMALL_STATE(153)] = 6640,
  [SMALL_STATE(154)] = 6661,
  [SMALL_STATE(155)] = 6682,
  [SMALL_STATE(156)] = 6703,
  [SMALL_STATE(157)] = 6724,
  [SMALL_STATE(158)] = 6745,
  [SMALL_STATE(159)] = 6766,
  [SMALL_STATE(160)] = 6786,
  [SMALL_STATE(161)] = 6806,
  [SMALL_STATE(162)] = 6826,
  [SMALL_STATE(163)] = 6846,
  [SMALL_STATE(164)] = 6866,
  [SMALL_STATE(165)] = 6886,
  [SMALL_STATE(166)] = 6906,
  [SMALL_STATE(167)] = 6926,
  [SMALL_STATE(168)] = 6946,
  [SMALL_STATE(169)] = 6966,
  [SMALL_STATE(170)] = 6986,
  [SMALL_STATE(171)] = 7006,
  [SMALL_STATE(172)] = 7026,
  [SMALL_STATE(173)] = 7046,
  [SMALL_STATE(174)] = 7066,
  [SMALL_STATE(175)] = 7086,
  [SMALL_STATE(176)] = 7106,
  [SMALL_STATE(177)] = 7126,
  [SMALL_STATE(178)] = 7146,
  [SMALL_STATE(179)] = 7166,
  [SMALL_STATE(180)] = 7186,
  [SMALL_STATE(181)] = 7206,
  [SMALL_STATE(182)] = 7226,
  [SMALL_STATE(183)] = 7246,
  [SMALL_STATE(184)] = 7266,
  [SMALL_STATE(185)] = 7286,
  [SMALL_STATE(186)] = 7306,
  [SMALL_STATE(187)] = 7326,
  [SMALL_STATE(188)] = 7346,
  [SMALL_STATE(189)] = 7366,
  [SMALL_STATE(190)] = 7386,
  [SMALL_STATE(191)] = 7406,
  [SMALL_STATE(192)] = 7426,
  [SMALL_STATE(193)] = 7446,
  [SMALL_STATE(194)] = 7466,
  [SMALL_STATE(195)] = 7486,
  [SMALL_STATE(196)] = 7506,
  [SMALL_STATE(197)] = 7526,
  [SMALL_STATE(198)] = 7546,
  [SMALL_STATE(199)] = 7566,
  [SMALL_STATE(200)] = 7586,
  [SMALL_STATE(201)] = 7606,
  [SMALL_STATE(202)] = 7626,
  [SMALL_STATE(203)] = 7646,
  [SMALL_STATE(204)] = 7666,
  [SMALL_STATE(205)] = 7686,
  [SMALL_STATE(206)] = 7706,
  [SMALL_STATE(207)] = 7726,
  [SMALL_STATE(208)] = 7746,
  [SMALL_STATE(209)] = 7766,
  [SMALL_STATE(210)] = 7786,
  [SMALL_STATE(211)] = 7806,
  [SMALL_STATE(212)] = 7826,
  [SMALL_STATE(213)] = 7846,
  [SMALL_STATE(214)] = 7866,
  [SMALL_STATE(215)] = 7886,
  [SMALL_STATE(216)] = 7906,
  [SMALL_STATE(217)] = 7926,
  [SMALL_STATE(218)] = 7946,
  [SMALL_STATE(219)] = 7966,
  [SMALL_STATE(220)] = 7986,
  [SMALL_STATE(221)] = 8006,
  [SMALL_STATE(222)] = 8026,
  [SMALL_STATE(223)] = 8046,
  [SMALL_STATE(224)] = 8066,
  [SMALL_STATE(225)] = 8083,
  [SMALL_STATE(226)] = 8100,
  [SMALL_STATE(227)] = 8137,
  [SMALL_STATE(228)] = 8159,
  [SMALL_STATE(229)] = 8181,
  [SMALL_STATE(230)] = 8203,
  [SMALL_STATE(231)] = 8225,
  [SMALL_STATE(232)] = 8247,
  [SMALL_STATE(233)] = 8269,
  [SMALL_STATE(234)] = 8291,
  [SMALL_STATE(235)] = 8313,
  [SMALL_STATE(236)] = 8335,
  [SMALL_STATE(237)] = 8357,
  [SMALL_STATE(238)] = 8379,
  [SMALL_STATE(239)] = 8401,
  [SMALL_STATE(240)] = 8423,
  [SMALL_STATE(241)] = 8445,
  [SMALL_STATE(242)] = 8472,
  [SMALL_STATE(243)] = 8503,
  [SMALL_STATE(244)] = 8534,
  [SMALL_STATE(245)] = 8565,
  [SMALL_STATE(246)] = 8596,
  [SMALL_STATE(247)] = 8627,
  [SMALL_STATE(248)] = 8648,
  [SMALL_STATE(249)] = 8669,
  [SMALL_STATE(250)] = 8690,
  [SMALL_STATE(251)] = 8716,
  [SMALL_STATE(252)] = 8742,
  [SMALL_STATE(253)] = 8768,
  [SMALL_STATE(254)] = 8794,
  [SMALL_STATE(255)] = 8820,
  [SMALL_STATE(256)] = 8846,
  [SMALL_STATE(257)] = 8872,
  [SMALL_STATE(258)] = 8898,
  [SMALL_STATE(259)] = 8924,
  [SMALL_STATE(260)] = 8950,
  [SMALL_STATE(261)] = 8963,
  [SMALL_STATE(262)] = 8976,
  [SMALL_STATE(263)] = 8989,
  [SMALL_STATE(264)] = 9002,
  [SMALL_STATE(265)] = 9015,
  [SMALL_STATE(266)] = 9035,
  [SMALL_STATE(267)] = 9057,
  [SMALL_STATE(268)] = 9077,
  [SMALL_STATE(269)] = 9097,
  [SMALL_STATE(270)] = 9117,
  [SMALL_STATE(271)] = 9137,
  [SMALL_STATE(272)] = 9157,
  [SMALL_STATE(273)] = 9173,
  [SMALL_STATE(274)] = 9189,
  [SMALL_STATE(275)] = 9211,
  [SMALL_STATE(276)] = 9231,
  [SMALL_STATE(277)] = 9251,
  [SMALL_STATE(278)] = 9273,
  [SMALL_STATE(279)] = 9293,
  [SMALL_STATE(280)] = 9313,
  [SMALL_STATE(281)] = 9333,
  [SMALL_STATE(282)] = 9353,
  [SMALL_STATE(283)] = 9373,
  [SMALL_STATE(284)] = 9393,
  [SMALL_STATE(285)] = 9413,
  [SMALL_STATE(286)] = 9433,
  [SMALL_STATE(287)] = 9453,
  [SMALL_STATE(288)] = 9473,
  [SMALL_STATE(289)] = 9489,
  [SMALL_STATE(290)] = 9508,
  [SMALL_STATE(291)] = 9527,
  [SMALL_STATE(292)] = 9542,
  [SMALL_STATE(293)] = 9561,
  [SMALL_STATE(294)] = 9580,
  [SMALL_STATE(295)] = 9597,
  [SMALL_STATE(296)] = 9614,
  [SMALL_STATE(297)] = 9633,
  [SMALL_STATE(298)] = 9650,
  [SMALL_STATE(299)] = 9669,
  [SMALL_STATE(300)] = 9688,
  [SMALL_STATE(301)] = 9707,
  [SMALL_STATE(302)] = 9724,
  [SMALL_STATE(303)] = 9741,
  [SMALL_STATE(304)] = 9757,
  [SMALL_STATE(305)] = 9773,
  [SMALL_STATE(306)] = 9789,
  [SMALL_STATE(307)] = 9799,
  [SMALL_STATE(308)] = 9811,
  [SMALL_STATE(309)] = 9827,
  [SMALL_STATE(310)] = 9835,
  [SMALL_STATE(311)] = 9843,
  [SMALL_STATE(312)] = 9851,
  [SMALL_STATE(313)] = 9859,
  [SMALL_STATE(314)] = 9867,
  [SMALL_STATE(315)] = 9877,
  [SMALL_STATE(316)] = 9893,
  [SMALL_STATE(317)] = 9906,
  [SMALL_STATE(318)] = 9915,
  [SMALL_STATE(319)] = 9928,
  [SMALL_STATE(320)] = 9939,
  [SMALL_STATE(321)] = 9952,
  [SMALL_STATE(322)] = 9963,
  [SMALL_STATE(323)] = 9976,
  [SMALL_STATE(324)] = 9989,
  [SMALL_STATE(325)] = 10002,
  [SMALL_STATE(326)] = 10015,
  [SMALL_STATE(327)] = 10028,
  [SMALL_STATE(328)] = 10041,
  [SMALL_STATE(329)] = 10048,
  [SMALL_STATE(330)] = 10061,
  [SMALL_STATE(331)] = 10074,
  [SMALL_STATE(332)] = 10087,
  [SMALL_STATE(333)] = 10100,
  [SMALL_STATE(334)] = 10113,
  [SMALL_STATE(335)] = 10122,
  [SMALL_STATE(336)] = 10135,
  [SMALL_STATE(337)] = 10148,
  [SMALL_STATE(338)] = 10161,
  [SMALL_STATE(339)] = 10172,
  [SMALL_STATE(340)] = 10185,
  [SMALL_STATE(341)] = 10196,
  [SMALL_STATE(342)] = 10209,
  [SMALL_STATE(343)] = 10220,
  [SMALL_STATE(344)] = 10233,
  [SMALL_STATE(345)] = 10246,
  [SMALL_STATE(346)] = 10259,
  [SMALL_STATE(347)] = 10268,
  [SMALL_STATE(348)] = 10281,
  [SMALL_STATE(349)] = 10290,
  [SMALL_STATE(350)] = 10299,
  [SMALL_STATE(351)] = 10312,
  [SMALL_STATE(352)] = 10319,
  [SMALL_STATE(353)] = 10328,
  [SMALL_STATE(354)] = 10341,
  [SMALL_STATE(355)] = 10354,
  [SMALL_STATE(356)] = 10367,
  [SMALL_STATE(357)] = 10380,
  [SMALL_STATE(358)] = 10389,
  [SMALL_STATE(359)] = 10396,
  [SMALL_STATE(360)] = 10403,
  [SMALL_STATE(361)] = 10412,
  [SMALL_STATE(362)] = 10423,
  [SMALL_STATE(363)] = 10436,
  [SMALL_STATE(364)] = 10443,
  [SMALL_STATE(365)] = 10456,
  [SMALL_STATE(366)] = 10469,
  [SMALL_STATE(367)] = 10482,
  [SMALL_STATE(368)] = 10495,
  [SMALL_STATE(369)] = 10508,
  [SMALL_STATE(370)] = 10521,
  [SMALL_STATE(371)] = 10530,
  [SMALL_STATE(372)] = 10543,
  [SMALL_STATE(373)] = 10556,
  [SMALL_STATE(374)] = 10569,
  [SMALL_STATE(375)] = 10582,
  [SMALL_STATE(376)] = 10592,
  [SMALL_STATE(377)] = 10598,
  [SMALL_STATE(378)] = 10604,
  [SMALL_STATE(379)] = 10610,
  [SMALL_STATE(380)] = 10616,
  [SMALL_STATE(381)] = 10622,
  [SMALL_STATE(382)] = 10632,
  [SMALL_STATE(383)] = 10642,
  [SMALL_STATE(384)] = 10648,
  [SMALL_STATE(385)] = 10654,
  [SMALL_STATE(386)] = 10664,
  [SMALL_STATE(387)] = 10674,
  [SMALL_STATE(388)] = 10680,
  [SMALL_STATE(389)] = 10690,
  [SMALL_STATE(390)] = 10696,
  [SMALL_STATE(391)] = 10702,
  [SMALL_STATE(392)] = 10708,
  [SMALL_STATE(393)] = 10714,
  [SMALL_STATE(394)] = 10720,
  [SMALL_STATE(395)] = 10726,
  [SMALL_STATE(396)] = 10732,
  [SMALL_STATE(397)] = 10738,
  [SMALL_STATE(398)] = 10748,
  [SMALL_STATE(399)] = 10754,
  [SMALL_STATE(400)] = 10764,
  [SMALL_STATE(401)] = 10774,
  [SMALL_STATE(402)] = 10780,
  [SMALL_STATE(403)] = 10786,
  [SMALL_STATE(404)] = 10796,
  [SMALL_STATE(405)] = 10806,
  [SMALL_STATE(406)] = 10812,
  [SMALL_STATE(407)] = 10818,
  [SMALL_STATE(408)] = 10824,
  [SMALL_STATE(409)] = 10834,
  [SMALL_STATE(410)] = 10840,
  [SMALL_STATE(411)] = 10846,
  [SMALL_STATE(412)] = 10852,
  [SMALL_STATE(413)] = 10858,
  [SMALL_STATE(414)] = 10864,
  [SMALL_STATE(415)] = 10871,
  [SMALL_STATE(416)] = 10878,
  [SMALL_STATE(417)] = 10885,
  [SMALL_STATE(418)] = 10890,
  [SMALL_STATE(419)] = 10895,
  [SMALL_STATE(420)] = 10900,
  [SMALL_STATE(421)] = 10905,
  [SMALL_STATE(422)] = 10912,
  [SMALL_STATE(423)] = 10919,
  [SMALL_STATE(424)] = 10926,
  [SMALL_STATE(425)] = 10931,
  [SMALL_STATE(426)] = 10936,
  [SMALL_STATE(427)] = 10941,
  [SMALL_STATE(428)] = 10946,
  [SMALL_STATE(429)] = 10953,
  [SMALL_STATE(430)] = 10960,
  [SMALL_STATE(431)] = 10965,
  [SMALL_STATE(432)] = 10972,
  [SMALL_STATE(433)] = 10977,
  [SMALL_STATE(434)] = 10982,
  [SMALL_STATE(435)] = 10989,
  [SMALL_STATE(436)] = 10996,
  [SMALL_STATE(437)] = 11003,
  [SMALL_STATE(438)] = 11010,
  [SMALL_STATE(439)] = 11017,
  [SMALL_STATE(440)] = 11022,
  [SMALL_STATE(441)] = 11027,
  [SMALL_STATE(442)] = 11034,
  [SMALL_STATE(443)] = 11039,
  [SMALL_STATE(444)] = 11046,
  [SMALL_STATE(445)] = 11051,
  [SMALL_STATE(446)] = 11058,
  [SMALL_STATE(447)] = 11065,
  [SMALL_STATE(448)] = 11072,
  [SMALL_STATE(449)] = 11079,
  [SMALL_STATE(450)] = 11086,
  [SMALL_STATE(451)] = 11093,
  [SMALL_STATE(452)] = 11100,
  [SMALL_STATE(453)] = 11107,
  [SMALL_STATE(454)] = 11114,
  [SMALL_STATE(455)] = 11119,
  [SMALL_STATE(456)] = 11126,
  [SMALL_STATE(457)] = 11133,
  [SMALL_STATE(458)] = 11140,
  [SMALL_STATE(459)] = 11147,
  [SMALL_STATE(460)] = 11154,
  [SMALL_STATE(461)] = 11161,
  [SMALL_STATE(462)] = 11168,
  [SMALL_STATE(463)] = 11175,
  [SMALL_STATE(464)] = 11182,
  [SMALL_STATE(465)] = 11189,
  [SMALL_STATE(466)] = 11196,
  [SMALL_STATE(467)] = 11203,
  [SMALL_STATE(468)] = 11210,
  [SMALL_STATE(469)] = 11217,
  [SMALL_STATE(470)] = 11224,
  [SMALL_STATE(471)] = 11229,
  [SMALL_STATE(472)] = 11234,
  [SMALL_STATE(473)] = 11238,
  [SMALL_STATE(474)] = 11242,
  [SMALL_STATE(475)] = 11246,
  [SMALL_STATE(476)] = 11250,
  [SMALL_STATE(477)] = 11254,
  [SMALL_STATE(478)] = 11258,
  [SMALL_STATE(479)] = 11262,
  [SMALL_STATE(480)] = 11266,
  [SMALL_STATE(481)] = 11270,
  [SMALL_STATE(482)] = 11274,
  [SMALL_STATE(483)] = 11278,
  [SMALL_STATE(484)] = 11282,
  [SMALL_STATE(485)] = 11286,
  [SMALL_STATE(486)] = 11290,
  [SMALL_STATE(487)] = 11294,
  [SMALL_STATE(488)] = 11298,
  [SMALL_STATE(489)] = 11302,
  [SMALL_STATE(490)] = 11306,
  [SMALL_STATE(491)] = 11310,
  [SMALL_STATE(492)] = 11314,
  [SMALL_STATE(493)] = 11318,
  [SMALL_STATE(494)] = 11322,
  [SMALL_STATE(495)] = 11326,
  [SMALL_STATE(496)] = 11330,
  [SMALL_STATE(497)] = 11334,
  [SMALL_STATE(498)] = 11338,
  [SMALL_STATE(499)] = 11342,
  [SMALL_STATE(500)] = 11346,
  [SMALL_STATE(501)] = 11350,
  [SMALL_STATE(502)] = 11354,
  [SMALL_STATE(503)] = 11358,
  [SMALL_STATE(504)] = 11362,
  [SMALL_STATE(505)] = 11366,
  [SMALL_STATE(506)] = 11370,
  [SMALL_STATE(507)] = 11374,
  [SMALL_STATE(508)] = 11378,
  [SMALL_STATE(509)] = 11382,
  [SMALL_STATE(510)] = 11386,
  [SMALL_STATE(511)] = 11390,
  [SMALL_STATE(512)] = 11394,
  [SMALL_STATE(513)] = 11398,
  [SMALL_STATE(514)] = 11402,
  [SMALL_STATE(515)] = 11406,
  [SMALL_STATE(516)] = 11410,
  [SMALL_STATE(517)] = 11414,
  [SMALL_STATE(518)] = 11418,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 13),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 14),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 28),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 28),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 41),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 41),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 43),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 43),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 57),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 57),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(48),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(25),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(415),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(517),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(243),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(244),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(245),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(246),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(226),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(242),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(404),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(448),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 36),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 36),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 54),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 54),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 4, 0, 63),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 4, 0, 63),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_step, 3, 0, 45),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_do_step, 3, 0, 45),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_ask_step, 3, 0, 46),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_ask_step, 3, 0, 46),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 3, 0, 48),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 3, 0, 48),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 3, 0, 48),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 3, 0, 48),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 3, 0, 48),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 3, 0, 48),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 3, 0, 48),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 3, 0, 48),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 3, 0, 48),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 3, 0, 48),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 3, 0, 48),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 3, 0, 48),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 3, 0, 49),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 3, 0, 49),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_step, 2, 0, 31),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_fold_step, 2, 0, 31),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_body, 3, 0, 61),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_step_body, 3, 0, 61),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_body, 3, 0, 62),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_step_body, 3, 0, 62),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_body, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_step_body, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 68),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 68),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 69),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 69),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 5, 0, 70),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 5, 0, 70),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_step, 2, 0, 31),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_unfold_step, 2, 0, 31),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_keep_step, 2, 0, 31),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_keep_step, 2, 0, 31),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_drop_step, 2, 0, 31),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_drop_step, 2, 0, 31),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_step, 2, 0, 31),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_rank_step, 2, 0, 31),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_step, 2, 0, 31),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_each_step, 2, 0, 31),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(119),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(92),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 50),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 50),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 51),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 51),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 55),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 55),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 21),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 21),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 65),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 65),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 39),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 39),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 39),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 39),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 33),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 33),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 39),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 39),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 71),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 71),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 40),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 40),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 27),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 27),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 56),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 56),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 23),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 23),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 29),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 29),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 17),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 17),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 34),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 34),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 38),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 42),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 42),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 34),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 34),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 7),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 7),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 42),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 42),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 33),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 3, 0, 33),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 52),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 52),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 53),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 53),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 58),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 58),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 58),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 58),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 56),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 56),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 50),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 50),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 64),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 64),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 66),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 5, 0, 66),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 67),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 67),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 67),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 67),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 72),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 72),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 65),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 65),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 73),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 73),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 74),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 6, 0, 74),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 7),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 7),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 10),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 10),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 17),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 17),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 15),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 15),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 29),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 29),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 15),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 15),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 15),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 15),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 15),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 15),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 16),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 16),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 16),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 16),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 17),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 17),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 51),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 51),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19), SHIFT_REPEAT(262),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 6),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 6),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 1, 0, 0),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19), SHIFT_REPEAT(312),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_head, 1, 0, 0),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [974] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [979] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [998] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_output_type, 2, 0, 47),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_output_type, 2, 0, 47),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_item_filter_head, 1, 0, 0),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 60),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 60), SHIFT_REPEAT(497),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_target_list, 2, 0, 44),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_target_list, 1, 0, 30),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1083] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(485),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_parallelism, 2, 0, 49),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_head, 1, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_head, 2, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 21),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_unfold_head, 1, 0, 0),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_each_head, 3, 0, 0),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_target_list_repeat1, 2, 0, 59),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 21),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_limit, 1, 0, 32),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_fold_head, 2, 0, 0),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_count, 1, 0, 0),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26), SHIFT_REPEAT(386),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 75),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_item_filter_head, 2, 0, 0),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_rank_head, 1, 0, 0),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 25),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 27),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 40),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_text, 1, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_body, 1, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
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
