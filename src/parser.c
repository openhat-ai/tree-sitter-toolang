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
#define STATE_COUNT 477
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 33
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
  aux_sym_flow_number_arg_token1 = 14,
  sym_flow_arg = 15,
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
  anon_sym_do = 44,
  anon_sym_ask = 45,
  anon_sym_unfold = 46,
  anon_sym_keep = 47,
  anon_sym_drop = 48,
  anon_sym_rank = 49,
  anon_sym_each = 50,
  anon_sym_fold = 51,
  sym_flow_repeat_keyword = 52,
  sym_flow_until_keyword = 53,
  sym_flow_to_keyword = 54,
  sym_flow_par_keyword = 55,
  sym_optional_marker = 56,
  sym_arrow = 57,
  sym_colon = 58,
  sym_lparen = 59,
  sym_rparen = 60,
  sym_lbracket = 61,
  sym_rbracket = 62,
  sym_comma = 63,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 64,
  sym_frontmatter_delimiter = 65,
  sym_cap_uri = 66,
  sym_cap_shorthand = 67,
  sym_bare_value = 68,
  sym_type_name = 69,
  sym_value_name = 70,
  sym_indented_raw_text = 71,
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
  sym_flow_task_step = 127,
  sym_flow_repeat_step = 128,
  sym_flow_repeat_limit = 129,
  sym_flow_condition_body = 130,
  sym_flow_step_head = 131,
  sym_flow_step_head_part = 132,
  sym_flow_to_modifier = 133,
  sym_flow_par_modifier = 134,
  sym_flow_ref_list = 135,
  sym_flow_number_arg = 136,
  sym_flow_inline_body = 137,
  sym_flow_repeat_count = 138,
  sym_flow_inline_text = 139,
  sym_directive = 140,
  sym_directive_key = 141,
  sym_directive_op = 142,
  sym_directive_csv = 143,
  sym_instruction_section = 144,
  sym_message_section = 145,
  sym_thunk_tail = 146,
  sym_roled_message = 147,
  sym_unroled_message = 148,
  sym_unroled_message_block = 149,
  sym_block_indented_implicit = 150,
  sym_context_block = 151,
  sym_instruct_block = 152,
  sym_roled_message_block = 153,
  sym_pass_statement = 154,
  sym_context_block_kind = 155,
  sym_instruct_block_kind = 156,
  sym_roled_message_kind = 157,
  sym_block_value = 158,
  sym_block_inline = 159,
  sym_block_name = 160,
  sym_block_content_inline = 161,
  sym_psyche_keyword = 162,
  sym_skill_keyword = 163,
  sym_service_keyword = 164,
  sym_prompt_keyword = 165,
  sym_context_keyword = 166,
  sym_instruct_keyword = 167,
  sym_flow_step_keyword = 168,
  sym_assign_operator = 169,
  sym_fence_open = 170,
  sym_fence_close = 171,
  sym_cap_kind = 172,
  sym_inline_text = 173,
  aux_sym_source_file_repeat1 = 174,
  aux_sym_type_repeat1 = 175,
  aux_sym_struct_body_repeat1 = 176,
  aux_sym_cap_indented_repeat1 = 177,
  aux_sym_cap_markdown_repeat1 = 178,
  aux_sym_frontmatter_repeat1 = 179,
  aux_sym_block_indented_repeat1 = 180,
  aux_sym_block_fenced_repeat1 = 181,
  aux_sym_thunk_body_repeat1 = 182,
  aux_sym_thunk_body_repeat2 = 183,
  aux_sym_params_repeat1 = 184,
  aux_sym_flow_body_repeat1 = 185,
  aux_sym_flow_body_tail_repeat1 = 186,
  aux_sym_flow_body_tail_repeat2 = 187,
  aux_sym_flow_step_head_repeat1 = 188,
  aux_sym_flow_ref_list_repeat1 = 189,
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
  [aux_sym_flow_number_arg_token1] = "flow_number_arg_token1",
  [sym_flow_arg] = "flow_arg",
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
  [anon_sym_do] = "do",
  [anon_sym_ask] = "ask",
  [anon_sym_unfold] = "unfold",
  [anon_sym_keep] = "keep",
  [anon_sym_drop] = "drop",
  [anon_sym_rank] = "rank",
  [anon_sym_each] = "each",
  [anon_sym_fold] = "fold",
  [sym_flow_repeat_keyword] = "flow_repeat_keyword",
  [sym_flow_until_keyword] = "flow_until_keyword",
  [sym_flow_to_keyword] = "flow_to_keyword",
  [sym_flow_par_keyword] = "flow_par_keyword",
  [sym_optional_marker] = "optional_marker",
  [sym_arrow] = "arrow",
  [sym_colon] = "colon",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_lbracket] = "lbracket",
  [sym_rbracket] = "rbracket",
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
  [sym_flow_task_step] = "step",
  [sym_flow_repeat_step] = "step",
  [sym_flow_repeat_limit] = "flow_repeat_limit",
  [sym_flow_condition_body] = "flow_condition_body",
  [sym_flow_step_head] = "flow_step_head",
  [sym_flow_step_head_part] = "flow_step_head_part",
  [sym_flow_to_modifier] = "flow_to_modifier",
  [sym_flow_par_modifier] = "flow_par_modifier",
  [sym_flow_ref_list] = "flow_ref_list",
  [sym_flow_number_arg] = "flow_number_arg",
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
  [sym_flow_step_keyword] = "flow_step_keyword",
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
  [aux_sym_flow_step_head_repeat1] = "flow_step_head_repeat1",
  [aux_sym_flow_ref_list_repeat1] = "flow_ref_list_repeat1",
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
  [aux_sym_flow_number_arg_token1] = aux_sym_flow_number_arg_token1,
  [sym_flow_arg] = sym_flow_arg,
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
  [anon_sym_do] = anon_sym_do,
  [anon_sym_ask] = anon_sym_ask,
  [anon_sym_unfold] = anon_sym_unfold,
  [anon_sym_keep] = anon_sym_keep,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_rank] = anon_sym_rank,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_fold] = anon_sym_fold,
  [sym_flow_repeat_keyword] = sym_flow_repeat_keyword,
  [sym_flow_until_keyword] = sym_flow_until_keyword,
  [sym_flow_to_keyword] = sym_flow_to_keyword,
  [sym_flow_par_keyword] = sym_flow_par_keyword,
  [sym_optional_marker] = sym_optional_marker,
  [sym_arrow] = sym_arrow,
  [sym_colon] = sym_colon,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_lbracket] = sym_lbracket,
  [sym_rbracket] = sym_rbracket,
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
  [sym_flow_task_step] = sym_flow_task_step,
  [sym_flow_repeat_step] = sym_flow_task_step,
  [sym_flow_repeat_limit] = sym_flow_repeat_limit,
  [sym_flow_condition_body] = sym_flow_condition_body,
  [sym_flow_step_head] = sym_flow_step_head,
  [sym_flow_step_head_part] = sym_flow_step_head_part,
  [sym_flow_to_modifier] = sym_flow_to_modifier,
  [sym_flow_par_modifier] = sym_flow_par_modifier,
  [sym_flow_ref_list] = sym_flow_ref_list,
  [sym_flow_number_arg] = sym_flow_number_arg,
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
  [sym_flow_step_keyword] = sym_flow_step_keyword,
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
  [aux_sym_flow_step_head_repeat1] = aux_sym_flow_step_head_repeat1,
  [aux_sym_flow_ref_list_repeat1] = aux_sym_flow_ref_list_repeat1,
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
  [aux_sym_flow_number_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_flow_arg] = {
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
  [anon_sym_do] = {
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
  [anon_sym_keep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rank] = {
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
  [sym_lbracket] = {
    .visible = true,
    .named = true,
  },
  [sym_rbracket] = {
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
  [sym_flow_task_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_repeat_step] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_repeat_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_condition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_step_head] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_step_head_part] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_to_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_par_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_ref_list] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_number_arg] = {
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
  [sym_flow_step_keyword] = {
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
  [aux_sym_flow_step_head_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_ref_list_repeat1] = {
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
  field_limit = 17,
  field_messages = 18,
  field_name = 19,
  field_operator = 20,
  field_optional = 21,
  field_output = 22,
  field_param = 23,
  field_params = 24,
  field_part = 25,
  field_reference = 26,
  field_suffix = 27,
  field_tail = 28,
  field_target = 29,
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
  [field_frontmatter] = "frontmatter",
  [field_head] = "head",
  [field_instruction] = "instruction",
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_language] = "language",
  [field_limit] = "limit",
  [field_messages] = "messages",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_optional] = "optional",
  [field_output] = "output",
  [field_param] = "param",
  [field_params] = "params",
  [field_part] = "part",
  [field_reference] = "reference",
  [field_suffix] = "suffix",
  [field_tail] = "tail",
  [field_target] = "target",
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
  [31] = {.index = 66, .length = 1},
  [32] = {.index = 67, .length = 1},
  [33] = {.index = 68, .length = 5},
  [34] = {.index = 73, .length = 2},
  [35] = {.index = 75, .length = 1},
  [36] = {.index = 76, .length = 1},
  [37] = {.index = 77, .length = 2},
  [38] = {.index = 79, .length = 3},
  [39] = {.index = 82, .length = 4},
  [40] = {.index = 86, .length = 5},
  [41] = {.index = 91, .length = 5},
  [42] = {.index = 96, .length = 5},
  [43] = {.index = 101, .length = 2},
  [44] = {.index = 103, .length = 2},
  [45] = {.index = 105, .length = 2},
  [46] = {.index = 107, .length = 2},
  [47] = {.index = 109, .length = 2},
  [48] = {.index = 111, .length = 2},
  [49] = {.index = 113, .length = 1},
  [50] = {.index = 114, .length = 2},
  [51] = {.index = 116, .length = 2},
  [52] = {.index = 118, .length = 3},
  [53] = {.index = 121, .length = 1},
  [54] = {.index = 122, .length = 6},
  [55] = {.index = 128, .length = 6},
  [56] = {.index = 134, .length = 6},
  [57] = {.index = 140, .length = 4},
  [58] = {.index = 144, .length = 1},
  [59] = {.index = 145, .length = 1},
  [60] = {.index = 146, .length = 2},
  [61] = {.index = 148, .length = 2},
  [62] = {.index = 150, .length = 2},
  [63] = {.index = 152, .length = 2},
  [64] = {.index = 154, .length = 2},
  [65] = {.index = 156, .length = 7},
  [66] = {.index = 163, .length = 1},
  [67] = {.index = 164, .length = 1},
  [68] = {.index = 165, .length = 5},
  [69] = {.index = 170, .length = 4},
  [70] = {.index = 174, .length = 4},
  [71] = {.index = 178, .length = 3},
  [72] = {.index = 181, .length = 3},
  [73] = {.index = 184, .length = 2},
  [74] = {.index = 186, .length = 3},
  [75] = {.index = 189, .length = 3},
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
    {field_part, 0},
  [67] =
    {field_close, 2},
  [68] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [73] =
    {field_instruction, 1},
    {field_tail, 2},
  [75] =
    {field_instruction, 2},
  [76] =
    {field_tail, 2},
  [77] =
    {field_instruction, 0},
    {field_tail, 2},
  [79] =
    {field_colon, 1},
    {field_kind, 0},
    {field_value, 2},
  [82] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [86] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [91] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [96] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [101] =
    {field_count, 1},
    {field_keyword, 0},
  [103] =
    {field_target, 0},
    {field_target, 1, .inherited = true},
  [105] =
    {field_keyword, 0},
    {field_type, 1},
  [107] =
    {field_head, 1},
    {field_keyword, 0},
  [109] =
    {field_part, 0},
    {field_part, 1, .inherited = true},
  [111] =
    {field_close, 3},
    {field_language, 1},
  [113] =
    {field_close, 3},
  [114] =
    {field_instruction, 1},
    {field_tail, 3},
  [116] =
    {field_instruction, 2},
    {field_tail, 3},
  [118] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [121] =
    {field_name, 0},
  [122] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [128] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [134] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [140] =
    {field_colon, 2},
    {field_condition, 3},
    {field_condition_keyword, 1},
    {field_keyword, 0},
  [144] =
    {field_count, 1},
  [145] =
    {field_target, 1},
  [146] =
    {field_target, 0, .inherited = true},
    {field_target, 1, .inherited = true},
  [148] =
    {field_part, 0, .inherited = true},
    {field_part, 1, .inherited = true},
  [150] =
    {field_close, 3},
    {field_frontmatter, 2},
  [152] =
    {field_close, 4},
    {field_language, 1},
  [154] =
    {field_instruction, 2},
    {field_tail, 4},
  [156] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [163] =
    {field_text, 1},
  [164] =
    {field_text, 0},
  [165] =
    {field_colon, 3},
    {field_condition, 4},
    {field_condition_keyword, 2},
    {field_keyword, 0},
    {field_limit, 1},
  [170] =
    {field_body, 4},
    {field_colon, 2},
    {field_head, 1},
    {field_keyword, 0},
  [174] =
    {field_body, 3},
    {field_colon, 2},
    {field_head, 1},
    {field_keyword, 0},
  [178] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [181] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [184] =
    {field_close, 4},
    {field_frontmatter, 2},
  [186] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [189] =
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
  [47] = 45,
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 44,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 45,
  [62] = 62,
  [63] = 63,
  [64] = 41,
  [65] = 65,
  [66] = 42,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 37,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 37,
  [77] = 77,
  [78] = 36,
  [79] = 71,
  [80] = 73,
  [81] = 81,
  [82] = 35,
  [83] = 83,
  [84] = 44,
  [85] = 43,
  [86] = 41,
  [87] = 42,
  [88] = 88,
  [89] = 89,
  [90] = 71,
  [91] = 44,
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
  [103] = 46,
  [104] = 73,
  [105] = 37,
  [106] = 45,
  [107] = 107,
  [108] = 41,
  [109] = 42,
  [110] = 44,
  [111] = 111,
  [112] = 97,
  [113] = 98,
  [114] = 100,
  [115] = 94,
  [116] = 45,
  [117] = 117,
  [118] = 118,
  [119] = 99,
  [120] = 93,
  [121] = 95,
  [122] = 96,
  [123] = 41,
  [124] = 42,
  [125] = 125,
  [126] = 46,
  [127] = 45,
  [128] = 128,
  [129] = 44,
  [130] = 130,
  [131] = 41,
  [132] = 42,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 41,
  [137] = 42,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 46,
  [142] = 45,
  [143] = 41,
  [144] = 42,
  [145] = 44,
  [146] = 45,
  [147] = 44,
  [148] = 97,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 95,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 96,
  [169] = 169,
  [170] = 98,
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
  [182] = 100,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
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
  [213] = 45,
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
  [269] = 257,
  [270] = 268,
  [271] = 254,
  [272] = 252,
  [273] = 257,
  [274] = 268,
  [275] = 254,
  [276] = 252,
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
  [290] = 286,
  [291] = 286,
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
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 44,
  [315] = 315,
  [316] = 42,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 41,
  [321] = 42,
  [322] = 322,
  [323] = 323,
  [324] = 44,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 293,
  [330] = 294,
  [331] = 295,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 318,
  [338] = 338,
  [339] = 318,
  [340] = 308,
  [341] = 41,
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
  [354] = 44,
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
  [366] = 44,
  [367] = 367,
  [368] = 41,
  [369] = 42,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 371,
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
  [408] = 371,
  [409] = 384,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 371,
  [414] = 384,
  [415] = 371,
  [416] = 384,
  [417] = 371,
  [418] = 371,
  [419] = 419,
  [420] = 371,
  [421] = 371,
  [422] = 371,
  [423] = 371,
  [424] = 371,
  [425] = 402,
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
  [437] = 41,
  [438] = 42,
  [439] = 44,
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
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 448,
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
  [474] = 448,
  [475] = 475,
  [476] = 476,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(211);
      ADVANCE_MAP(
        '\n', 212,
        '\r', 1,
        '#', 216,
        '(', 298,
        ')', 299,
        '+', 28,
        ',', 303,
        '-', 23,
        ':', 297,
        '=', 245,
        '?', 295,
        'B', 326,
        'J', 329,
        'N', 332,
        'P', 314,
        'T', 317,
        '[', 301,
        ']', 302,
        '`', 32,
        'a', 160,
        'c', 141,
        'd', 61,
        'e', 33,
        'f', 113,
        'h', 35,
        'i', 128,
        'k', 71,
        'm', 56,
        'n', 144,
        'p', 34,
        'r', 37,
        's', 62,
        't', 86,
        'u', 124,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(334);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(212);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 212,
        '\r', 1,
        '#', 216,
        ')', 299,
        ',', 303,
        ':', 297,
        '[', 30,
        'p', 227,
        't', 228,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 212,
        '\r', 1,
        '#', 216,
        '`', 234,
        'd', 345,
        'n', 365,
        '\t', 231,
        '\f', 231,
        ' ', 231,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '(') ADVANCE(298);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 212,
        '\r', 1,
        '#', 11,
        'a', 173,
        'd', 135,
        'e', 33,
        'f', 136,
        'h', 35,
        'k', 71,
        'm', 137,
        'p', 42,
        'r', 37,
        's', 79,
        't', 145,
        'u', 131,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '`') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(213);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\f') SKIP(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(400);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '=') ADVANCE(247);
      if (lookahead == '>') ADVANCE(296);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(296);
      END_STATE();
    case 30:
      if (lookahead == ']') ADVANCE(222);
      END_STATE();
    case 31:
      if (lookahead == '`') ADVANCE(304);
      END_STATE();
    case 32:
      if (lookahead == '`') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'k') ADVANCE(93);
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'k') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 102:
      if (lookahead == 'k') ADVANCE(282);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(286);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(276);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 190:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 191:
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 192:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 193:
      if (lookahead == 'w') ADVANCE(278);
      END_STATE();
    case 194:
      if (lookahead == 'x') ADVANCE(179);
      END_STATE();
    case 195:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 198:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 199:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(236);
      END_STATE();
    case 200:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(200);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 201:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(201);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 202:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(307);
      END_STATE();
    case 203:
      if (eof) ADVANCE(211);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\f') SKIP(203);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(389);
      END_STATE();
    case 204:
      if (eof) ADVANCE(211);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\f') SKIP(204);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(390);
      END_STATE();
    case 205:
      if (eof) ADVANCE(211);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\f') SKIP(205);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(391);
      END_STATE();
    case 206:
      if (eof) ADVANCE(211);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\f') SKIP(206);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'p') ADVANCE(369);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(392);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 207:
      if (eof) ADVANCE(211);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\f') SKIP(207);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(393);
      END_STATE();
    case 208:
      if (eof) ADVANCE(211);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\f') SKIP(208);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(394);
      END_STATE();
    case 209:
      if (eof) ADVANCE(211);
      ADVANCE_MAP(
        '\n', 212,
        '\r', 1,
        '#', 10,
        '[', 300,
        'a', 173,
        'c', 141,
        'd', 135,
        'e', 33,
        'f', 113,
        'i', 128,
        'k', 71,
        'p', 41,
        'r', 38,
        's', 78,
        't', 85,
        'u', 125,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(334);
      END_STATE();
    case 210:
      if (eof) ADVANCE(211);
      ADVANCE_MAP(
        '\n', 212,
        '\r', 1,
        '#', 10,
        'c', 364,
        'f', 354,
        'i', 360,
        'p', 369,
        's', 340,
        't', 348,
        'u', 371,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(210);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_program_doc_comment);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_flow_number_arg_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_flow_number_arg_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_flow_arg);
      if (lookahead == 'a') ADVANCE(229);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_flow_arg);
      if (lookahead == 'o') ADVANCE(292);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_flow_arg);
      if (lookahead == 'r') ADVANCE(294);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_flow_arg);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      ADVANCE_MAP(
        '\n', 212,
        '\r', 1,
        '#', 216,
        '`', 234,
        'd', 345,
        'n', 365,
        '\t', 231,
        '\f', 231,
        ' ', 231,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_keep);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_rank);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_lbracket);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_lbracket);
      if (lookahead == ']') ADVANCE(222);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_rbracket);
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
      if (lookahead == '+') ADVANCE(27);
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
      if (lookahead == 'a') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'k') ADVANCE(350);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'w') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 212,
        '\f', 389,
        '\r', 1,
        '#', 395,
        'a', 499,
        'c', 478,
        'f', 458,
        'h', 401,
        'i', 471,
        'm', 474,
        'p', 406,
        'r', 427,
        's', 428,
        't', 439,
        'u', 495,
        '\t', 389,
        ' ', 389,
      );
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 212,
        '\f', 390,
        '\r', 1,
        '#', 395,
        'a', 499,
        'c', 478,
        'f', 458,
        'i', 471,
        'p', 407,
        's', 434,
        't', 440,
        'u', 495,
        '\t', 390,
        ' ', 390,
      );
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 212,
        '\f', 391,
        '\r', 1,
        '#', 395,
        'a', 498,
        'c', 478,
        'd', 473,
        'e', 403,
        'f', 457,
        'i', 471,
        'k', 433,
        'p', 407,
        'r', 404,
        's', 434,
        't', 441,
        'u', 470,
        '\t', 391,
        ' ', 391,
      );
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 212,
        '\f', 392,
        '\r', 1,
        '#', 395,
        'c', 364,
        'f', 354,
        'i', 360,
        'p', 369,
        's', 340,
        't', 348,
        'u', 371,
        '\t', 392,
        ' ', 392,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 212,
        '\f', 393,
        '\r', 1,
        '#', 395,
        'c', 478,
        'f', 458,
        'i', 471,
        'p', 489,
        's', 434,
        't', 441,
        'u', 502,
        '\t', 393,
        ' ', 393,
      );
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 212,
        '\f', 394,
        '\r', 1,
        '#', 395,
        'a', 499,
        'c', 478,
        'f', 458,
        'i', 471,
        'p', 489,
        's', 434,
        't', 440,
        'u', 495,
        '\t', 394,
        ' ', 394,
      );
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(397);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '!') ADVANCE(399);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'k') ADVANCE(444);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'k') ADVANCE(448);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(528);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(528);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(528);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(528);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(528);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 209},
  [2] = {.lex_state = 203},
  [3] = {.lex_state = 203},
  [4] = {.lex_state = 203},
  [5] = {.lex_state = 203},
  [6] = {.lex_state = 203},
  [7] = {.lex_state = 203},
  [8] = {.lex_state = 203},
  [9] = {.lex_state = 203},
  [10] = {.lex_state = 203},
  [11] = {.lex_state = 203},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 209},
  [16] = {.lex_state = 209},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 209},
  [23] = {.lex_state = 209},
  [24] = {.lex_state = 209},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 209},
  [27] = {.lex_state = 204},
  [28] = {.lex_state = 204},
  [29] = {.lex_state = 204},
  [30] = {.lex_state = 204},
  [31] = {.lex_state = 204},
  [32] = {.lex_state = 209},
  [33] = {.lex_state = 203},
  [34] = {.lex_state = 204},
  [35] = {.lex_state = 205},
  [36] = {.lex_state = 205},
  [37] = {.lex_state = 205},
  [38] = {.lex_state = 208},
  [39] = {.lex_state = 208},
  [40] = {.lex_state = 208},
  [41] = {.lex_state = 203},
  [42] = {.lex_state = 203},
  [43] = {.lex_state = 203},
  [44] = {.lex_state = 203},
  [45] = {.lex_state = 203},
  [46] = {.lex_state = 205},
  [47] = {.lex_state = 205},
  [48] = {.lex_state = 205},
  [49] = {.lex_state = 209},
  [50] = {.lex_state = 204},
  [51] = {.lex_state = 209},
  [52] = {.lex_state = 204},
  [53] = {.lex_state = 204},
  [54] = {.lex_state = 209},
  [55] = {.lex_state = 209},
  [56] = {.lex_state = 209},
  [57] = {.lex_state = 209},
  [58] = {.lex_state = 209},
  [59] = {.lex_state = 209},
  [60] = {.lex_state = 209},
  [61] = {.lex_state = 209},
  [62] = {.lex_state = 209},
  [63] = {.lex_state = 209},
  [64] = {.lex_state = 209},
  [65] = {.lex_state = 209},
  [66] = {.lex_state = 209},
  [67] = {.lex_state = 209},
  [68] = {.lex_state = 209},
  [69] = {.lex_state = 204},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 204},
  [72] = {.lex_state = 204},
  [73] = {.lex_state = 204},
  [74] = {.lex_state = 206},
  [75] = {.lex_state = 206},
  [76] = {.lex_state = 208},
  [77] = {.lex_state = 204},
  [78] = {.lex_state = 208},
  [79] = {.lex_state = 208},
  [80] = {.lex_state = 208},
  [81] = {.lex_state = 206},
  [82] = {.lex_state = 208},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 210},
  [89] = {.lex_state = 210},
  [90] = {.lex_state = 207},
  [91] = {.lex_state = 204},
  [92] = {.lex_state = 204},
  [93] = {.lex_state = 204},
  [94] = {.lex_state = 204},
  [95] = {.lex_state = 204},
  [96] = {.lex_state = 204},
  [97] = {.lex_state = 204},
  [98] = {.lex_state = 204},
  [99] = {.lex_state = 204},
  [100] = {.lex_state = 204},
  [101] = {.lex_state = 204},
  [102] = {.lex_state = 204},
  [103] = {.lex_state = 204},
  [104] = {.lex_state = 207},
  [105] = {.lex_state = 207},
  [106] = {.lex_state = 204},
  [107] = {.lex_state = 204},
  [108] = {.lex_state = 204},
  [109] = {.lex_state = 204},
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
  [121] = {.lex_state = 208},
  [122] = {.lex_state = 208},
  [123] = {.lex_state = 208},
  [124] = {.lex_state = 208},
  [125] = {.lex_state = 208},
  [126] = {.lex_state = 208},
  [127] = {.lex_state = 206},
  [128] = {.lex_state = 206},
  [129] = {.lex_state = 206},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 206},
  [132] = {.lex_state = 206},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 206},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 210},
  [137] = {.lex_state = 210},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 210},
  [140] = {.lex_state = 210},
  [141] = {.lex_state = 207},
  [142] = {.lex_state = 207},
  [143] = {.lex_state = 207},
  [144] = {.lex_state = 207},
  [145] = {.lex_state = 207},
  [146] = {.lex_state = 210},
  [147] = {.lex_state = 210},
  [148] = {.lex_state = 209},
  [149] = {.lex_state = 209},
  [150] = {.lex_state = 209},
  [151] = {.lex_state = 209},
  [152] = {.lex_state = 209},
  [153] = {.lex_state = 209},
  [154] = {.lex_state = 209},
  [155] = {.lex_state = 209},
  [156] = {.lex_state = 209},
  [157] = {.lex_state = 209},
  [158] = {.lex_state = 209},
  [159] = {.lex_state = 209},
  [160] = {.lex_state = 209},
  [161] = {.lex_state = 209},
  [162] = {.lex_state = 209},
  [163] = {.lex_state = 209},
  [164] = {.lex_state = 209},
  [165] = {.lex_state = 209},
  [166] = {.lex_state = 209},
  [167] = {.lex_state = 209},
  [168] = {.lex_state = 209},
  [169] = {.lex_state = 209},
  [170] = {.lex_state = 209},
  [171] = {.lex_state = 209},
  [172] = {.lex_state = 209},
  [173] = {.lex_state = 209},
  [174] = {.lex_state = 209},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 209},
  [177] = {.lex_state = 209},
  [178] = {.lex_state = 209},
  [179] = {.lex_state = 209},
  [180] = {.lex_state = 209},
  [181] = {.lex_state = 209},
  [182] = {.lex_state = 209},
  [183] = {.lex_state = 209},
  [184] = {.lex_state = 209},
  [185] = {.lex_state = 209},
  [186] = {.lex_state = 209},
  [187] = {.lex_state = 209},
  [188] = {.lex_state = 209},
  [189] = {.lex_state = 209},
  [190] = {.lex_state = 209},
  [191] = {.lex_state = 209},
  [192] = {.lex_state = 209},
  [193] = {.lex_state = 209},
  [194] = {.lex_state = 209},
  [195] = {.lex_state = 209},
  [196] = {.lex_state = 209},
  [197] = {.lex_state = 209},
  [198] = {.lex_state = 209},
  [199] = {.lex_state = 209},
  [200] = {.lex_state = 209},
  [201] = {.lex_state = 209},
  [202] = {.lex_state = 209},
  [203] = {.lex_state = 209},
  [204] = {.lex_state = 209},
  [205] = {.lex_state = 209},
  [206] = {.lex_state = 209},
  [207] = {.lex_state = 209},
  [208] = {.lex_state = 209},
  [209] = {.lex_state = 209},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 21},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 21},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 21},
  [285] = {.lex_state = 209},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 209},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 5},
  [342] = {.lex_state = 20},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 198},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 5},
  [347] = {.lex_state = 20},
  [348] = {.lex_state = 20},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 199},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 21},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 199},
  [357] = {.lex_state = 8},
  [358] = {.lex_state = 8},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 21},
  [366] = {.lex_state = 8},
  [367] = {.lex_state = 5},
  [368] = {.lex_state = 8},
  [369] = {.lex_state = 8},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
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
  [388] = {.lex_state = 5},
  [389] = {.lex_state = 5},
  [390] = {.lex_state = 5},
  [391] = {.lex_state = 5},
  [392] = {.lex_state = 5},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 200},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 5},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 198},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 200},
  [426] = {.lex_state = 209},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 199},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 20},
  [439] = {.lex_state = 20},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 5},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 201},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 5},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 5},
  [468] = {.lex_state = 200},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 200},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 5},
  [476] = {.lex_state = 0},
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
    [aux_sym_flow_number_arg_token1] = ACTIONS(1),
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
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_ask] = ACTIONS(1),
    [anon_sym_unfold] = ACTIONS(1),
    [anon_sym_keep] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_rank] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
    [sym_flow_repeat_keyword] = ACTIONS(1),
    [sym_flow_until_keyword] = ACTIONS(1),
    [sym_flow_to_keyword] = ACTIONS(1),
    [sym_flow_par_keyword] = ACTIONS(1),
    [sym_optional_marker] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [sym_lbracket] = ACTIONS(1),
    [sym_rbracket] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_frontmatter_delimiter] = ACTIONS(1),
    [sym_type_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(453),
    [sym_item] = STATE(16),
    [sym_newline] = STATE(61),
    [sym_blank_line] = STATE(16),
    [sym_use] = STATE(202),
    [sym_struct] = STATE(202),
    [sym_psyche] = STATE(202),
    [sym_skill] = STATE(202),
    [sym_service] = STATE(202),
    [sym_prompt] = STATE(202),
    [sym_instruct] = STATE(202),
    [sym_context] = STATE(202),
    [sym_thunk] = STATE(202),
    [sym_flow] = STATE(202),
    [sym_psyche_keyword] = STATE(389),
    [sym_skill_keyword] = STATE(390),
    [sym_service_keyword] = STATE(391),
    [sym_prompt_keyword] = STATE(392),
    [sym_context_keyword] = STATE(367),
    [sym_instruct_keyword] = STATE(346),
    [aux_sym_source_file_repeat1] = STATE(16),
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
    STATE(27), 1,
      sym_instruction_section,
    STATE(45), 1,
      sym_newline,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(150), 1,
      sym_thunk_tail,
    STATE(199), 1,
      sym_message_section,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
    STATE(31), 1,
      sym_instruction_section,
    STATE(45), 1,
      sym_newline,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(161), 1,
      sym_thunk_tail,
    STATE(199), 1,
      sym_message_section,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
    STATE(28), 1,
      sym_instruction_section,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(163), 1,
      sym_thunk_body,
    STATE(199), 1,
      sym_message_section,
    STATE(201), 1,
      sym_thunk_tail,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
    STATE(28), 1,
      sym_instruction_section,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(196), 1,
      sym_thunk_body,
    STATE(199), 1,
      sym_message_section,
    STATE(201), 1,
      sym_thunk_tail,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
    STATE(28), 1,
      sym_instruction_section,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(152), 1,
      sym_thunk_body,
    STATE(199), 1,
      sym_message_section,
    STATE(201), 1,
      sym_thunk_tail,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
    STATE(28), 1,
      sym_instruction_section,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(153), 1,
      sym_thunk_body,
    STATE(199), 1,
      sym_message_section,
    STATE(201), 1,
      sym_thunk_tail,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
    STATE(28), 1,
      sym_instruction_section,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(159), 1,
      sym_thunk_body,
    STATE(199), 1,
      sym_message_section,
    STATE(201), 1,
      sym_thunk_tail,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
    STATE(28), 1,
      sym_instruction_section,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(173), 1,
      sym_thunk_body,
    STATE(199), 1,
      sym_message_section,
    STATE(201), 1,
      sym_thunk_tail,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
    STATE(28), 1,
      sym_instruction_section,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(174), 1,
      sym_thunk_body,
    STATE(199), 1,
      sym_message_section,
    STATE(201), 1,
      sym_thunk_tail,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
    STATE(28), 1,
      sym_instruction_section,
    STATE(53), 1,
      sym_instruct_block,
    STATE(69), 1,
      sym_context_block,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(184), 1,
      sym_thunk_body,
    STATE(199), 1,
      sym_message_section,
    STATE(201), 1,
      sym_thunk_tail,
    STATE(203), 1,
      sym_pass_statement,
    STATE(308), 1,
      sym_directive_key,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(39), 2,
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
  [982] = 18,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(26), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(164), 1,
      sym_flow_body,
    STATE(169), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(213), 1,
      sym_newline,
    STATE(340), 1,
      sym_directive_key,
    STATE(25), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(83), 2,
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
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1054] = 18,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(26), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(156), 1,
      sym_flow_body,
    STATE(169), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(213), 1,
      sym_newline,
    STATE(340), 1,
      sym_directive_key,
    STATE(25), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(83), 2,
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
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1126] = 18,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(26), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(157), 1,
      sym_flow_body,
    STATE(169), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(213), 1,
      sym_newline,
    STATE(340), 1,
      sym_directive_key,
    STATE(25), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(83), 2,
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
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1198] = 23,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_newline_token1,
    ACTIONS(108), 1,
      sym_program_doc_comment,
    ACTIONS(114), 1,
      anon_sym_context,
    ACTIONS(117), 1,
      anon_sym_instruct,
    ACTIONS(120), 1,
      sym_use_keyword,
    ACTIONS(123), 1,
      sym_struct_keyword,
    ACTIONS(126), 1,
      anon_sym_psyche,
    ACTIONS(129), 1,
      anon_sym_skill,
    ACTIONS(132), 1,
      anon_sym_service,
    ACTIONS(135), 1,
      anon_sym_prompt,
    ACTIONS(138), 1,
      sym_thunk_keyword,
    ACTIONS(141), 1,
      sym_flow_keyword,
    STATE(61), 1,
      sym_newline,
    STATE(346), 1,
      sym_instruct_keyword,
    STATE(367), 1,
      sym_context_keyword,
    STATE(389), 1,
      sym_psyche_keyword,
    STATE(390), 1,
      sym_skill_keyword,
    STATE(391), 1,
      sym_service_keyword,
    STATE(392), 1,
      sym_prompt_keyword,
    ACTIONS(111), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(15), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(202), 10,
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
  [1280] = 23,
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
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      sym_program_doc_comment,
    STATE(61), 1,
      sym_newline,
    STATE(346), 1,
      sym_instruct_keyword,
    STATE(367), 1,
      sym_context_keyword,
    STATE(389), 1,
      sym_psyche_keyword,
    STATE(390), 1,
      sym_skill_keyword,
    STATE(391), 1,
      sym_service_keyword,
    STATE(392), 1,
      sym_prompt_keyword,
    ACTIONS(148), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(15), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(202), 10,
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
  [1362] = 18,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(26), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(169), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(207), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(213), 1,
      sym_newline,
    STATE(340), 1,
      sym_directive_key,
    STATE(25), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(83), 2,
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
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1434] = 18,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(26), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(166), 1,
      sym_flow_body,
    STATE(169), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(213), 1,
      sym_newline,
    STATE(340), 1,
      sym_directive_key,
    STATE(25), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(83), 2,
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
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1506] = 18,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(26), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(169), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(188), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(213), 1,
      sym_newline,
    STATE(340), 1,
      sym_directive_key,
    STATE(25), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(83), 2,
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
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1578] = 18,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(26), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(169), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(176), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(213), 1,
      sym_newline,
    STATE(340), 1,
      sym_directive_key,
    STATE(25), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(83), 2,
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
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1650] = 18,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(26), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(169), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(177), 1,
      sym_flow_body,
    STATE(208), 1,
      sym_flow_body_tail,
    STATE(213), 1,
      sym_newline,
    STATE(340), 1,
      sym_directive_key,
    STATE(25), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(83), 2,
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
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1722] = 12,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(61), 1,
      sym_newline,
    STATE(67), 1,
      sym_flow_entry,
    STATE(165), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    ACTIONS(152), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(32), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(150), 12,
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
  [1781] = 12,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(61), 1,
      sym_newline,
    STATE(67), 1,
      sym_flow_entry,
    STATE(165), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    ACTIONS(154), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(24), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(150), 12,
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
  [1840] = 12,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(61), 1,
      sym_newline,
    STATE(67), 1,
      sym_flow_entry,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(209), 1,
      sym_pass_statement,
    ACTIONS(152), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(32), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(156), 12,
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
  [1899] = 17,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(91), 1,
      sym_doc_comment,
    ACTIONS(93), 1,
      sym_comment_line,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(26), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(155), 1,
      sym_flow_body_tail,
    STATE(169), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(213), 1,
      sym_newline,
    STATE(340), 1,
      sym_directive_key,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(70), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(83), 2,
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
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1968] = 12,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    STATE(61), 1,
      sym_newline,
    STATE(67), 1,
      sym_flow_entry,
    STATE(154), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    ACTIONS(160), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(22), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(158), 12,
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
  [2027] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(168), 1,
      sym_comment_line,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(106), 1,
      sym_newline,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(160), 1,
      sym_thunk_tail,
    STATE(199), 1,
      sym_message_section,
    STATE(203), 1,
      sym_pass_statement,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(29), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(39), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(166), 12,
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
  [2097] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      sym_comment_line,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(106), 1,
      sym_newline,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(151), 1,
      sym_thunk_tail,
    STATE(199), 1,
      sym_message_section,
    STATE(203), 1,
      sym_pass_statement,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(39), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(172), 12,
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
  [2167] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      sym_comment_line,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(106), 1,
      sym_newline,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(171), 1,
      sym_thunk_tail,
    STATE(199), 1,
      sym_message_section,
    STATE(203), 1,
      sym_pass_statement,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(39), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(77), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(178), 12,
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
  [2237] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(180), 1,
      sym_comment_line,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(106), 1,
      sym_newline,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(162), 1,
      sym_thunk_tail,
    STATE(199), 1,
      sym_message_section,
    STATE(203), 1,
      sym_pass_statement,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(39), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(77), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(184), 12,
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
  [2307] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      sym_comment_line,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(106), 1,
      sym_newline,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(172), 1,
      sym_thunk_tail,
    STATE(199), 1,
      sym_message_section,
    STATE(203), 1,
      sym_pass_statement,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(34), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(39), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(188), 12,
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
  [2377] = 10,
    ACTIONS(194), 1,
      aux_sym_newline_token1,
    ACTIONS(203), 1,
      sym_flow_repeat_keyword,
    STATE(61), 1,
      sym_newline,
    STATE(67), 1,
      sym_flow_entry,
    STATE(175), 1,
      sym_flow_step_keyword,
    ACTIONS(197), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(32), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(200), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(192), 13,
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
  [2431] = 8,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      aux_sym_newline_token1,
    ACTIONS(213), 1,
      sym_comment_line,
    STATE(45), 1,
      sym_newline,
    STATE(308), 1,
      sym_directive_key,
    STATE(33), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(216), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(211), 17,
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
  [2481] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(180), 1,
      sym_comment_line,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(106), 1,
      sym_newline,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(183), 1,
      sym_thunk_tail,
    STATE(199), 1,
      sym_message_section,
    STATE(203), 1,
      sym_pass_statement,
    STATE(429), 1,
      sym_roled_message_kind,
    STATE(39), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(77), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(221), 12,
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
  [2551] = 6,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(229), 1,
      sym_indented_raw_text,
    STATE(47), 1,
      sym_newline,
    STATE(37), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(227), 23,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [2594] = 6,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(229), 1,
      sym_indented_raw_text,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_newline,
    STATE(35), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(233), 23,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [2637] = 6,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      aux_sym_newline_token1,
    ACTIONS(242), 1,
      sym_indented_raw_text,
    STATE(47), 1,
      sym_newline,
    STATE(37), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(240), 23,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [2680] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      aux_sym_newline_token1,
    ACTIONS(251), 1,
      sym_comment_line,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(116), 1,
      sym_newline,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(429), 1,
      sym_roled_message_kind,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(40), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(249), 12,
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
  [2736] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(247), 1,
      aux_sym_newline_token1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      sym_comment_line,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(116), 1,
      sym_newline,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(429), 1,
      sym_roled_message_kind,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(38), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(255), 12,
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
  [2792] = 13,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 1,
      aux_sym_newline_token1,
    ACTIONS(266), 1,
      sym_comment_line,
    ACTIONS(272), 1,
      sym_indented_raw_text,
    STATE(78), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_unroled_message_block,
    STATE(116), 1,
      sym_newline,
    STATE(117), 1,
      sym_block_indented_implicit,
    STATE(125), 1,
      sym_roled_message_block,
    STATE(429), 1,
      sym_roled_message_kind,
    ACTIONS(269), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(40), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(264), 12,
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
  [2848] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 27,
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
  [2881] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 27,
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
  [2914] = 2,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 27,
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
  [2947] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 27,
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
  [2980] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 27,
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
  [3013] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 25,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3044] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 25,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3075] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 25,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
      sym_indented_raw_text,
  [3106] = 2,
    ACTIONS(301), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(299), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3136] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(180), 1,
      sym_comment_line,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_instruct_block,
    STATE(106), 1,
      sym_newline,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(77), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(305), 16,
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
  [3180] = 2,
    ACTIONS(309), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(307), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3210] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(180), 1,
      sym_comment_line,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_context_block,
    STATE(106), 1,
      sym_newline,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(77), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(305), 16,
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
  [3254] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      sym_comment_line,
    STATE(106), 1,
      sym_newline,
    STATE(107), 1,
      sym_context_block,
    STATE(445), 1,
      sym_context_block_kind,
    STATE(52), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(313), 16,
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
  [3298] = 2,
    ACTIONS(289), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(287), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3328] = 2,
    ACTIONS(319), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(317), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3358] = 2,
    ACTIONS(323), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(321), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3388] = 2,
    ACTIONS(327), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(325), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3418] = 2,
    ACTIONS(331), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(329), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3448] = 2,
    ACTIONS(335), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(333), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3478] = 2,
    ACTIONS(339), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(337), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3508] = 2,
    ACTIONS(293), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(291), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3538] = 2,
    ACTIONS(343), 2,
      sym_doc_comment,
      sym_comment_line,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3568] = 2,
    ACTIONS(347), 2,
      sym_doc_comment,
      sym_comment_line,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3598] = 2,
    ACTIONS(277), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(275), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3628] = 2,
    ACTIONS(351), 2,
      sym_doc_comment,
      sym_comment_line,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3658] = 2,
    ACTIONS(281), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(279), 23,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3688] = 2,
    ACTIONS(355), 2,
      sym_doc_comment,
      sym_comment_line,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3718] = 2,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3748] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      sym_comment_line,
    STATE(106), 1,
      sym_newline,
    STATE(107), 1,
      sym_instruct_block,
    STATE(446), 1,
      sym_instruct_block_kind,
    STATE(50), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(313), 16,
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
  [3792] = 5,
    ACTIONS(365), 1,
      sym_comment_line,
    STATE(340), 1,
      sym_directive_key,
    STATE(70), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(367), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(363), 12,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [3827] = 6,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 1,
      sym_indented_raw_text,
    STATE(106), 1,
      sym_newline,
    STATE(73), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(372), 17,
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
  [3864] = 6,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 1,
      aux_sym_newline_token1,
    ACTIONS(379), 1,
      sym_indented_raw_text,
    STATE(106), 1,
      sym_newline,
    STATE(72), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(240), 17,
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
  [3901] = 6,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(374), 1,
      sym_indented_raw_text,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_newline,
    STATE(72), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(384), 17,
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
  [3938] = 8,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    ACTIONS(392), 1,
      sym_value_name,
    ACTIONS(394), 1,
      sym_indented_raw_text,
    STATE(127), 1,
      sym_newline,
    STATE(398), 1,
      sym_property_key,
    STATE(81), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(390), 13,
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
  [3978] = 8,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    ACTIONS(392), 1,
      sym_value_name,
    ACTIONS(394), 1,
      sym_indented_raw_text,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      sym_newline,
    STATE(398), 1,
      sym_property_key,
    STATE(74), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(398), 13,
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
  [4018] = 6,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      aux_sym_newline_token1,
    ACTIONS(403), 1,
      sym_indented_raw_text,
    STATE(116), 1,
      sym_newline,
    STATE(76), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(240), 16,
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
  [4054] = 6,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    ACTIONS(413), 1,
      sym_comment_line,
    STATE(106), 1,
      sym_newline,
    STATE(77), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(411), 17,
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
  [4090] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      aux_sym_newline_token1,
    STATE(116), 1,
      sym_newline,
    STATE(82), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(233), 16,
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
  [4126] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(247), 1,
      aux_sym_newline_token1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_newline,
    STATE(80), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(372), 16,
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
  [4162] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(247), 1,
      aux_sym_newline_token1,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_newline,
    STATE(76), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(384), 16,
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
  [4198] = 8,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 1,
      aux_sym_newline_token1,
    ACTIONS(423), 1,
      sym_value_name,
    ACTIONS(426), 1,
      sym_indented_raw_text,
    STATE(127), 1,
      sym_newline,
    STATE(398), 1,
      sym_property_key,
    STATE(81), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(421), 13,
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
  [4238] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      aux_sym_newline_token1,
    STATE(116), 1,
      sym_newline,
    STATE(76), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(227), 16,
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
  [4274] = 13,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(97), 1,
      sym_pass_keyword,
    ACTIONS(101), 1,
      sym_flow_repeat_keyword,
    ACTIONS(429), 1,
      sym_doc_comment,
    ACTIONS(431), 1,
      sym_comment_line,
    STATE(23), 1,
      sym_flow_body_statement,
    STATE(67), 1,
      sym_flow_entry,
    STATE(154), 1,
      sym_pass_statement,
    STATE(175), 1,
      sym_flow_step_keyword,
    STATE(213), 1,
      sym_newline,
    STATE(68), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(138), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(99), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [4323] = 2,
    ACTIONS(289), 1,
      sym_comment_line,
    ACTIONS(287), 20,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [4349] = 2,
    ACTIONS(285), 1,
      sym_comment_line,
    ACTIONS(283), 20,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [4375] = 2,
    ACTIONS(277), 1,
      sym_comment_line,
    ACTIONS(275), 20,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [4401] = 2,
    ACTIONS(281), 1,
      sym_comment_line,
    ACTIONS(279), 20,
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
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [4427] = 8,
    ACTIONS(435), 1,
      aux_sym_newline_token1,
    ACTIONS(441), 1,
      sym_value_name,
    STATE(146), 1,
      sym_newline,
    STATE(387), 1,
      sym_field_name,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(437), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(89), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(439), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [4465] = 8,
    ACTIONS(445), 1,
      aux_sym_newline_token1,
    ACTIONS(453), 1,
      sym_value_name,
    STATE(146), 1,
      sym_newline,
    STATE(387), 1,
      sym_field_name,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(448), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(89), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(451), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [4503] = 6,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 1,
      aux_sym_newline_token1,
    ACTIONS(458), 1,
      sym_indented_raw_text,
    STATE(142), 1,
      sym_newline,
    STATE(104), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(372), 13,
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
  [4536] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 19,
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
  [4561] = 2,
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
  [4586] = 2,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    ACTIONS(466), 19,
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
  [4611] = 2,
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
  [4636] = 2,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    ACTIONS(474), 19,
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
  [4661] = 2,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    ACTIONS(478), 19,
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
  [4686] = 2,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
    ACTIONS(482), 19,
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
  [4711] = 2,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    ACTIONS(486), 19,
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
  [4736] = 2,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(490), 19,
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
  [4761] = 2,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    ACTIONS(494), 19,
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
  [4786] = 2,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    ACTIONS(498), 19,
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
  [4811] = 2,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    ACTIONS(502), 19,
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
  [4836] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 19,
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
  [4861] = 6,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 1,
      aux_sym_newline_token1,
    ACTIONS(458), 1,
      sym_indented_raw_text,
    STATE(142), 1,
      sym_newline,
    STATE(105), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(384), 13,
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
  [4894] = 6,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(504), 1,
      aux_sym_newline_token1,
    ACTIONS(507), 1,
      sym_indented_raw_text,
    STATE(142), 1,
      sym_newline,
    STATE(105), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(240), 13,
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
  [4927] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 19,
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
  [4952] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 19,
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
  [4977] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 19,
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
  [5002] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 19,
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
  [5027] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 18,
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
  [5051] = 2,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 18,
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
  [5075] = 2,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
    ACTIONS(482), 18,
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
  [5099] = 2,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    ACTIONS(486), 18,
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
  [5123] = 2,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    ACTIONS(494), 18,
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
  [5147] = 2,
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
  [5171] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 18,
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
  [5195] = 2,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 18,
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
  [5219] = 2,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    ACTIONS(520), 18,
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
  [5243] = 2,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(490), 18,
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
  [5267] = 2,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    ACTIONS(466), 18,
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
  [5291] = 2,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    ACTIONS(474), 18,
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
  [5315] = 2,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    ACTIONS(478), 18,
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
  [5339] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 18,
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
  [5363] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 18,
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
  [5387] = 2,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    ACTIONS(524), 18,
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
  [5411] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 18,
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
  [5435] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 16,
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
  [5457] = 2,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    ACTIONS(528), 16,
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
  [5479] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 16,
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
  [5501] = 13,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(530), 1,
      sym_inline_comment,
    ACTIONS(532), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(536), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(71), 1,
      sym_line_end,
    STATE(101), 1,
      sym_block_value,
    STATE(108), 1,
      sym_newline,
    STATE(290), 1,
      sym_fence_open,
    STATE(294), 1,
      sym_block_name,
    STATE(295), 1,
      sym_block_content_inline,
    STATE(380), 1,
      sym_inline_text,
    ACTIONS(534), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(99), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [5545] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 16,
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
  [5567] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 16,
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
  [5589] = 13,
    ACTIONS(247), 1,
      aux_sym_newline_token1,
    ACTIONS(532), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(536), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(538), 1,
      sym_inline_comment,
    STATE(79), 1,
      sym_line_end,
    STATE(118), 1,
      sym_block_value,
    STATE(123), 1,
      sym_newline,
    STATE(291), 1,
      sym_fence_open,
    STATE(330), 1,
      sym_block_name,
    STATE(331), 1,
      sym_block_content_inline,
    STATE(380), 1,
      sym_inline_text,
    ACTIONS(534), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(119), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [5633] = 2,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 16,
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
  [5655] = 13,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
    ACTIONS(530), 1,
      sym_inline_comment,
    ACTIONS(532), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(536), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(71), 1,
      sym_line_end,
    STATE(102), 1,
      sym_block_value,
    STATE(108), 1,
      sym_newline,
    STATE(290), 1,
      sym_fence_open,
    STATE(294), 1,
      sym_block_name,
    STATE(295), 1,
      sym_block_content_inline,
    STATE(380), 1,
      sym_inline_text,
    ACTIONS(534), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(99), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [5699] = 2,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(277), 13,
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
  [5720] = 2,
    ACTIONS(279), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(281), 13,
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
  [5741] = 6,
    ACTIONS(544), 1,
      aux_sym_newline_token1,
    ACTIONS(547), 1,
      sym_doc_comment,
    ACTIONS(550), 1,
      sym_comment_line,
    STATE(213), 1,
      sym_newline,
    STATE(138), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(553), 10,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [5770] = 2,
    ACTIONS(555), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(557), 13,
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
  [5791] = 2,
    ACTIONS(559), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(561), 13,
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
  [5812] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 15,
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
  [5833] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 15,
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
  [5854] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 15,
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
  [5875] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 15,
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
  [5896] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 15,
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
  [5917] = 2,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(293), 13,
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
  [5938] = 2,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(289), 13,
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
  [5959] = 2,
    ACTIONS(482), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(480), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [5979] = 2,
    ACTIONS(565), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(563), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [5999] = 2,
    ACTIONS(569), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(567), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6019] = 2,
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
  [6039] = 2,
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
  [6059] = 2,
    ACTIONS(581), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(579), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6079] = 2,
    ACTIONS(583), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(150), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6099] = 2,
    ACTIONS(587), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(585), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6119] = 2,
    ACTIONS(591), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(589), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6139] = 2,
    ACTIONS(595), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(593), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6159] = 2,
    ACTIONS(474), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(472), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6179] = 2,
    ACTIONS(599), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(597), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6199] = 2,
    ACTIONS(603), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(601), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6219] = 2,
    ACTIONS(607), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(605), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6239] = 2,
    ACTIONS(611), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(609), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6259] = 2,
    ACTIONS(615), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(613), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6279] = 2,
    ACTIONS(619), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(617), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6299] = 2,
    ACTIONS(621), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(156), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6319] = 2,
    ACTIONS(625), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(623), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6339] = 2,
    ACTIONS(629), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(627), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6359] = 2,
    ACTIONS(478), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(476), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6379] = 2,
    ACTIONS(631), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(158), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6399] = 2,
    ACTIONS(486), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(484), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6419] = 2,
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
  [6439] = 2,
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
  [6459] = 2,
    ACTIONS(643), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(641), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6479] = 2,
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
  [6499] = 12,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(649), 1,
      sym_inline_comment,
    ACTIONS(651), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(653), 1,
      sym_flow_arg,
    ACTIONS(655), 1,
      sym_flow_to_keyword,
    ACTIONS(657), 1,
      sym_flow_par_keyword,
    ACTIONS(659), 1,
      sym_colon,
    STATE(55), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
    STATE(211), 1,
      sym_flow_step_head_part,
    STATE(289), 1,
      sym_flow_step_head,
    STATE(267), 4,
      sym_flow_to_modifier,
      sym_flow_par_modifier,
      sym_flow_ref_list,
      sym_flow_number_arg,
  [6539] = 2,
    ACTIONS(663), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(661), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6559] = 2,
    ACTIONS(667), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(665), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6579] = 2,
    ACTIONS(671), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(669), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6599] = 2,
    ACTIONS(675), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(673), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6619] = 2,
    ACTIONS(679), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(677), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6639] = 2,
    ACTIONS(683), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(681), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6659] = 2,
    ACTIONS(494), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(492), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6679] = 2,
    ACTIONS(687), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(685), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6699] = 2,
    ACTIONS(691), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(689), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6719] = 2,
    ACTIONS(695), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(693), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6739] = 2,
    ACTIONS(699), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(697), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6759] = 2,
    ACTIONS(703), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(701), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6779] = 2,
    ACTIONS(707), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(705), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6799] = 2,
    ACTIONS(711), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(709), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6819] = 2,
    ACTIONS(715), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(713), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6839] = 2,
    ACTIONS(719), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(717), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6859] = 2,
    ACTIONS(723), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(721), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6879] = 2,
    ACTIONS(727), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(725), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6899] = 2,
    ACTIONS(731), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(729), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6919] = 2,
    ACTIONS(735), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(733), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6939] = 2,
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
  [6959] = 2,
    ACTIONS(743), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(741), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6979] = 2,
    ACTIONS(747), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(745), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6999] = 2,
    ACTIONS(751), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(749), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7019] = 2,
    ACTIONS(755), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(753), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7039] = 2,
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
  [7059] = 2,
    ACTIONS(763), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(761), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7079] = 2,
    ACTIONS(767), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(765), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7099] = 2,
    ACTIONS(771), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(769), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7119] = 2,
    ACTIONS(775), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(773), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7139] = 2,
    ACTIONS(779), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(777), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7159] = 2,
    ACTIONS(783), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(781), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7179] = 2,
    ACTIONS(787), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(785), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7199] = 2,
    ACTIONS(791), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(789), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7219] = 8,
    ACTIONS(795), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(798), 1,
      sym_flow_arg,
    ACTIONS(801), 1,
      sym_flow_to_keyword,
    ACTIONS(804), 1,
      sym_flow_par_keyword,
    STATE(210), 1,
      aux_sym_flow_step_head_repeat1,
    STATE(264), 1,
      sym_flow_step_head_part,
    ACTIONS(793), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    STATE(267), 4,
      sym_flow_to_modifier,
      sym_flow_par_modifier,
      sym_flow_ref_list,
      sym_flow_number_arg,
  [7249] = 8,
    ACTIONS(651), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(653), 1,
      sym_flow_arg,
    ACTIONS(655), 1,
      sym_flow_to_keyword,
    ACTIONS(657), 1,
      sym_flow_par_keyword,
    STATE(212), 1,
      aux_sym_flow_step_head_repeat1,
    STATE(264), 1,
      sym_flow_step_head_part,
    ACTIONS(807), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    STATE(267), 4,
      sym_flow_to_modifier,
      sym_flow_par_modifier,
      sym_flow_ref_list,
      sym_flow_number_arg,
  [7279] = 8,
    ACTIONS(651), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(653), 1,
      sym_flow_arg,
    ACTIONS(655), 1,
      sym_flow_to_keyword,
    ACTIONS(657), 1,
      sym_flow_par_keyword,
    STATE(210), 1,
      aux_sym_flow_step_head_repeat1,
    STATE(264), 1,
      sym_flow_step_head_part,
    ACTIONS(809), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    STATE(267), 4,
      sym_flow_to_modifier,
      sym_flow_par_modifier,
      sym_flow_ref_list,
      sym_flow_number_arg,
  [7309] = 2,
    ACTIONS(293), 1,
      sym_comment_line,
    ACTIONS(291), 12,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_pass_keyword,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
      sym_flow_repeat_keyword,
  [7327] = 5,
    ACTIONS(813), 1,
      sym_array_suffix,
    STATE(215), 1,
      aux_sym_type_repeat1,
    STATE(219), 1,
      sym_type_suffix,
    ACTIONS(815), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(811), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7350] = 5,
    ACTIONS(819), 1,
      sym_array_suffix,
    STATE(215), 1,
      aux_sym_type_repeat1,
    STATE(219), 1,
      sym_type_suffix,
    ACTIONS(822), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(817), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7373] = 5,
    ACTIONS(813), 1,
      sym_array_suffix,
    STATE(214), 1,
      aux_sym_type_repeat1,
    STATE(219), 1,
      sym_type_suffix,
    ACTIONS(826), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(824), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7396] = 8,
    ACTIONS(435), 1,
      aux_sym_newline_token1,
    ACTIONS(828), 1,
      sym_doc_comment,
    ACTIONS(830), 1,
      sym_comment_line,
    ACTIONS(832), 1,
      sym_value_name,
    STATE(146), 1,
      sym_newline,
    STATE(206), 1,
      sym_struct_body,
    STATE(387), 1,
      sym_field_name,
    STATE(88), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [7423] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(430), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7444] = 2,
    ACTIONS(840), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(838), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7459] = 2,
    ACTIONS(844), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(842), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7474] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(336), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7495] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(434), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7516] = 2,
    ACTIONS(848), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(846), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7531] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(431), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7552] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(443), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7573] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(450), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7594] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(452), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7615] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(326), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7636] = 2,
    ACTIONS(852), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(850), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7651] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(386), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7672] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(261), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7693] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(462), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7714] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(466), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7735] = 2,
    ACTIONS(856), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(854), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7750] = 5,
    ACTIONS(836), 1,
      sym_type_name,
    STATE(216), 1,
      sym_base_type,
    STATE(383), 1,
      sym_type,
    STATE(229), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(834), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [7771] = 8,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    ACTIONS(860), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(75), 1,
      sym_line_end,
    STATE(131), 1,
      sym_newline,
    STATE(192), 1,
      sym_cap_body,
    STATE(287), 1,
      sym_fence_open,
    STATE(195), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [7797] = 8,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(868), 1,
      sym_frontmatter_delimiter,
    ACTIONS(870), 1,
      sym_fenced_raw_text,
    STATE(179), 1,
      sym_fence_close,
    STATE(251), 1,
      sym_frontmatter,
    STATE(345), 1,
      sym_newline,
    STATE(253), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [7823] = 8,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    ACTIONS(860), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(75), 1,
      sym_line_end,
    STATE(131), 1,
      sym_newline,
    STATE(197), 1,
      sym_cap_body,
    STATE(287), 1,
      sym_fence_open,
    STATE(195), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [7849] = 8,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    ACTIONS(860), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(75), 1,
      sym_line_end,
    STATE(131), 1,
      sym_newline,
    STATE(198), 1,
      sym_cap_body,
    STATE(287), 1,
      sym_fence_open,
    STATE(195), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [7875] = 8,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    ACTIONS(860), 1,
      sym_inline_comment,
    ACTIONS(862), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(75), 1,
      sym_line_end,
    STATE(131), 1,
      sym_newline,
    STATE(200), 1,
      sym_cap_body,
    STATE(287), 1,
      sym_fence_open,
    STATE(195), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [7901] = 4,
    ACTIONS(876), 1,
      sym_comma,
    STATE(248), 1,
      aux_sym_flow_ref_list_repeat1,
    ACTIONS(872), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(874), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [7919] = 4,
    ACTIONS(882), 1,
      sym_comma,
    STATE(242), 1,
      aux_sym_flow_ref_list_repeat1,
    ACTIONS(878), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(880), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [7937] = 8,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(868), 1,
      sym_frontmatter_delimiter,
    ACTIONS(870), 1,
      sym_fenced_raw_text,
    STATE(167), 1,
      sym_fence_close,
    STATE(250), 1,
      sym_frontmatter,
    STATE(345), 1,
      sym_newline,
    STATE(277), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [7963] = 8,
    ACTIONS(862), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(885), 1,
      aux_sym_newline_token1,
    ACTIONS(887), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
    STATE(143), 1,
      sym_newline,
    STATE(178), 1,
      sym_context_body,
    STATE(286), 1,
      sym_fence_open,
    STATE(185), 2,
      sym_block_indented,
      sym_block_fenced,
  [7989] = 8,
    ACTIONS(862), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(885), 1,
      aux_sym_newline_token1,
    ACTIONS(887), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
    STATE(143), 1,
      sym_newline,
    STATE(204), 1,
      sym_context_body,
    STATE(286), 1,
      sym_fence_open,
    STATE(185), 2,
      sym_block_indented,
      sym_block_fenced,
  [8015] = 8,
    ACTIONS(862), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(885), 1,
      aux_sym_newline_token1,
    ACTIONS(887), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
    STATE(143), 1,
      sym_newline,
    STATE(186), 1,
      sym_instruct_body,
    STATE(286), 1,
      sym_fence_open,
    STATE(187), 2,
      sym_block_indented,
      sym_block_fenced,
  [8041] = 8,
    ACTIONS(862), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(885), 1,
      aux_sym_newline_token1,
    ACTIONS(887), 1,
      sym_inline_comment,
    STATE(90), 1,
      sym_line_end,
    STATE(143), 1,
      sym_newline,
    STATE(205), 1,
      sym_instruct_body,
    STATE(286), 1,
      sym_fence_open,
    STATE(187), 2,
      sym_block_indented,
      sym_block_fenced,
  [8067] = 4,
    ACTIONS(876), 1,
      sym_comma,
    STATE(242), 1,
      aux_sym_flow_ref_list_repeat1,
    ACTIONS(889), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(891), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8085] = 2,
    ACTIONS(893), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_comma,
    ACTIONS(895), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8098] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(870), 1,
      sym_fenced_raw_text,
    STATE(180), 1,
      sym_fence_close,
    STATE(345), 1,
      sym_newline,
    STATE(255), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8118] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(870), 1,
      sym_fenced_raw_text,
    STATE(189), 1,
      sym_fence_close,
    STATE(345), 1,
      sym_newline,
    STATE(258), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8138] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    STATE(182), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(279), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8158] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(870), 1,
      sym_fenced_raw_text,
    STATE(190), 1,
      sym_fence_close,
    STATE(345), 1,
      sym_newline,
    STATE(282), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8178] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    STATE(170), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(279), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8198] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(870), 1,
      sym_fenced_raw_text,
    STATE(191), 1,
      sym_fence_close,
    STATE(345), 1,
      sym_newline,
    STATE(282), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8218] = 7,
    ACTIONS(899), 1,
      aux_sym_newline_token1,
    ACTIONS(901), 1,
      sym_inline_comment,
    ACTIONS(903), 1,
      aux_sym_flow_inline_text_token1,
    STATE(49), 1,
      sym_flow_condition_body,
    STATE(335), 1,
      sym_flow_inline_text,
    STATE(348), 1,
      sym_line_end,
    STATE(437), 1,
      sym_newline,
  [8240] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    STATE(158), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(254), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8260] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(870), 1,
      sym_fenced_raw_text,
    STATE(193), 1,
      sym_fence_close,
    STATE(345), 1,
      sym_newline,
    STATE(282), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8280] = 2,
    ACTIONS(905), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(907), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8292] = 7,
    ACTIONS(899), 1,
      aux_sym_newline_token1,
    ACTIONS(901), 1,
      sym_inline_comment,
    ACTIONS(903), 1,
      aux_sym_flow_inline_text_token1,
    STATE(56), 1,
      sym_flow_condition_body,
    STATE(335), 1,
      sym_flow_inline_text,
    STATE(348), 1,
      sym_line_end,
    STATE(437), 1,
      sym_newline,
  [8314] = 2,
    ACTIONS(909), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(911), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8326] = 2,
    ACTIONS(913), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(915), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8338] = 7,
    ACTIONS(899), 1,
      aux_sym_newline_token1,
    ACTIONS(901), 1,
      sym_inline_comment,
    ACTIONS(903), 1,
      aux_sym_flow_inline_text_token1,
    STATE(297), 1,
      sym_flow_inline_body,
    STATE(342), 1,
      sym_line_end,
    STATE(401), 1,
      sym_flow_inline_text,
    STATE(437), 1,
      sym_newline,
  [8360] = 2,
    ACTIONS(917), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(919), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8372] = 7,
    ACTIONS(899), 1,
      aux_sym_newline_token1,
    ACTIONS(901), 1,
      sym_inline_comment,
    ACTIONS(903), 1,
      aux_sym_flow_inline_text_token1,
    STATE(309), 1,
      sym_flow_inline_body,
    STATE(347), 1,
      sym_line_end,
    STATE(401), 1,
      sym_flow_inline_text,
    STATE(437), 1,
      sym_newline,
  [8394] = 2,
    ACTIONS(921), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(923), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8406] = 2,
    ACTIONS(925), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(927), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8418] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    STATE(168), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(252), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8438] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    ACTIONS(929), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(95), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(271), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8458] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    ACTIONS(929), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(96), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(272), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8478] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    ACTIONS(929), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(98), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(279), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8498] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    ACTIONS(929), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(100), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(279), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8518] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    ACTIONS(931), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(121), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(275), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8538] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    ACTIONS(931), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(122), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(276), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8558] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    ACTIONS(931), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(113), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(279), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8578] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(897), 1,
      sym_fenced_raw_text,
    ACTIONS(931), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(114), 1,
      sym_fence_close,
    STATE(370), 1,
      sym_newline,
    STATE(279), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8598] = 6,
    ACTIONS(864), 1,
      aux_sym_newline_token1,
    ACTIONS(866), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(870), 1,
      sym_fenced_raw_text,
    STATE(181), 1,
      sym_fence_close,
    STATE(345), 1,
      sym_newline,
    STATE(282), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8618] = 5,
    ACTIONS(933), 1,
      sym_frontmatter_comment,
    ACTIONS(935), 1,
      sym_frontmatter_delimiter,
    ACTIONS(937), 1,
      sym_value_name,
    STATE(456), 1,
      sym_property_key,
    STATE(284), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [8635] = 5,
    ACTIONS(939), 1,
      aux_sym_newline_token1,
    ACTIONS(942), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(944), 1,
      sym_fenced_raw_text,
    STATE(370), 1,
      sym_newline,
    STATE(279), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8652] = 5,
    ACTIONS(947), 1,
      sym_frontmatter_comment,
    ACTIONS(950), 1,
      sym_frontmatter_delimiter,
    ACTIONS(952), 1,
      sym_value_name,
    STATE(456), 1,
      sym_property_key,
    STATE(280), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [8669] = 6,
    ACTIONS(955), 1,
      sym_arrow,
    ACTIONS(957), 1,
      sym_colon,
    ACTIONS(959), 1,
      sym_lparen,
    ACTIONS(961), 1,
      sym_value_name,
    STATE(334), 1,
      sym_thunk_name,
    STATE(403), 1,
      sym_params,
  [8688] = 5,
    ACTIONS(963), 1,
      aux_sym_newline_token1,
    ACTIONS(966), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(968), 1,
      sym_fenced_raw_text,
    STATE(345), 1,
      sym_newline,
    STATE(282), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8705] = 6,
    ACTIONS(959), 1,
      sym_lparen,
    ACTIONS(971), 1,
      sym_arrow,
    ACTIONS(973), 1,
      sym_colon,
    ACTIONS(975), 1,
      sym_value_name,
    STATE(304), 1,
      sym_flow_name,
    STATE(400), 1,
      sym_params,
  [8724] = 5,
    ACTIONS(937), 1,
      sym_value_name,
    ACTIONS(977), 1,
      sym_frontmatter_comment,
    ACTIONS(979), 1,
      sym_frontmatter_delimiter,
    STATE(456), 1,
      sym_property_key,
    STATE(280), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [8741] = 2,
    STATE(344), 1,
      sym_cap_kind,
    ACTIONS(981), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [8751] = 5,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    ACTIONS(985), 1,
      sym_inline_comment,
    ACTIONS(987), 1,
      sym_block_language,
    STATE(257), 1,
      sym_line_end,
    STATE(368), 1,
      sym_newline,
  [8767] = 5,
    ACTIONS(989), 1,
      aux_sym_newline_token1,
    ACTIONS(991), 1,
      sym_inline_comment,
    ACTIONS(993), 1,
      sym_block_language,
    STATE(243), 1,
      sym_line_end,
    STATE(320), 1,
      sym_newline,
  [8783] = 5,
    ACTIONS(995), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(997), 1,
      sym_flow_until_keyword,
    ACTIONS(999), 1,
      sym_lbracket,
    STATE(296), 1,
      sym_flow_repeat_count,
    STATE(433), 1,
      sym_flow_repeat_limit,
  [8799] = 5,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(649), 1,
      sym_inline_comment,
    ACTIONS(1001), 1,
      sym_colon,
    STATE(51), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
  [8815] = 5,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    ACTIONS(985), 1,
      sym_inline_comment,
    ACTIONS(1003), 1,
      sym_block_language,
    STATE(269), 1,
      sym_line_end,
    STATE(368), 1,
      sym_newline,
  [8831] = 5,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    ACTIONS(985), 1,
      sym_inline_comment,
    ACTIONS(1005), 1,
      sym_block_language,
    STATE(273), 1,
      sym_line_end,
    STATE(368), 1,
      sym_newline,
  [8847] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1007), 1,
      sym_inline_comment,
    STATE(20), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [8860] = 4,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    ACTIONS(1011), 1,
      sym_inline_comment,
    STATE(41), 1,
      sym_newline,
    STATE(43), 1,
      sym_line_end,
  [8873] = 4,
    ACTIONS(1013), 1,
      aux_sym_newline_token1,
    ACTIONS(1015), 1,
      sym_inline_comment,
    STATE(93), 1,
      sym_line_end,
    STATE(108), 1,
      sym_newline,
  [8886] = 4,
    ACTIONS(1013), 1,
      aux_sym_newline_token1,
    ACTIONS(1015), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_line_end,
    STATE(108), 1,
      sym_newline,
  [8899] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(649), 1,
      sym_inline_comment,
    STATE(64), 1,
      sym_newline,
    STATE(65), 1,
      sym_line_end,
  [8912] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(649), 1,
      sym_inline_comment,
    STATE(63), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
  [8925] = 4,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    ACTIONS(1011), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(41), 1,
      sym_newline,
  [8938] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1007), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [8951] = 4,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    ACTIONS(1011), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(41), 1,
      sym_newline,
  [8964] = 4,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    ACTIONS(1011), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(41), 1,
      sym_newline,
  [8977] = 4,
    ACTIONS(989), 1,
      aux_sym_newline_token1,
    ACTIONS(991), 1,
      sym_inline_comment,
    STATE(237), 1,
      sym_line_end,
    STATE(320), 1,
      sym_newline,
  [8990] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1007), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9003] = 4,
    ACTIONS(959), 1,
      sym_lparen,
    ACTIONS(1017), 1,
      sym_arrow,
    ACTIONS(1019), 1,
      sym_colon,
    STATE(377), 1,
      sym_params,
  [9016] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(649), 1,
      sym_inline_comment,
    STATE(64), 1,
      sym_newline,
    STATE(149), 1,
      sym_line_end,
  [9029] = 3,
    ACTIONS(1023), 1,
      sym_comma,
    STATE(332), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1021), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9040] = 4,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    ACTIONS(860), 1,
      sym_inline_comment,
    STATE(128), 1,
      sym_line_end,
    STATE(131), 1,
      sym_newline,
  [9053] = 2,
    STATE(402), 1,
      sym_directive_op,
    ACTIONS(1025), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9062] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(649), 1,
      sym_inline_comment,
    STATE(58), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
  [9075] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(649), 1,
      sym_inline_comment,
    STATE(64), 1,
      sym_newline,
    STATE(194), 1,
      sym_line_end,
  [9088] = 4,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    ACTIONS(1011), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(41), 1,
      sym_newline,
  [9101] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1007), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9114] = 4,
    ACTIONS(1027), 1,
      aux_sym_newline_token1,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(217), 1,
      sym_line_end,
    STATE(341), 1,
      sym_newline,
  [9127] = 2,
    ACTIONS(289), 1,
      sym_comment_line,
    ACTIONS(287), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [9136] = 3,
    ACTIONS(1023), 1,
      sym_comma,
    STATE(306), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1031), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9147] = 2,
    ACTIONS(281), 1,
      sym_comment_line,
    ACTIONS(279), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [9156] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1007), 1,
      sym_inline_comment,
    STATE(19), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9169] = 4,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    ACTIONS(985), 1,
      sym_inline_comment,
    STATE(268), 1,
      sym_line_end,
    STATE(368), 1,
      sym_newline,
  [9182] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1007), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9195] = 1,
    ACTIONS(277), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [9202] = 1,
    ACTIONS(281), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [9209] = 4,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    ACTIONS(1011), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(41), 1,
      sym_newline,
  [9222] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1007), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9235] = 1,
    ACTIONS(289), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [9242] = 4,
    ACTIONS(1033), 1,
      sym_rparen,
    ACTIONS(1035), 1,
      sym_value_name,
    STATE(351), 1,
      sym_param,
    STATE(382), 1,
      sym_param_name,
  [9255] = 4,
    ACTIONS(435), 1,
      aux_sym_newline_token1,
    ACTIONS(1037), 1,
      sym_inline_comment,
    STATE(136), 1,
      sym_newline,
    STATE(140), 1,
      sym_line_end,
  [9268] = 4,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    ACTIONS(1011), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(41), 1,
      sym_newline,
  [9281] = 4,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    ACTIONS(1011), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(41), 1,
      sym_newline,
  [9294] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1007), 1,
      sym_inline_comment,
    STATE(85), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9307] = 4,
    ACTIONS(1039), 1,
      aux_sym_newline_token1,
    ACTIONS(1041), 1,
      sym_inline_comment,
    STATE(120), 1,
      sym_line_end,
    STATE(123), 1,
      sym_newline,
  [9320] = 4,
    ACTIONS(1039), 1,
      aux_sym_newline_token1,
    ACTIONS(1041), 1,
      sym_inline_comment,
    STATE(115), 1,
      sym_line_end,
    STATE(123), 1,
      sym_newline,
  [9333] = 3,
    ACTIONS(1045), 1,
      sym_comma,
    STATE(332), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1043), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9344] = 4,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    ACTIONS(1011), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(41), 1,
      sym_newline,
  [9357] = 4,
    ACTIONS(959), 1,
      sym_lparen,
    ACTIONS(1048), 1,
      sym_arrow,
    ACTIONS(1050), 1,
      sym_colon,
    STATE(393), 1,
      sym_params,
  [9370] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(649), 1,
      sym_inline_comment,
    STATE(60), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
  [9383] = 4,
    ACTIONS(435), 1,
      aux_sym_newline_token1,
    ACTIONS(1037), 1,
      sym_inline_comment,
    STATE(136), 1,
      sym_newline,
    STATE(139), 1,
      sym_line_end,
  [9396] = 4,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    ACTIONS(985), 1,
      sym_inline_comment,
    STATE(270), 1,
      sym_line_end,
    STATE(368), 1,
      sym_newline,
  [9409] = 4,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(1007), 1,
      sym_inline_comment,
    STATE(21), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9422] = 4,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    ACTIONS(985), 1,
      sym_inline_comment,
    STATE(274), 1,
      sym_line_end,
    STATE(368), 1,
      sym_newline,
  [9435] = 2,
    STATE(425), 1,
      sym_directive_op,
    ACTIONS(1025), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9444] = 2,
    ACTIONS(277), 1,
      sym_comment_line,
    ACTIONS(275), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [9453] = 3,
    ACTIONS(1052), 1,
      sym_indented_raw_text,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(62), 1,
      sym_block_indented_implicit,
  [9463] = 1,
    ACTIONS(1054), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_rbracket,
  [9469] = 3,
    ACTIONS(1056), 1,
      sym_cap_uri,
    ACTIONS(1058), 1,
      sym_cap_shorthand,
    STATE(310), 1,
      sym_cap_ref,
  [9479] = 1,
    ACTIONS(1060), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9485] = 3,
    ACTIONS(1062), 1,
      sym_colon,
    ACTIONS(1064), 1,
      sym_value_name,
    STATE(459), 1,
      sym_instruct_name,
  [9495] = 3,
    ACTIONS(1052), 1,
      sym_indented_raw_text,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(57), 1,
      sym_block_indented_implicit,
  [9505] = 3,
    ACTIONS(1052), 1,
      sym_indented_raw_text,
    STATE(36), 1,
      sym_block_indented_content_line,
    STATE(59), 1,
      sym_block_indented_implicit,
  [9515] = 3,
    ACTIONS(1066), 1,
      sym_rparen,
    ACTIONS(1068), 1,
      sym_comma,
    STATE(349), 1,
      aux_sym_params_repeat1,
  [9525] = 3,
    ACTIONS(1071), 1,
      aux_sym_flow_inline_text_token1,
    STATE(307), 1,
      sym_property_value,
    STATE(397), 1,
      sym_inline_text,
  [9535] = 3,
    ACTIONS(1073), 1,
      sym_rparen,
    ACTIONS(1075), 1,
      sym_comma,
    STATE(364), 1,
      aux_sym_params_repeat1,
  [9545] = 1,
    ACTIONS(1077), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9551] = 1,
    ACTIONS(1079), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [9557] = 1,
    ACTIONS(287), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [9563] = 1,
    ACTIONS(1081), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9569] = 3,
    ACTIONS(1071), 1,
      aux_sym_flow_inline_text_token1,
    STATE(397), 1,
      sym_inline_text,
    STATE(428), 1,
      sym_property_value,
  [9579] = 1,
    ACTIONS(1083), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9585] = 1,
    ACTIONS(1085), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9591] = 1,
    ACTIONS(1087), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9597] = 3,
    ACTIONS(1035), 1,
      sym_value_name,
    STATE(378), 1,
      sym_param,
    STATE(382), 1,
      sym_param_name,
  [9607] = 1,
    ACTIONS(1043), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [9613] = 1,
    ACTIONS(1089), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9619] = 1,
    ACTIONS(1091), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9625] = 3,
    ACTIONS(1075), 1,
      sym_comma,
    ACTIONS(1093), 1,
      sym_rparen,
    STATE(349), 1,
      aux_sym_params_repeat1,
  [9635] = 1,
    ACTIONS(1095), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [9641] = 1,
    ACTIONS(289), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9647] = 3,
    ACTIONS(1097), 1,
      sym_colon,
    ACTIONS(1099), 1,
      sym_value_name,
    STATE(444), 1,
      sym_context_name,
  [9657] = 1,
    ACTIONS(277), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9663] = 1,
    ACTIONS(281), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9669] = 1,
    ACTIONS(1101), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9675] = 2,
    ACTIONS(989), 1,
      aux_sym_newline_token1,
    STATE(321), 1,
      sym_newline,
  [9682] = 1,
    ACTIONS(1103), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9687] = 1,
    ACTIONS(1105), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9692] = 1,
    ACTIONS(1107), 2,
      sym_arrow,
      sym_colon,
  [9697] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(66), 1,
      sym_newline,
  [9704] = 1,
    ACTIONS(1109), 2,
      sym_optional_marker,
      sym_colon,
  [9709] = 2,
    ACTIONS(1111), 1,
      sym_arrow,
    ACTIONS(1113), 1,
      sym_colon,
  [9716] = 1,
    ACTIONS(1115), 2,
      sym_rparen,
      sym_comma,
  [9721] = 1,
    ACTIONS(1117), 2,
      sym_arrow,
      sym_colon,
  [9726] = 1,
    ACTIONS(1119), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9731] = 1,
    ACTIONS(1121), 2,
      sym_optional_marker,
      sym_colon,
  [9736] = 2,
    ACTIONS(1123), 1,
      sym_optional_marker,
    ACTIONS(1125), 1,
      sym_colon,
  [9743] = 1,
    ACTIONS(1127), 2,
      sym_rparen,
      sym_comma,
  [9748] = 2,
    ACTIONS(1039), 1,
      aux_sym_newline_token1,
    STATE(126), 1,
      sym_newline,
  [9755] = 1,
    ACTIONS(1129), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9760] = 1,
    ACTIONS(1131), 2,
      sym_rparen,
      sym_comma,
  [9765] = 2,
    ACTIONS(1133), 1,
      sym_optional_marker,
    ACTIONS(1135), 1,
      sym_colon,
  [9772] = 1,
    ACTIONS(1137), 2,
      sym_colon,
      sym_value_name,
  [9777] = 2,
    ACTIONS(1139), 1,
      sym_value_name,
    STATE(447), 1,
      sym_cap_name,
  [9784] = 2,
    ACTIONS(1139), 1,
      sym_value_name,
    STATE(476), 1,
      sym_cap_name,
  [9791] = 2,
    ACTIONS(1139), 1,
      sym_value_name,
    STATE(451), 1,
      sym_cap_name,
  [9798] = 2,
    ACTIONS(1139), 1,
      sym_value_name,
    STATE(457), 1,
      sym_cap_name,
  [9805] = 2,
    ACTIONS(1141), 1,
      sym_arrow,
    ACTIONS(1143), 1,
      sym_colon,
  [9812] = 1,
    ACTIONS(1145), 2,
      sym_arrow,
      sym_colon,
  [9817] = 1,
    ACTIONS(1147), 2,
      anon_sym_EQ,
      sym_colon,
  [9822] = 2,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    STATE(134), 1,
      sym_newline,
  [9829] = 1,
    ACTIONS(1149), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9834] = 2,
    ACTIONS(1151), 1,
      anon_sym_EQ,
    STATE(350), 1,
      sym_assign_operator,
  [9841] = 1,
    ACTIONS(1153), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9846] = 2,
    ACTIONS(1155), 1,
      sym_arrow,
    ACTIONS(1157), 1,
      sym_colon,
  [9853] = 1,
    ACTIONS(1159), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9858] = 2,
    ACTIONS(1161), 1,
      sym_bare_value,
    STATE(293), 1,
      sym_directive_csv,
  [9865] = 2,
    ACTIONS(1163), 1,
      sym_arrow,
    ACTIONS(1165), 1,
      sym_colon,
  [9872] = 2,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    STATE(358), 1,
      sym_newline,
  [9879] = 2,
    ACTIONS(995), 1,
      aux_sym_flow_number_arg_token1,
    STATE(465), 1,
      sym_flow_repeat_count,
  [9886] = 2,
    ACTIONS(1167), 1,
      aux_sym_newline_token1,
    STATE(278), 1,
      sym_newline,
  [9893] = 1,
    ACTIONS(1169), 2,
      sym_colon,
      sym_value_name,
  [9898] = 2,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    STATE(87), 1,
      sym_newline,
  [9905] = 2,
    ACTIONS(885), 1,
      aux_sym_newline_token1,
    STATE(141), 1,
      sym_newline,
  [9912] = 2,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    STATE(357), 1,
      sym_newline,
  [9919] = 2,
    ACTIONS(1171), 1,
      aux_sym_flow_number_arg_token1,
    STATE(262), 1,
      sym_flow_number_arg,
  [9926] = 2,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    STATE(355), 1,
      sym_newline,
  [9933] = 2,
    ACTIONS(885), 1,
      aux_sym_newline_token1,
    STATE(144), 1,
      sym_newline,
  [9940] = 2,
    ACTIONS(1013), 1,
      aux_sym_newline_token1,
    STATE(103), 1,
      sym_newline,
  [9947] = 2,
    ACTIONS(1027), 1,
      aux_sym_newline_token1,
    STATE(316), 1,
      sym_newline,
  [9954] = 2,
    ACTIONS(1173), 1,
      aux_sym_newline_token1,
    STATE(46), 1,
      sym_newline,
  [9961] = 2,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    STATE(132), 1,
      sym_newline,
  [9968] = 2,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    STATE(369), 1,
      sym_newline,
  [9975] = 2,
    ACTIONS(1175), 1,
      sym_cap_uri,
    ACTIONS(1177), 1,
      sym_cap_shorthand,
  [9982] = 2,
    ACTIONS(1013), 1,
      aux_sym_newline_token1,
    STATE(109), 1,
      sym_newline,
  [9989] = 2,
    ACTIONS(1039), 1,
      aux_sym_newline_token1,
    STATE(124), 1,
      sym_newline,
  [9996] = 2,
    ACTIONS(1179), 1,
      aux_sym_newline_token1,
    STATE(438), 1,
      sym_newline,
  [10003] = 2,
    ACTIONS(435), 1,
      aux_sym_newline_token1,
    STATE(137), 1,
      sym_newline,
  [10010] = 2,
    ACTIONS(1009), 1,
      aux_sym_newline_token1,
    STATE(42), 1,
      sym_newline,
  [10017] = 2,
    ACTIONS(1161), 1,
      sym_bare_value,
    STATE(329), 1,
      sym_directive_csv,
  [10024] = 2,
    ACTIONS(1181), 1,
      sym_type_name,
    STATE(461), 1,
      sym_struct_name,
  [10031] = 2,
    ACTIONS(983), 1,
      aux_sym_newline_token1,
    STATE(363), 1,
      sym_newline,
  [10038] = 2,
    ACTIONS(1167), 1,
      aux_sym_newline_token1,
    STATE(365), 1,
      sym_newline,
  [10045] = 1,
    ACTIONS(1183), 1,
      sym_colon,
  [10049] = 1,
    ACTIONS(1185), 1,
      sym_colon,
  [10053] = 1,
    ACTIONS(1187), 1,
      sym_colon,
  [10057] = 1,
    ACTIONS(1189), 1,
      sym_flow_until_keyword,
  [10061] = 1,
    ACTIONS(1191), 1,
      sym_flow_until_keyword,
  [10065] = 1,
    ACTIONS(1193), 1,
      sym_colon,
  [10069] = 1,
    ACTIONS(1195), 1,
      aux_sym_flow_inline_text_token1,
  [10073] = 1,
    ACTIONS(1197), 1,
      sym_colon,
  [10077] = 1,
    ACTIONS(275), 1,
      sym_indented_raw_text,
  [10081] = 1,
    ACTIONS(279), 1,
      sym_indented_raw_text,
  [10085] = 1,
    ACTIONS(287), 1,
      sym_indented_raw_text,
  [10089] = 1,
    ACTIONS(1199), 1,
      sym_colon,
  [10093] = 1,
    ACTIONS(1201), 1,
      sym_colon,
  [10097] = 1,
    ACTIONS(1203), 1,
      sym_colon,
  [10101] = 1,
    ACTIONS(1205), 1,
      sym_colon,
  [10105] = 1,
    ACTIONS(1207), 1,
      sym_colon,
  [10109] = 1,
    ACTIONS(1209), 1,
      sym_colon,
  [10113] = 1,
    ACTIONS(1211), 1,
      sym_colon,
  [10117] = 1,
    ACTIONS(1213), 1,
      sym_colon,
  [10121] = 1,
    ACTIONS(1215), 1,
      aux_sym_newline_token1,
  [10125] = 1,
    ACTIONS(1217), 1,
      sym_value_name,
  [10129] = 1,
    ACTIONS(1219), 1,
      sym_colon,
  [10133] = 1,
    ACTIONS(1221), 1,
      sym_colon,
  [10137] = 1,
    ACTIONS(1223), 1,
      sym_colon,
  [10141] = 1,
    ACTIONS(1225), 1,
      ts_builtin_sym_end,
  [10145] = 1,
    ACTIONS(1227), 1,
      sym_flow_arg,
  [10149] = 1,
    ACTIONS(1229), 1,
      sym_colon,
  [10153] = 1,
    ACTIONS(1231), 1,
      sym_colon,
  [10157] = 1,
    ACTIONS(1233), 1,
      sym_colon,
  [10161] = 1,
    ACTIONS(1235), 1,
      aux_sym_newline_token1,
  [10165] = 1,
    ACTIONS(1237), 1,
      sym_colon,
  [10169] = 1,
    ACTIONS(1239), 1,
      sym_colon,
  [10173] = 1,
    ACTIONS(1241), 1,
      sym_colon,
  [10177] = 1,
    ACTIONS(1243), 1,
      sym_colon,
  [10181] = 1,
    ACTIONS(1245), 1,
      sym_value_name,
  [10185] = 1,
    ACTIONS(1247), 1,
      sym_colon,
  [10189] = 1,
    ACTIONS(1249), 1,
      sym_rbracket,
  [10193] = 1,
    ACTIONS(1251), 1,
      sym_colon,
  [10197] = 1,
    ACTIONS(1253), 1,
      sym_value_name,
  [10201] = 1,
    ACTIONS(1255), 1,
      sym_bare_value,
  [10205] = 1,
    ACTIONS(1257), 1,
      sym_colon,
  [10209] = 1,
    ACTIONS(1259), 1,
      sym_colon,
  [10213] = 1,
    ACTIONS(1261), 1,
      sym_bare_value,
  [10217] = 1,
    ACTIONS(1263), 1,
      sym_colon,
  [10221] = 1,
    ACTIONS(1265), 1,
      sym_colon,
  [10225] = 1,
    ACTIONS(1267), 1,
      aux_sym_newline_token1,
  [10229] = 1,
    ACTIONS(1269), 1,
      sym_value_name,
  [10233] = 1,
    ACTIONS(1271), 1,
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
  [SMALL_STATE(13)] = 1054,
  [SMALL_STATE(14)] = 1126,
  [SMALL_STATE(15)] = 1198,
  [SMALL_STATE(16)] = 1280,
  [SMALL_STATE(17)] = 1362,
  [SMALL_STATE(18)] = 1434,
  [SMALL_STATE(19)] = 1506,
  [SMALL_STATE(20)] = 1578,
  [SMALL_STATE(21)] = 1650,
  [SMALL_STATE(22)] = 1722,
  [SMALL_STATE(23)] = 1781,
  [SMALL_STATE(24)] = 1840,
  [SMALL_STATE(25)] = 1899,
  [SMALL_STATE(26)] = 1968,
  [SMALL_STATE(27)] = 2027,
  [SMALL_STATE(28)] = 2097,
  [SMALL_STATE(29)] = 2167,
  [SMALL_STATE(30)] = 2237,
  [SMALL_STATE(31)] = 2307,
  [SMALL_STATE(32)] = 2377,
  [SMALL_STATE(33)] = 2431,
  [SMALL_STATE(34)] = 2481,
  [SMALL_STATE(35)] = 2551,
  [SMALL_STATE(36)] = 2594,
  [SMALL_STATE(37)] = 2637,
  [SMALL_STATE(38)] = 2680,
  [SMALL_STATE(39)] = 2736,
  [SMALL_STATE(40)] = 2792,
  [SMALL_STATE(41)] = 2848,
  [SMALL_STATE(42)] = 2881,
  [SMALL_STATE(43)] = 2914,
  [SMALL_STATE(44)] = 2947,
  [SMALL_STATE(45)] = 2980,
  [SMALL_STATE(46)] = 3013,
  [SMALL_STATE(47)] = 3044,
  [SMALL_STATE(48)] = 3075,
  [SMALL_STATE(49)] = 3106,
  [SMALL_STATE(50)] = 3136,
  [SMALL_STATE(51)] = 3180,
  [SMALL_STATE(52)] = 3210,
  [SMALL_STATE(53)] = 3254,
  [SMALL_STATE(54)] = 3298,
  [SMALL_STATE(55)] = 3328,
  [SMALL_STATE(56)] = 3358,
  [SMALL_STATE(57)] = 3388,
  [SMALL_STATE(58)] = 3418,
  [SMALL_STATE(59)] = 3448,
  [SMALL_STATE(60)] = 3478,
  [SMALL_STATE(61)] = 3508,
  [SMALL_STATE(62)] = 3538,
  [SMALL_STATE(63)] = 3568,
  [SMALL_STATE(64)] = 3598,
  [SMALL_STATE(65)] = 3628,
  [SMALL_STATE(66)] = 3658,
  [SMALL_STATE(67)] = 3688,
  [SMALL_STATE(68)] = 3718,
  [SMALL_STATE(69)] = 3748,
  [SMALL_STATE(70)] = 3792,
  [SMALL_STATE(71)] = 3827,
  [SMALL_STATE(72)] = 3864,
  [SMALL_STATE(73)] = 3901,
  [SMALL_STATE(74)] = 3938,
  [SMALL_STATE(75)] = 3978,
  [SMALL_STATE(76)] = 4018,
  [SMALL_STATE(77)] = 4054,
  [SMALL_STATE(78)] = 4090,
  [SMALL_STATE(79)] = 4126,
  [SMALL_STATE(80)] = 4162,
  [SMALL_STATE(81)] = 4198,
  [SMALL_STATE(82)] = 4238,
  [SMALL_STATE(83)] = 4274,
  [SMALL_STATE(84)] = 4323,
  [SMALL_STATE(85)] = 4349,
  [SMALL_STATE(86)] = 4375,
  [SMALL_STATE(87)] = 4401,
  [SMALL_STATE(88)] = 4427,
  [SMALL_STATE(89)] = 4465,
  [SMALL_STATE(90)] = 4503,
  [SMALL_STATE(91)] = 4536,
  [SMALL_STATE(92)] = 4561,
  [SMALL_STATE(93)] = 4586,
  [SMALL_STATE(94)] = 4611,
  [SMALL_STATE(95)] = 4636,
  [SMALL_STATE(96)] = 4661,
  [SMALL_STATE(97)] = 4686,
  [SMALL_STATE(98)] = 4711,
  [SMALL_STATE(99)] = 4736,
  [SMALL_STATE(100)] = 4761,
  [SMALL_STATE(101)] = 4786,
  [SMALL_STATE(102)] = 4811,
  [SMALL_STATE(103)] = 4836,
  [SMALL_STATE(104)] = 4861,
  [SMALL_STATE(105)] = 4894,
  [SMALL_STATE(106)] = 4927,
  [SMALL_STATE(107)] = 4952,
  [SMALL_STATE(108)] = 4977,
  [SMALL_STATE(109)] = 5002,
  [SMALL_STATE(110)] = 5027,
  [SMALL_STATE(111)] = 5051,
  [SMALL_STATE(112)] = 5075,
  [SMALL_STATE(113)] = 5099,
  [SMALL_STATE(114)] = 5123,
  [SMALL_STATE(115)] = 5147,
  [SMALL_STATE(116)] = 5171,
  [SMALL_STATE(117)] = 5195,
  [SMALL_STATE(118)] = 5219,
  [SMALL_STATE(119)] = 5243,
  [SMALL_STATE(120)] = 5267,
  [SMALL_STATE(121)] = 5291,
  [SMALL_STATE(122)] = 5315,
  [SMALL_STATE(123)] = 5339,
  [SMALL_STATE(124)] = 5363,
  [SMALL_STATE(125)] = 5387,
  [SMALL_STATE(126)] = 5411,
  [SMALL_STATE(127)] = 5435,
  [SMALL_STATE(128)] = 5457,
  [SMALL_STATE(129)] = 5479,
  [SMALL_STATE(130)] = 5501,
  [SMALL_STATE(131)] = 5545,
  [SMALL_STATE(132)] = 5567,
  [SMALL_STATE(133)] = 5589,
  [SMALL_STATE(134)] = 5633,
  [SMALL_STATE(135)] = 5655,
  [SMALL_STATE(136)] = 5699,
  [SMALL_STATE(137)] = 5720,
  [SMALL_STATE(138)] = 5741,
  [SMALL_STATE(139)] = 5770,
  [SMALL_STATE(140)] = 5791,
  [SMALL_STATE(141)] = 5812,
  [SMALL_STATE(142)] = 5833,
  [SMALL_STATE(143)] = 5854,
  [SMALL_STATE(144)] = 5875,
  [SMALL_STATE(145)] = 5896,
  [SMALL_STATE(146)] = 5917,
  [SMALL_STATE(147)] = 5938,
  [SMALL_STATE(148)] = 5959,
  [SMALL_STATE(149)] = 5979,
  [SMALL_STATE(150)] = 5999,
  [SMALL_STATE(151)] = 6019,
  [SMALL_STATE(152)] = 6039,
  [SMALL_STATE(153)] = 6059,
  [SMALL_STATE(154)] = 6079,
  [SMALL_STATE(155)] = 6099,
  [SMALL_STATE(156)] = 6119,
  [SMALL_STATE(157)] = 6139,
  [SMALL_STATE(158)] = 6159,
  [SMALL_STATE(159)] = 6179,
  [SMALL_STATE(160)] = 6199,
  [SMALL_STATE(161)] = 6219,
  [SMALL_STATE(162)] = 6239,
  [SMALL_STATE(163)] = 6259,
  [SMALL_STATE(164)] = 6279,
  [SMALL_STATE(165)] = 6299,
  [SMALL_STATE(166)] = 6319,
  [SMALL_STATE(167)] = 6339,
  [SMALL_STATE(168)] = 6359,
  [SMALL_STATE(169)] = 6379,
  [SMALL_STATE(170)] = 6399,
  [SMALL_STATE(171)] = 6419,
  [SMALL_STATE(172)] = 6439,
  [SMALL_STATE(173)] = 6459,
  [SMALL_STATE(174)] = 6479,
  [SMALL_STATE(175)] = 6499,
  [SMALL_STATE(176)] = 6539,
  [SMALL_STATE(177)] = 6559,
  [SMALL_STATE(178)] = 6579,
  [SMALL_STATE(179)] = 6599,
  [SMALL_STATE(180)] = 6619,
  [SMALL_STATE(181)] = 6639,
  [SMALL_STATE(182)] = 6659,
  [SMALL_STATE(183)] = 6679,
  [SMALL_STATE(184)] = 6699,
  [SMALL_STATE(185)] = 6719,
  [SMALL_STATE(186)] = 6739,
  [SMALL_STATE(187)] = 6759,
  [SMALL_STATE(188)] = 6779,
  [SMALL_STATE(189)] = 6799,
  [SMALL_STATE(190)] = 6819,
  [SMALL_STATE(191)] = 6839,
  [SMALL_STATE(192)] = 6859,
  [SMALL_STATE(193)] = 6879,
  [SMALL_STATE(194)] = 6899,
  [SMALL_STATE(195)] = 6919,
  [SMALL_STATE(196)] = 6939,
  [SMALL_STATE(197)] = 6959,
  [SMALL_STATE(198)] = 6979,
  [SMALL_STATE(199)] = 6999,
  [SMALL_STATE(200)] = 7019,
  [SMALL_STATE(201)] = 7039,
  [SMALL_STATE(202)] = 7059,
  [SMALL_STATE(203)] = 7079,
  [SMALL_STATE(204)] = 7099,
  [SMALL_STATE(205)] = 7119,
  [SMALL_STATE(206)] = 7139,
  [SMALL_STATE(207)] = 7159,
  [SMALL_STATE(208)] = 7179,
  [SMALL_STATE(209)] = 7199,
  [SMALL_STATE(210)] = 7219,
  [SMALL_STATE(211)] = 7249,
  [SMALL_STATE(212)] = 7279,
  [SMALL_STATE(213)] = 7309,
  [SMALL_STATE(214)] = 7327,
  [SMALL_STATE(215)] = 7350,
  [SMALL_STATE(216)] = 7373,
  [SMALL_STATE(217)] = 7396,
  [SMALL_STATE(218)] = 7423,
  [SMALL_STATE(219)] = 7444,
  [SMALL_STATE(220)] = 7459,
  [SMALL_STATE(221)] = 7474,
  [SMALL_STATE(222)] = 7495,
  [SMALL_STATE(223)] = 7516,
  [SMALL_STATE(224)] = 7531,
  [SMALL_STATE(225)] = 7552,
  [SMALL_STATE(226)] = 7573,
  [SMALL_STATE(227)] = 7594,
  [SMALL_STATE(228)] = 7615,
  [SMALL_STATE(229)] = 7636,
  [SMALL_STATE(230)] = 7651,
  [SMALL_STATE(231)] = 7672,
  [SMALL_STATE(232)] = 7693,
  [SMALL_STATE(233)] = 7714,
  [SMALL_STATE(234)] = 7735,
  [SMALL_STATE(235)] = 7750,
  [SMALL_STATE(236)] = 7771,
  [SMALL_STATE(237)] = 7797,
  [SMALL_STATE(238)] = 7823,
  [SMALL_STATE(239)] = 7849,
  [SMALL_STATE(240)] = 7875,
  [SMALL_STATE(241)] = 7901,
  [SMALL_STATE(242)] = 7919,
  [SMALL_STATE(243)] = 7937,
  [SMALL_STATE(244)] = 7963,
  [SMALL_STATE(245)] = 7989,
  [SMALL_STATE(246)] = 8015,
  [SMALL_STATE(247)] = 8041,
  [SMALL_STATE(248)] = 8067,
  [SMALL_STATE(249)] = 8085,
  [SMALL_STATE(250)] = 8098,
  [SMALL_STATE(251)] = 8118,
  [SMALL_STATE(252)] = 8138,
  [SMALL_STATE(253)] = 8158,
  [SMALL_STATE(254)] = 8178,
  [SMALL_STATE(255)] = 8198,
  [SMALL_STATE(256)] = 8218,
  [SMALL_STATE(257)] = 8240,
  [SMALL_STATE(258)] = 8260,
  [SMALL_STATE(259)] = 8280,
  [SMALL_STATE(260)] = 8292,
  [SMALL_STATE(261)] = 8314,
  [SMALL_STATE(262)] = 8326,
  [SMALL_STATE(263)] = 8338,
  [SMALL_STATE(264)] = 8360,
  [SMALL_STATE(265)] = 8372,
  [SMALL_STATE(266)] = 8394,
  [SMALL_STATE(267)] = 8406,
  [SMALL_STATE(268)] = 8418,
  [SMALL_STATE(269)] = 8438,
  [SMALL_STATE(270)] = 8458,
  [SMALL_STATE(271)] = 8478,
  [SMALL_STATE(272)] = 8498,
  [SMALL_STATE(273)] = 8518,
  [SMALL_STATE(274)] = 8538,
  [SMALL_STATE(275)] = 8558,
  [SMALL_STATE(276)] = 8578,
  [SMALL_STATE(277)] = 8598,
  [SMALL_STATE(278)] = 8618,
  [SMALL_STATE(279)] = 8635,
  [SMALL_STATE(280)] = 8652,
  [SMALL_STATE(281)] = 8669,
  [SMALL_STATE(282)] = 8688,
  [SMALL_STATE(283)] = 8705,
  [SMALL_STATE(284)] = 8724,
  [SMALL_STATE(285)] = 8741,
  [SMALL_STATE(286)] = 8751,
  [SMALL_STATE(287)] = 8767,
  [SMALL_STATE(288)] = 8783,
  [SMALL_STATE(289)] = 8799,
  [SMALL_STATE(290)] = 8815,
  [SMALL_STATE(291)] = 8831,
  [SMALL_STATE(292)] = 8847,
  [SMALL_STATE(293)] = 8860,
  [SMALL_STATE(294)] = 8873,
  [SMALL_STATE(295)] = 8886,
  [SMALL_STATE(296)] = 8899,
  [SMALL_STATE(297)] = 8912,
  [SMALL_STATE(298)] = 8925,
  [SMALL_STATE(299)] = 8938,
  [SMALL_STATE(300)] = 8951,
  [SMALL_STATE(301)] = 8964,
  [SMALL_STATE(302)] = 8977,
  [SMALL_STATE(303)] = 8990,
  [SMALL_STATE(304)] = 9003,
  [SMALL_STATE(305)] = 9016,
  [SMALL_STATE(306)] = 9029,
  [SMALL_STATE(307)] = 9040,
  [SMALL_STATE(308)] = 9053,
  [SMALL_STATE(309)] = 9062,
  [SMALL_STATE(310)] = 9075,
  [SMALL_STATE(311)] = 9088,
  [SMALL_STATE(312)] = 9101,
  [SMALL_STATE(313)] = 9114,
  [SMALL_STATE(314)] = 9127,
  [SMALL_STATE(315)] = 9136,
  [SMALL_STATE(316)] = 9147,
  [SMALL_STATE(317)] = 9156,
  [SMALL_STATE(318)] = 9169,
  [SMALL_STATE(319)] = 9182,
  [SMALL_STATE(320)] = 9195,
  [SMALL_STATE(321)] = 9202,
  [SMALL_STATE(322)] = 9209,
  [SMALL_STATE(323)] = 9222,
  [SMALL_STATE(324)] = 9235,
  [SMALL_STATE(325)] = 9242,
  [SMALL_STATE(326)] = 9255,
  [SMALL_STATE(327)] = 9268,
  [SMALL_STATE(328)] = 9281,
  [SMALL_STATE(329)] = 9294,
  [SMALL_STATE(330)] = 9307,
  [SMALL_STATE(331)] = 9320,
  [SMALL_STATE(332)] = 9333,
  [SMALL_STATE(333)] = 9344,
  [SMALL_STATE(334)] = 9357,
  [SMALL_STATE(335)] = 9370,
  [SMALL_STATE(336)] = 9383,
  [SMALL_STATE(337)] = 9396,
  [SMALL_STATE(338)] = 9409,
  [SMALL_STATE(339)] = 9422,
  [SMALL_STATE(340)] = 9435,
  [SMALL_STATE(341)] = 9444,
  [SMALL_STATE(342)] = 9453,
  [SMALL_STATE(343)] = 9463,
  [SMALL_STATE(344)] = 9469,
  [SMALL_STATE(345)] = 9479,
  [SMALL_STATE(346)] = 9485,
  [SMALL_STATE(347)] = 9495,
  [SMALL_STATE(348)] = 9505,
  [SMALL_STATE(349)] = 9515,
  [SMALL_STATE(350)] = 9525,
  [SMALL_STATE(351)] = 9535,
  [SMALL_STATE(352)] = 9545,
  [SMALL_STATE(353)] = 9551,
  [SMALL_STATE(354)] = 9557,
  [SMALL_STATE(355)] = 9563,
  [SMALL_STATE(356)] = 9569,
  [SMALL_STATE(357)] = 9579,
  [SMALL_STATE(358)] = 9585,
  [SMALL_STATE(359)] = 9591,
  [SMALL_STATE(360)] = 9597,
  [SMALL_STATE(361)] = 9607,
  [SMALL_STATE(362)] = 9613,
  [SMALL_STATE(363)] = 9619,
  [SMALL_STATE(364)] = 9625,
  [SMALL_STATE(365)] = 9635,
  [SMALL_STATE(366)] = 9641,
  [SMALL_STATE(367)] = 9647,
  [SMALL_STATE(368)] = 9657,
  [SMALL_STATE(369)] = 9663,
  [SMALL_STATE(370)] = 9669,
  [SMALL_STATE(371)] = 9675,
  [SMALL_STATE(372)] = 9682,
  [SMALL_STATE(373)] = 9687,
  [SMALL_STATE(374)] = 9692,
  [SMALL_STATE(375)] = 9697,
  [SMALL_STATE(376)] = 9704,
  [SMALL_STATE(377)] = 9709,
  [SMALL_STATE(378)] = 9716,
  [SMALL_STATE(379)] = 9721,
  [SMALL_STATE(380)] = 9726,
  [SMALL_STATE(381)] = 9731,
  [SMALL_STATE(382)] = 9736,
  [SMALL_STATE(383)] = 9743,
  [SMALL_STATE(384)] = 9748,
  [SMALL_STATE(385)] = 9755,
  [SMALL_STATE(386)] = 9760,
  [SMALL_STATE(387)] = 9765,
  [SMALL_STATE(388)] = 9772,
  [SMALL_STATE(389)] = 9777,
  [SMALL_STATE(390)] = 9784,
  [SMALL_STATE(391)] = 9791,
  [SMALL_STATE(392)] = 9798,
  [SMALL_STATE(393)] = 9805,
  [SMALL_STATE(394)] = 9812,
  [SMALL_STATE(395)] = 9817,
  [SMALL_STATE(396)] = 9822,
  [SMALL_STATE(397)] = 9829,
  [SMALL_STATE(398)] = 9834,
  [SMALL_STATE(399)] = 9841,
  [SMALL_STATE(400)] = 9846,
  [SMALL_STATE(401)] = 9853,
  [SMALL_STATE(402)] = 9858,
  [SMALL_STATE(403)] = 9865,
  [SMALL_STATE(404)] = 9872,
  [SMALL_STATE(405)] = 9879,
  [SMALL_STATE(406)] = 9886,
  [SMALL_STATE(407)] = 9893,
  [SMALL_STATE(408)] = 9898,
  [SMALL_STATE(409)] = 9905,
  [SMALL_STATE(410)] = 9912,
  [SMALL_STATE(411)] = 9919,
  [SMALL_STATE(412)] = 9926,
  [SMALL_STATE(413)] = 9933,
  [SMALL_STATE(414)] = 9940,
  [SMALL_STATE(415)] = 9947,
  [SMALL_STATE(416)] = 9954,
  [SMALL_STATE(417)] = 9961,
  [SMALL_STATE(418)] = 9968,
  [SMALL_STATE(419)] = 9975,
  [SMALL_STATE(420)] = 9982,
  [SMALL_STATE(421)] = 9989,
  [SMALL_STATE(422)] = 9996,
  [SMALL_STATE(423)] = 10003,
  [SMALL_STATE(424)] = 10010,
  [SMALL_STATE(425)] = 10017,
  [SMALL_STATE(426)] = 10024,
  [SMALL_STATE(427)] = 10031,
  [SMALL_STATE(428)] = 10038,
  [SMALL_STATE(429)] = 10045,
  [SMALL_STATE(430)] = 10049,
  [SMALL_STATE(431)] = 10053,
  [SMALL_STATE(432)] = 10057,
  [SMALL_STATE(433)] = 10061,
  [SMALL_STATE(434)] = 10065,
  [SMALL_STATE(435)] = 10069,
  [SMALL_STATE(436)] = 10073,
  [SMALL_STATE(437)] = 10077,
  [SMALL_STATE(438)] = 10081,
  [SMALL_STATE(439)] = 10085,
  [SMALL_STATE(440)] = 10089,
  [SMALL_STATE(441)] = 10093,
  [SMALL_STATE(442)] = 10097,
  [SMALL_STATE(443)] = 10101,
  [SMALL_STATE(444)] = 10105,
  [SMALL_STATE(445)] = 10109,
  [SMALL_STATE(446)] = 10113,
  [SMALL_STATE(447)] = 10117,
  [SMALL_STATE(448)] = 10121,
  [SMALL_STATE(449)] = 10125,
  [SMALL_STATE(450)] = 10129,
  [SMALL_STATE(451)] = 10133,
  [SMALL_STATE(452)] = 10137,
  [SMALL_STATE(453)] = 10141,
  [SMALL_STATE(454)] = 10145,
  [SMALL_STATE(455)] = 10149,
  [SMALL_STATE(456)] = 10153,
  [SMALL_STATE(457)] = 10157,
  [SMALL_STATE(458)] = 10161,
  [SMALL_STATE(459)] = 10165,
  [SMALL_STATE(460)] = 10169,
  [SMALL_STATE(461)] = 10173,
  [SMALL_STATE(462)] = 10177,
  [SMALL_STATE(463)] = 10181,
  [SMALL_STATE(464)] = 10185,
  [SMALL_STATE(465)] = 10189,
  [SMALL_STATE(466)] = 10193,
  [SMALL_STATE(467)] = 10197,
  [SMALL_STATE(468)] = 10201,
  [SMALL_STATE(469)] = 10205,
  [SMALL_STATE(470)] = 10209,
  [SMALL_STATE(471)] = 10213,
  [SMALL_STATE(472)] = 10217,
  [SMALL_STATE(473)] = 10221,
  [SMALL_STATE(474)] = 10225,
  [SMALL_STATE(475)] = 10229,
  [SMALL_STATE(476)] = 10233,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 28),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 28),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 13),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 13),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 14),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 14),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 40),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 40),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 42),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 42),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 55),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 55),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(475),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(54),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(32),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(266),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(288),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 35),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 35),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 52),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 52),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 5, 0, 68),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 5, 0, 68),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 3, 0, 46),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 3, 0, 46),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 2, 0, 20),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 2, 0, 20),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 4, 0, 57),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 4, 0, 57),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 4, 0, 7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 4, 0, 7),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 4, 0, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 4, 0, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 66),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 66),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 67),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 67),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 5, 0, 69),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 5, 0, 69),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 5, 0, 70),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 5, 0, 70),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 3, 0, 43),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 3, 0, 43),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(91),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(77),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 53),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 53),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 21),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 21),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 32),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 32),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 48),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 48),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 49),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 49),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 63),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 63),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 38),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 38),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 38),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 38),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 38),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 38),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 71),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 71),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 27),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 27),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 39),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 39),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 17),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 17),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 29),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 29),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 23),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 23),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 29),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 29),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 17),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 17),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 33),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 33),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 34),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 34),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 41),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 41),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 33),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 33),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 41),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 41),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 32),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 3, 0, 32),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 50),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 50),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 51),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 51),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 54),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 54),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 56),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 56),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 56),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 56),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 54),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 54),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 48),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 48),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 62),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 62),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 49),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 49),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 64),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 5, 0, 64),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 65),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 65),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 65),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 65),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 72),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 72),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 63),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 63),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 73),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 73),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 15),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 15),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 74),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 6, 0, 74),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 7),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 7),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 15),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 15),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 15),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 15),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 15),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 15),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 16),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 16),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 16),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 16),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 17),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 17),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 7),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 7),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 10),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 10),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 61),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 61), SHIFT_REPEAT(259),
  [798] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 61), SHIFT_REPEAT(241),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 61), SHIFT_REPEAT(231),
  [804] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 61), SHIFT_REPEAT(411),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_head, 1, 0, 31),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_head, 2, 0, 47),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 6),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 6),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19), SHIFT_REPEAT(220),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 1),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 1, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_ref_list, 1, 0, 30),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_ref_list, 1, 0, 30),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 60),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 60),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 60), SHIFT_REPEAT(454),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_ref_list, 2, 0, 44),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_ref_list, 2, 0, 44),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 59),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 59),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_number_arg, 1, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_number_arg, 1, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_to_modifier, 2, 0, 45),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_to_modifier, 2, 0, 45),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_par_modifier, 2, 0, 43),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_par_modifier, 2, 0, 43),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_step_head_repeat1, 1, 0, 31),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 1, 0, 31),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_keyword, 1, 0, 0),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_step_keyword, 1, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_head_part, 1, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_step_head_part, 1, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [944] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [968] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_count, 1, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26), SHIFT_REPEAT(360),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 21),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 21),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1091] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 75),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1, 0, 0),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 25),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 39),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 27),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_text, 1, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_body, 1, 0, 0),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_limit, 3, 0, 58),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1225] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
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
