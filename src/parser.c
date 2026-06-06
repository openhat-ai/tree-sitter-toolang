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
#define STATE_COUNT 584
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 191
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 30
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
  sym_array_suffix = 11,
  sym_frontmatter_comment = 12,
  sym_block_language = 13,
  anon_sym_do = 14,
  sym_flow_condition = 15,
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
  anon_sym_psyche = 37,
  anon_sym_skill = 38,
  anon_sym_service = 39,
  anon_sym_prompt = 40,
  sym_thunk_keyword = 41,
  sym_flow_keyword = 42,
  sym_pass_keyword = 43,
  anon_sym_get = 44,
  anon_sym_ask = 45,
  anon_sym_unfold = 46,
  anon_sym_filter = 47,
  anon_sym_rank = 48,
  anon_sym_fold = 49,
  sym_flow_map_keyword = 50,
  sym_flow_block_keyword = 51,
  sym_flow_case_keyword = 52,
  sym_flow_else_keyword = 53,
  sym_flow_repeat_keyword = 54,
  sym_flow_until_keyword = 55,
  sym_optional_marker = 56,
  sym_arrow = 57,
  sym_colon = 58,
  sym_lparen = 59,
  sym_rparen = 60,
  sym_comma = 61,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 62,
  sym_frontmatter_delimiter = 63,
  sym_cap_uri = 64,
  sym_cap_shorthand = 65,
  sym_bare_value = 66,
  sym_type_name = 67,
  sym_value_name = 68,
  sym_indented_raw_text = 69,
  sym_fenced_raw_text = 70,
  sym_source_file = 71,
  sym_item = 72,
  sym_newline = 73,
  sym_blank_line = 74,
  sym_line_end = 75,
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
  sym_cap_name = 91,
  sym_cap_ref = 92,
  sym_cap_body = 93,
  sym_cap_indented = 94,
  sym_cap_markdown = 95,
  sym_cap_indented_content_line = 96,
  sym_cap_fenced_content_line = 97,
  sym_frontmatter = 98,
  sym_property_eq = 99,
  sym_property_colon = 100,
  sym_property_key = 101,
  sym_property_value = 102,
  sym_instruct = 103,
  sym_instruct_name = 104,
  sym_instruct_body = 105,
  sym_context = 106,
  sym_context_name = 107,
  sym_context_body = 108,
  sym_block_indented = 109,
  sym_block_fenced = 110,
  sym_block_indented_content_line = 111,
  sym_block_fenced_content_line = 112,
  sym_thunk = 113,
  sym_thunk_name = 114,
  sym_thunk_body = 115,
  sym_params = 116,
  sym_param = 117,
  sym_param_name = 118,
  sym_flow = 119,
  sym_flow_name = 120,
  sym_flow_body = 121,
  sym_flow_entry = 122,
  sym_flow_transform_step = 123,
  sym_flow_map_step = 124,
  sym_flow_block_step = 125,
  sym_flow_case_step = 126,
  sym_flow_case_body = 127,
  sym_flow_case_arm = 128,
  sym_flow_else_arm = 129,
  sym_flow_repeat_until = 130,
  sym_flow_nested_body = 131,
  sym_flow_inline_body = 132,
  sym_flow_call_list = 133,
  sym_flow_step_args = 134,
  sym_flow_do_prefix = 135,
  sym_flow_arg = 136,
  sym_flow_inline_text = 137,
  sym_flow_text_block = 138,
  sym_directive = 139,
  sym_directive_key = 140,
  sym_directive_op = 141,
  sym_directive_csv = 142,
  sym_instruction_section = 143,
  sym_message_section = 144,
  sym_thunk_tail = 145,
  sym_roled_message = 146,
  sym_unroled_message = 147,
  sym_unroled_message_block = 148,
  sym_block_indented_implicit = 149,
  sym_context_block = 150,
  sym_instruct_block = 151,
  sym_roled_message_block = 152,
  sym_pass_statement = 153,
  sym_context_block_kind = 154,
  sym_instruct_block_kind = 155,
  sym_roled_message_kind = 156,
  sym_block_value = 157,
  sym_block_inline = 158,
  sym_block_name = 159,
  sym_block_content_inline = 160,
  sym_psyche_keyword = 161,
  sym_skill_keyword = 162,
  sym_service_keyword = 163,
  sym_prompt_keyword = 164,
  sym_context_keyword = 165,
  sym_instruct_keyword = 166,
  sym_flow_transform_keyword = 167,
  sym_assign_operator = 168,
  sym_fence_open = 169,
  sym_fence_close = 170,
  sym_cap_kind = 171,
  sym_inline_text = 172,
  aux_sym_source_file_repeat1 = 173,
  aux_sym_type_repeat1 = 174,
  aux_sym_struct_body_repeat1 = 175,
  aux_sym_cap_indented_repeat1 = 176,
  aux_sym_cap_markdown_repeat1 = 177,
  aux_sym_frontmatter_repeat1 = 178,
  aux_sym_block_indented_repeat1 = 179,
  aux_sym_block_fenced_repeat1 = 180,
  aux_sym_thunk_body_repeat1 = 181,
  aux_sym_thunk_body_repeat2 = 182,
  aux_sym_params_repeat1 = 183,
  aux_sym_flow_body_repeat1 = 184,
  aux_sym_flow_case_body_repeat1 = 185,
  aux_sym_flow_nested_body_repeat1 = 186,
  aux_sym_flow_call_list_repeat1 = 187,
  aux_sym_flow_step_args_repeat1 = 188,
  aux_sym_directive_csv_repeat1 = 189,
  aux_sym_message_section_repeat1 = 190,
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
  [sym_array_suffix] = "array_suffix",
  [sym_frontmatter_comment] = "frontmatter_comment",
  [sym_block_language] = "block_language",
  [anon_sym_do] = "do",
  [sym_flow_condition] = "flow_condition",
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
  [anon_sym_get] = "get",
  [anon_sym_ask] = "ask",
  [anon_sym_unfold] = "unfold",
  [anon_sym_filter] = "filter",
  [anon_sym_rank] = "rank",
  [anon_sym_fold] = "fold",
  [sym_flow_map_keyword] = "flow_map_keyword",
  [sym_flow_block_keyword] = "flow_block_keyword",
  [sym_flow_case_keyword] = "flow_case_keyword",
  [sym_flow_else_keyword] = "flow_else_keyword",
  [sym_flow_repeat_keyword] = "flow_repeat_keyword",
  [sym_flow_until_keyword] = "flow_until_keyword",
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
  [sym_flow_entry] = "flow_entry",
  [sym_flow_transform_step] = "step",
  [sym_flow_map_step] = "step",
  [sym_flow_block_step] = "step",
  [sym_flow_case_step] = "step",
  [sym_flow_case_body] = "flow_case_body",
  [sym_flow_case_arm] = "flow_case_arm",
  [sym_flow_else_arm] = "flow_else_arm",
  [sym_flow_repeat_until] = "step",
  [sym_flow_nested_body] = "flow_nested_body",
  [sym_flow_inline_body] = "flow_inline_body",
  [sym_flow_call_list] = "flow_call_list",
  [sym_flow_step_args] = "flow_step_args",
  [sym_flow_do_prefix] = "flow_do_prefix",
  [sym_flow_arg] = "flow_arg",
  [sym_flow_inline_text] = "flow_inline_text",
  [sym_flow_text_block] = "flow_text_block",
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
  [sym_flow_transform_keyword] = "flow_transform_keyword",
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
  [aux_sym_flow_case_body_repeat1] = "flow_case_body_repeat1",
  [aux_sym_flow_nested_body_repeat1] = "flow_nested_body_repeat1",
  [aux_sym_flow_call_list_repeat1] = "flow_call_list_repeat1",
  [aux_sym_flow_step_args_repeat1] = "flow_step_args_repeat1",
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
  [sym_array_suffix] = sym_array_suffix,
  [sym_frontmatter_comment] = sym_frontmatter_comment,
  [sym_block_language] = sym_block_language,
  [anon_sym_do] = anon_sym_do,
  [sym_flow_condition] = sym_flow_condition,
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
  [anon_sym_get] = anon_sym_get,
  [anon_sym_ask] = anon_sym_ask,
  [anon_sym_unfold] = anon_sym_unfold,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_rank] = anon_sym_rank,
  [anon_sym_fold] = anon_sym_fold,
  [sym_flow_map_keyword] = sym_flow_map_keyword,
  [sym_flow_block_keyword] = sym_flow_block_keyword,
  [sym_flow_case_keyword] = sym_flow_case_keyword,
  [sym_flow_else_keyword] = sym_flow_else_keyword,
  [sym_flow_repeat_keyword] = sym_flow_repeat_keyword,
  [sym_flow_until_keyword] = sym_flow_until_keyword,
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
  [sym_flow_entry] = sym_flow_entry,
  [sym_flow_transform_step] = sym_flow_transform_step,
  [sym_flow_map_step] = sym_flow_transform_step,
  [sym_flow_block_step] = sym_flow_transform_step,
  [sym_flow_case_step] = sym_flow_transform_step,
  [sym_flow_case_body] = sym_flow_case_body,
  [sym_flow_case_arm] = sym_flow_case_arm,
  [sym_flow_else_arm] = sym_flow_else_arm,
  [sym_flow_repeat_until] = sym_flow_transform_step,
  [sym_flow_nested_body] = sym_flow_nested_body,
  [sym_flow_inline_body] = sym_flow_inline_body,
  [sym_flow_call_list] = sym_flow_call_list,
  [sym_flow_step_args] = sym_flow_step_args,
  [sym_flow_do_prefix] = sym_flow_do_prefix,
  [sym_flow_arg] = sym_flow_arg,
  [sym_flow_inline_text] = sym_flow_inline_text,
  [sym_flow_text_block] = sym_flow_text_block,
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
  [sym_flow_transform_keyword] = sym_flow_transform_keyword,
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
  [aux_sym_flow_case_body_repeat1] = aux_sym_flow_case_body_repeat1,
  [aux_sym_flow_nested_body_repeat1] = aux_sym_flow_nested_body_repeat1,
  [aux_sym_flow_call_list_repeat1] = aux_sym_flow_call_list_repeat1,
  [aux_sym_flow_step_args_repeat1] = aux_sym_flow_step_args_repeat1,
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
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [sym_flow_condition] = {
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
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unfold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rank] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fold] = {
    .visible = true,
    .named = false,
  },
  [sym_flow_map_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_block_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_case_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_else_keyword] = {
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
  [sym_flow_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_transform_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_map_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_block_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_case_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_case_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_case_arm] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_else_arm] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_repeat_until] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_nested_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_call_list] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_step_args] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_do_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_inline_text] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_text_block] = {
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
  [sym_flow_transform_keyword] = {
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
  [aux_sym_flow_case_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_nested_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_call_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_step_args_repeat1] = {
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
  field_arg = 1,
  field_arrow = 2,
  field_base = 3,
  field_body = 4,
  field_close = 5,
  field_colon = 6,
  field_condition = 7,
  field_content = 8,
  field_else = 9,
  field_frontmatter = 10,
  field_instruction = 11,
  field_key = 12,
  field_keyword = 13,
  field_kind = 14,
  field_language = 15,
  field_messages = 16,
  field_modifier = 17,
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
  field_type = 28,
  field_value = 29,
  field_values = 30,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_arrow] = "arrow",
  [field_base] = "base",
  [field_body] = "body",
  [field_close] = "close",
  [field_colon] = "colon",
  [field_condition] = "condition",
  [field_content] = "content",
  [field_else] = "else",
  [field_frontmatter] = "frontmatter",
  [field_instruction] = "instruction",
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_language] = "language",
  [field_messages] = "messages",
  [field_modifier] = "modifier",
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
  [31] = {.index = 66, .length = 1},
  [32] = {.index = 67, .length = 5},
  [33] = {.index = 72, .length = 2},
  [34] = {.index = 74, .length = 1},
  [35] = {.index = 75, .length = 1},
  [36] = {.index = 76, .length = 2},
  [37] = {.index = 78, .length = 3},
  [38] = {.index = 81, .length = 4},
  [39] = {.index = 85, .length = 5},
  [40] = {.index = 90, .length = 5},
  [41] = {.index = 95, .length = 5},
  [42] = {.index = 100, .length = 1},
  [43] = {.index = 101, .length = 2},
  [44] = {.index = 103, .length = 2},
  [45] = {.index = 105, .length = 2},
  [46] = {.index = 107, .length = 1},
  [47] = {.index = 108, .length = 2},
  [48] = {.index = 110, .length = 2},
  [49] = {.index = 112, .length = 3},
  [50] = {.index = 115, .length = 1},
  [51] = {.index = 116, .length = 6},
  [52] = {.index = 122, .length = 6},
  [53] = {.index = 128, .length = 6},
  [55] = {.index = 134, .length = 1},
  [56] = {.index = 135, .length = 2},
  [57] = {.index = 137, .length = 1},
  [58] = {.index = 138, .length = 2},
  [59] = {.index = 140, .length = 2},
  [60] = {.index = 142, .length = 2},
  [61] = {.index = 144, .length = 2},
  [62] = {.index = 146, .length = 7},
  [63] = {.index = 153, .length = 2},
  [64] = {.index = 155, .length = 2},
  [65] = {.index = 157, .length = 1},
  [66] = {.index = 158, .length = 4},
  [67] = {.index = 162, .length = 4},
  [68] = {.index = 166, .length = 3},
  [69] = {.index = 169, .length = 3},
  [70] = {.index = 172, .length = 2},
  [71] = {.index = 174, .length = 1},
  [72] = {.index = 175, .length = 2},
  [73] = {.index = 177, .length = 3},
  [74] = {.index = 180, .length = 3},
  [75] = {.index = 183, .length = 3},
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
    {field_arg, 0},
  [66] =
    {field_close, 2},
  [67] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [72] =
    {field_instruction, 1},
    {field_tail, 2},
  [74] =
    {field_instruction, 2},
  [75] =
    {field_tail, 2},
  [76] =
    {field_instruction, 0},
    {field_tail, 2},
  [78] =
    {field_colon, 1},
    {field_kind, 0},
    {field_value, 2},
  [81] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [85] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [90] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [95] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [100] =
    {field_target, 0},
  [101] =
    {field_body, 1},
    {field_keyword, 0},
  [103] =
    {field_arg, 0},
    {field_arg, 1, .inherited = true},
  [105] =
    {field_close, 3},
    {field_language, 1},
  [107] =
    {field_close, 3},
  [108] =
    {field_instruction, 1},
    {field_tail, 3},
  [110] =
    {field_instruction, 2},
    {field_tail, 3},
  [112] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [115] =
    {field_name, 0},
  [116] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [122] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [128] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [134] =
    {field_target, 1},
  [135] =
    {field_target, 0},
    {field_target, 1, .inherited = true},
  [137] =
    {field_arg, 1},
  [138] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [140] =
    {field_close, 3},
    {field_frontmatter, 2},
  [142] =
    {field_close, 4},
    {field_language, 1},
  [144] =
    {field_instruction, 2},
    {field_tail, 4},
  [146] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [153] =
    {field_target, 1},
    {field_target, 2, .inherited = true},
  [155] =
    {field_target, 0, .inherited = true},
    {field_target, 1, .inherited = true},
  [157] =
    {field_else, 1},
  [158] =
    {field_colon, 2},
    {field_condition, 4},
    {field_keyword, 0},
    {field_modifier, 1},
  [162] =
    {field_colon, 2},
    {field_condition, 3},
    {field_keyword, 0},
    {field_modifier, 1},
  [166] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [169] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [172] =
    {field_close, 4},
    {field_frontmatter, 2},
  [174] =
    {field_target, 2},
  [175] =
    {field_colon, 1},
    {field_condition, 0},
  [177] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [180] =
    {field_body, 3},
    {field_colon, 1},
    {field_condition, 0},
  [183] =
    {field_colon, 1},
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [54] = {
    [0] = sym_unroled_message_block,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_block_indented_implicit, 2,
    sym_block_indented_implicit,
    sym_unroled_message_block,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 2,
  [7] = 4,
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
  [34] = 33,
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
  [57] = 52,
  [58] = 53,
  [59] = 35,
  [60] = 46,
  [61] = 47,
  [62] = 50,
  [63] = 40,
  [64] = 36,
  [65] = 48,
  [66] = 38,
  [67] = 42,
  [68] = 68,
  [69] = 41,
  [70] = 54,
  [71] = 49,
  [72] = 43,
  [73] = 44,
  [74] = 45,
  [75] = 39,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 2,
  [83] = 3,
  [84] = 4,
  [85] = 85,
  [86] = 86,
  [87] = 9,
  [88] = 8,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 35,
  [93] = 53,
  [94] = 68,
  [95] = 36,
  [96] = 52,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 32,
  [104] = 32,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 31,
  [109] = 30,
  [110] = 110,
  [111] = 102,
  [112] = 101,
  [113] = 30,
  [114] = 31,
  [115] = 32,
  [116] = 116,
  [117] = 117,
  [118] = 36,
  [119] = 101,
  [120] = 120,
  [121] = 121,
  [122] = 33,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 51,
  [132] = 132,
  [133] = 133,
  [134] = 52,
  [135] = 53,
  [136] = 35,
  [137] = 102,
  [138] = 32,
  [139] = 132,
  [140] = 133,
  [141] = 141,
  [142] = 120,
  [143] = 123,
  [144] = 124,
  [145] = 125,
  [146] = 128,
  [147] = 52,
  [148] = 148,
  [149] = 149,
  [150] = 36,
  [151] = 51,
  [152] = 126,
  [153] = 53,
  [154] = 35,
  [155] = 155,
  [156] = 54,
  [157] = 35,
  [158] = 39,
  [159] = 40,
  [160] = 160,
  [161] = 41,
  [162] = 42,
  [163] = 36,
  [164] = 43,
  [165] = 44,
  [166] = 45,
  [167] = 46,
  [168] = 47,
  [169] = 48,
  [170] = 49,
  [171] = 51,
  [172] = 172,
  [173] = 38,
  [174] = 105,
  [175] = 52,
  [176] = 37,
  [177] = 53,
  [178] = 50,
  [179] = 53,
  [180] = 36,
  [181] = 35,
  [182] = 52,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 52,
  [189] = 51,
  [190] = 36,
  [191] = 53,
  [192] = 35,
  [193] = 36,
  [194] = 52,
  [195] = 53,
  [196] = 35,
  [197] = 197,
  [198] = 198,
  [199] = 36,
  [200] = 200,
  [201] = 201,
  [202] = 128,
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
  [219] = 53,
  [220] = 35,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 123,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 124,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 125,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 52,
  [239] = 239,
  [240] = 240,
  [241] = 50,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 120,
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
  [259] = 258,
  [260] = 257,
  [261] = 258,
  [262] = 257,
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
  [276] = 266,
  [277] = 266,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 279,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 279,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 296,
  [301] = 301,
  [302] = 302,
  [303] = 297,
  [304] = 304,
  [305] = 305,
  [306] = 301,
  [307] = 297,
  [308] = 296,
  [309] = 304,
  [310] = 304,
  [311] = 301,
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
  [325] = 325,
  [326] = 326,
  [327] = 326,
  [328] = 326,
  [329] = 36,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 52,
  [334] = 330,
  [335] = 335,
  [336] = 330,
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
  [358] = 36,
  [359] = 53,
  [360] = 35,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 53,
  [366] = 35,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 36,
  [374] = 374,
  [375] = 375,
  [376] = 53,
  [377] = 35,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 349,
  [383] = 351,
  [384] = 384,
  [385] = 355,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 348,
  [396] = 388,
  [397] = 397,
  [398] = 398,
  [399] = 356,
  [400] = 400,
  [401] = 368,
  [402] = 349,
  [403] = 355,
  [404] = 398,
  [405] = 392,
  [406] = 406,
  [407] = 348,
  [408] = 408,
  [409] = 398,
  [410] = 368,
  [411] = 389,
  [412] = 412,
  [413] = 397,
  [414] = 406,
  [415] = 364,
  [416] = 416,
  [417] = 351,
  [418] = 353,
  [419] = 390,
  [420] = 356,
  [421] = 392,
  [422] = 397,
  [423] = 406,
  [424] = 364,
  [425] = 353,
  [426] = 368,
  [427] = 347,
  [428] = 36,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 36,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 430,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 36,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 53,
  [455] = 35,
  [456] = 456,
  [457] = 430,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 461,
  [464] = 464,
  [465] = 461,
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
  [482] = 461,
  [483] = 473,
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
  [494] = 461,
  [495] = 473,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 461,
  [505] = 473,
  [506] = 461,
  [507] = 473,
  [508] = 461,
  [509] = 461,
  [510] = 461,
  [511] = 461,
  [512] = 512,
  [513] = 461,
  [514] = 461,
  [515] = 461,
  [516] = 461,
  [517] = 517,
  [518] = 518,
  [519] = 487,
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
  [543] = 532,
  [544] = 544,
  [545] = 532,
  [546] = 546,
  [547] = 53,
  [548] = 548,
  [549] = 549,
  [550] = 35,
  [551] = 551,
  [552] = 552,
  [553] = 36,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 556,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 536,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 556,
  [576] = 558,
  [577] = 571,
  [578] = 536,
  [579] = 558,
  [580] = 571,
  [581] = 562,
  [582] = 562,
  [583] = 583,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(200);
      ADVANCE_MAP(
        '\n', 201,
        '\r', 1,
        '#', 205,
        '(', 367,
        ')', 368,
        '+', 31,
        ',', 369,
        '-', 25,
        ':', 365,
        '=', 315,
        '?', 363,
        'B', 393,
        'J', 396,
        'N', 399,
        'P', 381,
        'T', 384,
        '[', 33,
        '`', 35,
        'a', 150,
        'b', 108,
        'c', 38,
        'd', 61,
        'e', 118,
        'f', 90,
        'g', 62,
        'h', 39,
        'i', 124,
        'm', 36,
        'n', 137,
        'p', 41,
        'r', 43,
        's', 63,
        't', 85,
        'u', 121,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(401);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(201);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 201,
        '\f', 216,
        '\r', 1,
        '#', 13,
        'a', 284,
        'b', 258,
        'c', 222,
        'd', 271,
        'e', 264,
        'f', 248,
        'g', 240,
        'm', 220,
        'p', 226,
        'r', 223,
        'u', 266,
        '\t', 217,
        ' ', 217,
      );
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 201,
        '\r', 1,
        '#', 205,
        '`', 304,
        'd', 412,
        'n', 432,
        '\t', 300,
        '\f', 300,
        ' ', 300,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == ')') ADVANCE(368);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(601);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(602);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(204);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(203);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(202);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(212);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\f') SKIP(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(468);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '=') ADVANCE(317);
      if (lookahead == '>') ADVANCE(364);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(371);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(190);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(29);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(364);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(211);
      END_STATE();
    case 34:
      if (lookahead == '`') ADVANCE(370);
      END_STATE();
    case 35:
      if (lookahead == '`') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(59);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'k') ADVANCE(96);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(352);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(352);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(355);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(358);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(346);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 181:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 182:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 183:
      if (lookahead == 'w') ADVANCE(348);
      END_STATE();
    case 184:
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 185:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 186:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 187:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 188:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 189:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(189);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 190:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 191:
      if (eof) ADVANCE(200);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\f') SKIP(191);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(456);
      END_STATE();
    case 192:
      if (eof) ADVANCE(200);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\f') SKIP(192);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(457);
      END_STATE();
    case 193:
      if (eof) ADVANCE(200);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\f') SKIP(193);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(458);
      END_STATE();
    case 194:
      if (eof) ADVANCE(200);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\f') SKIP(194);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(431);
      if (lookahead == 'f') ADVANCE(421);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'u') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(459);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 195:
      if (eof) ADVANCE(200);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\f') SKIP(195);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(460);
      END_STATE();
    case 196:
      if (eof) ADVANCE(200);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\f') SKIP(196);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(461);
      END_STATE();
    case 197:
      if (eof) ADVANCE(200);
      ADVANCE_MAP(
        '\n', 201,
        '\r', 1,
        '#', 12,
        'a', 161,
        'b', 108,
        'c', 38,
        'd', 130,
        'f', 90,
        'g', 62,
        'h', 39,
        'i', 124,
        'm', 37,
        'p', 41,
        'r', 43,
        's', 63,
        't', 86,
        'u', 127,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(197);
      END_STATE();
    case 198:
      if (eof) ADVANCE(200);
      ADVANCE_MAP(
        '\n', 201,
        '\r', 1,
        '#', 12,
        'c', 431,
        'f', 421,
        'i', 427,
        'p', 436,
        's', 407,
        't', 415,
        'u', 438,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(198);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 199:
      if (eof) ADVANCE(200);
      ADVANCE_MAP(
        '\n', 201,
        '\r', 1,
        '#', 12,
        'c', 135,
        'f', 110,
        'i', 124,
        'p', 147,
        's', 78,
        't', 84,
        'u', 164,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(401);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_program_doc_comment);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_do);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_flow_condition);
      ADVANCE_MAP(
        '\n', 201,
        '\f', 216,
        '\r', 1,
        '#', 13,
        'a', 284,
        'b', 258,
        'c', 222,
        'd', 271,
        'e', 264,
        'f', 248,
        'g', 240,
        'm', 220,
        'p', 226,
        'r', 223,
        'u', 266,
        '\t', 217,
        ' ', 217,
      );
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_flow_condition);
      ADVANCE_MAP(
        '\n', 201,
        '\f', 217,
        '\r', 1,
        '#', 463,
        'a', 285,
        'b', 260,
        'c', 224,
        'd', 270,
        'e', 265,
        'f', 249,
        'g', 241,
        'm', 221,
        'p', 228,
        'r', 225,
        'u', 267,
        '\t', 217,
        ' ', 217,
      );
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(298);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'c') ADVANCE(254);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'd') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'd') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(352);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(355);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'p') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      ADVANCE_MAP(
        '\n', 201,
        '\r', 1,
        '#', 205,
        '`', 304,
        'd', 412,
        'n', 432,
        '\t', 300,
        '\f', 300,
        ' ', 300,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_rank);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_flow_block_keyword);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_flow_case_keyword);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_flow_else_keyword);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_colon);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
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
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(377);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(378);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(375);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(373);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_bare_value);
      if (lookahead == 'o') ADVANCE(215);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'k') ADVANCE(417);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'w') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 201,
        '\f', 456,
        '\r', 1,
        '#', 462,
        'a', 571,
        'b', 530,
        'c', 470,
        'd', 548,
        'f', 515,
        'g', 498,
        'h', 471,
        'i', 544,
        'm', 469,
        'p', 472,
        'r', 474,
        's', 499,
        't', 509,
        'u', 541,
        '\t', 456,
        ' ', 456,
      );
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 201,
        '\f', 457,
        '\r', 1,
        '#', 462,
        'a', 577,
        'c', 553,
        'f', 532,
        'h', 471,
        'i', 544,
        'm', 549,
        'p', 472,
        'r', 503,
        's', 499,
        't', 510,
        'u', 579,
        '\t', 457,
        ' ', 457,
      );
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 201,
        '\f', 458,
        '\r', 1,
        '#', 462,
        'a', 577,
        'c', 553,
        'f', 532,
        'i', 544,
        'p', 473,
        's', 505,
        't', 511,
        'u', 579,
        '\t', 458,
        ' ', 458,
      );
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 201,
        '\f', 459,
        '\r', 1,
        '#', 462,
        'c', 431,
        'f', 421,
        'i', 427,
        'p', 436,
        's', 407,
        't', 415,
        'u', 438,
        '\t', 459,
        ' ', 459,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 201,
        '\f', 460,
        '\r', 1,
        '#', 462,
        'c', 553,
        'f', 532,
        'i', 544,
        'p', 564,
        's', 505,
        't', 512,
        'u', 572,
        '\t', 460,
        ' ', 460,
      );
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 201,
        '\f', 461,
        '\r', 1,
        '#', 462,
        'a', 577,
        'c', 553,
        'f', 532,
        'i', 544,
        'p', 564,
        's', 505,
        't', 511,
        'u', 579,
        '\t', 461,
        ' ', 461,
      );
      if (lookahead != 0) ADVANCE(600);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '!') ADVANCE(467);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == 'k') ADVANCE(516);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'k') ADVANCE(520);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(592);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(592);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(592);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '`') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(601);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(602);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(607);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(607);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(607);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(607);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(607);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 199},
  [2] = {.lex_state = 191},
  [3] = {.lex_state = 191},
  [4] = {.lex_state = 191},
  [5] = {.lex_state = 191},
  [6] = {.lex_state = 191},
  [7] = {.lex_state = 191},
  [8] = {.lex_state = 191},
  [9] = {.lex_state = 191},
  [10] = {.lex_state = 197},
  [11] = {.lex_state = 197},
  [12] = {.lex_state = 197},
  [13] = {.lex_state = 197},
  [14] = {.lex_state = 197},
  [15] = {.lex_state = 197},
  [16] = {.lex_state = 197},
  [17] = {.lex_state = 197},
  [18] = {.lex_state = 197},
  [19] = {.lex_state = 197},
  [20] = {.lex_state = 192},
  [21] = {.lex_state = 192},
  [22] = {.lex_state = 192},
  [23] = {.lex_state = 192},
  [24] = {.lex_state = 192},
  [25] = {.lex_state = 192},
  [26] = {.lex_state = 192},
  [27] = {.lex_state = 192},
  [28] = {.lex_state = 192},
  [29] = {.lex_state = 192},
  [30] = {.lex_state = 191},
  [31] = {.lex_state = 191},
  [32] = {.lex_state = 191},
  [33] = {.lex_state = 191},
  [34] = {.lex_state = 191},
  [35] = {.lex_state = 191},
  [36] = {.lex_state = 191},
  [37] = {.lex_state = 191},
  [38] = {.lex_state = 191},
  [39] = {.lex_state = 191},
  [40] = {.lex_state = 191},
  [41] = {.lex_state = 191},
  [42] = {.lex_state = 191},
  [43] = {.lex_state = 191},
  [44] = {.lex_state = 191},
  [45] = {.lex_state = 191},
  [46] = {.lex_state = 191},
  [47] = {.lex_state = 191},
  [48] = {.lex_state = 191},
  [49] = {.lex_state = 191},
  [50] = {.lex_state = 191},
  [51] = {.lex_state = 191},
  [52] = {.lex_state = 191},
  [53] = {.lex_state = 191},
  [54] = {.lex_state = 191},
  [55] = {.lex_state = 199},
  [56] = {.lex_state = 199},
  [57] = {.lex_state = 197},
  [58] = {.lex_state = 197},
  [59] = {.lex_state = 197},
  [60] = {.lex_state = 197},
  [61] = {.lex_state = 197},
  [62] = {.lex_state = 197},
  [63] = {.lex_state = 197},
  [64] = {.lex_state = 197},
  [65] = {.lex_state = 197},
  [66] = {.lex_state = 197},
  [67] = {.lex_state = 197},
  [68] = {.lex_state = 197},
  [69] = {.lex_state = 197},
  [70] = {.lex_state = 197},
  [71] = {.lex_state = 197},
  [72] = {.lex_state = 197},
  [73] = {.lex_state = 197},
  [74] = {.lex_state = 197},
  [75] = {.lex_state = 197},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 192},
  [78] = {.lex_state = 193},
  [79] = {.lex_state = 193},
  [80] = {.lex_state = 193},
  [81] = {.lex_state = 193},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 193},
  [86] = {.lex_state = 193},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 196},
  [90] = {.lex_state = 196},
  [91] = {.lex_state = 196},
  [92] = {.lex_state = 192},
  [93] = {.lex_state = 192},
  [94] = {.lex_state = 192},
  [95] = {.lex_state = 192},
  [96] = {.lex_state = 192},
  [97] = {.lex_state = 193},
  [98] = {.lex_state = 193},
  [99] = {.lex_state = 193},
  [100] = {.lex_state = 193},
  [101] = {.lex_state = 193},
  [102] = {.lex_state = 193},
  [103] = {.lex_state = 193},
  [104] = {.lex_state = 196},
  [105] = {.lex_state = 193},
  [106] = {.lex_state = 194},
  [107] = {.lex_state = 194},
  [108] = {.lex_state = 196},
  [109] = {.lex_state = 196},
  [110] = {.lex_state = 194},
  [111] = {.lex_state = 196},
  [112] = {.lex_state = 196},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 198},
  [117] = {.lex_state = 198},
  [118] = {.lex_state = 193},
  [119] = {.lex_state = 195},
  [120] = {.lex_state = 193},
  [121] = {.lex_state = 193},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 193},
  [124] = {.lex_state = 193},
  [125] = {.lex_state = 193},
  [126] = {.lex_state = 193},
  [127] = {.lex_state = 193},
  [128] = {.lex_state = 193},
  [129] = {.lex_state = 193},
  [130] = {.lex_state = 193},
  [131] = {.lex_state = 193},
  [132] = {.lex_state = 193},
  [133] = {.lex_state = 193},
  [134] = {.lex_state = 193},
  [135] = {.lex_state = 193},
  [136] = {.lex_state = 193},
  [137] = {.lex_state = 195},
  [138] = {.lex_state = 195},
  [139] = {.lex_state = 196},
  [140] = {.lex_state = 196},
  [141] = {.lex_state = 196},
  [142] = {.lex_state = 196},
  [143] = {.lex_state = 196},
  [144] = {.lex_state = 196},
  [145] = {.lex_state = 196},
  [146] = {.lex_state = 196},
  [147] = {.lex_state = 196},
  [148] = {.lex_state = 196},
  [149] = {.lex_state = 196},
  [150] = {.lex_state = 196},
  [151] = {.lex_state = 196},
  [152] = {.lex_state = 196},
  [153] = {.lex_state = 196},
  [154] = {.lex_state = 196},
  [155] = {.lex_state = 196},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 199},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 199},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 199},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 194},
  [180] = {.lex_state = 194},
  [181] = {.lex_state = 194},
  [182] = {.lex_state = 194},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 194},
  [187] = {.lex_state = 194},
  [188] = {.lex_state = 195},
  [189] = {.lex_state = 195},
  [190] = {.lex_state = 198},
  [191] = {.lex_state = 195},
  [192] = {.lex_state = 195},
  [193] = {.lex_state = 195},
  [194] = {.lex_state = 198},
  [195] = {.lex_state = 198},
  [196] = {.lex_state = 198},
  [197] = {.lex_state = 198},
  [198] = {.lex_state = 198},
  [199] = {.lex_state = 199},
  [200] = {.lex_state = 199},
  [201] = {.lex_state = 199},
  [202] = {.lex_state = 199},
  [203] = {.lex_state = 199},
  [204] = {.lex_state = 199},
  [205] = {.lex_state = 199},
  [206] = {.lex_state = 199},
  [207] = {.lex_state = 199},
  [208] = {.lex_state = 199},
  [209] = {.lex_state = 199},
  [210] = {.lex_state = 199},
  [211] = {.lex_state = 199},
  [212] = {.lex_state = 199},
  [213] = {.lex_state = 199},
  [214] = {.lex_state = 199},
  [215] = {.lex_state = 199},
  [216] = {.lex_state = 199},
  [217] = {.lex_state = 199},
  [218] = {.lex_state = 199},
  [219] = {.lex_state = 199},
  [220] = {.lex_state = 199},
  [221] = {.lex_state = 199},
  [222] = {.lex_state = 199},
  [223] = {.lex_state = 199},
  [224] = {.lex_state = 199},
  [225] = {.lex_state = 199},
  [226] = {.lex_state = 199},
  [227] = {.lex_state = 199},
  [228] = {.lex_state = 199},
  [229] = {.lex_state = 199},
  [230] = {.lex_state = 199},
  [231] = {.lex_state = 199},
  [232] = {.lex_state = 199},
  [233] = {.lex_state = 199},
  [234] = {.lex_state = 199},
  [235] = {.lex_state = 199},
  [236] = {.lex_state = 199},
  [237] = {.lex_state = 199},
  [238] = {.lex_state = 199},
  [239] = {.lex_state = 199},
  [240] = {.lex_state = 199},
  [241] = {.lex_state = 199},
  [242] = {.lex_state = 199},
  [243] = {.lex_state = 199},
  [244] = {.lex_state = 199},
  [245] = {.lex_state = 199},
  [246] = {.lex_state = 199},
  [247] = {.lex_state = 199},
  [248] = {.lex_state = 199},
  [249] = {.lex_state = 199},
  [250] = {.lex_state = 199},
  [251] = {.lex_state = 199},
  [252] = {.lex_state = 199},
  [253] = {.lex_state = 199},
  [254] = {.lex_state = 199},
  [255] = {.lex_state = 199},
  [256] = {.lex_state = 199},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 7},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 10},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 10},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 10},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 10},
  [309] = {.lex_state = 10},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 10},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 6},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 23},
  [317] = {.lex_state = 23},
  [318] = {.lex_state = 10},
  [319] = {.lex_state = 23},
  [320] = {.lex_state = 10},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 7},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 199},
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
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 6},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 9},
  [366] = {.lex_state = 9},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 8},
  [377] = {.lex_state = 8},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 59},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 29},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 29},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 29},
  [414] = {.lex_state = 29},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 29},
  [423] = {.lex_state = 29},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 8},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 22},
  [431] = {.lex_state = 187},
  [432] = {.lex_state = 23},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 188},
  [435] = {.lex_state = 187},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 10},
  [439] = {.lex_state = 6},
  [440] = {.lex_state = 22},
  [441] = {.lex_state = 10},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 6},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 10},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 23},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 10},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 10},
  [454] = {.lex_state = 10},
  [455] = {.lex_state = 10},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 22},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 6},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 199},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 6},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 6},
  [476] = {.lex_state = 6},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 6},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 189},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 189},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 189},
  [500] = {.lex_state = 189},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 188},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 29},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 6},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 189},
  [520] = {.lex_state = 6},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 6},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
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
  [542] = {.lex_state = 6},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 189},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 22},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 22},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 22},
  [554] = {.lex_state = 6},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 187},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 189},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 6},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 189},
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
    [sym_array_suffix] = ACTIONS(1),
    [sym_block_language] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
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
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_ask] = ACTIONS(1),
    [anon_sym_unfold] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_rank] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
    [sym_flow_map_keyword] = ACTIONS(1),
    [sym_flow_block_keyword] = ACTIONS(1),
    [sym_flow_case_keyword] = ACTIONS(1),
    [sym_flow_else_keyword] = ACTIONS(1),
    [sym_flow_repeat_keyword] = ACTIONS(1),
    [sym_flow_until_keyword] = ACTIONS(1),
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
    [sym_source_file] = STATE(574),
    [sym_item] = STATE(56),
    [sym_newline] = STATE(238),
    [sym_blank_line] = STATE(56),
    [sym_use] = STATE(222),
    [sym_struct] = STATE(222),
    [sym_psyche] = STATE(222),
    [sym_skill] = STATE(222),
    [sym_service] = STATE(222),
    [sym_prompt] = STATE(222),
    [sym_instruct] = STATE(222),
    [sym_context] = STATE(222),
    [sym_thunk] = STATE(222),
    [sym_flow] = STATE(222),
    [sym_psyche_keyword] = STATE(464),
    [sym_skill_keyword] = STATE(475),
    [sym_service_keyword] = STATE(476),
    [sym_prompt_keyword] = STATE(479),
    [sym_context_keyword] = STATE(439),
    [sym_instruct_keyword] = STATE(443),
    [aux_sym_source_file_repeat1] = STATE(56),
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
  [0] = 18,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(41), 1,
      sym_pass_keyword,
    ACTIONS(43), 1,
      sym_flow_map_keyword,
    ACTIONS(45), 1,
      sym_flow_block_keyword,
    ACTIONS(47), 1,
      sym_flow_case_keyword,
    ACTIONS(49), 1,
      sym_flow_repeat_keyword,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(37), 1,
      sym_block_indented_implicit,
    STATE(52), 1,
      sym_newline,
    STATE(69), 1,
      sym_flow_nested_body,
    STATE(414), 1,
      sym_flow_transform_keyword,
    ACTIONS(37), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(9), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(38), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(35), 19,
      sym_program_doc_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [88] = 18,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(41), 1,
      sym_pass_keyword,
    ACTIONS(43), 1,
      sym_flow_map_keyword,
    ACTIONS(45), 1,
      sym_flow_block_keyword,
    ACTIONS(47), 1,
      sym_flow_case_keyword,
    ACTIONS(49), 1,
      sym_flow_repeat_keyword,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(37), 1,
      sym_block_indented_implicit,
    STATE(52), 1,
      sym_newline,
    STATE(71), 1,
      sym_flow_nested_body,
    STATE(414), 1,
      sym_flow_transform_keyword,
    ACTIONS(37), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(9), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(38), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(55), 19,
      sym_program_doc_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [176] = 18,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(41), 1,
      sym_pass_keyword,
    ACTIONS(43), 1,
      sym_flow_map_keyword,
    ACTIONS(45), 1,
      sym_flow_block_keyword,
    ACTIONS(47), 1,
      sym_flow_case_keyword,
    ACTIONS(49), 1,
      sym_flow_repeat_keyword,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(37), 1,
      sym_block_indented_implicit,
    STATE(52), 1,
      sym_newline,
    STATE(70), 1,
      sym_flow_nested_body,
    STATE(414), 1,
      sym_flow_transform_keyword,
    ACTIONS(37), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(9), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(38), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(59), 19,
      sym_program_doc_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [264] = 18,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(41), 1,
      sym_pass_keyword,
    ACTIONS(43), 1,
      sym_flow_map_keyword,
    ACTIONS(45), 1,
      sym_flow_block_keyword,
    ACTIONS(47), 1,
      sym_flow_case_keyword,
    ACTIONS(49), 1,
      sym_flow_repeat_keyword,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(37), 1,
      sym_block_indented_implicit,
    STATE(49), 1,
      sym_flow_nested_body,
    STATE(52), 1,
      sym_newline,
    STATE(414), 1,
      sym_flow_transform_keyword,
    ACTIONS(37), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(9), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(38), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(55), 19,
      sym_program_doc_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [352] = 18,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(41), 1,
      sym_pass_keyword,
    ACTIONS(43), 1,
      sym_flow_map_keyword,
    ACTIONS(45), 1,
      sym_flow_block_keyword,
    ACTIONS(47), 1,
      sym_flow_case_keyword,
    ACTIONS(49), 1,
      sym_flow_repeat_keyword,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(37), 1,
      sym_block_indented_implicit,
    STATE(41), 1,
      sym_flow_nested_body,
    STATE(52), 1,
      sym_newline,
    STATE(414), 1,
      sym_flow_transform_keyword,
    ACTIONS(37), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(9), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(38), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(35), 19,
      sym_program_doc_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [440] = 18,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(41), 1,
      sym_pass_keyword,
    ACTIONS(43), 1,
      sym_flow_map_keyword,
    ACTIONS(45), 1,
      sym_flow_block_keyword,
    ACTIONS(47), 1,
      sym_flow_case_keyword,
    ACTIONS(49), 1,
      sym_flow_repeat_keyword,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(37), 1,
      sym_block_indented_implicit,
    STATE(52), 1,
      sym_newline,
    STATE(54), 1,
      sym_flow_nested_body,
    STATE(414), 1,
      sym_flow_transform_keyword,
    ACTIONS(37), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(9), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(38), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(59), 19,
      sym_program_doc_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [528] = 17,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(74), 1,
      sym_pass_keyword,
    ACTIONS(77), 1,
      sym_flow_map_keyword,
    ACTIONS(80), 1,
      sym_flow_block_keyword,
    ACTIONS(83), 1,
      sym_flow_case_keyword,
    ACTIONS(86), 1,
      sym_flow_repeat_keyword,
    ACTIONS(89), 1,
      sym_indented_raw_text,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(37), 1,
      sym_block_indented_implicit,
    STATE(52), 1,
      sym_newline,
    STATE(414), 1,
      sym_flow_transform_keyword,
    ACTIONS(68), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(8), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(38), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(71), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(66), 19,
      sym_program_doc_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [613] = 17,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(41), 1,
      sym_pass_keyword,
    ACTIONS(43), 1,
      sym_flow_map_keyword,
    ACTIONS(45), 1,
      sym_flow_block_keyword,
    ACTIONS(47), 1,
      sym_flow_case_keyword,
    ACTIONS(49), 1,
      sym_flow_repeat_keyword,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(37), 1,
      sym_block_indented_implicit,
    STATE(52), 1,
      sym_newline,
    STATE(414), 1,
      sym_flow_transform_keyword,
    ACTIONS(96), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(8), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(38), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(94), 19,
      sym_program_doc_comment,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [698] = 17,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(110), 1,
      sym_pass_keyword,
    ACTIONS(112), 1,
      sym_flow_map_keyword,
    ACTIONS(114), 1,
      sym_flow_block_keyword,
    ACTIONS(116), 1,
      sym_flow_case_keyword,
    ACTIONS(118), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(239), 1,
      sym_flow_body,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(102), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(108), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(18), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(104), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(106), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [782] = 17,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(110), 1,
      sym_pass_keyword,
    ACTIONS(112), 1,
      sym_flow_map_keyword,
    ACTIONS(114), 1,
      sym_flow_block_keyword,
    ACTIONS(116), 1,
      sym_flow_case_keyword,
    ACTIONS(118), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(252), 1,
      sym_flow_body,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(102), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(122), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(18), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(104), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(106), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [866] = 17,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(110), 1,
      sym_pass_keyword,
    ACTIONS(112), 1,
      sym_flow_map_keyword,
    ACTIONS(114), 1,
      sym_flow_block_keyword,
    ACTIONS(116), 1,
      sym_flow_case_keyword,
    ACTIONS(118), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(235), 1,
      sym_flow_body,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(102), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(126), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(18), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(104), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(106), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(124), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [950] = 17,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(110), 1,
      sym_pass_keyword,
    ACTIONS(112), 1,
      sym_flow_map_keyword,
    ACTIONS(114), 1,
      sym_flow_block_keyword,
    ACTIONS(116), 1,
      sym_flow_case_keyword,
    ACTIONS(118), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(223), 1,
      sym_flow_body,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(102), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(130), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(18), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(104), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(106), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1034] = 17,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(110), 1,
      sym_pass_keyword,
    ACTIONS(112), 1,
      sym_flow_map_keyword,
    ACTIONS(114), 1,
      sym_flow_block_keyword,
    ACTIONS(116), 1,
      sym_flow_case_keyword,
    ACTIONS(118), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(212), 1,
      sym_flow_body,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(102), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(134), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(18), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(104), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(106), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1118] = 17,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(110), 1,
      sym_pass_keyword,
    ACTIONS(112), 1,
      sym_flow_map_keyword,
    ACTIONS(114), 1,
      sym_flow_block_keyword,
    ACTIONS(116), 1,
      sym_flow_case_keyword,
    ACTIONS(118), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(243), 1,
      sym_flow_body,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(102), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(138), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(18), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(104), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(106), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1202] = 17,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(110), 1,
      sym_pass_keyword,
    ACTIONS(112), 1,
      sym_flow_map_keyword,
    ACTIONS(114), 1,
      sym_flow_block_keyword,
    ACTIONS(116), 1,
      sym_flow_case_keyword,
    ACTIONS(118), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(217), 1,
      sym_flow_body,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(102), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(142), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(18), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(104), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(106), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1286] = 17,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(110), 1,
      sym_pass_keyword,
    ACTIONS(112), 1,
      sym_flow_map_keyword,
    ACTIONS(114), 1,
      sym_flow_block_keyword,
    ACTIONS(116), 1,
      sym_flow_case_keyword,
    ACTIONS(118), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(211), 1,
      sym_flow_body,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(102), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(146), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(18), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(104), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(106), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1370] = 16,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(110), 1,
      sym_pass_keyword,
    ACTIONS(112), 1,
      sym_flow_map_keyword,
    ACTIONS(114), 1,
      sym_flow_block_keyword,
    ACTIONS(116), 1,
      sym_flow_case_keyword,
    ACTIONS(118), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(150), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(152), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(19), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(104), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(106), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1451] = 16,
    ACTIONS(156), 1,
      aux_sym_newline_token1,
    ACTIONS(170), 1,
      sym_pass_keyword,
    ACTIONS(173), 1,
      sym_flow_map_keyword,
    ACTIONS(176), 1,
      sym_flow_block_keyword,
    ACTIONS(179), 1,
      sym_flow_case_keyword,
    ACTIONS(182), 1,
      sym_flow_repeat_keyword,
    STATE(57), 1,
      sym_newline,
    STATE(406), 1,
      sym_flow_transform_keyword,
    STATE(427), 1,
      sym_directive_key,
    ACTIONS(159), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(168), 3,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(19), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_directive,
      sym_pass_statement,
      aux_sym_flow_body_repeat1,
    STATE(66), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(162), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
    ACTIONS(165), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1532] = 27,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(191), 1,
      sym_comment_line,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    STATE(81), 1,
      sym_instruction_section,
    STATE(96), 1,
      sym_newline,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(250), 1,
      sym_thunk_tail,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(21), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(189), 10,
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
  [1635] = 27,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym_comment_line,
    STATE(78), 1,
      sym_instruction_section,
    STATE(96), 1,
      sym_newline,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(244), 1,
      sym_thunk_tail,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(77), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(207), 10,
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
  [1738] = 25,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_directive,
    STATE(85), 1,
      sym_instruction_section,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(231), 1,
      sym_thunk_tail,
    STATE(253), 1,
      sym_thunk_body,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(213), 12,
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
  [1835] = 25,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_directive,
    STATE(85), 1,
      sym_instruction_section,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(231), 1,
      sym_thunk_tail,
    STATE(232), 1,
      sym_thunk_body,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(217), 12,
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
  [1932] = 25,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_directive,
    STATE(85), 1,
      sym_instruction_section,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(230), 1,
      sym_thunk_body,
    STATE(231), 1,
      sym_thunk_tail,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(221), 12,
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
  [2029] = 25,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_directive,
    STATE(85), 1,
      sym_instruction_section,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(231), 1,
      sym_thunk_tail,
    STATE(236), 1,
      sym_thunk_body,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(225), 12,
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
  [2126] = 25,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_directive,
    STATE(85), 1,
      sym_instruction_section,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(231), 1,
      sym_thunk_tail,
    STATE(247), 1,
      sym_thunk_body,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(229), 12,
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
  [2223] = 25,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_directive,
    STATE(85), 1,
      sym_instruction_section,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(226), 1,
      sym_thunk_body,
    STATE(231), 1,
      sym_thunk_tail,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(233), 12,
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
  [2320] = 25,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_directive,
    STATE(85), 1,
      sym_instruction_section,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(205), 1,
      sym_thunk_body,
    STATE(210), 1,
      sym_message_section,
    STATE(231), 1,
      sym_thunk_tail,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(237), 12,
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
  [2417] = 25,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_directive,
    STATE(85), 1,
      sym_instruction_section,
    STATE(97), 1,
      sym_instruct_block,
    STATE(98), 1,
      sym_context_block,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(231), 1,
      sym_thunk_tail,
    STATE(242), 1,
      sym_thunk_body,
    STATE(347), 1,
      sym_directive_key,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(193), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(241), 12,
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
  [2514] = 6,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_newline,
    STATE(31), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(245), 33,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [2567] = 6,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_newline,
    STATE(32), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(249), 33,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [2620] = 6,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      aux_sym_newline_token1,
    ACTIONS(258), 1,
      sym_indented_raw_text,
    STATE(52), 1,
      sym_newline,
    STATE(32), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(256), 33,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [2673] = 5,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(73), 1,
      sym_block_indented_implicit,
    ACTIONS(263), 34,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [2722] = 5,
    ACTIONS(51), 1,
      sym_indented_raw_text,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(44), 1,
      sym_block_indented_implicit,
    ACTIONS(263), 34,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [2771] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [2812] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [2853] = 2,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [2894] = 2,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [2935] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [2976] = 2,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3017] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3058] = 2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3099] = 2,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3140] = 2,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3181] = 2,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3222] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3263] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3304] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3345] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3386] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3427] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3468] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3509] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3550] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 35,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3591] = 23,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      aux_sym_newline_token1,
    ACTIONS(350), 1,
      sym_program_doc_comment,
    ACTIONS(356), 1,
      anon_sym_context,
    ACTIONS(359), 1,
      anon_sym_instruct,
    ACTIONS(362), 1,
      sym_use_keyword,
    ACTIONS(365), 1,
      sym_struct_keyword,
    ACTIONS(368), 1,
      anon_sym_psyche,
    ACTIONS(371), 1,
      anon_sym_skill,
    ACTIONS(374), 1,
      anon_sym_service,
    ACTIONS(377), 1,
      anon_sym_prompt,
    ACTIONS(380), 1,
      sym_thunk_keyword,
    ACTIONS(383), 1,
      sym_flow_keyword,
    STATE(238), 1,
      sym_newline,
    STATE(439), 1,
      sym_context_keyword,
    STATE(443), 1,
      sym_instruct_keyword,
    STATE(464), 1,
      sym_psyche_keyword,
    STATE(475), 1,
      sym_skill_keyword,
    STATE(476), 1,
      sym_service_keyword,
    STATE(479), 1,
      sym_prompt_keyword,
    ACTIONS(353), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(55), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(222), 10,
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
  [3673] = 23,
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
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      sym_program_doc_comment,
    STATE(238), 1,
      sym_newline,
    STATE(439), 1,
      sym_context_keyword,
    STATE(443), 1,
      sym_instruct_keyword,
    STATE(464), 1,
      sym_psyche_keyword,
    STATE(475), 1,
      sym_skill_keyword,
    STATE(476), 1,
      sym_service_keyword,
    STATE(479), 1,
      sym_prompt_keyword,
    ACTIONS(390), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(55), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(222), 10,
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
  [3755] = 2,
    ACTIONS(335), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(333), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3795] = 2,
    ACTIONS(339), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(337), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3835] = 2,
    ACTIONS(267), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(265), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3875] = 2,
    ACTIONS(311), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(309), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3915] = 2,
    ACTIONS(315), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(313), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3955] = 2,
    ACTIONS(327), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(325), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3995] = 2,
    ACTIONS(287), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(285), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4035] = 2,
    ACTIONS(271), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(269), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4075] = 2,
    ACTIONS(319), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(317), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4115] = 2,
    ACTIONS(279), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(277), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4155] = 2,
    ACTIONS(295), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(293), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4195] = 2,
    ACTIONS(394), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(392), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4235] = 2,
    ACTIONS(291), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(289), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4275] = 2,
    ACTIONS(343), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(341), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4315] = 2,
    ACTIONS(323), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(321), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4355] = 2,
    ACTIONS(299), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(297), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4395] = 2,
    ACTIONS(303), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(301), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4435] = 2,
    ACTIONS(307), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(305), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4475] = 2,
    ACTIONS(283), 5,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(281), 30,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
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
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4515] = 17,
    ACTIONS(396), 1,
      aux_sym_newline_token1,
    ACTIONS(402), 1,
      sym_pass_keyword,
    ACTIONS(404), 1,
      sym_flow_map_keyword,
    ACTIONS(406), 1,
      sym_flow_block_keyword,
    ACTIONS(408), 1,
      sym_flow_case_keyword,
    ACTIONS(410), 1,
      sym_flow_repeat_keyword,
    ACTIONS(412), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_block_indented_content_line,
    STATE(175), 1,
      sym_newline,
    STATE(176), 1,
      sym_block_indented_implicit,
    STATE(332), 1,
      sym_flow_nested_body,
    STATE(423), 1,
      sym_flow_transform_keyword,
    ACTIONS(398), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(400), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    STATE(87), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(173), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
  [4583] = 8,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 1,
      aux_sym_newline_token1,
    ACTIONS(421), 1,
      sym_comment_line,
    STATE(96), 1,
      sym_newline,
    STATE(347), 1,
      sym_directive_key,
    STATE(77), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(424), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(419), 17,
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
  [4633] = 18,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(433), 1,
      sym_comment_line,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(134), 1,
      sym_newline,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(240), 1,
      sym_thunk_tail,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(79), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(431), 12,
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
  [4703] = 18,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 1,
      sym_comment_line,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(134), 1,
      sym_newline,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(204), 1,
      sym_thunk_tail,
    STATE(210), 1,
      sym_message_section,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(105), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(437), 12,
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
  [4773] = 18,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(439), 1,
      sym_comment_line,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(134), 1,
      sym_newline,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(200), 1,
      sym_thunk_tail,
    STATE(210), 1,
      sym_message_section,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(105), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(443), 12,
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
  [4843] = 18,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 1,
      sym_comment_line,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(134), 1,
      sym_newline,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(254), 1,
      sym_thunk_tail,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(86), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(447), 12,
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
  [4913] = 17,
    ACTIONS(396), 1,
      aux_sym_newline_token1,
    ACTIONS(402), 1,
      sym_pass_keyword,
    ACTIONS(404), 1,
      sym_flow_map_keyword,
    ACTIONS(406), 1,
      sym_flow_block_keyword,
    ACTIONS(408), 1,
      sym_flow_case_keyword,
    ACTIONS(410), 1,
      sym_flow_repeat_keyword,
    ACTIONS(412), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_block_indented_content_line,
    STATE(161), 1,
      sym_flow_nested_body,
    STATE(175), 1,
      sym_newline,
    STATE(176), 1,
      sym_block_indented_implicit,
    STATE(423), 1,
      sym_flow_transform_keyword,
    ACTIONS(35), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(398), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(87), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(173), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
  [4981] = 17,
    ACTIONS(396), 1,
      aux_sym_newline_token1,
    ACTIONS(402), 1,
      sym_pass_keyword,
    ACTIONS(404), 1,
      sym_flow_map_keyword,
    ACTIONS(406), 1,
      sym_flow_block_keyword,
    ACTIONS(408), 1,
      sym_flow_case_keyword,
    ACTIONS(410), 1,
      sym_flow_repeat_keyword,
    ACTIONS(412), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_block_indented_content_line,
    STATE(170), 1,
      sym_flow_nested_body,
    STATE(175), 1,
      sym_newline,
    STATE(176), 1,
      sym_block_indented_implicit,
    STATE(423), 1,
      sym_flow_transform_keyword,
    ACTIONS(55), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(398), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(87), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(173), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
  [5049] = 17,
    ACTIONS(396), 1,
      aux_sym_newline_token1,
    ACTIONS(402), 1,
      sym_pass_keyword,
    ACTIONS(404), 1,
      sym_flow_map_keyword,
    ACTIONS(406), 1,
      sym_flow_block_keyword,
    ACTIONS(408), 1,
      sym_flow_case_keyword,
    ACTIONS(410), 1,
      sym_flow_repeat_keyword,
    ACTIONS(412), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_block_indented_content_line,
    STATE(156), 1,
      sym_flow_nested_body,
    STATE(175), 1,
      sym_newline,
    STATE(176), 1,
      sym_block_indented_implicit,
    STATE(423), 1,
      sym_flow_transform_keyword,
    ACTIONS(59), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(398), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(87), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(173), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
  [5117] = 18,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    ACTIONS(455), 1,
      sym_comment_line,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(134), 1,
      sym_newline,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(208), 1,
      sym_thunk_tail,
    STATE(210), 1,
      sym_message_section,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(80), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(453), 12,
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
  [5187] = 18,
    ACTIONS(201), 1,
      sym_pass_keyword,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(439), 1,
      sym_comment_line,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(134), 1,
      sym_newline,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(172), 1,
      sym_pass_statement,
    STATE(210), 1,
      sym_message_section,
    STATE(234), 1,
      sym_thunk_tail,
    STATE(551), 1,
      sym_roled_message_kind,
    STATE(90), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(105), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(459), 12,
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
  [5257] = 16,
    ACTIONS(396), 1,
      aux_sym_newline_token1,
    ACTIONS(402), 1,
      sym_pass_keyword,
    ACTIONS(404), 1,
      sym_flow_map_keyword,
    ACTIONS(406), 1,
      sym_flow_block_keyword,
    ACTIONS(408), 1,
      sym_flow_case_keyword,
    ACTIONS(410), 1,
      sym_flow_repeat_keyword,
    ACTIONS(412), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_block_indented_content_line,
    STATE(175), 1,
      sym_newline,
    STATE(176), 1,
      sym_block_indented_implicit,
    STATE(423), 1,
      sym_flow_transform_keyword,
    ACTIONS(94), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(461), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(88), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(173), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(39), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
  [5322] = 16,
    ACTIONS(463), 1,
      aux_sym_newline_token1,
    ACTIONS(469), 1,
      sym_pass_keyword,
    ACTIONS(472), 1,
      sym_flow_map_keyword,
    ACTIONS(475), 1,
      sym_flow_block_keyword,
    ACTIONS(478), 1,
      sym_flow_case_keyword,
    ACTIONS(481), 1,
      sym_flow_repeat_keyword,
    ACTIONS(484), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_block_indented_content_line,
    STATE(175), 1,
      sym_newline,
    STATE(176), 1,
      sym_block_indented_implicit,
    STATE(423), 1,
      sym_flow_transform_keyword,
    ACTIONS(66), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(466), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(88), 5,
      sym_blank_line,
      sym_flow_entry,
      sym_flow_text_block,
      sym_pass_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(173), 5,
      sym_flow_transform_step,
      sym_flow_map_step,
      sym_flow_block_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(71), 7,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
  [5387] = 13,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    ACTIONS(493), 1,
      sym_comment_line,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(147), 1,
      sym_newline,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(551), 1,
      sym_roled_message_kind,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(91), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(491), 12,
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
  [5443] = 13,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 1,
      sym_comment_line,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(147), 1,
      sym_newline,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(551), 1,
      sym_roled_message_kind,
    ACTIONS(199), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(89), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(497), 12,
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
  [5499] = 13,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(503), 1,
      aux_sym_newline_token1,
    ACTIONS(508), 1,
      sym_comment_line,
    ACTIONS(514), 1,
      sym_indented_raw_text,
    STATE(109), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_roled_message_block,
    STATE(147), 1,
      sym_newline,
    STATE(149), 1,
      sym_block_indented_implicit,
    STATE(155), 1,
      sym_unroled_message_block,
    STATE(551), 1,
      sym_roled_message_kind,
    ACTIONS(511), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(91), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(506), 12,
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
  [5555] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 27,
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
  [5588] = 2,
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
  [5621] = 2,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 27,
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
  [5654] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 27,
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
  [5687] = 2,
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
  [5720] = 9,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 1,
      sym_comment_line,
    STATE(127), 1,
      sym_context_block,
    STATE(134), 1,
      sym_newline,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(100), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(519), 16,
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
  [5764] = 9,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(523), 1,
      sym_comment_line,
    STATE(127), 1,
      sym_instruct_block,
    STATE(134), 1,
      sym_newline,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(519), 16,
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
  [5808] = 9,
    ACTIONS(197), 1,
      anon_sym_instruct,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(439), 1,
      sym_comment_line,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    STATE(121), 1,
      sym_instruct_block,
    STATE(134), 1,
      sym_newline,
    STATE(549), 1,
      sym_instruct_block_kind,
    STATE(105), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(527), 16,
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
  [5852] = 9,
    ACTIONS(195), 1,
      anon_sym_context,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(439), 1,
      sym_comment_line,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    STATE(121), 1,
      sym_context_block,
    STATE(134), 1,
      sym_newline,
    STATE(548), 1,
      sym_context_block_kind,
    STATE(105), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(527), 16,
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
  [5896] = 6,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    ACTIONS(533), 1,
      sym_indented_raw_text,
    STATE(134), 1,
      sym_newline,
    STATE(103), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(531), 17,
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
  [5933] = 6,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(533), 1,
      sym_indented_raw_text,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    STATE(134), 1,
      sym_newline,
    STATE(101), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(537), 17,
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
  [5970] = 6,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(539), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_indented_raw_text,
    STATE(134), 1,
      sym_newline,
    STATE(103), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(256), 17,
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
  [6007] = 6,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(545), 1,
      aux_sym_newline_token1,
    ACTIONS(548), 1,
      sym_indented_raw_text,
    STATE(147), 1,
      sym_newline,
    STATE(104), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(256), 16,
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
  [6043] = 6,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 1,
      aux_sym_newline_token1,
    ACTIONS(558), 1,
      sym_comment_line,
    STATE(134), 1,
      sym_newline,
    STATE(105), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(556), 17,
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
  [6079] = 8,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    ACTIONS(563), 1,
      aux_sym_newline_token1,
    ACTIONS(568), 1,
      sym_value_name,
    ACTIONS(571), 1,
      sym_indented_raw_text,
    STATE(182), 1,
      sym_newline,
    STATE(469), 1,
      sym_property_key,
    STATE(106), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(566), 13,
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
  [6119] = 8,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 1,
      aux_sym_newline_token1,
    ACTIONS(580), 1,
      sym_value_name,
    ACTIONS(582), 1,
      sym_indented_raw_text,
    STATE(182), 1,
      sym_newline,
    STATE(469), 1,
      sym_property_key,
    STATE(110), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(578), 13,
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
  [6159] = 6,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    STATE(147), 1,
      sym_newline,
    STATE(104), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(249), 16,
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
  [6195] = 6,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    STATE(147), 1,
      sym_newline,
    STATE(108), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(245), 16,
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
  [6231] = 8,
    ACTIONS(576), 1,
      aux_sym_newline_token1,
    ACTIONS(580), 1,
      sym_value_name,
    ACTIONS(582), 1,
      sym_indented_raw_text,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    STATE(182), 1,
      sym_newline,
    STATE(469), 1,
      sym_property_key,
    STATE(106), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(586), 13,
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
  [6271] = 6,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_newline,
    STATE(112), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(537), 16,
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
  [6307] = 6,
    ACTIONS(203), 1,
      sym_indented_raw_text,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_newline,
    STATE(104), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(531), 16,
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
  [6343] = 5,
    ACTIONS(396), 1,
      aux_sym_newline_token1,
    ACTIONS(412), 1,
      sym_indented_raw_text,
    STATE(175), 1,
      sym_newline,
    STATE(114), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(245), 16,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [6376] = 5,
    ACTIONS(396), 1,
      aux_sym_newline_token1,
    ACTIONS(412), 1,
      sym_indented_raw_text,
    STATE(175), 1,
      sym_newline,
    STATE(115), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(249), 16,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [6409] = 5,
    ACTIONS(588), 1,
      aux_sym_newline_token1,
    ACTIONS(591), 1,
      sym_indented_raw_text,
    STATE(175), 1,
      sym_newline,
    STATE(115), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(256), 16,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [6442] = 8,
    ACTIONS(596), 1,
      aux_sym_newline_token1,
    ACTIONS(604), 1,
      sym_value_name,
    STATE(194), 1,
      sym_newline,
    STATE(480), 1,
      sym_field_name,
    ACTIONS(594), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(599), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(116), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(602), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6480] = 8,
    ACTIONS(609), 1,
      aux_sym_newline_token1,
    ACTIONS(615), 1,
      sym_value_name,
    STATE(194), 1,
      sym_newline,
    STATE(480), 1,
      sym_field_name,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(611), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(116), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(613), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6518] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 19,
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
  [6543] = 6,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    ACTIONS(617), 1,
      aux_sym_newline_token1,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    STATE(188), 1,
      sym_newline,
    STATE(138), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(531), 13,
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
  [6576] = 2,
    ACTIONS(621), 1,
      ts_builtin_sym_end,
    ACTIONS(623), 19,
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
  [6601] = 2,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
    ACTIONS(627), 19,
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
  [6626] = 4,
    ACTIONS(412), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_block_indented_content_line,
    STATE(165), 1,
      sym_block_indented_implicit,
    ACTIONS(263), 17,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [6655] = 2,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
    ACTIONS(631), 19,
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
  [6680] = 2,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
    ACTIONS(635), 19,
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
  [6705] = 2,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
    ACTIONS(639), 19,
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
  [6730] = 2,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 19,
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
  [6755] = 2,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    ACTIONS(527), 19,
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
  [6780] = 2,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    ACTIONS(647), 19,
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
  [6805] = 2,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
    ACTIONS(651), 19,
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
  [6830] = 2,
    ACTIONS(653), 1,
      ts_builtin_sym_end,
    ACTIONS(655), 19,
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
  [6855] = 2,
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
  [6880] = 2,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    ACTIONS(659), 19,
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
  [6905] = 2,
    ACTIONS(661), 1,
      ts_builtin_sym_end,
    ACTIONS(663), 19,
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
  [6930] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 19,
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
  [6955] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 19,
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
  [6980] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 19,
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
  [7005] = 6,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(617), 1,
      aux_sym_newline_token1,
    ACTIONS(619), 1,
      sym_indented_raw_text,
    STATE(188), 1,
      sym_newline,
    STATE(119), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(537), 13,
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
  [7038] = 6,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(665), 1,
      aux_sym_newline_token1,
    ACTIONS(668), 1,
      sym_indented_raw_text,
    STATE(188), 1,
      sym_newline,
    STATE(138), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(256), 13,
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
  [7071] = 2,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    ACTIONS(659), 18,
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
  [7095] = 2,
    ACTIONS(661), 1,
      ts_builtin_sym_end,
    ACTIONS(663), 18,
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
  [7119] = 2,
    ACTIONS(671), 1,
      ts_builtin_sym_end,
    ACTIONS(673), 18,
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
  [7143] = 2,
    ACTIONS(621), 1,
      ts_builtin_sym_end,
    ACTIONS(623), 18,
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
  [7167] = 2,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
    ACTIONS(631), 18,
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
  [7191] = 2,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
    ACTIONS(635), 18,
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
  [7215] = 2,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
    ACTIONS(639), 18,
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
  [7239] = 2,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    ACTIONS(647), 18,
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
  [7263] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 18,
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
  [7287] = 2,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    ACTIONS(677), 18,
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
  [7311] = 2,
    ACTIONS(679), 1,
      ts_builtin_sym_end,
    ACTIONS(681), 18,
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
  [7335] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 18,
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
  [7359] = 2,
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
  [7383] = 2,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 18,
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
  [7407] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 18,
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
  [7431] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 18,
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
  [7455] = 2,
    ACTIONS(683), 1,
      ts_builtin_sym_end,
    ACTIONS(685), 18,
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
  [7479] = 1,
    ACTIONS(343), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7500] = 1,
    ACTIONS(267), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7521] = 1,
    ACTIONS(283), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7542] = 1,
    ACTIONS(287), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7563] = 6,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(689), 1,
      sym_doc_comment,
    ACTIONS(691), 1,
      sym_comment_line,
    STATE(238), 1,
      sym_newline,
    STATE(174), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(687), 12,
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
  [7594] = 1,
    ACTIONS(291), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7615] = 1,
    ACTIONS(295), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7636] = 1,
    ACTIONS(271), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7657] = 1,
    ACTIONS(299), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7678] = 1,
    ACTIONS(303), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7699] = 1,
    ACTIONS(307), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7720] = 1,
    ACTIONS(311), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7741] = 1,
    ACTIONS(315), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7762] = 1,
    ACTIONS(319), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7783] = 1,
    ACTIONS(323), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7804] = 1,
    ACTIONS(331), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7825] = 6,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(695), 1,
      sym_doc_comment,
    ACTIONS(697), 1,
      sym_comment_line,
    STATE(238), 1,
      sym_newline,
    STATE(160), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(693), 12,
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
  [7856] = 1,
    ACTIONS(279), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7877] = 6,
    ACTIONS(556), 1,
      sym_doc_comment,
    ACTIONS(699), 1,
      aux_sym_newline_token1,
    ACTIONS(702), 1,
      sym_comment_line,
    STATE(238), 1,
      sym_newline,
    STATE(174), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(551), 12,
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
  [7908] = 1,
    ACTIONS(335), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7929] = 1,
    ACTIONS(275), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7950] = 1,
    ACTIONS(339), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7971] = 1,
    ACTIONS(327), 18,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_flow_condition,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_fold,
      sym_flow_map_keyword,
      sym_flow_block_keyword,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7992] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 16,
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
  [8014] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 16,
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
  [8036] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 16,
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
  [8058] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 16,
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
  [8080] = 13,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(705), 1,
      sym_inline_comment,
    ACTIONS(707), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(711), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(102), 1,
      sym_line_end,
    STATE(130), 1,
      sym_block_value,
    STATE(135), 1,
      sym_newline,
    STATE(336), 1,
      sym_fence_open,
    STATE(411), 1,
      sym_block_name,
    STATE(419), 1,
      sym_block_content_inline,
    STATE(524), 1,
      sym_inline_text,
    ACTIONS(709), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(126), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [8124] = 13,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(705), 1,
      sym_inline_comment,
    ACTIONS(707), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(711), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(102), 1,
      sym_line_end,
    STATE(129), 1,
      sym_block_value,
    STATE(135), 1,
      sym_newline,
    STATE(336), 1,
      sym_fence_open,
    STATE(411), 1,
      sym_block_name,
    STATE(419), 1,
      sym_block_content_inline,
    STATE(524), 1,
      sym_inline_text,
    ACTIONS(709), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(126), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [8168] = 13,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    ACTIONS(707), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(711), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(713), 1,
      sym_inline_comment,
    STATE(111), 1,
      sym_line_end,
    STATE(148), 1,
      sym_block_value,
    STATE(153), 1,
      sym_newline,
    STATE(330), 1,
      sym_fence_open,
    STATE(389), 1,
      sym_block_name,
    STATE(390), 1,
      sym_block_content_inline,
    STATE(524), 1,
      sym_inline_text,
    ACTIONS(709), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(152), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [8212] = 2,
    ACTIONS(715), 1,
      ts_builtin_sym_end,
    ACTIONS(717), 16,
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
  [8234] = 2,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
    ACTIONS(721), 16,
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
  [8256] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 15,
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
  [8277] = 2,
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
  [8298] = 2,
    ACTIONS(269), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(271), 13,
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
  [8319] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 15,
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
  [8340] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 15,
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
  [8361] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 15,
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
  [8382] = 2,
    ACTIONS(333), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(335), 13,
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
  [8403] = 2,
    ACTIONS(337), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(339), 13,
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
  [8424] = 2,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(267), 13,
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
  [8445] = 2,
    ACTIONS(723), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(725), 13,
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
  [8466] = 2,
    ACTIONS(727), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(729), 13,
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
  [8487] = 2,
    ACTIONS(271), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(269), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8507] = 2,
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
  [8527] = 2,
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
  [8547] = 2,
    ACTIONS(647), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(645), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8567] = 2,
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
  [8587] = 2,
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
  [8607] = 2,
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
  [8627] = 2,
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
  [8647] = 2,
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
  [8667] = 2,
    ACTIONS(761), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(759), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8687] = 2,
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
  [8707] = 2,
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
  [8727] = 2,
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
  [8747] = 2,
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
  [8767] = 2,
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
  [8787] = 2,
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
  [8807] = 2,
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
  [8827] = 2,
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
  [8847] = 2,
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
  [8867] = 2,
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
  [8887] = 2,
    ACTIONS(339), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(337), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8907] = 2,
    ACTIONS(267), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(265), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8927] = 2,
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
  [8947] = 2,
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
  [8967] = 2,
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
  [8987] = 2,
    ACTIONS(631), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(629), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9007] = 2,
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
  [9027] = 2,
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
  [9047] = 2,
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
  [9067] = 2,
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
  [9087] = 2,
    ACTIONS(635), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(633), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9107] = 2,
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
  [9127] = 2,
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
  [9147] = 2,
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
  [9167] = 2,
    ACTIONS(639), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(637), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9187] = 2,
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
  [9207] = 2,
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
  [9227] = 2,
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
  [9247] = 2,
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
  [9267] = 2,
    ACTIONS(335), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(333), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9287] = 2,
    ACTIONS(861), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(859), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9307] = 2,
    ACTIONS(865), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(863), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9327] = 2,
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
  [9347] = 2,
    ACTIONS(869), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(867), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9367] = 2,
    ACTIONS(873), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(871), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9387] = 2,
    ACTIONS(877), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(875), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9407] = 2,
    ACTIONS(623), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(621), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9427] = 2,
    ACTIONS(881), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(879), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9447] = 2,
    ACTIONS(885), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(883), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9467] = 2,
    ACTIONS(889), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(887), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9487] = 2,
    ACTIONS(893), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(891), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9507] = 2,
    ACTIONS(897), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(895), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9527] = 2,
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
  [9547] = 2,
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
  [9567] = 2,
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
  [9587] = 2,
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
  [9607] = 2,
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
  [9627] = 2,
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
  [9647] = 11,
    ACTIONS(396), 1,
      aux_sym_newline_token1,
    ACTIONS(923), 1,
      sym_inline_comment,
    ACTIONS(925), 1,
      anon_sym_do,
    ACTIONS(927), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(929), 1,
      sym_bare_value,
    STATE(82), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
    STATE(338), 1,
      sym_flow_arg,
    STATE(405), 1,
      sym_flow_inline_body,
    STATE(497), 1,
      sym_flow_do_prefix,
    STATE(496), 2,
      sym_flow_call_list,
      sym_flow_inline_text,
  [9682] = 11,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(925), 1,
      anon_sym_do,
    ACTIONS(927), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(931), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
    STATE(338), 1,
      sym_flow_arg,
    STATE(395), 1,
      sym_flow_inline_body,
    STATE(497), 1,
      sym_flow_do_prefix,
    STATE(496), 2,
      sym_flow_call_list,
      sym_flow_inline_text,
  [9717] = 11,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(925), 1,
      anon_sym_do,
    ACTIONS(927), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(931), 1,
      sym_inline_comment,
    STATE(33), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
    STATE(338), 1,
      sym_flow_arg,
    STATE(348), 1,
      sym_flow_inline_body,
    STATE(497), 1,
      sym_flow_do_prefix,
    STATE(496), 2,
      sym_flow_call_list,
      sym_flow_inline_text,
  [9752] = 11,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(925), 1,
      anon_sym_do,
    ACTIONS(927), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(931), 1,
      sym_inline_comment,
    STATE(2), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
    STATE(338), 1,
      sym_flow_arg,
    STATE(421), 1,
      sym_flow_inline_body,
    STATE(497), 1,
      sym_flow_do_prefix,
    STATE(496), 2,
      sym_flow_call_list,
      sym_flow_inline_text,
  [9787] = 11,
    ACTIONS(396), 1,
      aux_sym_newline_token1,
    ACTIONS(923), 1,
      sym_inline_comment,
    ACTIONS(925), 1,
      anon_sym_do,
    ACTIONS(927), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(929), 1,
      sym_bare_value,
    STATE(122), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
    STATE(338), 1,
      sym_flow_arg,
    STATE(407), 1,
      sym_flow_inline_body,
    STATE(497), 1,
      sym_flow_do_prefix,
    STATE(496), 2,
      sym_flow_call_list,
      sym_flow_inline_text,
  [9822] = 11,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(925), 1,
      anon_sym_do,
    ACTIONS(927), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(931), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
    STATE(338), 1,
      sym_flow_arg,
    STATE(392), 1,
      sym_flow_inline_body,
    STATE(497), 1,
      sym_flow_do_prefix,
    STATE(496), 2,
      sym_flow_call_list,
      sym_flow_inline_text,
  [9857] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(501), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9878] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(540), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9899] = 8,
    ACTIONS(609), 1,
      aux_sym_newline_token1,
    ACTIONS(937), 1,
      sym_doc_comment,
    ACTIONS(939), 1,
      sym_comment_line,
    ACTIONS(941), 1,
      sym_value_name,
    STATE(194), 1,
      sym_newline,
    STATE(228), 1,
      sym_struct_body,
    STATE(480), 1,
      sym_field_name,
    STATE(117), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [9926] = 7,
    ACTIONS(943), 1,
      aux_sym_newline_token1,
    ACTIONS(947), 1,
      sym_flow_condition,
    ACTIONS(949), 1,
      sym_flow_else_keyword,
    STATE(60), 1,
      sym_flow_else_arm,
    STATE(333), 1,
      sym_newline,
    ACTIONS(945), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(285), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [9951] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(546), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9972] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(491), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9993] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(568), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [10014] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(570), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [10035] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(567), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [10056] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(525), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [10077] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(538), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [10098] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(573), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [10119] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(412), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [10140] = 7,
    ACTIONS(943), 1,
      aux_sym_newline_token1,
    ACTIONS(947), 1,
      sym_flow_condition,
    ACTIONS(951), 1,
      sym_flow_else_keyword,
    STATE(46), 1,
      sym_flow_else_arm,
    STATE(333), 1,
      sym_newline,
    ACTIONS(945), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(285), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [10165] = 7,
    ACTIONS(943), 1,
      aux_sym_newline_token1,
    ACTIONS(947), 1,
      sym_flow_condition,
    ACTIONS(953), 1,
      sym_flow_else_keyword,
    STATE(167), 1,
      sym_flow_else_arm,
    STATE(333), 1,
      sym_newline,
    ACTIONS(945), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(285), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [10190] = 5,
    ACTIONS(935), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(372), 1,
      sym_type,
    STATE(315), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(933), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [10211] = 6,
    ACTIONS(943), 1,
      aux_sym_newline_token1,
    ACTIONS(947), 1,
      sym_flow_condition,
    STATE(164), 1,
      sym_flow_case_body,
    STATE(333), 1,
      sym_newline,
    ACTIONS(955), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(277), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [10233] = 8,
    ACTIONS(957), 1,
      aux_sym_newline_token1,
    ACTIONS(959), 1,
      sym_inline_comment,
    ACTIONS(961), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(137), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
    STATE(227), 1,
      sym_instruct_body,
    STATE(334), 1,
      sym_fence_open,
    STATE(203), 2,
      sym_block_indented,
      sym_block_fenced,
  [10259] = 8,
    ACTIONS(961), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(963), 1,
      aux_sym_newline_token1,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_line_end,
    STATE(179), 1,
      sym_newline,
    STATE(209), 1,
      sym_cap_body,
    STATE(331), 1,
      sym_fence_open,
    STATE(246), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [10285] = 8,
    ACTIONS(957), 1,
      aux_sym_newline_token1,
    ACTIONS(959), 1,
      sym_inline_comment,
    ACTIONS(961), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(137), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
    STATE(256), 1,
      sym_instruct_body,
    STATE(334), 1,
      sym_fence_open,
    STATE(203), 2,
      sym_block_indented,
      sym_block_fenced,
  [10311] = 6,
    ACTIONS(943), 1,
      aux_sym_newline_token1,
    ACTIONS(947), 1,
      sym_flow_condition,
    STATE(72), 1,
      sym_flow_case_body,
    STATE(333), 1,
      sym_newline,
    ACTIONS(967), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(266), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [10333] = 8,
    ACTIONS(957), 1,
      aux_sym_newline_token1,
    ACTIONS(959), 1,
      sym_inline_comment,
    ACTIONS(961), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(137), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
    STATE(255), 1,
      sym_context_body,
    STATE(334), 1,
      sym_fence_open,
    STATE(251), 2,
      sym_block_indented,
      sym_block_fenced,
  [10359] = 6,
    ACTIONS(969), 1,
      aux_sym_newline_token1,
    ACTIONS(975), 1,
      sym_flow_condition,
    ACTIONS(978), 1,
      sym_flow_else_keyword,
    STATE(333), 1,
      sym_newline,
    ACTIONS(972), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(285), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [10381] = 8,
    ACTIONS(961), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(963), 1,
      aux_sym_newline_token1,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_line_end,
    STATE(179), 1,
      sym_newline,
    STATE(213), 1,
      sym_cap_body,
    STATE(331), 1,
      sym_fence_open,
    STATE(246), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [10407] = 8,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(984), 1,
      sym_frontmatter_delimiter,
    ACTIONS(986), 1,
      sym_fenced_raw_text,
    STATE(248), 1,
      sym_fence_close,
    STATE(312), 1,
      sym_frontmatter,
    STATE(441), 1,
      sym_newline,
    STATE(313), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10433] = 8,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(984), 1,
      sym_frontmatter_delimiter,
    ACTIONS(986), 1,
      sym_fenced_raw_text,
    STATE(221), 1,
      sym_fence_close,
    STATE(299), 1,
      sym_frontmatter,
    STATE(441), 1,
      sym_newline,
    STATE(302), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10459] = 8,
    ACTIONS(961), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(963), 1,
      aux_sym_newline_token1,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_line_end,
    STATE(179), 1,
      sym_newline,
    STATE(206), 1,
      sym_cap_body,
    STATE(331), 1,
      sym_fence_open,
    STATE(246), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [10485] = 6,
    ACTIONS(943), 1,
      aux_sym_newline_token1,
    ACTIONS(947), 1,
      sym_flow_condition,
    STATE(43), 1,
      sym_flow_case_body,
    STATE(333), 1,
      sym_newline,
    ACTIONS(988), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(276), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [10507] = 8,
    ACTIONS(961), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(963), 1,
      aux_sym_newline_token1,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_line_end,
    STATE(179), 1,
      sym_newline,
    STATE(207), 1,
      sym_cap_body,
    STATE(331), 1,
      sym_fence_open,
    STATE(246), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [10533] = 8,
    ACTIONS(957), 1,
      aux_sym_newline_token1,
    ACTIONS(959), 1,
      sym_inline_comment,
    ACTIONS(961), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(137), 1,
      sym_line_end,
    STATE(191), 1,
      sym_newline,
    STATE(218), 1,
      sym_context_body,
    STATE(334), 1,
      sym_fence_open,
    STATE(251), 2,
      sym_block_indented,
      sym_block_fenced,
  [10559] = 4,
    ACTIONS(992), 1,
      sym_array_suffix,
    STATE(294), 1,
      aux_sym_type_repeat1,
    STATE(321), 1,
      sym_type_suffix,
    ACTIONS(990), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10576] = 4,
    ACTIONS(992), 1,
      sym_array_suffix,
    STATE(295), 1,
      aux_sym_type_repeat1,
    STATE(321), 1,
      sym_type_suffix,
    ACTIONS(994), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10593] = 4,
    ACTIONS(998), 1,
      sym_array_suffix,
    STATE(295), 1,
      aux_sym_type_repeat1,
    STATE(321), 1,
      sym_type_suffix,
    ACTIONS(996), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10610] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(1001), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    STATE(146), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(320), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10630] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    ACTIONS(1005), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(123), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(308), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10650] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(986), 1,
      sym_fenced_raw_text,
    STATE(225), 1,
      sym_fence_close,
    STATE(441), 1,
      sym_newline,
    STATE(318), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10670] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(986), 1,
      sym_fenced_raw_text,
    STATE(249), 1,
      sym_fence_close,
    STATE(441), 1,
      sym_newline,
    STATE(305), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10690] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    STATE(202), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(320), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10710] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    ACTIONS(1005), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(120), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(304), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10730] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(986), 1,
      sym_fenced_raw_text,
    STATE(201), 1,
      sym_fence_close,
    STATE(441), 1,
      sym_newline,
    STATE(318), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10750] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    STATE(224), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(300), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10770] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    ACTIONS(1005), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(125), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(320), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10790] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(986), 1,
      sym_fenced_raw_text,
    STATE(216), 1,
      sym_fence_close,
    STATE(441), 1,
      sym_newline,
    STATE(318), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10810] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    STATE(245), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(310), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10830] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(1001), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    STATE(143), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(296), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10850] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    ACTIONS(1005), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(128), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(320), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10870] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(1001), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    STATE(145), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(320), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10890] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    STATE(233), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(320), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10910] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(1001), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1003), 1,
      sym_fenced_raw_text,
    STATE(142), 1,
      sym_fence_close,
    STATE(449), 1,
      sym_newline,
    STATE(309), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10930] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(986), 1,
      sym_fenced_raw_text,
    STATE(214), 1,
      sym_fence_close,
    STATE(441), 1,
      sym_newline,
    STATE(298), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10950] = 6,
    ACTIONS(980), 1,
      aux_sym_newline_token1,
    ACTIONS(982), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(986), 1,
      sym_fenced_raw_text,
    STATE(215), 1,
      sym_fence_close,
    STATE(441), 1,
      sym_newline,
    STATE(318), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10970] = 6,
    ACTIONS(1007), 1,
      sym_arrow,
    ACTIONS(1009), 1,
      sym_colon,
    ACTIONS(1011), 1,
      sym_lparen,
    ACTIONS(1013), 1,
      sym_value_name,
    STATE(378), 1,
      sym_flow_name,
    STATE(481), 1,
      sym_params,
  [10989] = 1,
    ACTIONS(1015), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10998] = 5,
    ACTIONS(1017), 1,
      sym_frontmatter_comment,
    ACTIONS(1019), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1021), 1,
      sym_value_name,
    STATE(561), 1,
      sym_property_key,
    STATE(317), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [11015] = 5,
    ACTIONS(1023), 1,
      sym_frontmatter_comment,
    ACTIONS(1026), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1028), 1,
      sym_value_name,
    STATE(561), 1,
      sym_property_key,
    STATE(317), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [11032] = 5,
    ACTIONS(1031), 1,
      aux_sym_newline_token1,
    ACTIONS(1034), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1036), 1,
      sym_fenced_raw_text,
    STATE(441), 1,
      sym_newline,
    STATE(318), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [11049] = 5,
    ACTIONS(1021), 1,
      sym_value_name,
    ACTIONS(1039), 1,
      sym_frontmatter_comment,
    ACTIONS(1041), 1,
      sym_frontmatter_delimiter,
    STATE(561), 1,
      sym_property_key,
    STATE(316), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [11066] = 5,
    ACTIONS(1043), 1,
      aux_sym_newline_token1,
    ACTIONS(1046), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1048), 1,
      sym_fenced_raw_text,
    STATE(449), 1,
      sym_newline,
    STATE(320), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [11083] = 1,
    ACTIONS(1051), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11092] = 1,
    ACTIONS(1053), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11101] = 1,
    ACTIONS(1055), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11110] = 1,
    ACTIONS(1057), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [11119] = 6,
    ACTIONS(1011), 1,
      sym_lparen,
    ACTIONS(1059), 1,
      sym_arrow,
    ACTIONS(1061), 1,
      sym_colon,
    ACTIONS(1063), 1,
      sym_value_name,
    STATE(367), 1,
      sym_thunk_name,
    STATE(471), 1,
      sym_params,
  [11138] = 6,
    ACTIONS(927), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(1065), 1,
      aux_sym_newline_token1,
    ACTIONS(1067), 1,
      sym_inline_comment,
    STATE(404), 1,
      sym_flow_inline_text,
    STATE(430), 1,
      sym_line_end,
    STATE(547), 1,
      sym_newline,
  [11157] = 6,
    ACTIONS(927), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(1065), 1,
      aux_sym_newline_token1,
    ACTIONS(1067), 1,
      sym_inline_comment,
    STATE(398), 1,
      sym_flow_inline_text,
    STATE(457), 1,
      sym_line_end,
    STATE(547), 1,
      sym_newline,
  [11176] = 6,
    ACTIONS(927), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(1065), 1,
      aux_sym_newline_token1,
    ACTIONS(1067), 1,
      sym_inline_comment,
    STATE(409), 1,
      sym_flow_inline_text,
    STATE(440), 1,
      sym_line_end,
    STATE(547), 1,
      sym_newline,
  [11195] = 1,
    ACTIONS(271), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [11203] = 5,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    ACTIONS(1071), 1,
      sym_inline_comment,
    ACTIONS(1073), 1,
      sym_block_language,
    STATE(311), 1,
      sym_line_end,
    STATE(454), 1,
      sym_newline,
  [11219] = 5,
    ACTIONS(1075), 1,
      aux_sym_newline_token1,
    ACTIONS(1077), 1,
      sym_inline_comment,
    ACTIONS(1079), 1,
      sym_block_language,
    STATE(288), 1,
      sym_line_end,
    STATE(365), 1,
      sym_newline,
  [11235] = 1,
    ACTIONS(1081), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [11243] = 1,
    ACTIONS(335), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [11251] = 5,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    ACTIONS(1071), 1,
      sym_inline_comment,
    ACTIONS(1083), 1,
      sym_block_language,
    STATE(306), 1,
      sym_line_end,
    STATE(454), 1,
      sym_newline,
  [11267] = 2,
    STATE(434), 1,
      sym_cap_kind,
    ACTIONS(1085), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [11277] = 5,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    ACTIONS(1071), 1,
      sym_inline_comment,
    ACTIONS(1087), 1,
      sym_block_language,
    STATE(301), 1,
      sym_line_end,
    STATE(454), 1,
      sym_newline,
  [11293] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(23), 1,
      sym_line_end,
    STATE(93), 1,
      sym_newline,
  [11306] = 3,
    ACTIONS(1095), 1,
      sym_comma,
    STATE(393), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1093), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11317] = 3,
    ACTIONS(1099), 1,
      sym_comma,
    STATE(339), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1097), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11328] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_line_end,
    STATE(93), 1,
      sym_newline,
  [11341] = 3,
    ACTIONS(1104), 1,
      sym_comma,
    STATE(394), 1,
      aux_sym_flow_step_args_repeat1,
    ACTIONS(1102), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11352] = 3,
    ACTIONS(1095), 1,
      sym_comma,
    STATE(343), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1106), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11363] = 3,
    ACTIONS(1110), 1,
      sym_comma,
    STATE(343), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1108), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11374] = 4,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    ACTIONS(1115), 1,
      sym_inline_comment,
    STATE(76), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
  [11387] = 4,
    ACTIONS(1117), 1,
      aux_sym_newline_token1,
    ACTIONS(1119), 1,
      sym_inline_comment,
    STATE(265), 1,
      sym_line_end,
    STATE(359), 1,
      sym_newline,
  [11400] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_line_end,
    STATE(93), 1,
      sym_newline,
  [11413] = 2,
    STATE(487), 1,
      sym_directive_op,
    ACTIONS(1121), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11422] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(58), 1,
      sym_newline,
    STATE(74), 1,
      sym_line_end,
  [11435] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(58), 1,
      sym_newline,
    STATE(75), 1,
      sym_line_end,
  [11448] = 3,
    ACTIONS(1104), 1,
      sym_comma,
    STATE(341), 1,
      aux_sym_flow_step_args_repeat1,
    ACTIONS(1125), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11459] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [11472] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_line_end,
    STATE(58), 1,
      sym_newline,
  [11485] = 4,
    ACTIONS(1131), 1,
      aux_sym_newline_token1,
    ACTIONS(1133), 1,
      sym_inline_comment,
    STATE(283), 1,
      sym_line_end,
    STATE(376), 1,
      sym_newline,
  [11498] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(26), 1,
      sym_line_end,
    STATE(93), 1,
      sym_newline,
  [11511] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(58), 1,
      sym_newline,
    STATE(63), 1,
      sym_line_end,
  [11524] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(3), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [11537] = 4,
    ACTIONS(1135), 1,
      sym_rparen,
    ACTIONS(1137), 1,
      sym_value_name,
    STATE(450), 1,
      sym_param,
    STATE(474), 1,
      sym_param_name,
  [11550] = 2,
    ACTIONS(271), 1,
      sym_comment_line,
    ACTIONS(269), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [11559] = 2,
    ACTIONS(339), 1,
      sym_comment_line,
    ACTIONS(337), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [11568] = 2,
    ACTIONS(267), 1,
      sym_comment_line,
    ACTIONS(265), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [11577] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_line_end,
    STATE(58), 1,
      sym_newline,
  [11590] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(16), 1,
      sym_line_end,
    STATE(58), 1,
      sym_newline,
  [11603] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_end,
    STATE(58), 1,
      sym_newline,
  [11616] = 4,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(303), 1,
      sym_line_end,
    STATE(454), 1,
      sym_newline,
  [11629] = 1,
    ACTIONS(339), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [11636] = 1,
    ACTIONS(267), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [11643] = 4,
    ACTIONS(1011), 1,
      sym_lparen,
    ACTIONS(1139), 1,
      sym_arrow,
    ACTIONS(1141), 1,
      sym_colon,
    STATE(477), 1,
      sym_params,
  [11656] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(58), 1,
      sym_newline,
    STATE(62), 1,
      sym_line_end,
  [11669] = 4,
    ACTIONS(1075), 1,
      aux_sym_newline_token1,
    ACTIONS(1077), 1,
      sym_inline_comment,
    STATE(287), 1,
      sym_line_end,
    STATE(365), 1,
      sym_newline,
  [11682] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_line_end,
    STATE(93), 1,
      sym_newline,
  [11695] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
    STATE(58), 1,
      sym_newline,
  [11708] = 4,
    ACTIONS(609), 1,
      aux_sym_newline_token1,
    ACTIONS(1143), 1,
      sym_inline_comment,
    STATE(195), 1,
      sym_newline,
    STATE(197), 1,
      sym_line_end,
  [11721] = 1,
    ACTIONS(271), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [11728] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(58), 1,
      sym_newline,
  [11741] = 3,
    ACTIONS(1147), 1,
      sym_comma,
    STATE(339), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1145), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11752] = 1,
    ACTIONS(339), 4,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
  [11759] = 1,
    ACTIONS(267), 4,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
  [11766] = 4,
    ACTIONS(1011), 1,
      sym_lparen,
    ACTIONS(1149), 1,
      sym_arrow,
    ACTIONS(1151), 1,
      sym_colon,
    STATE(484), 1,
      sym_params,
  [11779] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
    STATE(93), 1,
      sym_newline,
  [11792] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(24), 1,
      sym_line_end,
    STATE(93), 1,
      sym_newline,
  [11805] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(22), 1,
      sym_line_end,
    STATE(93), 1,
      sym_newline,
  [11818] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(39), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [11831] = 4,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    ACTIONS(1115), 1,
      sym_inline_comment,
    STATE(84), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
  [11844] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(58), 1,
      sym_newline,
  [11857] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(40), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [11870] = 3,
    ACTIONS(1147), 1,
      sym_comma,
    STATE(375), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1153), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11881] = 3,
    ACTIONS(1095), 1,
      sym_comma,
    STATE(342), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1155), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11892] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(58), 1,
      sym_newline,
    STATE(68), 1,
      sym_line_end,
  [11905] = 4,
    ACTIONS(1157), 1,
      aux_sym_newline_token1,
    ACTIONS(1159), 1,
      sym_inline_comment,
    STATE(139), 1,
      sym_line_end,
    STATE(153), 1,
      sym_newline,
  [11918] = 4,
    ACTIONS(1157), 1,
      aux_sym_newline_token1,
    ACTIONS(1159), 1,
      sym_inline_comment,
    STATE(140), 1,
      sym_line_end,
    STATE(153), 1,
      sym_newline,
  [11931] = 4,
    ACTIONS(925), 1,
      anon_sym_do,
    ACTIONS(929), 1,
      sym_bare_value,
    STATE(444), 1,
      sym_flow_arg,
    STATE(499), 1,
      sym_flow_do_prefix,
  [11944] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(42), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [11957] = 3,
    ACTIONS(1095), 1,
      sym_comma,
    STATE(343), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1161), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11968] = 3,
    ACTIONS(1165), 1,
      sym_comma,
    STATE(394), 1,
      aux_sym_flow_step_args_repeat1,
    ACTIONS(1163), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11979] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(45), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [11992] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(93), 1,
      sym_newline,
    STATE(94), 1,
      sym_line_end,
  [12005] = 4,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(1168), 1,
      sym_colon,
    STATE(349), 1,
      sym_flow_step_args,
    STATE(350), 1,
      sym_flow_arg,
  [12018] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(48), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [12031] = 4,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    ACTIONS(1115), 1,
      sym_inline_comment,
    STATE(83), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
  [12044] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(219), 1,
      sym_newline,
    STATE(237), 1,
      sym_line_end,
  [12057] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(50), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [12070] = 4,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    ACTIONS(1115), 1,
      sym_inline_comment,
    STATE(158), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
  [12083] = 4,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    ACTIONS(1115), 1,
      sym_inline_comment,
    STATE(159), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
  [12096] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(58), 1,
      sym_newline,
    STATE(65), 1,
      sym_line_end,
  [12109] = 4,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    ACTIONS(1115), 1,
      sym_inline_comment,
    STATE(162), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
  [12122] = 4,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(1172), 1,
      sym_colon,
    STATE(350), 1,
      sym_flow_arg,
    STATE(355), 1,
      sym_flow_step_args,
  [12135] = 4,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    ACTIONS(1115), 1,
      sym_inline_comment,
    STATE(166), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
  [12148] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
    STATE(58), 1,
      sym_newline,
  [12161] = 4,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    ACTIONS(1115), 1,
      sym_inline_comment,
    STATE(169), 1,
      sym_line_end,
    STATE(177), 1,
      sym_newline,
  [12174] = 4,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    ACTIONS(1115), 1,
      sym_inline_comment,
    STATE(177), 1,
      sym_newline,
    STATE(178), 1,
      sym_line_end,
  [12187] = 4,
    ACTIONS(1174), 1,
      aux_sym_newline_token1,
    ACTIONS(1176), 1,
      sym_inline_comment,
    STATE(132), 1,
      sym_line_end,
    STATE(135), 1,
      sym_newline,
  [12200] = 4,
    ACTIONS(609), 1,
      aux_sym_newline_token1,
    ACTIONS(1143), 1,
      sym_inline_comment,
    STATE(195), 1,
      sym_newline,
    STATE(198), 1,
      sym_line_end,
  [12213] = 4,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(1178), 1,
      sym_colon,
    STATE(350), 1,
      sym_flow_arg,
    STATE(382), 1,
      sym_flow_step_args,
  [12226] = 4,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(1180), 1,
      sym_colon,
    STATE(350), 1,
      sym_flow_arg,
    STATE(385), 1,
      sym_flow_step_args,
  [12239] = 4,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(297), 1,
      sym_line_end,
    STATE(454), 1,
      sym_newline,
  [12252] = 4,
    ACTIONS(963), 1,
      aux_sym_newline_token1,
    ACTIONS(965), 1,
      sym_inline_comment,
    STATE(179), 1,
      sym_newline,
    STATE(187), 1,
      sym_line_end,
  [12265] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [12278] = 4,
    ACTIONS(1131), 1,
      aux_sym_newline_token1,
    ACTIONS(1133), 1,
      sym_inline_comment,
    STATE(290), 1,
      sym_line_end,
    STATE(376), 1,
      sym_newline,
  [12291] = 4,
    ACTIONS(1174), 1,
      aux_sym_newline_token1,
    ACTIONS(1176), 1,
      sym_inline_comment,
    STATE(133), 1,
      sym_line_end,
    STATE(135), 1,
      sym_newline,
  [12304] = 4,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    ACTIONS(1129), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(53), 1,
      sym_newline,
  [12317] = 4,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(1123), 1,
      sym_inline_comment,
    STATE(58), 1,
      sym_newline,
    STATE(67), 1,
      sym_line_end,
  [12330] = 4,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(1182), 1,
      sym_colon,
    STATE(350), 1,
      sym_flow_arg,
    STATE(402), 1,
      sym_flow_step_args,
  [12343] = 4,
    ACTIONS(929), 1,
      sym_bare_value,
    ACTIONS(1184), 1,
      sym_colon,
    STATE(350), 1,
      sym_flow_arg,
    STATE(403), 1,
      sym_flow_step_args,
  [12356] = 4,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    ACTIONS(1071), 1,
      sym_inline_comment,
    STATE(307), 1,
      sym_line_end,
    STATE(454), 1,
      sym_newline,
  [12369] = 4,
    ACTIONS(1131), 1,
      aux_sym_newline_token1,
    ACTIONS(1133), 1,
      sym_inline_comment,
    STATE(279), 1,
      sym_line_end,
    STATE(376), 1,
      sym_newline,
  [12382] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1170), 1,
      sym_inline_comment,
    STATE(219), 1,
      sym_newline,
    STATE(241), 1,
      sym_line_end,
  [12395] = 2,
    STATE(519), 1,
      sym_directive_op,
    ACTIONS(1121), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12404] = 1,
    ACTIONS(271), 4,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
  [12411] = 3,
    ACTIONS(1186), 1,
      sym_rparen,
    ACTIONS(1188), 1,
      sym_comma,
    STATE(429), 1,
      aux_sym_params_repeat1,
  [12421] = 3,
    ACTIONS(1191), 1,
      sym_indented_raw_text,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(61), 1,
      sym_block_indented_implicit,
  [12431] = 3,
    ACTIONS(1193), 1,
      aux_sym_flow_inline_text_token1,
    STATE(416), 1,
      sym_property_value,
    STATE(488), 1,
      sym_inline_text,
  [12441] = 1,
    ACTIONS(269), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [12447] = 1,
    ACTIONS(1195), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [12453] = 3,
    ACTIONS(1197), 1,
      sym_cap_uri,
    ACTIONS(1199), 1,
      sym_cap_shorthand,
    STATE(400), 1,
      sym_cap_ref,
  [12463] = 3,
    ACTIONS(1193), 1,
      aux_sym_flow_inline_text_token1,
    STATE(488), 1,
      sym_inline_text,
    STATE(489), 1,
      sym_property_value,
  [12473] = 1,
    ACTIONS(1201), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [12479] = 1,
    ACTIONS(1097), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [12485] = 1,
    ACTIONS(1203), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [12491] = 3,
    ACTIONS(1205), 1,
      sym_colon,
    ACTIONS(1207), 1,
      sym_value_name,
    STATE(560), 1,
      sym_context_name,
  [12501] = 3,
    ACTIONS(1209), 1,
      sym_indented_raw_text,
    STATE(113), 1,
      sym_block_indented_content_line,
    STATE(168), 1,
      sym_block_indented_implicit,
  [12511] = 1,
    ACTIONS(1211), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [12517] = 1,
    ACTIONS(1213), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [12523] = 3,
    ACTIONS(1215), 1,
      sym_colon,
    ACTIONS(1217), 1,
      sym_value_name,
    STATE(535), 1,
      sym_instruct_name,
  [12533] = 1,
    ACTIONS(1219), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [12539] = 1,
    ACTIONS(1221), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [12545] = 1,
    ACTIONS(1223), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [12551] = 1,
    ACTIONS(1225), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [12557] = 1,
    ACTIONS(271), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [12563] = 1,
    ACTIONS(1227), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [12569] = 3,
    ACTIONS(1229), 1,
      sym_rparen,
    ACTIONS(1231), 1,
      sym_comma,
    STATE(460), 1,
      aux_sym_params_repeat1,
  [12579] = 1,
    ACTIONS(1233), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [12585] = 1,
    ACTIONS(1235), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12591] = 1,
    ACTIONS(1237), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [12597] = 1,
    ACTIONS(339), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [12603] = 1,
    ACTIONS(267), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [12609] = 1,
    ACTIONS(1239), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [12615] = 3,
    ACTIONS(1191), 1,
      sym_indented_raw_text,
    STATE(30), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_block_indented_implicit,
  [12625] = 1,
    ACTIONS(1241), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [12631] = 3,
    ACTIONS(1137), 1,
      sym_value_name,
    STATE(474), 1,
      sym_param_name,
    STATE(493), 1,
      sym_param,
  [12641] = 3,
    ACTIONS(1231), 1,
      sym_comma,
    ACTIONS(1243), 1,
      sym_rparen,
    STATE(429), 1,
      aux_sym_params_repeat1,
  [12651] = 2,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    STATE(35), 1,
      sym_newline,
  [12658] = 2,
    ACTIONS(1245), 1,
      sym_type_name,
    STATE(565), 1,
      sym_struct_name,
  [12665] = 2,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    STATE(92), 1,
      sym_newline,
  [12672] = 2,
    ACTIONS(1247), 1,
      sym_value_name,
    STATE(529), 1,
      sym_cap_name,
  [12679] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(220), 1,
      sym_newline,
  [12686] = 1,
    ACTIONS(1249), 2,
      sym_arrow,
      sym_colon,
  [12691] = 1,
    ACTIONS(1251), 2,
      anon_sym_EQ,
      sym_colon,
  [12696] = 2,
    ACTIONS(963), 1,
      aux_sym_newline_token1,
    STATE(186), 1,
      sym_newline,
  [12703] = 2,
    ACTIONS(1253), 1,
      anon_sym_EQ,
    STATE(431), 1,
      sym_assign_operator,
  [12710] = 1,
    ACTIONS(1255), 2,
      sym_optional_marker,
      sym_colon,
  [12715] = 2,
    ACTIONS(1257), 1,
      sym_arrow,
    ACTIONS(1259), 1,
      sym_colon,
  [12722] = 2,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    STATE(438), 1,
      sym_newline,
  [12729] = 2,
    ACTIONS(1157), 1,
      aux_sym_newline_token1,
    STATE(151), 1,
      sym_newline,
  [12736] = 2,
    ACTIONS(1261), 1,
      sym_optional_marker,
    ACTIONS(1263), 1,
      sym_colon,
  [12743] = 2,
    ACTIONS(1247), 1,
      sym_value_name,
    STATE(534), 1,
      sym_cap_name,
  [12750] = 2,
    ACTIONS(1247), 1,
      sym_value_name,
    STATE(537), 1,
      sym_cap_name,
  [12757] = 2,
    ACTIONS(1265), 1,
      sym_arrow,
    ACTIONS(1267), 1,
      sym_colon,
  [12764] = 1,
    ACTIONS(1269), 2,
      sym_optional_marker,
      sym_colon,
  [12769] = 2,
    ACTIONS(1247), 1,
      sym_value_name,
    STATE(541), 1,
      sym_cap_name,
  [12776] = 2,
    ACTIONS(1271), 1,
      sym_optional_marker,
    ACTIONS(1273), 1,
      sym_colon,
  [12783] = 2,
    ACTIONS(1275), 1,
      sym_arrow,
    ACTIONS(1277), 1,
      sym_colon,
  [12790] = 2,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    STATE(59), 1,
      sym_newline,
  [12797] = 2,
    ACTIONS(957), 1,
      aux_sym_newline_token1,
    STATE(189), 1,
      sym_newline,
  [12804] = 2,
    ACTIONS(1279), 1,
      sym_arrow,
    ACTIONS(1281), 1,
      sym_colon,
  [12811] = 1,
    ACTIONS(1283), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [12816] = 1,
    ACTIONS(1285), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [12821] = 2,
    ACTIONS(1287), 1,
      sym_bare_value,
    STATE(396), 1,
      sym_directive_csv,
  [12828] = 1,
    ACTIONS(1289), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [12833] = 2,
    ACTIONS(1291), 1,
      aux_sym_newline_token1,
    STATE(447), 1,
      sym_newline,
  [12840] = 1,
    ACTIONS(1293), 2,
      sym_arrow,
      sym_colon,
  [12845] = 1,
    ACTIONS(1295), 2,
      sym_rparen,
      sym_comma,
  [12850] = 1,
    ACTIONS(1297), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [12855] = 1,
    ACTIONS(1299), 2,
      sym_rparen,
      sym_comma,
  [12860] = 2,
    ACTIONS(957), 1,
      aux_sym_newline_token1,
    STATE(192), 1,
      sym_newline,
  [12867] = 2,
    ACTIONS(1174), 1,
      aux_sym_newline_token1,
    STATE(131), 1,
      sym_newline,
  [12874] = 1,
    ACTIONS(1301), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [12879] = 2,
    ACTIONS(1303), 1,
      sym_bare_value,
    STATE(387), 1,
      sym_flow_arg,
  [12886] = 1,
    ACTIONS(1305), 2,
      sym_arrow,
      sym_colon,
  [12891] = 2,
    ACTIONS(1303), 1,
      sym_bare_value,
    STATE(436), 1,
      sym_flow_arg,
  [12898] = 2,
    ACTIONS(1303), 1,
      sym_bare_value,
    STATE(451), 1,
      sym_flow_arg,
  [12905] = 1,
    ACTIONS(1307), 2,
      sym_rparen,
      sym_comma,
  [12910] = 2,
    ACTIONS(1309), 1,
      sym_cap_uri,
    ACTIONS(1311), 1,
      sym_cap_shorthand,
  [12917] = 1,
    ACTIONS(1313), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [12922] = 2,
    ACTIONS(1117), 1,
      aux_sym_newline_token1,
    STATE(360), 1,
      sym_newline,
  [12929] = 2,
    ACTIONS(1127), 1,
      aux_sym_newline_token1,
    STATE(51), 1,
      sym_newline,
  [12936] = 2,
    ACTIONS(963), 1,
      aux_sym_newline_token1,
    STATE(181), 1,
      sym_newline,
  [12943] = 2,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    STATE(171), 1,
      sym_newline,
  [12950] = 2,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    STATE(455), 1,
      sym_newline,
  [12957] = 2,
    ACTIONS(1075), 1,
      aux_sym_newline_token1,
    STATE(366), 1,
      sym_newline,
  [12964] = 2,
    ACTIONS(1174), 1,
      aux_sym_newline_token1,
    STATE(136), 1,
      sym_newline,
  [12971] = 2,
    ACTIONS(1157), 1,
      aux_sym_newline_token1,
    STATE(154), 1,
      sym_newline,
  [12978] = 1,
    ACTIONS(1315), 2,
      sym_colon,
      sym_bare_value,
  [12983] = 2,
    ACTIONS(1131), 1,
      aux_sym_newline_token1,
    STATE(377), 1,
      sym_newline,
  [12990] = 2,
    ACTIONS(1317), 1,
      aux_sym_newline_token1,
    STATE(550), 1,
      sym_newline,
  [12997] = 2,
    ACTIONS(609), 1,
      aux_sym_newline_token1,
    STATE(196), 1,
      sym_newline,
  [13004] = 2,
    ACTIONS(1113), 1,
      aux_sym_newline_token1,
    STATE(157), 1,
      sym_newline,
  [13011] = 1,
    ACTIONS(1319), 2,
      sym_colon,
      sym_value_name,
  [13016] = 2,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    STATE(453), 1,
      sym_newline,
  [13023] = 2,
    ACTIONS(1287), 1,
      sym_bare_value,
    STATE(388), 1,
      sym_directive_csv,
  [13030] = 1,
    ACTIONS(1321), 2,
      sym_colon,
      sym_value_name,
  [13035] = 2,
    ACTIONS(1291), 1,
      aux_sym_newline_token1,
    STATE(319), 1,
      sym_newline,
  [13042] = 2,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    STATE(456), 1,
      sym_newline,
  [13049] = 2,
    ACTIONS(1069), 1,
      aux_sym_newline_token1,
    STATE(445), 1,
      sym_newline,
  [13056] = 1,
    ACTIONS(1323), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [13061] = 1,
    ACTIONS(1325), 1,
      sym_colon,
  [13065] = 1,
    ACTIONS(1327), 1,
      sym_value_name,
  [13069] = 1,
    ACTIONS(1329), 1,
      sym_colon,
  [13073] = 1,
    ACTIONS(1331), 1,
      sym_colon,
  [13077] = 1,
    ACTIONS(1333), 1,
      sym_colon,
  [13081] = 1,
    ACTIONS(1335), 1,
      sym_colon,
  [13085] = 1,
    ACTIONS(1337), 1,
      sym_colon,
  [13089] = 1,
    ACTIONS(1339), 1,
      aux_sym_newline_token1,
  [13093] = 1,
    ACTIONS(1341), 1,
      sym_colon,
  [13097] = 1,
    ACTIONS(1343), 1,
      sym_colon,
  [13101] = 1,
    ACTIONS(1345), 1,
      sym_colon,
  [13105] = 1,
    ACTIONS(1347), 1,
      sym_colon,
  [13109] = 1,
    ACTIONS(1349), 1,
      sym_colon,
  [13113] = 1,
    ACTIONS(1351), 1,
      sym_colon,
  [13117] = 1,
    ACTIONS(1353), 1,
      sym_colon,
  [13121] = 1,
    ACTIONS(1355), 1,
      sym_colon,
  [13125] = 1,
    ACTIONS(1357), 1,
      sym_colon,
  [13129] = 1,
    ACTIONS(1359), 1,
      sym_value_name,
  [13133] = 1,
    ACTIONS(1361), 1,
      aux_sym_newline_token1,
  [13137] = 1,
    ACTIONS(1363), 1,
      sym_bare_value,
  [13141] = 1,
    ACTIONS(1365), 1,
      aux_sym_newline_token1,
  [13145] = 1,
    ACTIONS(1367), 1,
      sym_colon,
  [13149] = 1,
    ACTIONS(337), 1,
      sym_indented_raw_text,
  [13153] = 1,
    ACTIONS(1369), 1,
      sym_colon,
  [13157] = 1,
    ACTIONS(1371), 1,
      sym_colon,
  [13161] = 1,
    ACTIONS(265), 1,
      sym_indented_raw_text,
  [13165] = 1,
    ACTIONS(1373), 1,
      sym_colon,
  [13169] = 1,
    ACTIONS(1375), 1,
      sym_colon,
  [13173] = 1,
    ACTIONS(269), 1,
      sym_indented_raw_text,
  [13177] = 1,
    ACTIONS(1377), 1,
      sym_value_name,
  [13181] = 1,
    ACTIONS(1379), 1,
      sym_colon,
  [13185] = 1,
    ACTIONS(1381), 1,
      sym_colon,
  [13189] = 1,
    ACTIONS(1383), 1,
      sym_colon,
  [13193] = 1,
    ACTIONS(1385), 1,
      sym_colon,
  [13197] = 1,
    ACTIONS(1387), 1,
      sym_colon,
  [13201] = 1,
    ACTIONS(1389), 1,
      sym_colon,
  [13205] = 1,
    ACTIONS(1391), 1,
      sym_colon,
  [13209] = 1,
    ACTIONS(1393), 1,
      sym_flow_until_keyword,
  [13213] = 1,
    ACTIONS(1395), 1,
      sym_colon,
  [13217] = 1,
    ACTIONS(1397), 1,
      aux_sym_flow_inline_text_token1,
  [13221] = 1,
    ACTIONS(1399), 1,
      sym_colon,
  [13225] = 1,
    ACTIONS(1401), 1,
      sym_colon,
  [13229] = 1,
    ACTIONS(1403), 1,
      sym_colon,
  [13233] = 1,
    ACTIONS(1405), 1,
      sym_colon,
  [13237] = 1,
    ACTIONS(1407), 1,
      sym_bare_value,
  [13241] = 1,
    ACTIONS(1409), 1,
      sym_colon,
  [13245] = 1,
    ACTIONS(1411), 1,
      sym_colon,
  [13249] = 1,
    ACTIONS(1413), 1,
      sym_value_name,
  [13253] = 1,
    ACTIONS(1415), 1,
      sym_colon,
  [13257] = 1,
    ACTIONS(1417), 1,
      ts_builtin_sym_end,
  [13261] = 1,
    ACTIONS(1419), 1,
      sym_colon,
  [13265] = 1,
    ACTIONS(1421), 1,
      sym_colon,
  [13269] = 1,
    ACTIONS(1423), 1,
      sym_colon,
  [13273] = 1,
    ACTIONS(1425), 1,
      sym_colon,
  [13277] = 1,
    ACTIONS(1427), 1,
      sym_colon,
  [13281] = 1,
    ACTIONS(1429), 1,
      sym_colon,
  [13285] = 1,
    ACTIONS(1431), 1,
      sym_flow_until_keyword,
  [13289] = 1,
    ACTIONS(1433), 1,
      sym_flow_until_keyword,
  [13293] = 1,
    ACTIONS(1435), 1,
      sym_bare_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 88,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 264,
  [SMALL_STATE(6)] = 352,
  [SMALL_STATE(7)] = 440,
  [SMALL_STATE(8)] = 528,
  [SMALL_STATE(9)] = 613,
  [SMALL_STATE(10)] = 698,
  [SMALL_STATE(11)] = 782,
  [SMALL_STATE(12)] = 866,
  [SMALL_STATE(13)] = 950,
  [SMALL_STATE(14)] = 1034,
  [SMALL_STATE(15)] = 1118,
  [SMALL_STATE(16)] = 1202,
  [SMALL_STATE(17)] = 1286,
  [SMALL_STATE(18)] = 1370,
  [SMALL_STATE(19)] = 1451,
  [SMALL_STATE(20)] = 1532,
  [SMALL_STATE(21)] = 1635,
  [SMALL_STATE(22)] = 1738,
  [SMALL_STATE(23)] = 1835,
  [SMALL_STATE(24)] = 1932,
  [SMALL_STATE(25)] = 2029,
  [SMALL_STATE(26)] = 2126,
  [SMALL_STATE(27)] = 2223,
  [SMALL_STATE(28)] = 2320,
  [SMALL_STATE(29)] = 2417,
  [SMALL_STATE(30)] = 2514,
  [SMALL_STATE(31)] = 2567,
  [SMALL_STATE(32)] = 2620,
  [SMALL_STATE(33)] = 2673,
  [SMALL_STATE(34)] = 2722,
  [SMALL_STATE(35)] = 2771,
  [SMALL_STATE(36)] = 2812,
  [SMALL_STATE(37)] = 2853,
  [SMALL_STATE(38)] = 2894,
  [SMALL_STATE(39)] = 2935,
  [SMALL_STATE(40)] = 2976,
  [SMALL_STATE(41)] = 3017,
  [SMALL_STATE(42)] = 3058,
  [SMALL_STATE(43)] = 3099,
  [SMALL_STATE(44)] = 3140,
  [SMALL_STATE(45)] = 3181,
  [SMALL_STATE(46)] = 3222,
  [SMALL_STATE(47)] = 3263,
  [SMALL_STATE(48)] = 3304,
  [SMALL_STATE(49)] = 3345,
  [SMALL_STATE(50)] = 3386,
  [SMALL_STATE(51)] = 3427,
  [SMALL_STATE(52)] = 3468,
  [SMALL_STATE(53)] = 3509,
  [SMALL_STATE(54)] = 3550,
  [SMALL_STATE(55)] = 3591,
  [SMALL_STATE(56)] = 3673,
  [SMALL_STATE(57)] = 3755,
  [SMALL_STATE(58)] = 3795,
  [SMALL_STATE(59)] = 3835,
  [SMALL_STATE(60)] = 3875,
  [SMALL_STATE(61)] = 3915,
  [SMALL_STATE(62)] = 3955,
  [SMALL_STATE(63)] = 3995,
  [SMALL_STATE(64)] = 4035,
  [SMALL_STATE(65)] = 4075,
  [SMALL_STATE(66)] = 4115,
  [SMALL_STATE(67)] = 4155,
  [SMALL_STATE(68)] = 4195,
  [SMALL_STATE(69)] = 4235,
  [SMALL_STATE(70)] = 4275,
  [SMALL_STATE(71)] = 4315,
  [SMALL_STATE(72)] = 4355,
  [SMALL_STATE(73)] = 4395,
  [SMALL_STATE(74)] = 4435,
  [SMALL_STATE(75)] = 4475,
  [SMALL_STATE(76)] = 4515,
  [SMALL_STATE(77)] = 4583,
  [SMALL_STATE(78)] = 4633,
  [SMALL_STATE(79)] = 4703,
  [SMALL_STATE(80)] = 4773,
  [SMALL_STATE(81)] = 4843,
  [SMALL_STATE(82)] = 4913,
  [SMALL_STATE(83)] = 4981,
  [SMALL_STATE(84)] = 5049,
  [SMALL_STATE(85)] = 5117,
  [SMALL_STATE(86)] = 5187,
  [SMALL_STATE(87)] = 5257,
  [SMALL_STATE(88)] = 5322,
  [SMALL_STATE(89)] = 5387,
  [SMALL_STATE(90)] = 5443,
  [SMALL_STATE(91)] = 5499,
  [SMALL_STATE(92)] = 5555,
  [SMALL_STATE(93)] = 5588,
  [SMALL_STATE(94)] = 5621,
  [SMALL_STATE(95)] = 5654,
  [SMALL_STATE(96)] = 5687,
  [SMALL_STATE(97)] = 5720,
  [SMALL_STATE(98)] = 5764,
  [SMALL_STATE(99)] = 5808,
  [SMALL_STATE(100)] = 5852,
  [SMALL_STATE(101)] = 5896,
  [SMALL_STATE(102)] = 5933,
  [SMALL_STATE(103)] = 5970,
  [SMALL_STATE(104)] = 6007,
  [SMALL_STATE(105)] = 6043,
  [SMALL_STATE(106)] = 6079,
  [SMALL_STATE(107)] = 6119,
  [SMALL_STATE(108)] = 6159,
  [SMALL_STATE(109)] = 6195,
  [SMALL_STATE(110)] = 6231,
  [SMALL_STATE(111)] = 6271,
  [SMALL_STATE(112)] = 6307,
  [SMALL_STATE(113)] = 6343,
  [SMALL_STATE(114)] = 6376,
  [SMALL_STATE(115)] = 6409,
  [SMALL_STATE(116)] = 6442,
  [SMALL_STATE(117)] = 6480,
  [SMALL_STATE(118)] = 6518,
  [SMALL_STATE(119)] = 6543,
  [SMALL_STATE(120)] = 6576,
  [SMALL_STATE(121)] = 6601,
  [SMALL_STATE(122)] = 6626,
  [SMALL_STATE(123)] = 6655,
  [SMALL_STATE(124)] = 6680,
  [SMALL_STATE(125)] = 6705,
  [SMALL_STATE(126)] = 6730,
  [SMALL_STATE(127)] = 6755,
  [SMALL_STATE(128)] = 6780,
  [SMALL_STATE(129)] = 6805,
  [SMALL_STATE(130)] = 6830,
  [SMALL_STATE(131)] = 6855,
  [SMALL_STATE(132)] = 6880,
  [SMALL_STATE(133)] = 6905,
  [SMALL_STATE(134)] = 6930,
  [SMALL_STATE(135)] = 6955,
  [SMALL_STATE(136)] = 6980,
  [SMALL_STATE(137)] = 7005,
  [SMALL_STATE(138)] = 7038,
  [SMALL_STATE(139)] = 7071,
  [SMALL_STATE(140)] = 7095,
  [SMALL_STATE(141)] = 7119,
  [SMALL_STATE(142)] = 7143,
  [SMALL_STATE(143)] = 7167,
  [SMALL_STATE(144)] = 7191,
  [SMALL_STATE(145)] = 7215,
  [SMALL_STATE(146)] = 7239,
  [SMALL_STATE(147)] = 7263,
  [SMALL_STATE(148)] = 7287,
  [SMALL_STATE(149)] = 7311,
  [SMALL_STATE(150)] = 7335,
  [SMALL_STATE(151)] = 7359,
  [SMALL_STATE(152)] = 7383,
  [SMALL_STATE(153)] = 7407,
  [SMALL_STATE(154)] = 7431,
  [SMALL_STATE(155)] = 7455,
  [SMALL_STATE(156)] = 7479,
  [SMALL_STATE(157)] = 7500,
  [SMALL_STATE(158)] = 7521,
  [SMALL_STATE(159)] = 7542,
  [SMALL_STATE(160)] = 7563,
  [SMALL_STATE(161)] = 7594,
  [SMALL_STATE(162)] = 7615,
  [SMALL_STATE(163)] = 7636,
  [SMALL_STATE(164)] = 7657,
  [SMALL_STATE(165)] = 7678,
  [SMALL_STATE(166)] = 7699,
  [SMALL_STATE(167)] = 7720,
  [SMALL_STATE(168)] = 7741,
  [SMALL_STATE(169)] = 7762,
  [SMALL_STATE(170)] = 7783,
  [SMALL_STATE(171)] = 7804,
  [SMALL_STATE(172)] = 7825,
  [SMALL_STATE(173)] = 7856,
  [SMALL_STATE(174)] = 7877,
  [SMALL_STATE(175)] = 7908,
  [SMALL_STATE(176)] = 7929,
  [SMALL_STATE(177)] = 7950,
  [SMALL_STATE(178)] = 7971,
  [SMALL_STATE(179)] = 7992,
  [SMALL_STATE(180)] = 8014,
  [SMALL_STATE(181)] = 8036,
  [SMALL_STATE(182)] = 8058,
  [SMALL_STATE(183)] = 8080,
  [SMALL_STATE(184)] = 8124,
  [SMALL_STATE(185)] = 8168,
  [SMALL_STATE(186)] = 8212,
  [SMALL_STATE(187)] = 8234,
  [SMALL_STATE(188)] = 8256,
  [SMALL_STATE(189)] = 8277,
  [SMALL_STATE(190)] = 8298,
  [SMALL_STATE(191)] = 8319,
  [SMALL_STATE(192)] = 8340,
  [SMALL_STATE(193)] = 8361,
  [SMALL_STATE(194)] = 8382,
  [SMALL_STATE(195)] = 8403,
  [SMALL_STATE(196)] = 8424,
  [SMALL_STATE(197)] = 8445,
  [SMALL_STATE(198)] = 8466,
  [SMALL_STATE(199)] = 8487,
  [SMALL_STATE(200)] = 8507,
  [SMALL_STATE(201)] = 8527,
  [SMALL_STATE(202)] = 8547,
  [SMALL_STATE(203)] = 8567,
  [SMALL_STATE(204)] = 8587,
  [SMALL_STATE(205)] = 8607,
  [SMALL_STATE(206)] = 8627,
  [SMALL_STATE(207)] = 8647,
  [SMALL_STATE(208)] = 8667,
  [SMALL_STATE(209)] = 8687,
  [SMALL_STATE(210)] = 8707,
  [SMALL_STATE(211)] = 8727,
  [SMALL_STATE(212)] = 8747,
  [SMALL_STATE(213)] = 8767,
  [SMALL_STATE(214)] = 8787,
  [SMALL_STATE(215)] = 8807,
  [SMALL_STATE(216)] = 8827,
  [SMALL_STATE(217)] = 8847,
  [SMALL_STATE(218)] = 8867,
  [SMALL_STATE(219)] = 8887,
  [SMALL_STATE(220)] = 8907,
  [SMALL_STATE(221)] = 8927,
  [SMALL_STATE(222)] = 8947,
  [SMALL_STATE(223)] = 8967,
  [SMALL_STATE(224)] = 8987,
  [SMALL_STATE(225)] = 9007,
  [SMALL_STATE(226)] = 9027,
  [SMALL_STATE(227)] = 9047,
  [SMALL_STATE(228)] = 9067,
  [SMALL_STATE(229)] = 9087,
  [SMALL_STATE(230)] = 9107,
  [SMALL_STATE(231)] = 9127,
  [SMALL_STATE(232)] = 9147,
  [SMALL_STATE(233)] = 9167,
  [SMALL_STATE(234)] = 9187,
  [SMALL_STATE(235)] = 9207,
  [SMALL_STATE(236)] = 9227,
  [SMALL_STATE(237)] = 9247,
  [SMALL_STATE(238)] = 9267,
  [SMALL_STATE(239)] = 9287,
  [SMALL_STATE(240)] = 9307,
  [SMALL_STATE(241)] = 9327,
  [SMALL_STATE(242)] = 9347,
  [SMALL_STATE(243)] = 9367,
  [SMALL_STATE(244)] = 9387,
  [SMALL_STATE(245)] = 9407,
  [SMALL_STATE(246)] = 9427,
  [SMALL_STATE(247)] = 9447,
  [SMALL_STATE(248)] = 9467,
  [SMALL_STATE(249)] = 9487,
  [SMALL_STATE(250)] = 9507,
  [SMALL_STATE(251)] = 9527,
  [SMALL_STATE(252)] = 9547,
  [SMALL_STATE(253)] = 9567,
  [SMALL_STATE(254)] = 9587,
  [SMALL_STATE(255)] = 9607,
  [SMALL_STATE(256)] = 9627,
  [SMALL_STATE(257)] = 9647,
  [SMALL_STATE(258)] = 9682,
  [SMALL_STATE(259)] = 9717,
  [SMALL_STATE(260)] = 9752,
  [SMALL_STATE(261)] = 9787,
  [SMALL_STATE(262)] = 9822,
  [SMALL_STATE(263)] = 9857,
  [SMALL_STATE(264)] = 9878,
  [SMALL_STATE(265)] = 9899,
  [SMALL_STATE(266)] = 9926,
  [SMALL_STATE(267)] = 9951,
  [SMALL_STATE(268)] = 9972,
  [SMALL_STATE(269)] = 9993,
  [SMALL_STATE(270)] = 10014,
  [SMALL_STATE(271)] = 10035,
  [SMALL_STATE(272)] = 10056,
  [SMALL_STATE(273)] = 10077,
  [SMALL_STATE(274)] = 10098,
  [SMALL_STATE(275)] = 10119,
  [SMALL_STATE(276)] = 10140,
  [SMALL_STATE(277)] = 10165,
  [SMALL_STATE(278)] = 10190,
  [SMALL_STATE(279)] = 10211,
  [SMALL_STATE(280)] = 10233,
  [SMALL_STATE(281)] = 10259,
  [SMALL_STATE(282)] = 10285,
  [SMALL_STATE(283)] = 10311,
  [SMALL_STATE(284)] = 10333,
  [SMALL_STATE(285)] = 10359,
  [SMALL_STATE(286)] = 10381,
  [SMALL_STATE(287)] = 10407,
  [SMALL_STATE(288)] = 10433,
  [SMALL_STATE(289)] = 10459,
  [SMALL_STATE(290)] = 10485,
  [SMALL_STATE(291)] = 10507,
  [SMALL_STATE(292)] = 10533,
  [SMALL_STATE(293)] = 10559,
  [SMALL_STATE(294)] = 10576,
  [SMALL_STATE(295)] = 10593,
  [SMALL_STATE(296)] = 10610,
  [SMALL_STATE(297)] = 10630,
  [SMALL_STATE(298)] = 10650,
  [SMALL_STATE(299)] = 10670,
  [SMALL_STATE(300)] = 10690,
  [SMALL_STATE(301)] = 10710,
  [SMALL_STATE(302)] = 10730,
  [SMALL_STATE(303)] = 10750,
  [SMALL_STATE(304)] = 10770,
  [SMALL_STATE(305)] = 10790,
  [SMALL_STATE(306)] = 10810,
  [SMALL_STATE(307)] = 10830,
  [SMALL_STATE(308)] = 10850,
  [SMALL_STATE(309)] = 10870,
  [SMALL_STATE(310)] = 10890,
  [SMALL_STATE(311)] = 10910,
  [SMALL_STATE(312)] = 10930,
  [SMALL_STATE(313)] = 10950,
  [SMALL_STATE(314)] = 10970,
  [SMALL_STATE(315)] = 10989,
  [SMALL_STATE(316)] = 10998,
  [SMALL_STATE(317)] = 11015,
  [SMALL_STATE(318)] = 11032,
  [SMALL_STATE(319)] = 11049,
  [SMALL_STATE(320)] = 11066,
  [SMALL_STATE(321)] = 11083,
  [SMALL_STATE(322)] = 11092,
  [SMALL_STATE(323)] = 11101,
  [SMALL_STATE(324)] = 11110,
  [SMALL_STATE(325)] = 11119,
  [SMALL_STATE(326)] = 11138,
  [SMALL_STATE(327)] = 11157,
  [SMALL_STATE(328)] = 11176,
  [SMALL_STATE(329)] = 11195,
  [SMALL_STATE(330)] = 11203,
  [SMALL_STATE(331)] = 11219,
  [SMALL_STATE(332)] = 11235,
  [SMALL_STATE(333)] = 11243,
  [SMALL_STATE(334)] = 11251,
  [SMALL_STATE(335)] = 11267,
  [SMALL_STATE(336)] = 11277,
  [SMALL_STATE(337)] = 11293,
  [SMALL_STATE(338)] = 11306,
  [SMALL_STATE(339)] = 11317,
  [SMALL_STATE(340)] = 11328,
  [SMALL_STATE(341)] = 11341,
  [SMALL_STATE(342)] = 11352,
  [SMALL_STATE(343)] = 11363,
  [SMALL_STATE(344)] = 11374,
  [SMALL_STATE(345)] = 11387,
  [SMALL_STATE(346)] = 11400,
  [SMALL_STATE(347)] = 11413,
  [SMALL_STATE(348)] = 11422,
  [SMALL_STATE(349)] = 11435,
  [SMALL_STATE(350)] = 11448,
  [SMALL_STATE(351)] = 11459,
  [SMALL_STATE(352)] = 11472,
  [SMALL_STATE(353)] = 11485,
  [SMALL_STATE(354)] = 11498,
  [SMALL_STATE(355)] = 11511,
  [SMALL_STATE(356)] = 11524,
  [SMALL_STATE(357)] = 11537,
  [SMALL_STATE(358)] = 11550,
  [SMALL_STATE(359)] = 11559,
  [SMALL_STATE(360)] = 11568,
  [SMALL_STATE(361)] = 11577,
  [SMALL_STATE(362)] = 11590,
  [SMALL_STATE(363)] = 11603,
  [SMALL_STATE(364)] = 11616,
  [SMALL_STATE(365)] = 11629,
  [SMALL_STATE(366)] = 11636,
  [SMALL_STATE(367)] = 11643,
  [SMALL_STATE(368)] = 11656,
  [SMALL_STATE(369)] = 11669,
  [SMALL_STATE(370)] = 11682,
  [SMALL_STATE(371)] = 11695,
  [SMALL_STATE(372)] = 11708,
  [SMALL_STATE(373)] = 11721,
  [SMALL_STATE(374)] = 11728,
  [SMALL_STATE(375)] = 11741,
  [SMALL_STATE(376)] = 11752,
  [SMALL_STATE(377)] = 11759,
  [SMALL_STATE(378)] = 11766,
  [SMALL_STATE(379)] = 11779,
  [SMALL_STATE(380)] = 11792,
  [SMALL_STATE(381)] = 11805,
  [SMALL_STATE(382)] = 11818,
  [SMALL_STATE(383)] = 11831,
  [SMALL_STATE(384)] = 11844,
  [SMALL_STATE(385)] = 11857,
  [SMALL_STATE(386)] = 11870,
  [SMALL_STATE(387)] = 11881,
  [SMALL_STATE(388)] = 11892,
  [SMALL_STATE(389)] = 11905,
  [SMALL_STATE(390)] = 11918,
  [SMALL_STATE(391)] = 11931,
  [SMALL_STATE(392)] = 11944,
  [SMALL_STATE(393)] = 11957,
  [SMALL_STATE(394)] = 11968,
  [SMALL_STATE(395)] = 11979,
  [SMALL_STATE(396)] = 11992,
  [SMALL_STATE(397)] = 12005,
  [SMALL_STATE(398)] = 12018,
  [SMALL_STATE(399)] = 12031,
  [SMALL_STATE(400)] = 12044,
  [SMALL_STATE(401)] = 12057,
  [SMALL_STATE(402)] = 12070,
  [SMALL_STATE(403)] = 12083,
  [SMALL_STATE(404)] = 12096,
  [SMALL_STATE(405)] = 12109,
  [SMALL_STATE(406)] = 12122,
  [SMALL_STATE(407)] = 12135,
  [SMALL_STATE(408)] = 12148,
  [SMALL_STATE(409)] = 12161,
  [SMALL_STATE(410)] = 12174,
  [SMALL_STATE(411)] = 12187,
  [SMALL_STATE(412)] = 12200,
  [SMALL_STATE(413)] = 12213,
  [SMALL_STATE(414)] = 12226,
  [SMALL_STATE(415)] = 12239,
  [SMALL_STATE(416)] = 12252,
  [SMALL_STATE(417)] = 12265,
  [SMALL_STATE(418)] = 12278,
  [SMALL_STATE(419)] = 12291,
  [SMALL_STATE(420)] = 12304,
  [SMALL_STATE(421)] = 12317,
  [SMALL_STATE(422)] = 12330,
  [SMALL_STATE(423)] = 12343,
  [SMALL_STATE(424)] = 12356,
  [SMALL_STATE(425)] = 12369,
  [SMALL_STATE(426)] = 12382,
  [SMALL_STATE(427)] = 12395,
  [SMALL_STATE(428)] = 12404,
  [SMALL_STATE(429)] = 12411,
  [SMALL_STATE(430)] = 12421,
  [SMALL_STATE(431)] = 12431,
  [SMALL_STATE(432)] = 12441,
  [SMALL_STATE(433)] = 12447,
  [SMALL_STATE(434)] = 12453,
  [SMALL_STATE(435)] = 12463,
  [SMALL_STATE(436)] = 12473,
  [SMALL_STATE(437)] = 12479,
  [SMALL_STATE(438)] = 12485,
  [SMALL_STATE(439)] = 12491,
  [SMALL_STATE(440)] = 12501,
  [SMALL_STATE(441)] = 12511,
  [SMALL_STATE(442)] = 12517,
  [SMALL_STATE(443)] = 12523,
  [SMALL_STATE(444)] = 12533,
  [SMALL_STATE(445)] = 12539,
  [SMALL_STATE(446)] = 12545,
  [SMALL_STATE(447)] = 12551,
  [SMALL_STATE(448)] = 12557,
  [SMALL_STATE(449)] = 12563,
  [SMALL_STATE(450)] = 12569,
  [SMALL_STATE(451)] = 12579,
  [SMALL_STATE(452)] = 12585,
  [SMALL_STATE(453)] = 12591,
  [SMALL_STATE(454)] = 12597,
  [SMALL_STATE(455)] = 12603,
  [SMALL_STATE(456)] = 12609,
  [SMALL_STATE(457)] = 12615,
  [SMALL_STATE(458)] = 12625,
  [SMALL_STATE(459)] = 12631,
  [SMALL_STATE(460)] = 12641,
  [SMALL_STATE(461)] = 12651,
  [SMALL_STATE(462)] = 12658,
  [SMALL_STATE(463)] = 12665,
  [SMALL_STATE(464)] = 12672,
  [SMALL_STATE(465)] = 12679,
  [SMALL_STATE(466)] = 12686,
  [SMALL_STATE(467)] = 12691,
  [SMALL_STATE(468)] = 12696,
  [SMALL_STATE(469)] = 12703,
  [SMALL_STATE(470)] = 12710,
  [SMALL_STATE(471)] = 12715,
  [SMALL_STATE(472)] = 12722,
  [SMALL_STATE(473)] = 12729,
  [SMALL_STATE(474)] = 12736,
  [SMALL_STATE(475)] = 12743,
  [SMALL_STATE(476)] = 12750,
  [SMALL_STATE(477)] = 12757,
  [SMALL_STATE(478)] = 12764,
  [SMALL_STATE(479)] = 12769,
  [SMALL_STATE(480)] = 12776,
  [SMALL_STATE(481)] = 12783,
  [SMALL_STATE(482)] = 12790,
  [SMALL_STATE(483)] = 12797,
  [SMALL_STATE(484)] = 12804,
  [SMALL_STATE(485)] = 12811,
  [SMALL_STATE(486)] = 12816,
  [SMALL_STATE(487)] = 12821,
  [SMALL_STATE(488)] = 12828,
  [SMALL_STATE(489)] = 12833,
  [SMALL_STATE(490)] = 12840,
  [SMALL_STATE(491)] = 12845,
  [SMALL_STATE(492)] = 12850,
  [SMALL_STATE(493)] = 12855,
  [SMALL_STATE(494)] = 12860,
  [SMALL_STATE(495)] = 12867,
  [SMALL_STATE(496)] = 12874,
  [SMALL_STATE(497)] = 12879,
  [SMALL_STATE(498)] = 12886,
  [SMALL_STATE(499)] = 12891,
  [SMALL_STATE(500)] = 12898,
  [SMALL_STATE(501)] = 12905,
  [SMALL_STATE(502)] = 12910,
  [SMALL_STATE(503)] = 12917,
  [SMALL_STATE(504)] = 12922,
  [SMALL_STATE(505)] = 12929,
  [SMALL_STATE(506)] = 12936,
  [SMALL_STATE(507)] = 12943,
  [SMALL_STATE(508)] = 12950,
  [SMALL_STATE(509)] = 12957,
  [SMALL_STATE(510)] = 12964,
  [SMALL_STATE(511)] = 12971,
  [SMALL_STATE(512)] = 12978,
  [SMALL_STATE(513)] = 12983,
  [SMALL_STATE(514)] = 12990,
  [SMALL_STATE(515)] = 12997,
  [SMALL_STATE(516)] = 13004,
  [SMALL_STATE(517)] = 13011,
  [SMALL_STATE(518)] = 13016,
  [SMALL_STATE(519)] = 13023,
  [SMALL_STATE(520)] = 13030,
  [SMALL_STATE(521)] = 13035,
  [SMALL_STATE(522)] = 13042,
  [SMALL_STATE(523)] = 13049,
  [SMALL_STATE(524)] = 13056,
  [SMALL_STATE(525)] = 13061,
  [SMALL_STATE(526)] = 13065,
  [SMALL_STATE(527)] = 13069,
  [SMALL_STATE(528)] = 13073,
  [SMALL_STATE(529)] = 13077,
  [SMALL_STATE(530)] = 13081,
  [SMALL_STATE(531)] = 13085,
  [SMALL_STATE(532)] = 13089,
  [SMALL_STATE(533)] = 13093,
  [SMALL_STATE(534)] = 13097,
  [SMALL_STATE(535)] = 13101,
  [SMALL_STATE(536)] = 13105,
  [SMALL_STATE(537)] = 13109,
  [SMALL_STATE(538)] = 13113,
  [SMALL_STATE(539)] = 13117,
  [SMALL_STATE(540)] = 13121,
  [SMALL_STATE(541)] = 13125,
  [SMALL_STATE(542)] = 13129,
  [SMALL_STATE(543)] = 13133,
  [SMALL_STATE(544)] = 13137,
  [SMALL_STATE(545)] = 13141,
  [SMALL_STATE(546)] = 13145,
  [SMALL_STATE(547)] = 13149,
  [SMALL_STATE(548)] = 13153,
  [SMALL_STATE(549)] = 13157,
  [SMALL_STATE(550)] = 13161,
  [SMALL_STATE(551)] = 13165,
  [SMALL_STATE(552)] = 13169,
  [SMALL_STATE(553)] = 13173,
  [SMALL_STATE(554)] = 13177,
  [SMALL_STATE(555)] = 13181,
  [SMALL_STATE(556)] = 13185,
  [SMALL_STATE(557)] = 13189,
  [SMALL_STATE(558)] = 13193,
  [SMALL_STATE(559)] = 13197,
  [SMALL_STATE(560)] = 13201,
  [SMALL_STATE(561)] = 13205,
  [SMALL_STATE(562)] = 13209,
  [SMALL_STATE(563)] = 13213,
  [SMALL_STATE(564)] = 13217,
  [SMALL_STATE(565)] = 13221,
  [SMALL_STATE(566)] = 13225,
  [SMALL_STATE(567)] = 13229,
  [SMALL_STATE(568)] = 13233,
  [SMALL_STATE(569)] = 13237,
  [SMALL_STATE(570)] = 13241,
  [SMALL_STATE(571)] = 13245,
  [SMALL_STATE(572)] = 13249,
  [SMALL_STATE(573)] = 13253,
  [SMALL_STATE(574)] = 13257,
  [SMALL_STATE(575)] = 13261,
  [SMALL_STATE(576)] = 13265,
  [SMALL_STATE(577)] = 13269,
  [SMALL_STATE(578)] = 13273,
  [SMALL_STATE(579)] = 13277,
  [SMALL_STATE(580)] = 13281,
  [SMALL_STATE(581)] = 13285,
  [SMALL_STATE(582)] = 13289,
  [SMALL_STATE(583)] = 13293,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_map_step, 3, 0, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_map_step, 3, 0, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_else_arm, 3, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_else_arm, 3, 0, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_block_step, 3, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_block_step, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(512),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(575),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(576),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_nested_body, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_nested_body, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 18),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 18),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 3, 0, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 3, 0, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 13),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 13),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 14),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 14),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 28),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 28),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 39),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 39),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 41),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 41),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 52),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 52),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(512),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(556),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(558),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(562),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 13),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 13),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 28),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 28),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 14),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 14),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 39),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 39),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 52),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 52),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 41),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 41),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_transform_step, 3, 0, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_transform_step, 3, 0, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_block, 1, 0, 54),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_block, 1, 0, 54),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_map_step, 3, 0, 43),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_map_step, 3, 0, 43),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_transform_step, 3, 0, 43),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_transform_step, 3, 0, 43),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_map_step, 4, 0, 7),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_map_step, 4, 0, 7),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_map_step, 4, 0, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_map_step, 4, 0, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_case_step, 4, 0, 7),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_case_step, 4, 0, 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_transform_step, 4, 0, 7),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_transform_step, 4, 0, 7),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_transform_step, 4, 0, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_transform_step, 4, 0, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_case_body, 2, 0, 65),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_case_body, 2, 0, 65),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_until, 5, 0, 66),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_until, 5, 0, 66),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_until, 5, 0, 67),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_until, 5, 0, 67),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_else_arm, 4, 0, 7),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_else_arm, 4, 0, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_block_step, 4, 0, 7),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_block_step, 4, 0, 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(542),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(554),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(572),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 49),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 49),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_case_arm, 3, 0, 72),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 34),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 34),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 34),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 34),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(557),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(579),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(582),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(539),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(118),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 31),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 31),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 45),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 45),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 46),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 46),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 60),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 60),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 37),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 37),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 37),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 37),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 50),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 50),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 21),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 21),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 37),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 37),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 2, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 2, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(199),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(174),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 68),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 68),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 27),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 27),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 38),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 38),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 46),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 46),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 61),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 5, 0, 61),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 62),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 62),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 15),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 15),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 15),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 15),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 15),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 15),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 62),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 62),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 40),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 40),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 15),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 15),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 69),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 69),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 60),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 60),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 70),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 70),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 53),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 53),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 16),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 16),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 31),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 3, 0, 31),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 29),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 29),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 73),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 6, 0, 73),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 51),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 51),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 17),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 17),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 40),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 40),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 17),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 17),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 47),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 47),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 17),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 17),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 29),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 29),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 32),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 32),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 48),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 48),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 53),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 53),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 51),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 51),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 7),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 7),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 45),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 45),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 59),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 59),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 7),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 7),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 32),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 32),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 33),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 33),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 3),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 16),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 16),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [969] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_case_body_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [972] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_case_body_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [975] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_case_body_repeat1, 2, 0, 0), SHIFT_REPEAT(527),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_case_body_repeat1, 2, 0, 0),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 6),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19), SHIFT_REPEAT(323),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [1036] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1043] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(472),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_case_arm, 4, 0, 74),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_call_list, 1, 0, 42),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(583),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_args, 2, 0, 44),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_call_list, 3, 0, 63),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_call_list_repeat1, 2, 0, 64),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_call_list_repeat1, 2, 0, 64), SHIFT_REPEAT(391),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_args, 1, 0, 30),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_call_list, 2, 0, 55),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_call_list, 2, 0, 56),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_step_args_repeat1, 2, 0, 58),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_step_args_repeat1, 2, 0, 58), SHIFT_REPEAT(500),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26),
  [1188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26), SHIFT_REPEAT(459),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_call_list_repeat1, 3, 0, 71),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 21),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arg, 1, 0, 0),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_call_list_repeat1, 2, 0, 55),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 75),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_step_args_repeat1, 2, 0, 57),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 21),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1, 0, 0),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 38),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_text, 1, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_body, 1, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 25),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 27),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_transform_keyword, 1, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_prefix, 1, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1417] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
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
