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
#define STATE_COUNT 563
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 30
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 74

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
  anon_sym_map = 49,
  anon_sym_fold = 50,
  sym_flow_case_keyword = 51,
  sym_flow_else_keyword = 52,
  sym_flow_repeat_keyword = 53,
  sym_flow_until_keyword = 54,
  sym_optional_marker = 55,
  sym_arrow = 56,
  sym_colon = 57,
  sym_lparen = 58,
  sym_rparen = 59,
  sym_comma = 60,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 61,
  sym_frontmatter_delimiter = 62,
  sym_cap_uri = 63,
  sym_cap_shorthand = 64,
  sym_bare_value = 65,
  sym_type_name = 66,
  sym_value_name = 67,
  sym_indented_raw_text = 68,
  sym_fenced_raw_text = 69,
  sym_source_file = 70,
  sym_item = 71,
  sym_newline = 72,
  sym_blank_line = 73,
  sym_line_end = 74,
  sym_use = 75,
  sym_type = 76,
  sym_base_type = 77,
  sym_builtin_type = 78,
  sym_user_type = 79,
  sym_type_suffix = 80,
  sym_struct = 81,
  sym_struct_name = 82,
  sym_struct_body = 83,
  sym_field = 84,
  sym_field_name = 85,
  sym_psyche = 86,
  sym_skill = 87,
  sym_service = 88,
  sym_prompt = 89,
  sym_cap_name = 90,
  sym_cap_ref = 91,
  sym_cap_body = 92,
  sym_cap_indented = 93,
  sym_cap_markdown = 94,
  sym_cap_indented_content_line = 95,
  sym_cap_fenced_content_line = 96,
  sym_frontmatter = 97,
  sym_property_eq = 98,
  sym_property_colon = 99,
  sym_property_key = 100,
  sym_property_value = 101,
  sym_instruct = 102,
  sym_instruct_name = 103,
  sym_instruct_body = 104,
  sym_context = 105,
  sym_context_name = 106,
  sym_context_body = 107,
  sym_block_indented = 108,
  sym_block_fenced = 109,
  sym_block_indented_content_line = 110,
  sym_block_fenced_content_line = 111,
  sym_thunk = 112,
  sym_thunk_name = 113,
  sym_thunk_body = 114,
  sym_params = 115,
  sym_param = 116,
  sym_param_name = 117,
  sym_flow = 118,
  sym_flow_name = 119,
  sym_flow_body = 120,
  sym_flow_body_tail = 121,
  sym_flow_body_statement = 122,
  sym_flow_entry = 123,
  sym_flow_transform_step = 124,
  sym_flow_case_step = 125,
  sym_flow_case_body = 126,
  sym_flow_case_arm = 127,
  sym_flow_else_arm = 128,
  sym_flow_repeat_until = 129,
  sym_flow_nested_body = 130,
  sym_flow_nested_statement = 131,
  sym_flow_inline_body = 132,
  sym_flow_call_list = 133,
  sym_flow_step_args = 134,
  sym_flow_do_prefix = 135,
  sym_flow_arg = 136,
  sym_flow_inline_text = 137,
  sym_directive = 138,
  sym_directive_key = 139,
  sym_directive_op = 140,
  sym_directive_csv = 141,
  sym_instruction_section = 142,
  sym_message_section = 143,
  sym_thunk_tail = 144,
  sym_roled_message = 145,
  sym_unroled_message = 146,
  sym_unroled_message_block = 147,
  sym_block_indented_implicit = 148,
  sym_context_block = 149,
  sym_instruct_block = 150,
  sym_roled_message_block = 151,
  sym_pass_statement = 152,
  sym_context_block_kind = 153,
  sym_instruct_block_kind = 154,
  sym_roled_message_kind = 155,
  sym_block_value = 156,
  sym_block_inline = 157,
  sym_block_name = 158,
  sym_block_content_inline = 159,
  sym_psyche_keyword = 160,
  sym_skill_keyword = 161,
  sym_service_keyword = 162,
  sym_prompt_keyword = 163,
  sym_context_keyword = 164,
  sym_instruct_keyword = 165,
  sym_flow_transform_keyword = 166,
  sym_assign_operator = 167,
  sym_fence_open = 168,
  sym_fence_close = 169,
  sym_cap_kind = 170,
  sym_inline_text = 171,
  aux_sym_source_file_repeat1 = 172,
  aux_sym_type_repeat1 = 173,
  aux_sym_struct_body_repeat1 = 174,
  aux_sym_cap_indented_repeat1 = 175,
  aux_sym_cap_markdown_repeat1 = 176,
  aux_sym_frontmatter_repeat1 = 177,
  aux_sym_block_indented_repeat1 = 178,
  aux_sym_block_fenced_repeat1 = 179,
  aux_sym_thunk_body_repeat1 = 180,
  aux_sym_thunk_body_repeat2 = 181,
  aux_sym_params_repeat1 = 182,
  aux_sym_flow_body_repeat1 = 183,
  aux_sym_flow_body_tail_repeat1 = 184,
  aux_sym_flow_body_tail_repeat2 = 185,
  aux_sym_flow_case_body_repeat1 = 186,
  aux_sym_flow_nested_body_repeat1 = 187,
  aux_sym_flow_call_list_repeat1 = 188,
  aux_sym_flow_step_args_repeat1 = 189,
  aux_sym_directive_csv_repeat1 = 190,
  aux_sym_message_section_repeat1 = 191,
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
  [anon_sym_map] = "map",
  [anon_sym_fold] = "fold",
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
  [sym_flow_body_tail] = "flow_body_tail",
  [sym_flow_body_statement] = "flow_body_statement",
  [sym_flow_entry] = "flow_entry",
  [sym_flow_transform_step] = "step",
  [sym_flow_case_step] = "step",
  [sym_flow_case_body] = "flow_case_body",
  [sym_flow_case_arm] = "flow_case_arm",
  [sym_flow_else_arm] = "flow_else_arm",
  [sym_flow_repeat_until] = "step",
  [sym_flow_nested_body] = "flow_nested_body",
  [sym_flow_nested_statement] = "flow_nested_statement",
  [sym_flow_inline_body] = "flow_inline_body",
  [sym_flow_call_list] = "flow_call_list",
  [sym_flow_step_args] = "flow_step_args",
  [sym_flow_do_prefix] = "flow_do_prefix",
  [sym_flow_arg] = "flow_arg",
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
  [aux_sym_flow_body_tail_repeat1] = "flow_body_tail_repeat1",
  [aux_sym_flow_body_tail_repeat2] = "flow_body_tail_repeat2",
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
  [anon_sym_map] = anon_sym_map,
  [anon_sym_fold] = anon_sym_fold,
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
  [sym_flow_body_tail] = sym_flow_body_tail,
  [sym_flow_body_statement] = sym_flow_body_statement,
  [sym_flow_entry] = sym_flow_entry,
  [sym_flow_transform_step] = sym_flow_transform_step,
  [sym_flow_case_step] = sym_flow_transform_step,
  [sym_flow_case_body] = sym_flow_case_body,
  [sym_flow_case_arm] = sym_flow_case_arm,
  [sym_flow_else_arm] = sym_flow_else_arm,
  [sym_flow_repeat_until] = sym_flow_transform_step,
  [sym_flow_nested_body] = sym_flow_nested_body,
  [sym_flow_nested_statement] = sym_flow_nested_statement,
  [sym_flow_inline_body] = sym_flow_inline_body,
  [sym_flow_call_list] = sym_flow_call_list,
  [sym_flow_step_args] = sym_flow_step_args,
  [sym_flow_do_prefix] = sym_flow_do_prefix,
  [sym_flow_arg] = sym_flow_arg,
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
  [aux_sym_flow_body_tail_repeat1] = aux_sym_flow_body_tail_repeat1,
  [aux_sym_flow_body_tail_repeat2] = aux_sym_flow_body_tail_repeat2,
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
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fold] = {
    .visible = true,
    .named = false,
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
  [sym_flow_transform_step] = {
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
  [sym_flow_nested_statement] = {
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
  [aux_sym_flow_body_tail_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_body_tail_repeat2] = {
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
  [54] = {.index = 134, .length = 1},
  [55] = {.index = 135, .length = 2},
  [56] = {.index = 137, .length = 1},
  [57] = {.index = 138, .length = 2},
  [58] = {.index = 140, .length = 2},
  [59] = {.index = 142, .length = 2},
  [60] = {.index = 144, .length = 2},
  [61] = {.index = 146, .length = 7},
  [62] = {.index = 153, .length = 1},
  [63] = {.index = 154, .length = 4},
  [64] = {.index = 158, .length = 4},
  [65] = {.index = 162, .length = 2},
  [66] = {.index = 164, .length = 2},
  [67] = {.index = 166, .length = 3},
  [68] = {.index = 169, .length = 3},
  [69] = {.index = 172, .length = 2},
  [70] = {.index = 174, .length = 1},
  [71] = {.index = 175, .length = 3},
  [72] = {.index = 178, .length = 3},
  [73] = {.index = 181, .length = 3},
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
    {field_else, 1},
  [154] =
    {field_colon, 2},
    {field_condition, 4},
    {field_keyword, 0},
    {field_modifier, 1},
  [158] =
    {field_colon, 2},
    {field_condition, 3},
    {field_keyword, 0},
    {field_modifier, 1},
  [162] =
    {field_target, 1},
    {field_target, 2, .inherited = true},
  [164] =
    {field_target, 0, .inherited = true},
    {field_target, 1, .inherited = true},
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
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [178] =
    {field_body, 3},
    {field_colon, 1},
    {field_condition, 0},
  [181] =
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
  [51] = 50,
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 52,
  [56] = 46,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 47,
  [67] = 67,
  [68] = 68,
  [69] = 23,
  [70] = 26,
  [71] = 27,
  [72] = 28,
  [73] = 52,
  [74] = 49,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 23,
  [81] = 26,
  [82] = 27,
  [83] = 28,
  [84] = 84,
  [85] = 85,
  [86] = 29,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 88,
  [92] = 92,
  [93] = 40,
  [94] = 94,
  [95] = 94,
  [96] = 94,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 41,
  [101] = 98,
  [102] = 97,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 40,
  [108] = 42,
  [109] = 49,
  [110] = 47,
  [111] = 48,
  [112] = 46,
  [113] = 113,
  [114] = 41,
  [115] = 42,
  [116] = 116,
  [117] = 40,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 97,
  [123] = 123,
  [124] = 98,
  [125] = 125,
  [126] = 126,
  [127] = 40,
  [128] = 128,
  [129] = 54,
  [130] = 46,
  [131] = 49,
  [132] = 47,
  [133] = 133,
  [134] = 134,
  [135] = 52,
  [136] = 136,
  [137] = 137,
  [138] = 49,
  [139] = 123,
  [140] = 133,
  [141] = 52,
  [142] = 54,
  [143] = 143,
  [144] = 137,
  [145] = 145,
  [146] = 47,
  [147] = 128,
  [148] = 148,
  [149] = 121,
  [150] = 118,
  [151] = 46,
  [152] = 152,
  [153] = 119,
  [154] = 126,
  [155] = 155,
  [156] = 156,
  [157] = 54,
  [158] = 46,
  [159] = 47,
  [160] = 49,
  [161] = 52,
  [162] = 162,
  [163] = 52,
  [164] = 47,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 47,
  [169] = 59,
  [170] = 62,
  [171] = 60,
  [172] = 75,
  [173] = 173,
  [174] = 77,
  [175] = 47,
  [176] = 78,
  [177] = 54,
  [178] = 178,
  [179] = 79,
  [180] = 65,
  [181] = 61,
  [182] = 63,
  [183] = 64,
  [184] = 52,
  [185] = 47,
  [186] = 46,
  [187] = 49,
  [188] = 46,
  [189] = 49,
  [190] = 52,
  [191] = 68,
  [192] = 57,
  [193] = 52,
  [194] = 46,
  [195] = 76,
  [196] = 49,
  [197] = 58,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 121,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 118,
  [213] = 119,
  [214] = 126,
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
  [228] = 123,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
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
  [255] = 46,
  [256] = 49,
  [257] = 47,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 52,
  [262] = 262,
  [263] = 262,
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
  [277] = 267,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 279,
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
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 298,
  [304] = 304,
  [305] = 296,
  [306] = 295,
  [307] = 307,
  [308] = 304,
  [309] = 298,
  [310] = 295,
  [311] = 304,
  [312] = 296,
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
  [323] = 320,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 62,
  [331] = 79,
  [332] = 61,
  [333] = 63,
  [334] = 64,
  [335] = 335,
  [336] = 52,
  [337] = 47,
  [338] = 46,
  [339] = 49,
  [340] = 328,
  [341] = 328,
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
  [358] = 354,
  [359] = 359,
  [360] = 352,
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
  [375] = 375,
  [376] = 356,
  [377] = 47,
  [378] = 46,
  [379] = 49,
  [380] = 380,
  [381] = 381,
  [382] = 46,
  [383] = 49,
  [384] = 47,
  [385] = 46,
  [386] = 49,
  [387] = 47,
  [388] = 363,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 361,
  [394] = 367,
  [395] = 395,
  [396] = 396,
  [397] = 373,
  [398] = 389,
  [399] = 392,
  [400] = 400,
  [401] = 401,
  [402] = 353,
  [403] = 354,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 375,
  [411] = 405,
  [412] = 412,
  [413] = 375,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 47,
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
  [430] = 47,
  [431] = 431,
  [432] = 432,
  [433] = 46,
  [434] = 49,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 432,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
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
  [464] = 464,
  [465] = 465,
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
  [477] = 446,
  [478] = 460,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 446,
  [488] = 488,
  [489] = 446,
  [490] = 460,
  [491] = 446,
  [492] = 492,
  [493] = 446,
  [494] = 460,
  [495] = 446,
  [496] = 460,
  [497] = 446,
  [498] = 446,
  [499] = 446,
  [500] = 446,
  [501] = 446,
  [502] = 446,
  [503] = 446,
  [504] = 446,
  [505] = 446,
  [506] = 506,
  [507] = 463,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 511,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 511,
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
  [537] = 46,
  [538] = 49,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 47,
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
  [555] = 529,
  [556] = 534,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 549,
  [561] = 552,
  [562] = 562,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 223,
        '\r', 1,
        '#', 227,
        '(', 381,
        ')', 382,
        '+', 34,
        ',', 383,
        '-', 28,
        ':', 379,
        '=', 330,
        '?', 377,
        'B', 407,
        'J', 410,
        'N', 413,
        'P', 395,
        'T', 398,
        '[', 36,
        '`', 38,
        'a', 168,
        'c', 43,
        'd', 70,
        'e', 132,
        'f', 102,
        'g', 71,
        'h', 44,
        'i', 140,
        'm', 40,
        'n', 152,
        'p', 47,
        'r', 50,
        's', 72,
        't', 97,
        'u', 136,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(415);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(473);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 223,
        '\f', 238,
        '\r', 1,
        '#', 16,
        'a', 299,
        'c', 245,
        'd', 288,
        'e', 281,
        'f', 269,
        'g', 261,
        'm', 243,
        'p', 249,
        'r', 246,
        'u', 283,
        '\t', 239,
        ' ', 239,
      );
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 223,
        '\r', 1,
        '#', 227,
        '`', 319,
        'd', 426,
        'n', 446,
        '\t', 315,
        '\f', 315,
        ' ', 315,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(316);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == ')') ADVANCE(382);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 223,
        '\r', 1,
        '#', 16,
        'a', 299,
        'c', 245,
        'd', 288,
        'e', 281,
        'f', 269,
        'g', 261,
        'm', 243,
        'p', 249,
        'r', 246,
        'u', 283,
        '\t', 240,
        '\f', 240,
        ' ', 240,
      );
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 223,
        '\r', 1,
        '#', 16,
        'a', 180,
        'c', 42,
        'd', 146,
        'f', 103,
        'g', 71,
        'h', 44,
        'm', 41,
        'p', 49,
        'r', 50,
        's', 90,
        't', 155,
        'u', 142,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(612);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(613);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(226);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(225);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(224);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(234);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\f') SKIP(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(483);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead == '>') ADVANCE(378);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(32);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(378);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(233);
      END_STATE();
    case 37:
      if (lookahead == '`') ADVANCE(384);
      END_STATE();
    case 38:
      if (lookahead == '`') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(68);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'k') ADVANCE(105);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'k') ADVANCE(111);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == 'k') ADVANCE(367);
      END_STATE();
    case 113:
      if (lookahead == 'k') ADVANCE(367);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 114:
      if (lookahead == 'k') ADVANCE(370);
      END_STATE();
    case 115:
      if (lookahead == 'k') ADVANCE(361);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(371);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 202:
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 203:
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 204:
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 205:
      if (lookahead == 'w') ADVANCE(363);
      END_STATE();
    case 206:
      if (lookahead == 'x') ADVANCE(190);
      END_STATE();
    case 207:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 208:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 209:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 210:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 211:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(321);
      END_STATE();
    case 212:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(212);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 213:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(387);
      END_STATE();
    case 214:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\f') SKIP(214);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'h') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(470);
      END_STATE();
    case 215:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\f') SKIP(215);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(471);
      END_STATE();
    case 216:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\f') SKIP(216);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(472);
      END_STATE();
    case 217:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\f') SKIP(217);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == 'f') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'p') ADVANCE(450);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(474);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 218:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\f') SKIP(218);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(475);
      END_STATE();
    case 219:
      if (eof) ADVANCE(222);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\f') SKIP(219);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(476);
      END_STATE();
    case 220:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 223,
        '\r', 1,
        '#', 15,
        'a', 180,
        'c', 43,
        'd', 146,
        'f', 102,
        'g', 71,
        'i', 140,
        'm', 39,
        'p', 48,
        'r', 51,
        's', 89,
        't', 96,
        'u', 143,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(415);
      END_STATE();
    case 221:
      if (eof) ADVANCE(222);
      ADVANCE_MAP(
        '\n', 223,
        '\r', 1,
        '#', 15,
        'c', 445,
        'f', 435,
        'i', 441,
        'p', 450,
        's', 421,
        't', 429,
        'u', 452,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(221);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_program_doc_comment);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_do);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_flow_condition);
      ADVANCE_MAP(
        '\n', 223,
        '\f', 238,
        '\r', 1,
        '#', 16,
        'a', 299,
        'c', 245,
        'd', 288,
        'e', 281,
        'f', 269,
        'g', 261,
        'm', 243,
        'p', 249,
        'r', 246,
        'u', 283,
        '\t', 239,
        ' ', 239,
      );
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_flow_condition);
      ADVANCE_MAP(
        '\n', 223,
        '\f', 239,
        '\r', 1,
        '#', 478,
        'a', 300,
        'c', 247,
        'd', 287,
        'e', 282,
        'f', 270,
        'g', 263,
        'm', 244,
        'p', 251,
        'r', 248,
        'u', 284,
        '\t', 239,
        ' ', 239,
      );
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(313);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_flow_condition);
      ADVANCE_MAP(
        '\n', 223,
        '\r', 1,
        '#', 16,
        'a', 299,
        'c', 245,
        'd', 288,
        'e', 281,
        'f', 269,
        'g', 261,
        'm', 243,
        'p', 249,
        'r', 246,
        'u', 283,
        '\t', 240,
        '\f', 240,
        ' ', 240,
      );
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(285);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(370);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'k') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'p') ADVANCE(371);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'p') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_flow_condition);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      ADVANCE_MAP(
        '\n', 223,
        '\r', 1,
        '#', 227,
        '`', 319,
        'd', 426,
        'n', 446,
        '\t', 315,
        '\f', 315,
        ' ', 315,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(316);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(321);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_rank);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_flow_case_keyword);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_flow_else_keyword);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_colon);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ':') ADVANCE(390);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(391);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(392);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(389);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(387);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_bare_value);
      if (lookahead == 'o') ADVANCE(237);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'k') ADVANCE(431);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 's') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'w') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 223,
        '\f', 470,
        '\r', 1,
        '#', 477,
        'a', 586,
        'c', 566,
        'f', 544,
        'h', 485,
        'i', 559,
        'm', 562,
        'p', 489,
        'r', 513,
        's', 514,
        't', 524,
        'u', 582,
        '\t', 470,
        ' ', 470,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 223,
        '\f', 471,
        '\r', 1,
        '#', 477,
        'a', 586,
        'c', 566,
        'f', 544,
        'i', 559,
        'p', 490,
        's', 520,
        't', 525,
        'u', 582,
        '\t', 471,
        ' ', 471,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 223,
        '\f', 472,
        '\r', 1,
        '#', 477,
        'a', 585,
        'c', 492,
        'd', 561,
        'f', 532,
        'g', 519,
        'i', 559,
        'm', 484,
        'p', 490,
        'r', 487,
        's', 520,
        't', 526,
        'u', 557,
        '\t', 472,
        ' ', 472,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 223,
        '\f', 473,
        '\r', 1,
        '#', 478,
        'a', 585,
        'c', 493,
        'd', 561,
        'f', 533,
        'g', 519,
        'm', 484,
        'p', 491,
        'r', 487,
        'u', 558,
        '\t', 473,
        ' ', 473,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 223,
        '\f', 474,
        '\r', 1,
        '#', 477,
        'c', 445,
        'f', 435,
        'i', 441,
        'p', 450,
        's', 421,
        't', 429,
        'u', 452,
        '\t', 474,
        ' ', 474,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 223,
        '\f', 475,
        '\r', 1,
        '#', 477,
        'c', 566,
        'f', 544,
        'i', 559,
        'p', 576,
        's', 520,
        't', 526,
        'u', 589,
        '\t', 475,
        ' ', 475,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 223,
        '\f', 476,
        '\r', 1,
        '#', 477,
        'a', 586,
        'c', 566,
        'f', 544,
        'i', 559,
        'p', 576,
        's', 520,
        't', 525,
        'u', 582,
        '\t', 476,
        ' ', 476,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(480);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(481);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '!') ADVANCE(482);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 's') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == 'k') ADVANCE(529);
      if (lookahead == 't') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'k') ADVANCE(535);
      if (lookahead == 't') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(603);
      if (lookahead == 'o') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(603);
      if (lookahead == 'o') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == 's') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == '`') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(612);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(613);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(618);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(618);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(618);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(618);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(618);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 220},
  [2] = {.lex_state = 214},
  [3] = {.lex_state = 214},
  [4] = {.lex_state = 214},
  [5] = {.lex_state = 214},
  [6] = {.lex_state = 214},
  [7] = {.lex_state = 214},
  [8] = {.lex_state = 214},
  [9] = {.lex_state = 214},
  [10] = {.lex_state = 214},
  [11] = {.lex_state = 214},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 220},
  [21] = {.lex_state = 220},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 220},
  [24] = {.lex_state = 220},
  [25] = {.lex_state = 220},
  [26] = {.lex_state = 220},
  [27] = {.lex_state = 220},
  [28] = {.lex_state = 220},
  [29] = {.lex_state = 220},
  [30] = {.lex_state = 220},
  [31] = {.lex_state = 220},
  [32] = {.lex_state = 220},
  [33] = {.lex_state = 215},
  [34] = {.lex_state = 215},
  [35] = {.lex_state = 215},
  [36] = {.lex_state = 215},
  [37] = {.lex_state = 215},
  [38] = {.lex_state = 215},
  [39] = {.lex_state = 214},
  [40] = {.lex_state = 216},
  [41] = {.lex_state = 216},
  [42] = {.lex_state = 216},
  [43] = {.lex_state = 219},
  [44] = {.lex_state = 219},
  [45] = {.lex_state = 219},
  [46] = {.lex_state = 214},
  [47] = {.lex_state = 214},
  [48] = {.lex_state = 214},
  [49] = {.lex_state = 214},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 214},
  [53] = {.lex_state = 216},
  [54] = {.lex_state = 216},
  [55] = {.lex_state = 216},
  [56] = {.lex_state = 220},
  [57] = {.lex_state = 220},
  [58] = {.lex_state = 220},
  [59] = {.lex_state = 220},
  [60] = {.lex_state = 220},
  [61] = {.lex_state = 220},
  [62] = {.lex_state = 220},
  [63] = {.lex_state = 220},
  [64] = {.lex_state = 220},
  [65] = {.lex_state = 220},
  [66] = {.lex_state = 220},
  [67] = {.lex_state = 220},
  [68] = {.lex_state = 220},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 220},
  [74] = {.lex_state = 220},
  [75] = {.lex_state = 220},
  [76] = {.lex_state = 220},
  [77] = {.lex_state = 220},
  [78] = {.lex_state = 220},
  [79] = {.lex_state = 220},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 215},
  [85] = {.lex_state = 215},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 215},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 215},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 215},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 215},
  [98] = {.lex_state = 215},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 219},
  [101] = {.lex_state = 219},
  [102] = {.lex_state = 219},
  [103] = {.lex_state = 217},
  [104] = {.lex_state = 215},
  [105] = {.lex_state = 217},
  [106] = {.lex_state = 217},
  [107] = {.lex_state = 219},
  [108] = {.lex_state = 219},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 221},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 221},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 215},
  [119] = {.lex_state = 215},
  [120] = {.lex_state = 215},
  [121] = {.lex_state = 215},
  [122] = {.lex_state = 218},
  [123] = {.lex_state = 215},
  [124] = {.lex_state = 218},
  [125] = {.lex_state = 215},
  [126] = {.lex_state = 215},
  [127] = {.lex_state = 218},
  [128] = {.lex_state = 215},
  [129] = {.lex_state = 215},
  [130] = {.lex_state = 215},
  [131] = {.lex_state = 215},
  [132] = {.lex_state = 215},
  [133] = {.lex_state = 215},
  [134] = {.lex_state = 215},
  [135] = {.lex_state = 215},
  [136] = {.lex_state = 215},
  [137] = {.lex_state = 215},
  [138] = {.lex_state = 219},
  [139] = {.lex_state = 219},
  [140] = {.lex_state = 219},
  [141] = {.lex_state = 219},
  [142] = {.lex_state = 219},
  [143] = {.lex_state = 219},
  [144] = {.lex_state = 219},
  [145] = {.lex_state = 219},
  [146] = {.lex_state = 219},
  [147] = {.lex_state = 219},
  [148] = {.lex_state = 219},
  [149] = {.lex_state = 219},
  [150] = {.lex_state = 219},
  [151] = {.lex_state = 219},
  [152] = {.lex_state = 219},
  [153] = {.lex_state = 219},
  [154] = {.lex_state = 219},
  [155] = {.lex_state = 217},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 217},
  [159] = {.lex_state = 217},
  [160] = {.lex_state = 217},
  [161] = {.lex_state = 217},
  [162] = {.lex_state = 217},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 221},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 221},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 218},
  [178] = {.lex_state = 221},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 218},
  [186] = {.lex_state = 221},
  [187] = {.lex_state = 221},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 221},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 218},
  [194] = {.lex_state = 218},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 218},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 220},
  [199] = {.lex_state = 220},
  [200] = {.lex_state = 220},
  [201] = {.lex_state = 220},
  [202] = {.lex_state = 220},
  [203] = {.lex_state = 220},
  [204] = {.lex_state = 220},
  [205] = {.lex_state = 220},
  [206] = {.lex_state = 220},
  [207] = {.lex_state = 220},
  [208] = {.lex_state = 220},
  [209] = {.lex_state = 220},
  [210] = {.lex_state = 220},
  [211] = {.lex_state = 220},
  [212] = {.lex_state = 220},
  [213] = {.lex_state = 220},
  [214] = {.lex_state = 220},
  [215] = {.lex_state = 220},
  [216] = {.lex_state = 220},
  [217] = {.lex_state = 220},
  [218] = {.lex_state = 220},
  [219] = {.lex_state = 220},
  [220] = {.lex_state = 220},
  [221] = {.lex_state = 220},
  [222] = {.lex_state = 220},
  [223] = {.lex_state = 220},
  [224] = {.lex_state = 220},
  [225] = {.lex_state = 220},
  [226] = {.lex_state = 220},
  [227] = {.lex_state = 220},
  [228] = {.lex_state = 220},
  [229] = {.lex_state = 220},
  [230] = {.lex_state = 220},
  [231] = {.lex_state = 220},
  [232] = {.lex_state = 220},
  [233] = {.lex_state = 220},
  [234] = {.lex_state = 220},
  [235] = {.lex_state = 220},
  [236] = {.lex_state = 220},
  [237] = {.lex_state = 220},
  [238] = {.lex_state = 220},
  [239] = {.lex_state = 220},
  [240] = {.lex_state = 220},
  [241] = {.lex_state = 220},
  [242] = {.lex_state = 220},
  [243] = {.lex_state = 220},
  [244] = {.lex_state = 220},
  [245] = {.lex_state = 220},
  [246] = {.lex_state = 220},
  [247] = {.lex_state = 220},
  [248] = {.lex_state = 220},
  [249] = {.lex_state = 220},
  [250] = {.lex_state = 220},
  [251] = {.lex_state = 220},
  [252] = {.lex_state = 220},
  [253] = {.lex_state = 220},
  [254] = {.lex_state = 220},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 220},
  [259] = {.lex_state = 220},
  [260] = {.lex_state = 220},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 7},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 12},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 13},
  [296] = {.lex_state = 13},
  [297] = {.lex_state = 13},
  [298] = {.lex_state = 13},
  [299] = {.lex_state = 13},
  [300] = {.lex_state = 13},
  [301] = {.lex_state = 13},
  [302] = {.lex_state = 13},
  [303] = {.lex_state = 13},
  [304] = {.lex_state = 13},
  [305] = {.lex_state = 13},
  [306] = {.lex_state = 13},
  [307] = {.lex_state = 13},
  [308] = {.lex_state = 13},
  [309] = {.lex_state = 13},
  [310] = {.lex_state = 13},
  [311] = {.lex_state = 13},
  [312] = {.lex_state = 13},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 13},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 26},
  [322] = {.lex_state = 13},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 26},
  [325] = {.lex_state = 26},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 10},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 220},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 10},
  [333] = {.lex_state = 10},
  [334] = {.lex_state = 10},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 10},
  [337] = {.lex_state = 10},
  [338] = {.lex_state = 10},
  [339] = {.lex_state = 10},
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
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 32},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 7},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 7},
  [378] = {.lex_state = 7},
  [379] = {.lex_state = 7},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 12},
  [383] = {.lex_state = 12},
  [384] = {.lex_state = 12},
  [385] = {.lex_state = 11},
  [386] = {.lex_state = 11},
  [387] = {.lex_state = 11},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 32},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 68},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 7},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 26},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 7},
  [422] = {.lex_state = 13},
  [423] = {.lex_state = 26},
  [424] = {.lex_state = 7},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 13},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 13},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 13},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 25},
  [433] = {.lex_state = 13},
  [434] = {.lex_state = 13},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 13},
  [437] = {.lex_state = 210},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 13},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 13},
  [443] = {.lex_state = 211},
  [444] = {.lex_state = 25},
  [445] = {.lex_state = 211},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 7},
  [448] = {.lex_state = 7},
  [449] = {.lex_state = 220},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 7},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 7},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 7},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 212},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 212},
  [466] = {.lex_state = 212},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 32},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 7},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 210},
  [486] = {.lex_state = 212},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 212},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 212},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 7},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 7},
  [537] = {.lex_state = 25},
  [538] = {.lex_state = 25},
  [539] = {.lex_state = 7},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 25},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 211},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 212},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 212},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 7},
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
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
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
    [sym_source_file] = STATE(533),
    [sym_item] = STATE(30),
    [sym_newline] = STATE(73),
    [sym_blank_line] = STATE(30),
    [sym_use] = STATE(240),
    [sym_struct] = STATE(240),
    [sym_psyche] = STATE(240),
    [sym_skill] = STATE(240),
    [sym_service] = STATE(240),
    [sym_prompt] = STATE(240),
    [sym_instruct] = STATE(240),
    [sym_context] = STATE(240),
    [sym_thunk] = STATE(240),
    [sym_flow] = STATE(240),
    [sym_psyche_keyword] = STATE(448),
    [sym_skill_keyword] = STATE(457),
    [sym_service_keyword] = STATE(459),
    [sym_prompt_keyword] = STATE(461),
    [sym_context_keyword] = STATE(421),
    [sym_instruct_keyword] = STATE(424),
    [aux_sym_source_file_repeat1] = STATE(30),
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
    STATE(38), 1,
      sym_instruction_section,
    STATE(52), 1,
      sym_newline,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(205), 1,
      sym_thunk_tail,
    STATE(238), 1,
      sym_message_section,
    STATE(241), 1,
      sym_pass_statement,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(39), 3,
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
    STATE(37), 1,
      sym_instruction_section,
    STATE(52), 1,
      sym_newline,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(238), 1,
      sym_message_section,
    STATE(241), 1,
      sym_pass_statement,
    STATE(253), 1,
      sym_thunk_tail,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(2), 3,
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
    STATE(3), 1,
      sym_directive,
    STATE(36), 1,
      sym_instruction_section,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(238), 1,
      sym_message_section,
    STATE(239), 1,
      sym_thunk_tail,
    STATE(241), 1,
      sym_pass_statement,
    STATE(258), 1,
      sym_thunk_body,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
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
    STATE(3), 1,
      sym_directive,
    STATE(36), 1,
      sym_instruction_section,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(237), 1,
      sym_thunk_body,
    STATE(238), 1,
      sym_message_section,
    STATE(239), 1,
      sym_thunk_tail,
    STATE(241), 1,
      sym_pass_statement,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
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
    STATE(3), 1,
      sym_directive,
    STATE(36), 1,
      sym_instruction_section,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(238), 1,
      sym_message_section,
    STATE(239), 1,
      sym_thunk_tail,
    STATE(241), 1,
      sym_pass_statement,
    STATE(259), 1,
      sym_thunk_body,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
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
    STATE(3), 1,
      sym_directive,
    STATE(36), 1,
      sym_instruction_section,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(203), 1,
      sym_thunk_body,
    STATE(238), 1,
      sym_message_section,
    STATE(239), 1,
      sym_thunk_tail,
    STATE(241), 1,
      sym_pass_statement,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
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
    STATE(3), 1,
      sym_directive,
    STATE(36), 1,
      sym_instruction_section,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(207), 1,
      sym_thunk_body,
    STATE(238), 1,
      sym_message_section,
    STATE(239), 1,
      sym_thunk_tail,
    STATE(241), 1,
      sym_pass_statement,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
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
    STATE(3), 1,
      sym_directive,
    STATE(36), 1,
      sym_instruction_section,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(217), 1,
      sym_thunk_body,
    STATE(238), 1,
      sym_message_section,
    STATE(239), 1,
      sym_thunk_tail,
    STATE(241), 1,
      sym_pass_statement,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
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
    STATE(3), 1,
      sym_directive,
    STATE(36), 1,
      sym_instruction_section,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(218), 1,
      sym_thunk_body,
    STATE(238), 1,
      sym_message_section,
    STATE(239), 1,
      sym_thunk_tail,
    STATE(241), 1,
      sym_pass_statement,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
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
    STATE(3), 1,
      sym_directive,
    STATE(36), 1,
      sym_instruction_section,
    STATE(85), 1,
      sym_instruct_block,
    STATE(87), 1,
      sym_context_block,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(231), 1,
      sym_thunk_body,
    STATE(238), 1,
      sym_message_section,
    STATE(239), 1,
      sym_thunk_tail,
    STATE(241), 1,
      sym_pass_statement,
    STATE(356), 1,
      sym_directive_key,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
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
  [982] = 19,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(208), 1,
      sym_flow_body,
    STATE(243), 1,
      sym_flow_body_tail,
    STATE(244), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(376), 1,
      sym_directive_key,
    STATE(22), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(97), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1058] = 19,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(201), 1,
      sym_flow_body,
    STATE(243), 1,
      sym_flow_body_tail,
    STATE(244), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(376), 1,
      sym_directive_key,
    STATE(22), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(97), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1134] = 19,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(242), 1,
      sym_flow_body,
    STATE(243), 1,
      sym_flow_body_tail,
    STATE(244), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(376), 1,
      sym_directive_key,
    STATE(22), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(97), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1210] = 19,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(223), 1,
      sym_flow_body,
    STATE(243), 1,
      sym_flow_body_tail,
    STATE(244), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(376), 1,
      sym_directive_key,
    STATE(22), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(97), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1286] = 19,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(224), 1,
      sym_flow_body,
    STATE(243), 1,
      sym_flow_body_tail,
    STATE(244), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(376), 1,
      sym_directive_key,
    STATE(22), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(97), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1362] = 19,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(210), 1,
      sym_flow_body,
    STATE(243), 1,
      sym_flow_body_tail,
    STATE(244), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(376), 1,
      sym_directive_key,
    STATE(22), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(97), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1438] = 19,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(232), 1,
      sym_flow_body,
    STATE(243), 1,
      sym_flow_body_tail,
    STATE(244), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(376), 1,
      sym_directive_key,
    STATE(22), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(97), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1514] = 19,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(200), 1,
      sym_flow_body,
    STATE(243), 1,
      sym_flow_body_tail,
    STATE(244), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(376), 1,
      sym_directive_key,
    STATE(22), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(97), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1590] = 13,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(67), 1,
      sym_flow_entry,
    STATE(73), 1,
      sym_newline,
    STATE(209), 1,
      sym_pass_statement,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(107), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(32), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(105), 12,
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
  [1653] = 13,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(67), 1,
      sym_flow_entry,
    STATE(73), 1,
      sym_newline,
    STATE(209), 1,
      sym_pass_statement,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(109), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(24), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(105), 12,
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
  [1716] = 18,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(25), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(199), 1,
      sym_flow_body_tail,
    STATE(244), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(376), 1,
      sym_directive_key,
    STATE(90), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(99), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(97), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [1789] = 13,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(61), 1,
      sym_pass_statement,
    STATE(73), 1,
      sym_newline,
    STATE(77), 1,
      sym_flow_entry,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(113), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(26), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(111), 12,
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
  [1852] = 13,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(67), 1,
      sym_flow_entry,
    STATE(73), 1,
      sym_newline,
    STATE(222), 1,
      sym_pass_statement,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(107), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(32), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(115), 12,
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
  [1915] = 13,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(67), 1,
      sym_flow_entry,
    STATE(73), 1,
      sym_newline,
    STATE(236), 1,
      sym_pass_statement,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(119), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(20), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(117), 12,
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
  [1978] = 13,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(63), 1,
      sym_pass_statement,
    STATE(73), 1,
      sym_newline,
    STATE(77), 1,
      sym_flow_entry,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(123), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(29), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(121), 12,
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
  [2041] = 13,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(63), 1,
      sym_pass_statement,
    STATE(73), 1,
      sym_newline,
    STATE(77), 1,
      sym_flow_entry,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(125), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(28), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(121), 12,
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
  [2104] = 13,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    STATE(64), 1,
      sym_pass_statement,
    STATE(73), 1,
      sym_newline,
    STATE(77), 1,
      sym_flow_entry,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(123), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(29), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
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
  [2167] = 11,
    ACTIONS(131), 1,
      aux_sym_newline_token1,
    ACTIONS(140), 1,
      sym_flow_case_keyword,
    ACTIONS(143), 1,
      sym_flow_repeat_keyword,
    STATE(73), 1,
      sym_newline,
    STATE(77), 1,
      sym_flow_entry,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(134), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(29), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(137), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(129), 13,
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
  [2225] = 23,
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
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      sym_program_doc_comment,
    STATE(73), 1,
      sym_newline,
    STATE(421), 1,
      sym_context_keyword,
    STATE(424), 1,
      sym_instruct_keyword,
    STATE(448), 1,
      sym_psyche_keyword,
    STATE(457), 1,
      sym_skill_keyword,
    STATE(459), 1,
      sym_service_keyword,
    STATE(461), 1,
      sym_prompt_keyword,
    ACTIONS(150), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(31), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(240), 10,
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
  [2307] = 23,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym_newline_token1,
    ACTIONS(157), 1,
      sym_program_doc_comment,
    ACTIONS(163), 1,
      anon_sym_context,
    ACTIONS(166), 1,
      anon_sym_instruct,
    ACTIONS(169), 1,
      sym_use_keyword,
    ACTIONS(172), 1,
      sym_struct_keyword,
    ACTIONS(175), 1,
      anon_sym_psyche,
    ACTIONS(178), 1,
      anon_sym_skill,
    ACTIONS(181), 1,
      anon_sym_service,
    ACTIONS(184), 1,
      anon_sym_prompt,
    ACTIONS(187), 1,
      sym_thunk_keyword,
    ACTIONS(190), 1,
      sym_flow_keyword,
    STATE(73), 1,
      sym_newline,
    STATE(421), 1,
      sym_context_keyword,
    STATE(424), 1,
      sym_instruct_keyword,
    STATE(448), 1,
      sym_psyche_keyword,
    STATE(457), 1,
      sym_skill_keyword,
    STATE(459), 1,
      sym_service_keyword,
    STATE(461), 1,
      sym_prompt_keyword,
    ACTIONS(160), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(31), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(240), 10,
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
  [2389] = 11,
    ACTIONS(195), 1,
      aux_sym_newline_token1,
    ACTIONS(204), 1,
      sym_flow_case_keyword,
    ACTIONS(207), 1,
      sym_flow_repeat_keyword,
    STATE(67), 1,
      sym_flow_entry,
    STATE(73), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(198), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(32), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(201), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
    ACTIONS(193), 13,
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
  [2447] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(216), 1,
      sym_comment_line,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(135), 1,
      sym_newline,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(206), 1,
      sym_thunk_tail,
    STATE(238), 1,
      sym_message_section,
    STATE(241), 1,
      sym_pass_statement,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(104), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(214), 12,
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
  [2517] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(216), 1,
      sym_comment_line,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(135), 1,
      sym_newline,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(215), 1,
      sym_thunk_tail,
    STATE(238), 1,
      sym_message_section,
    STATE(241), 1,
      sym_pass_statement,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(104), 2,
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
  [2587] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(216), 1,
      sym_comment_line,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(135), 1,
      sym_newline,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(230), 1,
      sym_thunk_tail,
    STATE(238), 1,
      sym_message_section,
    STATE(241), 1,
      sym_pass_statement,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(44), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(104), 2,
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
  [2657] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      sym_comment_line,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(135), 1,
      sym_newline,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(238), 1,
      sym_message_section,
    STATE(241), 1,
      sym_pass_statement,
    STATE(254), 1,
      sym_thunk_tail,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(33), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(44), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(228), 12,
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
  [2727] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 1,
      sym_comment_line,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(135), 1,
      sym_newline,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(204), 1,
      sym_thunk_tail,
    STATE(238), 1,
      sym_message_section,
    STATE(241), 1,
      sym_pass_statement,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(34), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(44), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(234), 12,
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
  [2797] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      sym_comment_line,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(135), 1,
      sym_newline,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(216), 1,
      sym_thunk_tail,
    STATE(238), 1,
      sym_message_section,
    STATE(241), 1,
      sym_pass_statement,
    STATE(531), 1,
      sym_roled_message_kind,
    STATE(35), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(44), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(240), 12,
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
  [2867] = 8,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      aux_sym_newline_token1,
    ACTIONS(251), 1,
      sym_comment_line,
    STATE(52), 1,
      sym_newline,
    STATE(356), 1,
      sym_directive_key,
    STATE(39), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(254), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(249), 17,
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
  [2917] = 6,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 1,
      aux_sym_newline_token1,
    ACTIONS(264), 1,
      sym_indented_raw_text,
    STATE(55), 1,
      sym_newline,
    STATE(40), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(262), 24,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [2961] = 6,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      aux_sym_newline_token1,
    ACTIONS(273), 1,
      sym_indented_raw_text,
    STATE(55), 1,
      sym_newline,
    STATE(42), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(271), 24,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3005] = 6,
    ACTIONS(269), 1,
      aux_sym_newline_token1,
    ACTIONS(273), 1,
      sym_indented_raw_text,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_newline,
    STATE(40), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(277), 24,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3049] = 13,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 1,
      aux_sym_newline_token1,
    ACTIONS(286), 1,
      sym_comment_line,
    ACTIONS(292), 1,
      sym_indented_raw_text,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_newline,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(531), 1,
      sym_roled_message_kind,
    ACTIONS(289), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(43), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(284), 12,
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
  [3105] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      aux_sym_newline_token1,
    ACTIONS(301), 1,
      sym_comment_line,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_newline,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(531), 1,
      sym_roled_message_kind,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(45), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(299), 12,
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
  [3161] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(297), 1,
      aux_sym_newline_token1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      sym_comment_line,
    STATE(100), 1,
      sym_block_indented_content_line,
    STATE(141), 1,
      sym_newline,
    STATE(143), 1,
      sym_roled_message_block,
    STATE(148), 1,
      sym_unroled_message_block,
    STATE(152), 1,
      sym_block_indented_implicit,
    STATE(531), 1,
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
    ACTIONS(305), 12,
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
  [3217] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 27,
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
  [3250] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 27,
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
  [3283] = 2,
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
  [3316] = 2,
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
  [3349] = 16,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(273), 1,
      sym_indented_raw_text,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      sym_flow_case_keyword,
    ACTIONS(333), 1,
      sym_flow_repeat_keyword,
    STATE(23), 1,
      sym_flow_nested_statement,
    STATE(41), 1,
      sym_block_indented_content_line,
    STATE(77), 1,
      sym_flow_entry,
    STATE(79), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    ACTIONS(327), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(78), 2,
      sym_flow_nested_body,
      sym_block_indented_implicit,
    STATE(96), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [3410] = 16,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    ACTIONS(337), 1,
      sym_pass_keyword,
    ACTIONS(339), 1,
      sym_flow_case_keyword,
    ACTIONS(341), 1,
      sym_flow_repeat_keyword,
    ACTIONS(343), 1,
      sym_indented_raw_text,
    STATE(80), 1,
      sym_flow_nested_statement,
    STATE(114), 1,
      sym_block_indented_content_line,
    STATE(174), 1,
      sym_flow_entry,
    STATE(179), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(335), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(94), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(176), 2,
      sym_flow_nested_body,
      sym_block_indented_implicit,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [3471] = 2,
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
  [3504] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 26,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3536] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 26,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3568] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 26,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3600] = 2,
    ACTIONS(311), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(309), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3631] = 2,
    ACTIONS(355), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(353), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3662] = 2,
    ACTIONS(359), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(357), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3693] = 2,
    ACTIONS(363), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(361), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3724] = 2,
    ACTIONS(367), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(365), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3755] = 2,
    ACTIONS(369), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(121), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3786] = 2,
    ACTIONS(373), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(371), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3817] = 2,
    ACTIONS(375), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(127), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3848] = 2,
    ACTIONS(379), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(377), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3879] = 2,
    ACTIONS(383), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(381), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3910] = 2,
    ACTIONS(315), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(313), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3941] = 2,
    ACTIONS(387), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(385), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [3972] = 2,
    ACTIONS(391), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(389), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4003] = 13,
    ACTIONS(339), 1,
      sym_flow_case_keyword,
    ACTIONS(341), 1,
      sym_flow_repeat_keyword,
    ACTIONS(393), 1,
      aux_sym_newline_token1,
    ACTIONS(399), 1,
      sym_pass_keyword,
    STATE(174), 1,
      sym_flow_entry,
    STATE(184), 1,
      sym_newline,
    STATE(332), 1,
      sym_pass_statement,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(395), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(397), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    STATE(70), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4056] = 13,
    ACTIONS(339), 1,
      sym_flow_case_keyword,
    ACTIONS(341), 1,
      sym_flow_repeat_keyword,
    ACTIONS(393), 1,
      aux_sym_newline_token1,
    ACTIONS(399), 1,
      sym_pass_keyword,
    STATE(174), 1,
      sym_flow_entry,
    STATE(184), 1,
      sym_newline,
    STATE(333), 1,
      sym_pass_statement,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(369), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(401), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(86), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4109] = 13,
    ACTIONS(339), 1,
      sym_flow_case_keyword,
    ACTIONS(341), 1,
      sym_flow_repeat_keyword,
    ACTIONS(393), 1,
      aux_sym_newline_token1,
    ACTIONS(399), 1,
      sym_pass_keyword,
    STATE(174), 1,
      sym_flow_entry,
    STATE(184), 1,
      sym_newline,
    STATE(333), 1,
      sym_pass_statement,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(369), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(403), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(72), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4162] = 13,
    ACTIONS(339), 1,
      sym_flow_case_keyword,
    ACTIONS(341), 1,
      sym_flow_repeat_keyword,
    ACTIONS(393), 1,
      aux_sym_newline_token1,
    ACTIONS(399), 1,
      sym_pass_keyword,
    STATE(174), 1,
      sym_flow_entry,
    STATE(184), 1,
      sym_newline,
    STATE(334), 1,
      sym_pass_statement,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(375), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(401), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(86), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4215] = 2,
    ACTIONS(347), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(345), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4246] = 2,
    ACTIONS(323), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(321), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4277] = 2,
    ACTIONS(407), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(405), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4308] = 2,
    ACTIONS(411), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(409), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4339] = 2,
    ACTIONS(415), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(413), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4370] = 2,
    ACTIONS(419), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(417), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4401] = 2,
    ACTIONS(397), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(111), 24,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_do,
      anon_sym_context,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4432] = 13,
    ACTIONS(337), 1,
      sym_pass_keyword,
    ACTIONS(339), 1,
      sym_flow_case_keyword,
    ACTIONS(341), 1,
      sym_flow_repeat_keyword,
    ACTIONS(393), 1,
      aux_sym_newline_token1,
    STATE(174), 1,
      sym_flow_entry,
    STATE(181), 1,
      sym_pass_statement,
    STATE(184), 1,
      sym_newline,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(397), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(421), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(81), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4485] = 13,
    ACTIONS(337), 1,
      sym_pass_keyword,
    ACTIONS(339), 1,
      sym_flow_case_keyword,
    ACTIONS(341), 1,
      sym_flow_repeat_keyword,
    ACTIONS(393), 1,
      aux_sym_newline_token1,
    STATE(174), 1,
      sym_flow_entry,
    STATE(182), 1,
      sym_pass_statement,
    STATE(184), 1,
      sym_newline,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(369), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(401), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(86), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4538] = 13,
    ACTIONS(337), 1,
      sym_pass_keyword,
    ACTIONS(339), 1,
      sym_flow_case_keyword,
    ACTIONS(341), 1,
      sym_flow_repeat_keyword,
    ACTIONS(393), 1,
      aux_sym_newline_token1,
    STATE(174), 1,
      sym_flow_entry,
    STATE(182), 1,
      sym_pass_statement,
    STATE(184), 1,
      sym_newline,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(369), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(423), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(83), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4591] = 13,
    ACTIONS(337), 1,
      sym_pass_keyword,
    ACTIONS(339), 1,
      sym_flow_case_keyword,
    ACTIONS(341), 1,
      sym_flow_repeat_keyword,
    ACTIONS(393), 1,
      aux_sym_newline_token1,
    STATE(174), 1,
      sym_flow_entry,
    STATE(183), 1,
      sym_pass_statement,
    STATE(184), 1,
      sym_newline,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(375), 2,
      sym_flow_condition,
      sym_flow_else_keyword,
    ACTIONS(401), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(86), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(329), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4644] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(216), 1,
      sym_comment_line,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_newline,
    STATE(136), 1,
      sym_instruct_block,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(104), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(427), 16,
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
  [4688] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(433), 1,
      sym_comment_line,
    STATE(125), 1,
      sym_context_block,
    STATE(135), 1,
      sym_newline,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(89), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(431), 16,
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
  [4732] = 11,
    ACTIONS(435), 1,
      aux_sym_newline_token1,
    ACTIONS(446), 1,
      sym_flow_case_keyword,
    ACTIONS(449), 1,
      sym_flow_repeat_keyword,
    STATE(174), 1,
      sym_flow_entry,
    STATE(184), 1,
      sym_newline,
    STATE(394), 1,
      sym_flow_transform_keyword,
    ACTIONS(438), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(444), 3,
      sym_flow_condition,
      sym_pass_keyword,
      sym_flow_else_keyword,
    STATE(86), 3,
      sym_blank_line,
      sym_flow_nested_statement,
      aux_sym_flow_nested_body_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(441), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4780] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 1,
      sym_comment_line,
    STATE(125), 1,
      sym_instruct_block,
    STATE(135), 1,
      sym_newline,
    STATE(519), 1,
      sym_instruct_block_kind,
    STATE(84), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(431), 16,
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
  [4824] = 15,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(335), 1,
      sym_comment_line,
    ACTIONS(454), 1,
      sym_doc_comment,
    ACTIONS(456), 1,
      sym_pass_keyword,
    ACTIONS(458), 1,
      sym_flow_case_keyword,
    ACTIONS(460), 1,
      sym_flow_repeat_keyword,
    STATE(80), 1,
      sym_flow_nested_statement,
    STATE(174), 1,
      sym_flow_entry,
    STATE(179), 1,
      sym_pass_statement,
    STATE(180), 1,
      sym_flow_nested_body,
    STATE(261), 1,
      sym_newline,
    STATE(394), 1,
      sym_flow_transform_keyword,
    STATE(94), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [4880] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(216), 1,
      sym_comment_line,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_newline,
    STATE(136), 1,
      sym_context_block,
    STATE(516), 1,
      sym_context_block_kind,
    STATE(104), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(427), 16,
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
  [4924] = 5,
    ACTIONS(464), 1,
      sym_comment_line,
    STATE(376), 1,
      sym_directive_key,
    STATE(90), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(466), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(462), 13,
      aux_sym_newline_token1,
      sym_doc_comment,
      anon_sym_do,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [4960] = 15,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    ACTIONS(327), 1,
      sym_comment_line,
    ACTIONS(469), 1,
      sym_doc_comment,
    STATE(23), 1,
      sym_flow_nested_statement,
    STATE(65), 1,
      sym_flow_nested_body,
    STATE(77), 1,
      sym_flow_entry,
    STATE(79), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(96), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [5016] = 15,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(458), 1,
      sym_flow_case_keyword,
    ACTIONS(460), 1,
      sym_flow_repeat_keyword,
    ACTIONS(471), 1,
      sym_doc_comment,
    ACTIONS(473), 1,
      sym_comment_line,
    ACTIONS(475), 1,
      sym_pass_keyword,
    STATE(69), 1,
      sym_flow_nested_statement,
    STATE(174), 1,
      sym_flow_entry,
    STATE(261), 1,
      sym_newline,
    STATE(327), 1,
      sym_flow_nested_body,
    STATE(331), 1,
      sym_pass_statement,
    STATE(394), 1,
      sym_flow_transform_keyword,
    STATE(95), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [5072] = 6,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 1,
      aux_sym_newline_token1,
    ACTIONS(480), 1,
      sym_indented_raw_text,
    STATE(135), 1,
      sym_newline,
    STATE(93), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(262), 17,
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
  [5109] = 14,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(456), 1,
      sym_pass_keyword,
    ACTIONS(458), 1,
      sym_flow_case_keyword,
    ACTIONS(460), 1,
      sym_flow_repeat_keyword,
    ACTIONS(483), 1,
      sym_doc_comment,
    ACTIONS(485), 1,
      sym_comment_line,
    STATE(82), 1,
      sym_flow_nested_statement,
    STATE(174), 1,
      sym_flow_entry,
    STATE(181), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(394), 1,
      sym_flow_transform_keyword,
    STATE(167), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [5162] = 14,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(458), 1,
      sym_flow_case_keyword,
    ACTIONS(460), 1,
      sym_flow_repeat_keyword,
    ACTIONS(475), 1,
      sym_pass_keyword,
    ACTIONS(483), 1,
      sym_doc_comment,
    ACTIONS(485), 1,
      sym_comment_line,
    STATE(71), 1,
      sym_flow_nested_statement,
    STATE(174), 1,
      sym_flow_entry,
    STATE(261), 1,
      sym_newline,
    STATE(332), 1,
      sym_pass_statement,
    STATE(394), 1,
      sym_flow_transform_keyword,
    STATE(167), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(191), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [5215] = 14,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    ACTIONS(483), 1,
      sym_doc_comment,
    ACTIONS(485), 1,
      sym_comment_line,
    STATE(27), 1,
      sym_flow_nested_statement,
    STATE(61), 1,
      sym_pass_statement,
    STATE(77), 1,
      sym_flow_entry,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(167), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [5268] = 6,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 1,
      sym_indented_raw_text,
    STATE(135), 1,
      sym_newline,
    STATE(93), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(489), 17,
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
  [5305] = 6,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(491), 1,
      sym_indented_raw_text,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_newline,
    STATE(97), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(495), 17,
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
  [5342] = 14,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(99), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_case_keyword,
    ACTIONS(103), 1,
      sym_flow_repeat_keyword,
    ACTIONS(483), 1,
      sym_doc_comment,
    ACTIONS(485), 1,
      sym_comment_line,
    STATE(21), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(236), 1,
      sym_pass_statement,
    STATE(261), 1,
      sym_newline,
    STATE(367), 1,
      sym_flow_transform_keyword,
    STATE(167), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(68), 3,
      sym_flow_transform_step,
      sym_flow_case_step,
      sym_flow_repeat_until,
    ACTIONS(95), 8,
      anon_sym_do,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
  [5395] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      aux_sym_newline_token1,
    STATE(141), 1,
      sym_newline,
    STATE(108), 3,
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
  [5431] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(297), 1,
      aux_sym_newline_token1,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_newline,
    STATE(102), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(495), 16,
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
  [5467] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(297), 1,
      aux_sym_newline_token1,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_newline,
    STATE(107), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(489), 16,
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
  [5503] = 8,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 1,
      aux_sym_newline_token1,
    ACTIONS(504), 1,
      sym_value_name,
    ACTIONS(507), 1,
      sym_indented_raw_text,
    STATE(161), 1,
      sym_newline,
    STATE(506), 1,
      sym_property_key,
    STATE(103), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(502), 13,
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
  [5543] = 6,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 1,
      aux_sym_newline_token1,
    ACTIONS(517), 1,
      sym_comment_line,
    STATE(135), 1,
      sym_newline,
    STATE(104), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(515), 17,
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
  [5579] = 8,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(522), 1,
      aux_sym_newline_token1,
    ACTIONS(526), 1,
      sym_value_name,
    ACTIONS(528), 1,
      sym_indented_raw_text,
    STATE(161), 1,
      sym_newline,
    STATE(506), 1,
      sym_property_key,
    STATE(106), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
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
  [5619] = 8,
    ACTIONS(522), 1,
      aux_sym_newline_token1,
    ACTIONS(526), 1,
      sym_value_name,
    ACTIONS(528), 1,
      sym_indented_raw_text,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      sym_newline,
    STATE(506), 1,
      sym_property_key,
    STATE(103), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(532), 13,
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
  [5659] = 6,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(534), 1,
      aux_sym_newline_token1,
    ACTIONS(537), 1,
      sym_indented_raw_text,
    STATE(141), 1,
      sym_newline,
    STATE(107), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(262), 16,
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
  [5695] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      aux_sym_newline_token1,
    STATE(141), 1,
      sym_newline,
    STATE(107), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(277), 16,
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
  [5731] = 2,
    ACTIONS(323), 1,
      sym_comment_line,
    ACTIONS(321), 21,
      aux_sym_newline_token1,
      sym_doc_comment,
      anon_sym_do,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [5758] = 2,
    ACTIONS(315), 1,
      sym_comment_line,
    ACTIONS(313), 21,
      aux_sym_newline_token1,
      sym_doc_comment,
      anon_sym_do,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [5785] = 2,
    ACTIONS(319), 1,
      sym_comment_line,
    ACTIONS(317), 21,
      aux_sym_newline_token1,
      sym_doc_comment,
      anon_sym_do,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [5812] = 2,
    ACTIONS(311), 1,
      sym_comment_line,
    ACTIONS(309), 21,
      aux_sym_newline_token1,
      sym_doc_comment,
      anon_sym_do,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [5839] = 8,
    ACTIONS(542), 1,
      aux_sym_newline_token1,
    ACTIONS(548), 1,
      sym_value_name,
    STATE(190), 1,
      sym_newline,
    STATE(453), 1,
      sym_field_name,
    ACTIONS(540), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(544), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(116), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(546), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [5877] = 5,
    ACTIONS(343), 1,
      sym_indented_raw_text,
    ACTIONS(550), 1,
      aux_sym_newline_token1,
    STATE(163), 1,
      sym_newline,
    STATE(115), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(271), 15,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [5909] = 5,
    ACTIONS(343), 1,
      sym_indented_raw_text,
    ACTIONS(550), 1,
      aux_sym_newline_token1,
    STATE(163), 1,
      sym_newline,
    STATE(117), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(277), 15,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [5941] = 8,
    ACTIONS(554), 1,
      aux_sym_newline_token1,
    ACTIONS(562), 1,
      sym_value_name,
    STATE(190), 1,
      sym_newline,
    STATE(453), 1,
      sym_field_name,
    ACTIONS(552), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(557), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(116), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(560), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [5979] = 5,
    ACTIONS(565), 1,
      aux_sym_newline_token1,
    ACTIONS(568), 1,
      sym_indented_raw_text,
    STATE(163), 1,
      sym_newline,
    STATE(117), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(262), 15,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [6011] = 2,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 19,
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
  [6036] = 2,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    ACTIONS(577), 19,
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
  [6061] = 2,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    ACTIONS(581), 19,
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
  [6086] = 2,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
    ACTIONS(585), 19,
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
  [6111] = 6,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    ACTIONS(587), 1,
      aux_sym_newline_token1,
    ACTIONS(589), 1,
      sym_indented_raw_text,
    STATE(193), 1,
      sym_newline,
    STATE(127), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(489), 13,
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
  [6144] = 2,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 19,
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
  [6169] = 6,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(587), 1,
      aux_sym_newline_token1,
    ACTIONS(589), 1,
      sym_indented_raw_text,
    STATE(193), 1,
      sym_newline,
    STATE(122), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(495), 13,
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
  [6202] = 2,
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
  [6227] = 2,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
    ACTIONS(597), 19,
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
  [6252] = 6,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(599), 1,
      aux_sym_newline_token1,
    ACTIONS(602), 1,
      sym_indented_raw_text,
    STATE(193), 1,
      sym_newline,
    STATE(127), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(262), 13,
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
  [6285] = 2,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
    ACTIONS(607), 19,
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
  [6310] = 2,
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
  [6335] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 19,
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
  [6360] = 2,
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
  [6385] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 19,
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
  [6410] = 2,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
    ACTIONS(611), 19,
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
  [6435] = 2,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    ACTIONS(615), 19,
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
  [6460] = 2,
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
  [6485] = 2,
    ACTIONS(617), 1,
      ts_builtin_sym_end,
    ACTIONS(619), 19,
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
  [6510] = 2,
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
  [6535] = 2,
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
  [6559] = 2,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 18,
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
  [6583] = 2,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
    ACTIONS(611), 18,
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
  [6607] = 2,
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
  [6631] = 2,
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
  [6655] = 2,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
    ACTIONS(627), 18,
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
  [6679] = 2,
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
  [6703] = 2,
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
  [6727] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 18,
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
  [6751] = 2,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
    ACTIONS(607), 18,
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
  [6775] = 2,
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
  [6799] = 2,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
    ACTIONS(585), 18,
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
  [6823] = 2,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 18,
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
  [6847] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 18,
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
  [6871] = 2,
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
  [6895] = 2,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    ACTIONS(577), 18,
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
  [6919] = 2,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
    ACTIONS(597), 18,
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
  [6943] = 2,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 16,
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
  [6965] = 13,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(645), 1,
      sym_inline_comment,
    ACTIONS(647), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(651), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(98), 1,
      sym_line_end,
    STATE(130), 1,
      sym_newline,
    STATE(134), 1,
      sym_block_value,
    STATE(341), 1,
      sym_fence_open,
    STATE(389), 1,
      sym_block_name,
    STATE(392), 1,
      sym_block_content_inline,
    STATE(480), 1,
      sym_inline_text,
    ACTIONS(649), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(137), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [7009] = 1,
    ACTIONS(351), 17,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7029] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 16,
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
  [7051] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 16,
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
  [7073] = 2,
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
  [7095] = 2,
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
  [7117] = 2,
    ACTIONS(653), 1,
      ts_builtin_sym_end,
    ACTIONS(655), 16,
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
  [7139] = 1,
    ACTIONS(347), 17,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7159] = 1,
    ACTIONS(315), 17,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [7179] = 13,
    ACTIONS(297), 1,
      aux_sym_newline_token1,
    ACTIONS(647), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(651), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(657), 1,
      sym_inline_comment,
    STATE(101), 1,
      sym_line_end,
    STATE(145), 1,
      sym_block_value,
    STATE(151), 1,
      sym_newline,
    STATE(328), 1,
      sym_fence_open,
    STATE(398), 1,
      sym_block_name,
    STATE(399), 1,
      sym_block_content_inline,
    STATE(480), 1,
      sym_inline_text,
    ACTIONS(649), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(144), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [7223] = 13,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(645), 1,
      sym_inline_comment,
    ACTIONS(647), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(651), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(98), 1,
      sym_line_end,
    STATE(120), 1,
      sym_block_value,
    STATE(130), 1,
      sym_newline,
    STATE(341), 1,
      sym_fence_open,
    STATE(389), 1,
      sym_block_name,
    STATE(392), 1,
      sym_block_content_inline,
    STATE(480), 1,
      sym_inline_text,
    ACTIONS(649), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(137), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [7267] = 6,
    ACTIONS(659), 1,
      aux_sym_newline_token1,
    ACTIONS(662), 1,
      sym_doc_comment,
    ACTIONS(665), 1,
      sym_comment_line,
    STATE(261), 1,
      sym_newline,
    STATE(167), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(668), 11,
      anon_sym_do,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [7297] = 1,
    ACTIONS(315), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7316] = 1,
    ACTIONS(363), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7335] = 1,
    ACTIONS(373), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7354] = 1,
    ACTIONS(367), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7373] = 1,
    ACTIONS(407), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7392] = 2,
    ACTIONS(670), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(672), 13,
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
  [7413] = 1,
    ACTIONS(415), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7432] = 2,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(315), 13,
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
  [7453] = 1,
    ACTIONS(419), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7472] = 2,
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
  [7493] = 2,
    ACTIONS(674), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(676), 13,
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
  [7514] = 1,
    ACTIONS(397), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7533] = 1,
    ACTIONS(383), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7552] = 1,
    ACTIONS(369), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7571] = 1,
    ACTIONS(375), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7590] = 1,
    ACTIONS(379), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7609] = 1,
    ACTIONS(347), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7628] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 15,
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
  [7649] = 2,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(311), 13,
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
  [7670] = 2,
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
  [7691] = 1,
    ACTIONS(311), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7710] = 1,
    ACTIONS(323), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7729] = 2,
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
  [7750] = 1,
    ACTIONS(391), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7769] = 1,
    ACTIONS(355), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7788] = 2,
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
  [7809] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 15,
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
  [7830] = 1,
    ACTIONS(411), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7849] = 2,
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
  [7870] = 1,
    ACTIONS(359), 16,
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
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_else_keyword,
      sym_flow_repeat_keyword,
  [7889] = 2,
    ACTIONS(680), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(678), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7909] = 2,
    ACTIONS(684), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(682), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7929] = 2,
    ACTIONS(688), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(686), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7949] = 2,
    ACTIONS(692), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(690), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7969] = 2,
    ACTIONS(585), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(583), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7989] = 2,
    ACTIONS(696), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(694), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8009] = 2,
    ACTIONS(700), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(698), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8029] = 2,
    ACTIONS(704), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(702), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8049] = 2,
    ACTIONS(708), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(706), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8069] = 2,
    ACTIONS(712), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(710), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8089] = 2,
    ACTIONS(716), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(714), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8109] = 2,
    ACTIONS(718), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(115), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8129] = 2,
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
  [8149] = 2,
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
  [8169] = 2,
    ACTIONS(573), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(571), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8189] = 2,
    ACTIONS(577), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(575), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8209] = 2,
    ACTIONS(597), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(595), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8229] = 2,
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
  [8249] = 2,
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
  [8269] = 2,
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
  [8289] = 2,
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
  [8309] = 2,
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
  [8329] = 2,
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
  [8349] = 2,
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
  [8369] = 2,
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
  [8389] = 2,
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
  [8409] = 2,
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
  [8429] = 2,
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
  [8449] = 2,
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
  [8469] = 2,
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
  [8489] = 2,
    ACTIONS(593), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(591), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8509] = 2,
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
  [8529] = 2,
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
  [8549] = 2,
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
  [8569] = 2,
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
  [8589] = 2,
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
  [8609] = 2,
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
  [8629] = 2,
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
  [8649] = 2,
    ACTIONS(808), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(105), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8669] = 2,
    ACTIONS(812), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(810), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8689] = 2,
    ACTIONS(816), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(814), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8709] = 2,
    ACTIONS(820), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(818), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8729] = 2,
    ACTIONS(824), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(822), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8749] = 2,
    ACTIONS(828), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(826), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8769] = 2,
    ACTIONS(832), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(830), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8789] = 2,
    ACTIONS(836), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(834), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8809] = 2,
    ACTIONS(838), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(117), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8829] = 2,
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
  [8849] = 2,
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
  [8869] = 2,
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
  [8889] = 2,
    ACTIONS(854), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(852), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8909] = 2,
    ACTIONS(858), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(856), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8929] = 2,
    ACTIONS(862), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(860), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8949] = 2,
    ACTIONS(866), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(864), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8969] = 2,
    ACTIONS(870), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(868), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [8989] = 2,
    ACTIONS(874), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(872), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9009] = 2,
    ACTIONS(878), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(876), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9029] = 1,
    ACTIONS(311), 15,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [9047] = 1,
    ACTIONS(323), 15,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [9065] = 1,
    ACTIONS(315), 15,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      anon_sym_do,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [9083] = 2,
    ACTIONS(882), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(880), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9103] = 2,
    ACTIONS(886), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(884), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9123] = 2,
    ACTIONS(890), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(888), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [9143] = 2,
    ACTIONS(347), 1,
      sym_comment_line,
    ACTIONS(345), 13,
      aux_sym_newline_token1,
      sym_doc_comment,
      anon_sym_do,
      sym_pass_keyword,
      anon_sym_get,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_filter,
      anon_sym_rank,
      anon_sym_map,
      anon_sym_fold,
      sym_flow_case_keyword,
      sym_flow_repeat_keyword,
  [9162] = 11,
    ACTIONS(892), 1,
      aux_sym_newline_token1,
    ACTIONS(894), 1,
      sym_inline_comment,
    ACTIONS(896), 1,
      anon_sym_do,
    ACTIONS(898), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(900), 1,
      sym_bare_value,
    STATE(50), 1,
      sym_line_end,
    STATE(255), 1,
      sym_newline,
    STATE(344), 1,
      sym_flow_arg,
    STATE(393), 1,
      sym_flow_inline_body,
    STATE(465), 1,
      sym_flow_do_prefix,
    STATE(475), 2,
      sym_flow_call_list,
      sym_flow_inline_text,
  [9197] = 11,
    ACTIONS(892), 1,
      aux_sym_newline_token1,
    ACTIONS(894), 1,
      sym_inline_comment,
    ACTIONS(896), 1,
      anon_sym_do,
    ACTIONS(898), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(900), 1,
      sym_bare_value,
    STATE(51), 1,
      sym_line_end,
    STATE(255), 1,
      sym_newline,
    STATE(344), 1,
      sym_flow_arg,
    STATE(361), 1,
      sym_flow_inline_body,
    STATE(465), 1,
      sym_flow_do_prefix,
    STATE(475), 2,
      sym_flow_call_list,
      sym_flow_inline_text,
  [9232] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(540), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9253] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(524), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9274] = 8,
    ACTIONS(542), 1,
      aux_sym_newline_token1,
    ACTIONS(906), 1,
      sym_doc_comment,
    ACTIONS(908), 1,
      sym_comment_line,
    ACTIONS(910), 1,
      sym_value_name,
    STATE(190), 1,
      sym_newline,
    STATE(252), 1,
      sym_struct_body,
    STATE(453), 1,
      sym_field_name,
    STATE(113), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [9301] = 7,
    ACTIONS(912), 1,
      aux_sym_newline_token1,
    ACTIONS(916), 1,
      sym_flow_condition,
    ACTIONS(918), 1,
      sym_flow_else_keyword,
    STATE(58), 1,
      sym_flow_else_arm,
    STATE(336), 1,
      sym_newline,
    ACTIONS(914), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(287), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [9326] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(518), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9347] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(510), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9368] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(512), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9389] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(550), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9410] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(528), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9431] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(543), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9452] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(390), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9473] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(488), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9494] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(526), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9515] = 7,
    ACTIONS(912), 1,
      aux_sym_newline_token1,
    ACTIONS(916), 1,
      sym_flow_condition,
    ACTIONS(920), 1,
      sym_flow_else_keyword,
    STATE(197), 1,
      sym_flow_else_arm,
    STATE(336), 1,
      sym_newline,
    ACTIONS(914), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(287), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [9540] = 5,
    ACTIONS(904), 1,
      sym_type_name,
    STATE(293), 1,
      sym_base_type,
    STATE(370), 1,
      sym_type,
    STATE(314), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(902), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [9561] = 6,
    ACTIONS(912), 1,
      aux_sym_newline_token1,
    ACTIONS(916), 1,
      sym_flow_condition,
    STATE(172), 1,
      sym_flow_case_body,
    STATE(336), 1,
      sym_newline,
    ACTIONS(922), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(277), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [9583] = 8,
    ACTIONS(924), 1,
      aux_sym_newline_token1,
    ACTIONS(926), 1,
      sym_inline_comment,
    ACTIONS(928), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(124), 1,
      sym_line_end,
    STATE(194), 1,
      sym_newline,
    STATE(250), 1,
      sym_context_body,
    STATE(340), 1,
      sym_fence_open,
    STATE(220), 2,
      sym_block_indented,
      sym_block_fenced,
  [9609] = 6,
    ACTIONS(912), 1,
      aux_sym_newline_token1,
    ACTIONS(916), 1,
      sym_flow_condition,
    STATE(75), 1,
      sym_flow_case_body,
    STATE(336), 1,
      sym_newline,
    ACTIONS(930), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(267), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [9631] = 8,
    ACTIONS(924), 1,
      aux_sym_newline_token1,
    ACTIONS(926), 1,
      sym_inline_comment,
    ACTIONS(928), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(124), 1,
      sym_line_end,
    STATE(194), 1,
      sym_newline,
    STATE(251), 1,
      sym_instruct_body,
    STATE(340), 1,
      sym_fence_open,
    STATE(225), 2,
      sym_block_indented,
      sym_block_fenced,
  [9657] = 8,
    ACTIONS(928), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(932), 1,
      aux_sym_newline_token1,
    ACTIONS(934), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_line_end,
    STATE(158), 1,
      sym_newline,
    STATE(248), 1,
      sym_cap_body,
    STATE(335), 1,
      sym_fence_open,
    STATE(246), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [9683] = 8,
    ACTIONS(928), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(932), 1,
      aux_sym_newline_token1,
    ACTIONS(934), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_line_end,
    STATE(158), 1,
      sym_newline,
    STATE(245), 1,
      sym_cap_body,
    STATE(335), 1,
      sym_fence_open,
    STATE(246), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [9709] = 8,
    ACTIONS(928), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(932), 1,
      aux_sym_newline_token1,
    ACTIONS(934), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_line_end,
    STATE(158), 1,
      sym_newline,
    STATE(247), 1,
      sym_cap_body,
    STATE(335), 1,
      sym_fence_open,
    STATE(246), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [9735] = 8,
    ACTIONS(928), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(932), 1,
      aux_sym_newline_token1,
    ACTIONS(934), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_line_end,
    STATE(158), 1,
      sym_newline,
    STATE(249), 1,
      sym_cap_body,
    STATE(335), 1,
      sym_fence_open,
    STATE(246), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [9761] = 6,
    ACTIONS(936), 1,
      aux_sym_newline_token1,
    ACTIONS(942), 1,
      sym_flow_condition,
    ACTIONS(945), 1,
      sym_flow_else_keyword,
    STATE(336), 1,
      sym_newline,
    ACTIONS(939), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(287), 3,
      sym_blank_line,
      sym_flow_case_arm,
      aux_sym_flow_case_body_repeat1,
  [9783] = 8,
    ACTIONS(924), 1,
      aux_sym_newline_token1,
    ACTIONS(926), 1,
      sym_inline_comment,
    ACTIONS(928), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(124), 1,
      sym_line_end,
    STATE(194), 1,
      sym_newline,
    STATE(219), 1,
      sym_context_body,
    STATE(340), 1,
      sym_fence_open,
    STATE(220), 2,
      sym_block_indented,
      sym_block_fenced,
  [9809] = 8,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(951), 1,
      sym_frontmatter_delimiter,
    ACTIONS(953), 1,
      sym_fenced_raw_text,
    STATE(211), 1,
      sym_fence_close,
    STATE(307), 1,
      sym_frontmatter,
    STATE(436), 1,
      sym_newline,
    STATE(300), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9835] = 8,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(951), 1,
      sym_frontmatter_delimiter,
    ACTIONS(953), 1,
      sym_fenced_raw_text,
    STATE(226), 1,
      sym_fence_close,
    STATE(299), 1,
      sym_frontmatter,
    STATE(436), 1,
      sym_newline,
    STATE(297), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9861] = 8,
    ACTIONS(924), 1,
      aux_sym_newline_token1,
    ACTIONS(926), 1,
      sym_inline_comment,
    ACTIONS(928), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(124), 1,
      sym_line_end,
    STATE(194), 1,
      sym_newline,
    STATE(221), 1,
      sym_instruct_body,
    STATE(340), 1,
      sym_fence_open,
    STATE(225), 2,
      sym_block_indented,
      sym_block_fenced,
  [9887] = 4,
    ACTIONS(957), 1,
      sym_array_suffix,
    STATE(294), 1,
      aux_sym_type_repeat1,
    STATE(318), 1,
      sym_type_suffix,
    ACTIONS(955), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9904] = 4,
    ACTIONS(957), 1,
      sym_array_suffix,
    STATE(292), 1,
      aux_sym_type_repeat1,
    STATE(318), 1,
      sym_type_suffix,
    ACTIONS(959), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9921] = 4,
    ACTIONS(963), 1,
      sym_array_suffix,
    STATE(294), 1,
      aux_sym_type_repeat1,
    STATE(318), 1,
      sym_type_suffix,
    ACTIONS(961), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9938] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    STATE(202), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(296), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9958] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    STATE(214), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(317), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9978] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(953), 1,
      sym_fenced_raw_text,
    STATE(260), 1,
      sym_fence_close,
    STATE(436), 1,
      sym_newline,
    STATE(322), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9998] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    STATE(228), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(317), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10018] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(953), 1,
      sym_fenced_raw_text,
    STATE(233), 1,
      sym_fence_close,
    STATE(436), 1,
      sym_newline,
    STATE(301), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10038] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(953), 1,
      sym_fenced_raw_text,
    STATE(198), 1,
      sym_fence_close,
    STATE(436), 1,
      sym_newline,
    STATE(322), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10058] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(953), 1,
      sym_fenced_raw_text,
    STATE(235), 1,
      sym_fence_close,
    STATE(436), 1,
      sym_newline,
    STATE(322), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10078] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(953), 1,
      sym_fenced_raw_text,
    STATE(234), 1,
      sym_fence_close,
    STATE(436), 1,
      sym_newline,
    STATE(322), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10098] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    ACTIONS(968), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(123), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(317), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10118] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    STATE(212), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(298), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10138] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    ACTIONS(968), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(126), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(317), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10158] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    ACTIONS(968), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(121), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(305), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10178] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(949), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(953), 1,
      sym_fenced_raw_text,
    STATE(227), 1,
      sym_fence_close,
    STATE(436), 1,
      sym_newline,
    STATE(302), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10198] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    ACTIONS(968), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(118), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(303), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10218] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    ACTIONS(970), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(139), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(317), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10238] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    ACTIONS(970), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(149), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(312), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10258] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    ACTIONS(970), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(150), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(309), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10278] = 6,
    ACTIONS(947), 1,
      aux_sym_newline_token1,
    ACTIONS(966), 1,
      sym_fenced_raw_text,
    ACTIONS(970), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(154), 1,
      sym_fence_close,
    STATE(439), 1,
      sym_newline,
    STATE(317), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10298] = 6,
    ACTIONS(972), 1,
      sym_arrow,
    ACTIONS(974), 1,
      sym_colon,
    ACTIONS(976), 1,
      sym_lparen,
    ACTIONS(978), 1,
      sym_value_name,
    STATE(414), 1,
      sym_thunk_name,
    STATE(455), 1,
      sym_params,
  [10317] = 1,
    ACTIONS(980), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10326] = 6,
    ACTIONS(976), 1,
      sym_lparen,
    ACTIONS(982), 1,
      sym_arrow,
    ACTIONS(984), 1,
      sym_colon,
    ACTIONS(986), 1,
      sym_value_name,
    STATE(381), 1,
      sym_flow_name,
    STATE(462), 1,
      sym_params,
  [10345] = 1,
    ACTIONS(988), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10354] = 5,
    ACTIONS(990), 1,
      aux_sym_newline_token1,
    ACTIONS(993), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(995), 1,
      sym_fenced_raw_text,
    STATE(439), 1,
      sym_newline,
    STATE(317), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [10371] = 1,
    ACTIONS(998), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10380] = 1,
    ACTIONS(1000), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10389] = 6,
    ACTIONS(898), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(1002), 1,
      aux_sym_newline_token1,
    ACTIONS(1004), 1,
      sym_inline_comment,
    STATE(388), 1,
      sym_flow_inline_text,
    STATE(444), 1,
      sym_line_end,
    STATE(537), 1,
      sym_newline,
  [10408] = 5,
    ACTIONS(1006), 1,
      sym_frontmatter_comment,
    ACTIONS(1008), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1010), 1,
      sym_value_name,
    STATE(532), 1,
      sym_property_key,
    STATE(324), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [10425] = 5,
    ACTIONS(1012), 1,
      aux_sym_newline_token1,
    ACTIONS(1015), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1017), 1,
      sym_fenced_raw_text,
    STATE(436), 1,
      sym_newline,
    STATE(322), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [10442] = 6,
    ACTIONS(898), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(1002), 1,
      aux_sym_newline_token1,
    ACTIONS(1004), 1,
      sym_inline_comment,
    STATE(363), 1,
      sym_flow_inline_text,
    STATE(432), 1,
      sym_line_end,
    STATE(537), 1,
      sym_newline,
  [10461] = 5,
    ACTIONS(1010), 1,
      sym_value_name,
    ACTIONS(1020), 1,
      sym_frontmatter_comment,
    ACTIONS(1022), 1,
      sym_frontmatter_delimiter,
    STATE(532), 1,
      sym_property_key,
    STATE(325), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [10478] = 5,
    ACTIONS(1024), 1,
      sym_frontmatter_comment,
    ACTIONS(1027), 1,
      sym_frontmatter_delimiter,
    ACTIONS(1029), 1,
      sym_value_name,
    STATE(532), 1,
      sym_property_key,
    STATE(325), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [10495] = 1,
    ACTIONS(1032), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10504] = 1,
    ACTIONS(1034), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10512] = 5,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    ACTIONS(1038), 1,
      sym_inline_comment,
    ACTIONS(1040), 1,
      sym_block_language,
    STATE(310), 1,
      sym_line_end,
    STATE(433), 1,
      sym_newline,
  [10528] = 2,
    STATE(437), 1,
      sym_cap_kind,
    ACTIONS(1042), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [10538] = 1,
    ACTIONS(373), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10546] = 1,
    ACTIONS(397), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10554] = 1,
    ACTIONS(369), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10562] = 1,
    ACTIONS(375), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10570] = 1,
    ACTIONS(379), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10578] = 5,
    ACTIONS(1044), 1,
      aux_sym_newline_token1,
    ACTIONS(1046), 1,
      sym_inline_comment,
    ACTIONS(1048), 1,
      sym_block_language,
    STATE(289), 1,
      sym_line_end,
    STATE(382), 1,
      sym_newline,
  [10594] = 1,
    ACTIONS(347), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10602] = 1,
    ACTIONS(315), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10610] = 1,
    ACTIONS(311), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10618] = 1,
    ACTIONS(323), 5,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
      sym_flow_else_keyword,
  [10626] = 5,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    ACTIONS(1038), 1,
      sym_inline_comment,
    ACTIONS(1050), 1,
      sym_block_language,
    STATE(295), 1,
      sym_line_end,
    STATE(433), 1,
      sym_newline,
  [10642] = 5,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    ACTIONS(1038), 1,
      sym_inline_comment,
    ACTIONS(1052), 1,
      sym_block_language,
    STATE(306), 1,
      sym_line_end,
    STATE(433), 1,
      sym_newline,
  [10658] = 4,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
  [10671] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(92), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [10684] = 3,
    ACTIONS(1062), 1,
      sym_comma,
    STATE(400), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1060), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10695] = 4,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
  [10708] = 3,
    ACTIONS(1066), 1,
      sym_comma,
    STATE(401), 1,
      aux_sym_flow_step_args_repeat1,
    ACTIONS(1064), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10719] = 3,
    ACTIONS(1062), 1,
      sym_comma,
    STATE(348), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1068), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10730] = 3,
    ACTIONS(1072), 1,
      sym_comma,
    STATE(348), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1070), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10741] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(19), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [10754] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [10767] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [10780] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1075), 1,
      sym_inline_comment,
    STATE(56), 1,
      sym_newline,
    STATE(76), 1,
      sym_line_end,
  [10793] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(91), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [10806] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1075), 1,
      sym_inline_comment,
    STATE(56), 1,
      sym_newline,
    STATE(62), 1,
      sym_line_end,
  [10819] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [10832] = 2,
    STATE(463), 1,
      sym_directive_op,
    ACTIONS(1077), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10841] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(16), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [10854] = 4,
    ACTIONS(1079), 1,
      aux_sym_newline_token1,
    ACTIONS(1081), 1,
      sym_inline_comment,
    STATE(330), 1,
      sym_line_end,
    STATE(338), 1,
      sym_newline,
  [10867] = 3,
    ACTIONS(1066), 1,
      sym_comma,
    STATE(346), 1,
      aux_sym_flow_step_args_repeat1,
    ACTIONS(1083), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10878] = 4,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      sym_inline_comment,
    STATE(188), 1,
      sym_newline,
    STATE(195), 1,
      sym_line_end,
  [10891] = 4,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      sym_inline_comment,
    STATE(188), 1,
      sym_newline,
    STATE(192), 1,
      sym_line_end,
  [10904] = 4,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    ACTIONS(1091), 1,
      sym_inline_comment,
    STATE(266), 1,
      sym_line_end,
    STATE(378), 1,
      sym_newline,
  [10917] = 4,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      sym_inline_comment,
    STATE(171), 1,
      sym_line_end,
    STATE(188), 1,
      sym_newline,
  [10930] = 4,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
  [10943] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [10956] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1075), 1,
      sym_inline_comment,
    STATE(56), 1,
      sym_newline,
    STATE(229), 1,
      sym_line_end,
  [10969] = 4,
    ACTIONS(900), 1,
      sym_bare_value,
    ACTIONS(1093), 1,
      sym_colon,
    STATE(352), 1,
      sym_flow_step_args,
    STATE(359), 1,
      sym_flow_arg,
  [10982] = 3,
    ACTIONS(1097), 1,
      sym_comma,
    STATE(374), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1095), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10993] = 4,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
  [11006] = 4,
    ACTIONS(542), 1,
      aux_sym_newline_token1,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(178), 1,
      sym_line_end,
    STATE(186), 1,
      sym_newline,
  [11019] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [11032] = 4,
    ACTIONS(1101), 1,
      sym_rparen,
    ACTIONS(1103), 1,
      sym_value_name,
    STATE(438), 1,
      sym_param,
    STATE(481), 1,
      sym_param_name,
  [11045] = 4,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(46), 1,
      sym_newline,
    STATE(48), 1,
      sym_line_end,
  [11058] = 3,
    ACTIONS(1097), 1,
      sym_comma,
    STATE(412), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1105), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11069] = 4,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    ACTIONS(1038), 1,
      sym_inline_comment,
    STATE(304), 1,
      sym_line_end,
    STATE(433), 1,
      sym_newline,
  [11082] = 2,
    STATE(507), 1,
      sym_directive_op,
    ACTIONS(1077), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11091] = 2,
    ACTIONS(315), 1,
      sym_comment_line,
    ACTIONS(313), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [11100] = 2,
    ACTIONS(311), 1,
      sym_comment_line,
    ACTIONS(309), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [11109] = 2,
    ACTIONS(323), 1,
      sym_comment_line,
    ACTIONS(321), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [11118] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [11131] = 4,
    ACTIONS(976), 1,
      sym_lparen,
    ACTIONS(1107), 1,
      sym_arrow,
    ACTIONS(1109), 1,
      sym_colon,
    STATE(509), 1,
      sym_params,
  [11144] = 1,
    ACTIONS(311), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [11151] = 1,
    ACTIONS(323), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [11158] = 1,
    ACTIONS(315), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [11165] = 1,
    ACTIONS(311), 4,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
  [11172] = 1,
    ACTIONS(323), 4,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
  [11179] = 1,
    ACTIONS(315), 4,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
      sym_flow_condition,
  [11186] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1075), 1,
      sym_inline_comment,
    STATE(56), 1,
      sym_newline,
    STATE(60), 1,
      sym_line_end,
  [11199] = 4,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      sym_inline_comment,
    STATE(128), 1,
      sym_line_end,
    STATE(130), 1,
      sym_newline,
  [11212] = 4,
    ACTIONS(542), 1,
      aux_sym_newline_token1,
    ACTIONS(1099), 1,
      sym_inline_comment,
    STATE(173), 1,
      sym_line_end,
    STATE(186), 1,
      sym_newline,
  [11225] = 4,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
  [11238] = 4,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    ACTIONS(1113), 1,
      sym_inline_comment,
    STATE(130), 1,
      sym_newline,
    STATE(133), 1,
      sym_line_end,
  [11251] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1075), 1,
      sym_inline_comment,
    STATE(56), 1,
      sym_newline,
    STATE(57), 1,
      sym_line_end,
  [11264] = 4,
    ACTIONS(900), 1,
      sym_bare_value,
    ACTIONS(1115), 1,
      sym_colon,
    STATE(359), 1,
      sym_flow_arg,
    STATE(360), 1,
      sym_flow_step_args,
  [11277] = 3,
    ACTIONS(1062), 1,
      sym_comma,
    STATE(347), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1117), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11288] = 4,
    ACTIONS(896), 1,
      anon_sym_do,
    ACTIONS(900), 1,
      sym_bare_value,
    STATE(419), 1,
      sym_flow_arg,
    STATE(466), 1,
      sym_flow_do_prefix,
  [11301] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(111), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [11314] = 4,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    STATE(147), 1,
      sym_line_end,
    STATE(151), 1,
      sym_newline,
  [11327] = 4,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    ACTIONS(1121), 1,
      sym_inline_comment,
    STATE(140), 1,
      sym_line_end,
    STATE(151), 1,
      sym_newline,
  [11340] = 3,
    ACTIONS(1062), 1,
      sym_comma,
    STATE(348), 1,
      aux_sym_flow_call_list_repeat1,
    ACTIONS(1123), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11351] = 3,
    ACTIONS(1127), 1,
      sym_comma,
    STATE(401), 1,
      aux_sym_flow_step_args_repeat1,
    ACTIONS(1125), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11362] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1058), 1,
      sym_inline_comment,
    STATE(88), 1,
      sym_line_end,
    STATE(112), 1,
      sym_newline,
  [11375] = 4,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    ACTIONS(1087), 1,
      sym_inline_comment,
    STATE(170), 1,
      sym_line_end,
    STATE(188), 1,
      sym_newline,
  [11388] = 4,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
  [11401] = 4,
    ACTIONS(1130), 1,
      aux_sym_newline_token1,
    ACTIONS(1132), 1,
      sym_inline_comment,
    STATE(281), 1,
      sym_line_end,
    STATE(385), 1,
      sym_newline,
  [11414] = 4,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
  [11427] = 4,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    ACTIONS(1056), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
  [11440] = 4,
    ACTIONS(932), 1,
      aux_sym_newline_token1,
    ACTIONS(934), 1,
      sym_inline_comment,
    STATE(158), 1,
      sym_newline,
    STATE(162), 1,
      sym_line_end,
  [11453] = 4,
    ACTIONS(1044), 1,
      aux_sym_newline_token1,
    ACTIONS(1046), 1,
      sym_inline_comment,
    STATE(290), 1,
      sym_line_end,
    STATE(382), 1,
      sym_newline,
  [11466] = 4,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    ACTIONS(1038), 1,
      sym_inline_comment,
    STATE(308), 1,
      sym_line_end,
    STATE(433), 1,
      sym_newline,
  [11479] = 4,
    ACTIONS(1130), 1,
      aux_sym_newline_token1,
    ACTIONS(1132), 1,
      sym_inline_comment,
    STATE(279), 1,
      sym_line_end,
    STATE(385), 1,
      sym_newline,
  [11492] = 3,
    ACTIONS(1136), 1,
      sym_comma,
    STATE(412), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1134), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11503] = 4,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    ACTIONS(1038), 1,
      sym_inline_comment,
    STATE(311), 1,
      sym_line_end,
    STATE(433), 1,
      sym_newline,
  [11516] = 4,
    ACTIONS(976), 1,
      sym_lparen,
    ACTIONS(1139), 1,
      sym_arrow,
    ACTIONS(1141), 1,
      sym_colon,
    STATE(454), 1,
      sym_params,
  [11529] = 3,
    ACTIONS(1143), 1,
      sym_rparen,
    ACTIONS(1145), 1,
      sym_comma,
    STATE(415), 1,
      aux_sym_params_repeat1,
  [11539] = 3,
    ACTIONS(1103), 1,
      sym_value_name,
    STATE(467), 1,
      sym_param,
    STATE(481), 1,
      sym_param_name,
  [11549] = 3,
    ACTIONS(1148), 1,
      sym_rparen,
    ACTIONS(1150), 1,
      sym_comma,
    STATE(415), 1,
      aux_sym_params_repeat1,
  [11559] = 1,
    ACTIONS(313), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [11565] = 1,
    ACTIONS(1152), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [11571] = 1,
    ACTIONS(1154), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11577] = 3,
    ACTIONS(1156), 1,
      sym_colon,
    ACTIONS(1158), 1,
      sym_value_name,
    STATE(515), 1,
      sym_context_name,
  [11587] = 1,
    ACTIONS(1160), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [11593] = 1,
    ACTIONS(1162), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [11599] = 3,
    ACTIONS(1164), 1,
      sym_colon,
    ACTIONS(1166), 1,
      sym_value_name,
    STATE(545), 1,
      sym_instruct_name,
  [11609] = 1,
    ACTIONS(1168), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11615] = 1,
    ACTIONS(1170), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [11621] = 1,
    ACTIONS(1172), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11627] = 1,
    ACTIONS(1174), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [11633] = 1,
    ACTIONS(1176), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [11639] = 1,
    ACTIONS(315), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [11645] = 1,
    ACTIONS(1178), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [11651] = 3,
    ACTIONS(1180), 1,
      sym_indented_raw_text,
    STATE(114), 1,
      sym_block_indented_content_line,
    STATE(169), 1,
      sym_block_indented_implicit,
  [11661] = 1,
    ACTIONS(311), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [11667] = 1,
    ACTIONS(323), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [11673] = 1,
    ACTIONS(1182), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [11679] = 1,
    ACTIONS(1184), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [11685] = 3,
    ACTIONS(1186), 1,
      sym_cap_uri,
    ACTIONS(1188), 1,
      sym_cap_shorthand,
    STATE(366), 1,
      sym_cap_ref,
  [11695] = 3,
    ACTIONS(1150), 1,
      sym_comma,
    ACTIONS(1190), 1,
      sym_rparen,
    STATE(417), 1,
      aux_sym_params_repeat1,
  [11705] = 1,
    ACTIONS(1192), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [11711] = 1,
    ACTIONS(1194), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [11717] = 1,
    ACTIONS(1134), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [11723] = 1,
    ACTIONS(1196), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [11729] = 3,
    ACTIONS(1198), 1,
      aux_sym_flow_inline_text_token1,
    STATE(479), 1,
      sym_property_value,
    STATE(492), 1,
      sym_inline_text,
  [11739] = 3,
    ACTIONS(1200), 1,
      sym_indented_raw_text,
    STATE(41), 1,
      sym_block_indented_content_line,
    STATE(59), 1,
      sym_block_indented_implicit,
  [11749] = 3,
    ACTIONS(1198), 1,
      aux_sym_flow_inline_text_token1,
    STATE(408), 1,
      sym_property_value,
    STATE(492), 1,
      sym_inline_text,
  [11759] = 2,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    STATE(131), 1,
      sym_newline,
  [11766] = 1,
    ACTIONS(1202), 2,
      sym_colon,
      sym_value_name,
  [11771] = 2,
    ACTIONS(1204), 1,
      sym_value_name,
    STATE(548), 1,
      sym_cap_name,
  [11778] = 2,
    ACTIONS(1206), 1,
      sym_type_name,
    STATE(523), 1,
      sym_struct_name,
  [11785] = 1,
    ACTIONS(1208), 2,
      sym_arrow,
      sym_colon,
  [11790] = 1,
    ACTIONS(1210), 2,
      sym_optional_marker,
      sym_colon,
  [11795] = 1,
    ACTIONS(1212), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11800] = 2,
    ACTIONS(1214), 1,
      sym_optional_marker,
    ACTIONS(1216), 1,
      sym_colon,
  [11807] = 2,
    ACTIONS(1218), 1,
      sym_arrow,
    ACTIONS(1220), 1,
      sym_colon,
  [11814] = 2,
    ACTIONS(1222), 1,
      sym_arrow,
    ACTIONS(1224), 1,
      sym_colon,
  [11821] = 1,
    ACTIONS(1226), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11826] = 2,
    ACTIONS(1204), 1,
      sym_value_name,
    STATE(554), 1,
      sym_cap_name,
  [11833] = 1,
    ACTIONS(1228), 2,
      sym_optional_marker,
      sym_colon,
  [11838] = 2,
    ACTIONS(1204), 1,
      sym_value_name,
    STATE(557), 1,
      sym_cap_name,
  [11845] = 2,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    STATE(142), 1,
      sym_newline,
  [11852] = 2,
    ACTIONS(1204), 1,
      sym_value_name,
    STATE(559), 1,
      sym_cap_name,
  [11859] = 2,
    ACTIONS(1230), 1,
      sym_arrow,
    ACTIONS(1232), 1,
      sym_colon,
  [11866] = 2,
    ACTIONS(1234), 1,
      sym_bare_value,
    STATE(373), 1,
      sym_directive_csv,
  [11873] = 1,
    ACTIONS(1236), 2,
      sym_arrow,
      sym_colon,
  [11878] = 2,
    ACTIONS(1238), 1,
      sym_bare_value,
    STATE(395), 1,
      sym_flow_arg,
  [11885] = 2,
    ACTIONS(1238), 1,
      sym_bare_value,
    STATE(440), 1,
      sym_flow_arg,
  [11892] = 1,
    ACTIONS(1240), 2,
      sym_rparen,
      sym_comma,
  [11897] = 2,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    STATE(422), 1,
      sym_newline,
  [11904] = 2,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    STATE(442), 1,
      sym_newline,
  [11911] = 1,
    ACTIONS(1242), 2,
      sym_arrow,
      sym_colon,
  [11916] = 1,
    ACTIONS(1244), 2,
      anon_sym_EQ,
      sym_colon,
  [11921] = 1,
    ACTIONS(1246), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11926] = 1,
    ACTIONS(1248), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11931] = 2,
    ACTIONS(1250), 1,
      aux_sym_newline_token1,
    STATE(321), 1,
      sym_newline,
  [11938] = 1,
    ACTIONS(1252), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11943] = 1,
    ACTIONS(1254), 2,
      sym_colon,
      sym_bare_value,
  [11948] = 2,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    STATE(109), 1,
      sym_newline,
  [11955] = 2,
    ACTIONS(924), 1,
      aux_sym_newline_token1,
    STATE(177), 1,
      sym_newline,
  [11962] = 2,
    ACTIONS(1250), 1,
      aux_sym_newline_token1,
    STATE(423), 1,
      sym_newline,
  [11969] = 1,
    ACTIONS(1256), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [11974] = 2,
    ACTIONS(1258), 1,
      sym_optional_marker,
    ACTIONS(1260), 1,
      sym_colon,
  [11981] = 2,
    ACTIONS(932), 1,
      aux_sym_newline_token1,
    STATE(155), 1,
      sym_newline,
  [11988] = 1,
    ACTIONS(1262), 2,
      sym_colon,
      sym_value_name,
  [11993] = 2,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    STATE(428), 1,
      sym_newline,
  [12000] = 2,
    ACTIONS(1264), 1,
      sym_cap_uri,
    ACTIONS(1266), 1,
      sym_cap_shorthand,
  [12007] = 2,
    ACTIONS(1238), 1,
      sym_bare_value,
    STATE(429), 1,
      sym_flow_arg,
  [12014] = 2,
    ACTIONS(1054), 1,
      aux_sym_newline_token1,
    STATE(49), 1,
      sym_newline,
  [12021] = 1,
    ACTIONS(1268), 2,
      sym_rparen,
      sym_comma,
  [12026] = 2,
    ACTIONS(924), 1,
      aux_sym_newline_token1,
    STATE(196), 1,
      sym_newline,
  [12033] = 2,
    ACTIONS(1111), 1,
      aux_sym_newline_token1,
    STATE(129), 1,
      sym_newline,
  [12040] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(74), 1,
      sym_newline,
  [12047] = 1,
    ACTIONS(1270), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [12052] = 2,
    ACTIONS(1089), 1,
      aux_sym_newline_token1,
    STATE(379), 1,
      sym_newline,
  [12059] = 2,
    ACTIONS(1272), 1,
      aux_sym_newline_token1,
    STATE(54), 1,
      sym_newline,
  [12066] = 2,
    ACTIONS(932), 1,
      aux_sym_newline_token1,
    STATE(160), 1,
      sym_newline,
  [12073] = 2,
    ACTIONS(1274), 1,
      aux_sym_newline_token1,
    STATE(157), 1,
      sym_newline,
  [12080] = 2,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    STATE(434), 1,
      sym_newline,
  [12087] = 2,
    ACTIONS(1044), 1,
      aux_sym_newline_token1,
    STATE(383), 1,
      sym_newline,
  [12094] = 2,
    ACTIONS(1119), 1,
      aux_sym_newline_token1,
    STATE(138), 1,
      sym_newline,
  [12101] = 2,
    ACTIONS(1130), 1,
      aux_sym_newline_token1,
    STATE(386), 1,
      sym_newline,
  [12108] = 2,
    ACTIONS(1276), 1,
      aux_sym_newline_token1,
    STATE(256), 1,
      sym_newline,
  [12115] = 2,
    ACTIONS(1278), 1,
      aux_sym_newline_token1,
    STATE(538), 1,
      sym_newline,
  [12122] = 2,
    ACTIONS(542), 1,
      aux_sym_newline_token1,
    STATE(187), 1,
      sym_newline,
  [12129] = 2,
    ACTIONS(1079), 1,
      aux_sym_newline_token1,
    STATE(339), 1,
      sym_newline,
  [12136] = 2,
    ACTIONS(1085), 1,
      aux_sym_newline_token1,
    STATE(189), 1,
      sym_newline,
  [12143] = 2,
    ACTIONS(1280), 1,
      anon_sym_EQ,
    STATE(445), 1,
      sym_assign_operator,
  [12150] = 2,
    ACTIONS(1234), 1,
      sym_bare_value,
    STATE(397), 1,
      sym_directive_csv,
  [12157] = 2,
    ACTIONS(1036), 1,
      aux_sym_newline_token1,
    STATE(426), 1,
      sym_newline,
  [12164] = 2,
    ACTIONS(1282), 1,
      sym_arrow,
    ACTIONS(1284), 1,
      sym_colon,
  [12171] = 1,
    ACTIONS(1286), 2,
      sym_rparen,
      sym_comma,
  [12176] = 1,
    ACTIONS(1288), 1,
      aux_sym_newline_token1,
  [12180] = 1,
    ACTIONS(1290), 1,
      sym_colon,
  [12184] = 1,
    ACTIONS(1292), 1,
      aux_sym_newline_token1,
  [12188] = 1,
    ACTIONS(1294), 1,
      sym_colon,
  [12192] = 1,
    ACTIONS(1296), 1,
      sym_colon,
  [12196] = 1,
    ACTIONS(1298), 1,
      sym_colon,
  [12200] = 1,
    ACTIONS(1300), 1,
      sym_bare_value,
  [12204] = 1,
    ACTIONS(1302), 1,
      sym_colon,
  [12208] = 1,
    ACTIONS(1304), 1,
      sym_colon,
  [12212] = 1,
    ACTIONS(1306), 1,
      aux_sym_newline_token1,
  [12216] = 1,
    ACTIONS(1308), 1,
      sym_colon,
  [12220] = 1,
    ACTIONS(1310), 1,
      sym_colon,
  [12224] = 1,
    ACTIONS(1312), 1,
      sym_colon,
  [12228] = 1,
    ACTIONS(1314), 1,
      sym_colon,
  [12232] = 1,
    ACTIONS(1316), 1,
      sym_colon,
  [12236] = 1,
    ACTIONS(1318), 1,
      sym_colon,
  [12240] = 1,
    ACTIONS(1320), 1,
      sym_colon,
  [12244] = 1,
    ACTIONS(1322), 1,
      sym_colon,
  [12248] = 1,
    ACTIONS(1324), 1,
      sym_colon,
  [12252] = 1,
    ACTIONS(1326), 1,
      sym_value_name,
  [12256] = 1,
    ACTIONS(1328), 1,
      sym_colon,
  [12260] = 1,
    ACTIONS(1330), 1,
      sym_colon,
  [12264] = 1,
    ACTIONS(1332), 1,
      ts_builtin_sym_end,
  [12268] = 1,
    ACTIONS(1334), 1,
      sym_colon,
  [12272] = 1,
    ACTIONS(1336), 1,
      sym_colon,
  [12276] = 1,
    ACTIONS(1338), 1,
      sym_value_name,
  [12280] = 1,
    ACTIONS(309), 1,
      sym_indented_raw_text,
  [12284] = 1,
    ACTIONS(321), 1,
      sym_indented_raw_text,
  [12288] = 1,
    ACTIONS(1340), 1,
      sym_value_name,
  [12292] = 1,
    ACTIONS(1342), 1,
      sym_colon,
  [12296] = 1,
    ACTIONS(1344), 1,
      sym_colon,
  [12300] = 1,
    ACTIONS(313), 1,
      sym_indented_raw_text,
  [12304] = 1,
    ACTIONS(1346), 1,
      sym_colon,
  [12308] = 1,
    ACTIONS(1348), 1,
      sym_colon,
  [12312] = 1,
    ACTIONS(1350), 1,
      sym_colon,
  [12316] = 1,
    ACTIONS(1352), 1,
      aux_sym_flow_inline_text_token1,
  [12320] = 1,
    ACTIONS(1354), 1,
      sym_colon,
  [12324] = 1,
    ACTIONS(1356), 1,
      sym_colon,
  [12328] = 1,
    ACTIONS(1358), 1,
      sym_colon,
  [12332] = 1,
    ACTIONS(1360), 1,
      sym_colon,
  [12336] = 1,
    ACTIONS(1362), 1,
      sym_colon,
  [12340] = 1,
    ACTIONS(1364), 1,
      sym_flow_until_keyword,
  [12344] = 1,
    ACTIONS(1366), 1,
      sym_bare_value,
  [12348] = 1,
    ACTIONS(1368), 1,
      sym_colon,
  [12352] = 1,
    ACTIONS(1370), 1,
      sym_colon,
  [12356] = 1,
    ACTIONS(1372), 1,
      sym_colon,
  [12360] = 1,
    ACTIONS(1374), 1,
      sym_colon,
  [12364] = 1,
    ACTIONS(1376), 1,
      sym_bare_value,
  [12368] = 1,
    ACTIONS(1378), 1,
      sym_colon,
  [12372] = 1,
    ACTIONS(1380), 1,
      sym_colon,
  [12376] = 1,
    ACTIONS(1382), 1,
      sym_flow_until_keyword,
  [12380] = 1,
    ACTIONS(1384), 1,
      sym_value_name,
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
  [SMALL_STATE(13)] = 1058,
  [SMALL_STATE(14)] = 1134,
  [SMALL_STATE(15)] = 1210,
  [SMALL_STATE(16)] = 1286,
  [SMALL_STATE(17)] = 1362,
  [SMALL_STATE(18)] = 1438,
  [SMALL_STATE(19)] = 1514,
  [SMALL_STATE(20)] = 1590,
  [SMALL_STATE(21)] = 1653,
  [SMALL_STATE(22)] = 1716,
  [SMALL_STATE(23)] = 1789,
  [SMALL_STATE(24)] = 1852,
  [SMALL_STATE(25)] = 1915,
  [SMALL_STATE(26)] = 1978,
  [SMALL_STATE(27)] = 2041,
  [SMALL_STATE(28)] = 2104,
  [SMALL_STATE(29)] = 2167,
  [SMALL_STATE(30)] = 2225,
  [SMALL_STATE(31)] = 2307,
  [SMALL_STATE(32)] = 2389,
  [SMALL_STATE(33)] = 2447,
  [SMALL_STATE(34)] = 2517,
  [SMALL_STATE(35)] = 2587,
  [SMALL_STATE(36)] = 2657,
  [SMALL_STATE(37)] = 2727,
  [SMALL_STATE(38)] = 2797,
  [SMALL_STATE(39)] = 2867,
  [SMALL_STATE(40)] = 2917,
  [SMALL_STATE(41)] = 2961,
  [SMALL_STATE(42)] = 3005,
  [SMALL_STATE(43)] = 3049,
  [SMALL_STATE(44)] = 3105,
  [SMALL_STATE(45)] = 3161,
  [SMALL_STATE(46)] = 3217,
  [SMALL_STATE(47)] = 3250,
  [SMALL_STATE(48)] = 3283,
  [SMALL_STATE(49)] = 3316,
  [SMALL_STATE(50)] = 3349,
  [SMALL_STATE(51)] = 3410,
  [SMALL_STATE(52)] = 3471,
  [SMALL_STATE(53)] = 3504,
  [SMALL_STATE(54)] = 3536,
  [SMALL_STATE(55)] = 3568,
  [SMALL_STATE(56)] = 3600,
  [SMALL_STATE(57)] = 3631,
  [SMALL_STATE(58)] = 3662,
  [SMALL_STATE(59)] = 3693,
  [SMALL_STATE(60)] = 3724,
  [SMALL_STATE(61)] = 3755,
  [SMALL_STATE(62)] = 3786,
  [SMALL_STATE(63)] = 3817,
  [SMALL_STATE(64)] = 3848,
  [SMALL_STATE(65)] = 3879,
  [SMALL_STATE(66)] = 3910,
  [SMALL_STATE(67)] = 3941,
  [SMALL_STATE(68)] = 3972,
  [SMALL_STATE(69)] = 4003,
  [SMALL_STATE(70)] = 4056,
  [SMALL_STATE(71)] = 4109,
  [SMALL_STATE(72)] = 4162,
  [SMALL_STATE(73)] = 4215,
  [SMALL_STATE(74)] = 4246,
  [SMALL_STATE(75)] = 4277,
  [SMALL_STATE(76)] = 4308,
  [SMALL_STATE(77)] = 4339,
  [SMALL_STATE(78)] = 4370,
  [SMALL_STATE(79)] = 4401,
  [SMALL_STATE(80)] = 4432,
  [SMALL_STATE(81)] = 4485,
  [SMALL_STATE(82)] = 4538,
  [SMALL_STATE(83)] = 4591,
  [SMALL_STATE(84)] = 4644,
  [SMALL_STATE(85)] = 4688,
  [SMALL_STATE(86)] = 4732,
  [SMALL_STATE(87)] = 4780,
  [SMALL_STATE(88)] = 4824,
  [SMALL_STATE(89)] = 4880,
  [SMALL_STATE(90)] = 4924,
  [SMALL_STATE(91)] = 4960,
  [SMALL_STATE(92)] = 5016,
  [SMALL_STATE(93)] = 5072,
  [SMALL_STATE(94)] = 5109,
  [SMALL_STATE(95)] = 5162,
  [SMALL_STATE(96)] = 5215,
  [SMALL_STATE(97)] = 5268,
  [SMALL_STATE(98)] = 5305,
  [SMALL_STATE(99)] = 5342,
  [SMALL_STATE(100)] = 5395,
  [SMALL_STATE(101)] = 5431,
  [SMALL_STATE(102)] = 5467,
  [SMALL_STATE(103)] = 5503,
  [SMALL_STATE(104)] = 5543,
  [SMALL_STATE(105)] = 5579,
  [SMALL_STATE(106)] = 5619,
  [SMALL_STATE(107)] = 5659,
  [SMALL_STATE(108)] = 5695,
  [SMALL_STATE(109)] = 5731,
  [SMALL_STATE(110)] = 5758,
  [SMALL_STATE(111)] = 5785,
  [SMALL_STATE(112)] = 5812,
  [SMALL_STATE(113)] = 5839,
  [SMALL_STATE(114)] = 5877,
  [SMALL_STATE(115)] = 5909,
  [SMALL_STATE(116)] = 5941,
  [SMALL_STATE(117)] = 5979,
  [SMALL_STATE(118)] = 6011,
  [SMALL_STATE(119)] = 6036,
  [SMALL_STATE(120)] = 6061,
  [SMALL_STATE(121)] = 6086,
  [SMALL_STATE(122)] = 6111,
  [SMALL_STATE(123)] = 6144,
  [SMALL_STATE(124)] = 6169,
  [SMALL_STATE(125)] = 6202,
  [SMALL_STATE(126)] = 6227,
  [SMALL_STATE(127)] = 6252,
  [SMALL_STATE(128)] = 6285,
  [SMALL_STATE(129)] = 6310,
  [SMALL_STATE(130)] = 6335,
  [SMALL_STATE(131)] = 6360,
  [SMALL_STATE(132)] = 6385,
  [SMALL_STATE(133)] = 6410,
  [SMALL_STATE(134)] = 6435,
  [SMALL_STATE(135)] = 6460,
  [SMALL_STATE(136)] = 6485,
  [SMALL_STATE(137)] = 6510,
  [SMALL_STATE(138)] = 6535,
  [SMALL_STATE(139)] = 6559,
  [SMALL_STATE(140)] = 6583,
  [SMALL_STATE(141)] = 6607,
  [SMALL_STATE(142)] = 6631,
  [SMALL_STATE(143)] = 6655,
  [SMALL_STATE(144)] = 6679,
  [SMALL_STATE(145)] = 6703,
  [SMALL_STATE(146)] = 6727,
  [SMALL_STATE(147)] = 6751,
  [SMALL_STATE(148)] = 6775,
  [SMALL_STATE(149)] = 6799,
  [SMALL_STATE(150)] = 6823,
  [SMALL_STATE(151)] = 6847,
  [SMALL_STATE(152)] = 6871,
  [SMALL_STATE(153)] = 6895,
  [SMALL_STATE(154)] = 6919,
  [SMALL_STATE(155)] = 6943,
  [SMALL_STATE(156)] = 6965,
  [SMALL_STATE(157)] = 7009,
  [SMALL_STATE(158)] = 7029,
  [SMALL_STATE(159)] = 7051,
  [SMALL_STATE(160)] = 7073,
  [SMALL_STATE(161)] = 7095,
  [SMALL_STATE(162)] = 7117,
  [SMALL_STATE(163)] = 7139,
  [SMALL_STATE(164)] = 7159,
  [SMALL_STATE(165)] = 7179,
  [SMALL_STATE(166)] = 7223,
  [SMALL_STATE(167)] = 7267,
  [SMALL_STATE(168)] = 7297,
  [SMALL_STATE(169)] = 7316,
  [SMALL_STATE(170)] = 7335,
  [SMALL_STATE(171)] = 7354,
  [SMALL_STATE(172)] = 7373,
  [SMALL_STATE(173)] = 7392,
  [SMALL_STATE(174)] = 7413,
  [SMALL_STATE(175)] = 7432,
  [SMALL_STATE(176)] = 7453,
  [SMALL_STATE(177)] = 7472,
  [SMALL_STATE(178)] = 7493,
  [SMALL_STATE(179)] = 7514,
  [SMALL_STATE(180)] = 7533,
  [SMALL_STATE(181)] = 7552,
  [SMALL_STATE(182)] = 7571,
  [SMALL_STATE(183)] = 7590,
  [SMALL_STATE(184)] = 7609,
  [SMALL_STATE(185)] = 7628,
  [SMALL_STATE(186)] = 7649,
  [SMALL_STATE(187)] = 7670,
  [SMALL_STATE(188)] = 7691,
  [SMALL_STATE(189)] = 7710,
  [SMALL_STATE(190)] = 7729,
  [SMALL_STATE(191)] = 7750,
  [SMALL_STATE(192)] = 7769,
  [SMALL_STATE(193)] = 7788,
  [SMALL_STATE(194)] = 7809,
  [SMALL_STATE(195)] = 7830,
  [SMALL_STATE(196)] = 7849,
  [SMALL_STATE(197)] = 7870,
  [SMALL_STATE(198)] = 7889,
  [SMALL_STATE(199)] = 7909,
  [SMALL_STATE(200)] = 7929,
  [SMALL_STATE(201)] = 7949,
  [SMALL_STATE(202)] = 7969,
  [SMALL_STATE(203)] = 7989,
  [SMALL_STATE(204)] = 8009,
  [SMALL_STATE(205)] = 8029,
  [SMALL_STATE(206)] = 8049,
  [SMALL_STATE(207)] = 8069,
  [SMALL_STATE(208)] = 8089,
  [SMALL_STATE(209)] = 8109,
  [SMALL_STATE(210)] = 8129,
  [SMALL_STATE(211)] = 8149,
  [SMALL_STATE(212)] = 8169,
  [SMALL_STATE(213)] = 8189,
  [SMALL_STATE(214)] = 8209,
  [SMALL_STATE(215)] = 8229,
  [SMALL_STATE(216)] = 8249,
  [SMALL_STATE(217)] = 8269,
  [SMALL_STATE(218)] = 8289,
  [SMALL_STATE(219)] = 8309,
  [SMALL_STATE(220)] = 8329,
  [SMALL_STATE(221)] = 8349,
  [SMALL_STATE(222)] = 8369,
  [SMALL_STATE(223)] = 8389,
  [SMALL_STATE(224)] = 8409,
  [SMALL_STATE(225)] = 8429,
  [SMALL_STATE(226)] = 8449,
  [SMALL_STATE(227)] = 8469,
  [SMALL_STATE(228)] = 8489,
  [SMALL_STATE(229)] = 8509,
  [SMALL_STATE(230)] = 8529,
  [SMALL_STATE(231)] = 8549,
  [SMALL_STATE(232)] = 8569,
  [SMALL_STATE(233)] = 8589,
  [SMALL_STATE(234)] = 8609,
  [SMALL_STATE(235)] = 8629,
  [SMALL_STATE(236)] = 8649,
  [SMALL_STATE(237)] = 8669,
  [SMALL_STATE(238)] = 8689,
  [SMALL_STATE(239)] = 8709,
  [SMALL_STATE(240)] = 8729,
  [SMALL_STATE(241)] = 8749,
  [SMALL_STATE(242)] = 8769,
  [SMALL_STATE(243)] = 8789,
  [SMALL_STATE(244)] = 8809,
  [SMALL_STATE(245)] = 8829,
  [SMALL_STATE(246)] = 8849,
  [SMALL_STATE(247)] = 8869,
  [SMALL_STATE(248)] = 8889,
  [SMALL_STATE(249)] = 8909,
  [SMALL_STATE(250)] = 8929,
  [SMALL_STATE(251)] = 8949,
  [SMALL_STATE(252)] = 8969,
  [SMALL_STATE(253)] = 8989,
  [SMALL_STATE(254)] = 9009,
  [SMALL_STATE(255)] = 9029,
  [SMALL_STATE(256)] = 9047,
  [SMALL_STATE(257)] = 9065,
  [SMALL_STATE(258)] = 9083,
  [SMALL_STATE(259)] = 9103,
  [SMALL_STATE(260)] = 9123,
  [SMALL_STATE(261)] = 9143,
  [SMALL_STATE(262)] = 9162,
  [SMALL_STATE(263)] = 9197,
  [SMALL_STATE(264)] = 9232,
  [SMALL_STATE(265)] = 9253,
  [SMALL_STATE(266)] = 9274,
  [SMALL_STATE(267)] = 9301,
  [SMALL_STATE(268)] = 9326,
  [SMALL_STATE(269)] = 9347,
  [SMALL_STATE(270)] = 9368,
  [SMALL_STATE(271)] = 9389,
  [SMALL_STATE(272)] = 9410,
  [SMALL_STATE(273)] = 9431,
  [SMALL_STATE(274)] = 9452,
  [SMALL_STATE(275)] = 9473,
  [SMALL_STATE(276)] = 9494,
  [SMALL_STATE(277)] = 9515,
  [SMALL_STATE(278)] = 9540,
  [SMALL_STATE(279)] = 9561,
  [SMALL_STATE(280)] = 9583,
  [SMALL_STATE(281)] = 9609,
  [SMALL_STATE(282)] = 9631,
  [SMALL_STATE(283)] = 9657,
  [SMALL_STATE(284)] = 9683,
  [SMALL_STATE(285)] = 9709,
  [SMALL_STATE(286)] = 9735,
  [SMALL_STATE(287)] = 9761,
  [SMALL_STATE(288)] = 9783,
  [SMALL_STATE(289)] = 9809,
  [SMALL_STATE(290)] = 9835,
  [SMALL_STATE(291)] = 9861,
  [SMALL_STATE(292)] = 9887,
  [SMALL_STATE(293)] = 9904,
  [SMALL_STATE(294)] = 9921,
  [SMALL_STATE(295)] = 9938,
  [SMALL_STATE(296)] = 9958,
  [SMALL_STATE(297)] = 9978,
  [SMALL_STATE(298)] = 9998,
  [SMALL_STATE(299)] = 10018,
  [SMALL_STATE(300)] = 10038,
  [SMALL_STATE(301)] = 10058,
  [SMALL_STATE(302)] = 10078,
  [SMALL_STATE(303)] = 10098,
  [SMALL_STATE(304)] = 10118,
  [SMALL_STATE(305)] = 10138,
  [SMALL_STATE(306)] = 10158,
  [SMALL_STATE(307)] = 10178,
  [SMALL_STATE(308)] = 10198,
  [SMALL_STATE(309)] = 10218,
  [SMALL_STATE(310)] = 10238,
  [SMALL_STATE(311)] = 10258,
  [SMALL_STATE(312)] = 10278,
  [SMALL_STATE(313)] = 10298,
  [SMALL_STATE(314)] = 10317,
  [SMALL_STATE(315)] = 10326,
  [SMALL_STATE(316)] = 10345,
  [SMALL_STATE(317)] = 10354,
  [SMALL_STATE(318)] = 10371,
  [SMALL_STATE(319)] = 10380,
  [SMALL_STATE(320)] = 10389,
  [SMALL_STATE(321)] = 10408,
  [SMALL_STATE(322)] = 10425,
  [SMALL_STATE(323)] = 10442,
  [SMALL_STATE(324)] = 10461,
  [SMALL_STATE(325)] = 10478,
  [SMALL_STATE(326)] = 10495,
  [SMALL_STATE(327)] = 10504,
  [SMALL_STATE(328)] = 10512,
  [SMALL_STATE(329)] = 10528,
  [SMALL_STATE(330)] = 10538,
  [SMALL_STATE(331)] = 10546,
  [SMALL_STATE(332)] = 10554,
  [SMALL_STATE(333)] = 10562,
  [SMALL_STATE(334)] = 10570,
  [SMALL_STATE(335)] = 10578,
  [SMALL_STATE(336)] = 10594,
  [SMALL_STATE(337)] = 10602,
  [SMALL_STATE(338)] = 10610,
  [SMALL_STATE(339)] = 10618,
  [SMALL_STATE(340)] = 10626,
  [SMALL_STATE(341)] = 10642,
  [SMALL_STATE(342)] = 10658,
  [SMALL_STATE(343)] = 10671,
  [SMALL_STATE(344)] = 10684,
  [SMALL_STATE(345)] = 10695,
  [SMALL_STATE(346)] = 10708,
  [SMALL_STATE(347)] = 10719,
  [SMALL_STATE(348)] = 10730,
  [SMALL_STATE(349)] = 10741,
  [SMALL_STATE(350)] = 10754,
  [SMALL_STATE(351)] = 10767,
  [SMALL_STATE(352)] = 10780,
  [SMALL_STATE(353)] = 10793,
  [SMALL_STATE(354)] = 10806,
  [SMALL_STATE(355)] = 10819,
  [SMALL_STATE(356)] = 10832,
  [SMALL_STATE(357)] = 10841,
  [SMALL_STATE(358)] = 10854,
  [SMALL_STATE(359)] = 10867,
  [SMALL_STATE(360)] = 10878,
  [SMALL_STATE(361)] = 10891,
  [SMALL_STATE(362)] = 10904,
  [SMALL_STATE(363)] = 10917,
  [SMALL_STATE(364)] = 10930,
  [SMALL_STATE(365)] = 10943,
  [SMALL_STATE(366)] = 10956,
  [SMALL_STATE(367)] = 10969,
  [SMALL_STATE(368)] = 10982,
  [SMALL_STATE(369)] = 10993,
  [SMALL_STATE(370)] = 11006,
  [SMALL_STATE(371)] = 11019,
  [SMALL_STATE(372)] = 11032,
  [SMALL_STATE(373)] = 11045,
  [SMALL_STATE(374)] = 11058,
  [SMALL_STATE(375)] = 11069,
  [SMALL_STATE(376)] = 11082,
  [SMALL_STATE(377)] = 11091,
  [SMALL_STATE(378)] = 11100,
  [SMALL_STATE(379)] = 11109,
  [SMALL_STATE(380)] = 11118,
  [SMALL_STATE(381)] = 11131,
  [SMALL_STATE(382)] = 11144,
  [SMALL_STATE(383)] = 11151,
  [SMALL_STATE(384)] = 11158,
  [SMALL_STATE(385)] = 11165,
  [SMALL_STATE(386)] = 11172,
  [SMALL_STATE(387)] = 11179,
  [SMALL_STATE(388)] = 11186,
  [SMALL_STATE(389)] = 11199,
  [SMALL_STATE(390)] = 11212,
  [SMALL_STATE(391)] = 11225,
  [SMALL_STATE(392)] = 11238,
  [SMALL_STATE(393)] = 11251,
  [SMALL_STATE(394)] = 11264,
  [SMALL_STATE(395)] = 11277,
  [SMALL_STATE(396)] = 11288,
  [SMALL_STATE(397)] = 11301,
  [SMALL_STATE(398)] = 11314,
  [SMALL_STATE(399)] = 11327,
  [SMALL_STATE(400)] = 11340,
  [SMALL_STATE(401)] = 11351,
  [SMALL_STATE(402)] = 11362,
  [SMALL_STATE(403)] = 11375,
  [SMALL_STATE(404)] = 11388,
  [SMALL_STATE(405)] = 11401,
  [SMALL_STATE(406)] = 11414,
  [SMALL_STATE(407)] = 11427,
  [SMALL_STATE(408)] = 11440,
  [SMALL_STATE(409)] = 11453,
  [SMALL_STATE(410)] = 11466,
  [SMALL_STATE(411)] = 11479,
  [SMALL_STATE(412)] = 11492,
  [SMALL_STATE(413)] = 11503,
  [SMALL_STATE(414)] = 11516,
  [SMALL_STATE(415)] = 11529,
  [SMALL_STATE(416)] = 11539,
  [SMALL_STATE(417)] = 11549,
  [SMALL_STATE(418)] = 11559,
  [SMALL_STATE(419)] = 11565,
  [SMALL_STATE(420)] = 11571,
  [SMALL_STATE(421)] = 11577,
  [SMALL_STATE(422)] = 11587,
  [SMALL_STATE(423)] = 11593,
  [SMALL_STATE(424)] = 11599,
  [SMALL_STATE(425)] = 11609,
  [SMALL_STATE(426)] = 11615,
  [SMALL_STATE(427)] = 11621,
  [SMALL_STATE(428)] = 11627,
  [SMALL_STATE(429)] = 11633,
  [SMALL_STATE(430)] = 11639,
  [SMALL_STATE(431)] = 11645,
  [SMALL_STATE(432)] = 11651,
  [SMALL_STATE(433)] = 11661,
  [SMALL_STATE(434)] = 11667,
  [SMALL_STATE(435)] = 11673,
  [SMALL_STATE(436)] = 11679,
  [SMALL_STATE(437)] = 11685,
  [SMALL_STATE(438)] = 11695,
  [SMALL_STATE(439)] = 11705,
  [SMALL_STATE(440)] = 11711,
  [SMALL_STATE(441)] = 11717,
  [SMALL_STATE(442)] = 11723,
  [SMALL_STATE(443)] = 11729,
  [SMALL_STATE(444)] = 11739,
  [SMALL_STATE(445)] = 11749,
  [SMALL_STATE(446)] = 11759,
  [SMALL_STATE(447)] = 11766,
  [SMALL_STATE(448)] = 11771,
  [SMALL_STATE(449)] = 11778,
  [SMALL_STATE(450)] = 11785,
  [SMALL_STATE(451)] = 11790,
  [SMALL_STATE(452)] = 11795,
  [SMALL_STATE(453)] = 11800,
  [SMALL_STATE(454)] = 11807,
  [SMALL_STATE(455)] = 11814,
  [SMALL_STATE(456)] = 11821,
  [SMALL_STATE(457)] = 11826,
  [SMALL_STATE(458)] = 11833,
  [SMALL_STATE(459)] = 11838,
  [SMALL_STATE(460)] = 11845,
  [SMALL_STATE(461)] = 11852,
  [SMALL_STATE(462)] = 11859,
  [SMALL_STATE(463)] = 11866,
  [SMALL_STATE(464)] = 11873,
  [SMALL_STATE(465)] = 11878,
  [SMALL_STATE(466)] = 11885,
  [SMALL_STATE(467)] = 11892,
  [SMALL_STATE(468)] = 11897,
  [SMALL_STATE(469)] = 11904,
  [SMALL_STATE(470)] = 11911,
  [SMALL_STATE(471)] = 11916,
  [SMALL_STATE(472)] = 11921,
  [SMALL_STATE(473)] = 11926,
  [SMALL_STATE(474)] = 11931,
  [SMALL_STATE(475)] = 11938,
  [SMALL_STATE(476)] = 11943,
  [SMALL_STATE(477)] = 11948,
  [SMALL_STATE(478)] = 11955,
  [SMALL_STATE(479)] = 11962,
  [SMALL_STATE(480)] = 11969,
  [SMALL_STATE(481)] = 11974,
  [SMALL_STATE(482)] = 11981,
  [SMALL_STATE(483)] = 11988,
  [SMALL_STATE(484)] = 11993,
  [SMALL_STATE(485)] = 12000,
  [SMALL_STATE(486)] = 12007,
  [SMALL_STATE(487)] = 12014,
  [SMALL_STATE(488)] = 12021,
  [SMALL_STATE(489)] = 12026,
  [SMALL_STATE(490)] = 12033,
  [SMALL_STATE(491)] = 12040,
  [SMALL_STATE(492)] = 12047,
  [SMALL_STATE(493)] = 12052,
  [SMALL_STATE(494)] = 12059,
  [SMALL_STATE(495)] = 12066,
  [SMALL_STATE(496)] = 12073,
  [SMALL_STATE(497)] = 12080,
  [SMALL_STATE(498)] = 12087,
  [SMALL_STATE(499)] = 12094,
  [SMALL_STATE(500)] = 12101,
  [SMALL_STATE(501)] = 12108,
  [SMALL_STATE(502)] = 12115,
  [SMALL_STATE(503)] = 12122,
  [SMALL_STATE(504)] = 12129,
  [SMALL_STATE(505)] = 12136,
  [SMALL_STATE(506)] = 12143,
  [SMALL_STATE(507)] = 12150,
  [SMALL_STATE(508)] = 12157,
  [SMALL_STATE(509)] = 12164,
  [SMALL_STATE(510)] = 12171,
  [SMALL_STATE(511)] = 12176,
  [SMALL_STATE(512)] = 12180,
  [SMALL_STATE(513)] = 12184,
  [SMALL_STATE(514)] = 12188,
  [SMALL_STATE(515)] = 12192,
  [SMALL_STATE(516)] = 12196,
  [SMALL_STATE(517)] = 12200,
  [SMALL_STATE(518)] = 12204,
  [SMALL_STATE(519)] = 12208,
  [SMALL_STATE(520)] = 12212,
  [SMALL_STATE(521)] = 12216,
  [SMALL_STATE(522)] = 12220,
  [SMALL_STATE(523)] = 12224,
  [SMALL_STATE(524)] = 12228,
  [SMALL_STATE(525)] = 12232,
  [SMALL_STATE(526)] = 12236,
  [SMALL_STATE(527)] = 12240,
  [SMALL_STATE(528)] = 12244,
  [SMALL_STATE(529)] = 12248,
  [SMALL_STATE(530)] = 12252,
  [SMALL_STATE(531)] = 12256,
  [SMALL_STATE(532)] = 12260,
  [SMALL_STATE(533)] = 12264,
  [SMALL_STATE(534)] = 12268,
  [SMALL_STATE(535)] = 12272,
  [SMALL_STATE(536)] = 12276,
  [SMALL_STATE(537)] = 12280,
  [SMALL_STATE(538)] = 12284,
  [SMALL_STATE(539)] = 12288,
  [SMALL_STATE(540)] = 12292,
  [SMALL_STATE(541)] = 12296,
  [SMALL_STATE(542)] = 12300,
  [SMALL_STATE(543)] = 12304,
  [SMALL_STATE(544)] = 12308,
  [SMALL_STATE(545)] = 12312,
  [SMALL_STATE(546)] = 12316,
  [SMALL_STATE(547)] = 12320,
  [SMALL_STATE(548)] = 12324,
  [SMALL_STATE(549)] = 12328,
  [SMALL_STATE(550)] = 12332,
  [SMALL_STATE(551)] = 12336,
  [SMALL_STATE(552)] = 12340,
  [SMALL_STATE(553)] = 12344,
  [SMALL_STATE(554)] = 12348,
  [SMALL_STATE(555)] = 12352,
  [SMALL_STATE(556)] = 12356,
  [SMALL_STATE(557)] = 12360,
  [SMALL_STATE(558)] = 12364,
  [SMALL_STATE(559)] = 12368,
  [SMALL_STATE(560)] = 12372,
  [SMALL_STATE(561)] = 12376,
  [SMALL_STATE(562)] = 12380,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 13),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 13),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 14),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 14),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 28),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 28),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 39),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 39),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 41),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 41),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 52),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 52),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_nested_body, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_nested_body, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_nested_body, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(539),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(562),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(536),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(66),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(32),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(476),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(549),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(552),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 34),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 34),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 34),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 34),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(494),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 49),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 49),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_transform_step, 4, 0, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_transform_step, 4, 0, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_case_body, 2, 0, 62),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_case_body, 2, 0, 62),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_until, 5, 0, 63),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_until, 5, 0, 63),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_until, 5, 0, 64),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_until, 5, 0, 64),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_nested_body, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_nested_body, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_nested_body, 4, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_nested_body, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_else_arm, 4, 0, 7),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_else_arm, 4, 0, 7),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_nested_body, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_case_step, 4, 0, 7),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_case_step, 4, 0, 7),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_transform_step, 3, 0, 43),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_transform_step, 3, 0, 43),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_nested_statement, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_nested_statement, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_transform_step, 4, 0, 7),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_transform_step, 4, 0, 7),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_nested_body_repeat1, 2, 0, 0), SHIFT_REPEAT(561),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(132),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(104),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 45),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 45),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 37),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 37),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 31),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 31),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 59),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 59),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 46),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 46),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 50),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 50),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 21),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 21),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 37),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 37),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 37),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 37),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 67),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 67),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 38),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 38),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 27),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 27),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 46),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 46),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 23),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 23),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 29),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 29),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 17),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 17),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 32),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 32),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 33),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 33),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 40),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 40),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 32),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 32),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 40),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 40),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 31),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 3, 0, 31),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 47),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 47),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 48),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 48),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 51),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 51),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 53),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 53),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 53),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 53),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 51),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 51),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 45),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 45),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 58),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 58),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 60),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 5, 0, 60),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 61),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 61),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 61),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 61),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 68),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 68),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 69),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 69),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 71),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 6, 0, 71),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 7),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 7),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 7),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 7),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 10),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 10),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 15),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 15),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 15),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 15),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 15),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 15),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 15),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 15),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 16),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 16),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 16),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 16),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 17),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 17),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 17),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 17),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 29),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 29),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 59),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 59),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_case_body_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_case_body_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [942] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_case_body_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_case_body_repeat1, 2, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 6),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19), SHIFT_REPEAT(316),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [990] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [995] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1012] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [1017] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_case_arm, 4, 0, 72),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_call_list, 1, 0, 42),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_args, 2, 0, 44),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_call_list, 3, 0, 65),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_call_list_repeat1, 2, 0, 66),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_call_list_repeat1, 2, 0, 66), SHIFT_REPEAT(396),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_args, 1, 0, 30),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_call_list, 2, 0, 54),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_call_list, 2, 0, 55),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_step_args_repeat1, 2, 0, 57),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_step_args_repeat1, 2, 0, 57), SHIFT_REPEAT(486),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(558),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26), SHIFT_REPEAT(416),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_call_list_repeat1, 2, 0, 54),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 73),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 21),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 21),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_step_args_repeat1, 2, 0, 56),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arg, 1, 0, 0),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [1184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_call_list_repeat1, 3, 0, 70),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1, 0, 0),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 25),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_text, 1, 0, 0),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_body, 1, 0, 0),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_transform_keyword, 1, 0, 0),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 38),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 27),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1332] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_do_prefix, 1, 0, 0),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
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
