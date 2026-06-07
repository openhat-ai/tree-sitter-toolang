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
#define STATE_COUNT 479
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 190
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 32
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 75

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
  aux_sym_flow_number_arg_token1 = 15,
  sym_flow_arg = 16,
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
  anon_sym_do = 45,
  anon_sym_ask = 46,
  anon_sym_unfold = 47,
  anon_sym_keep = 48,
  anon_sym_drop = 49,
  anon_sym_rank = 50,
  anon_sym_each = 51,
  anon_sym_fold = 52,
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
  sym_flow_task_step = 126,
  sym_flow_repeat_step = 127,
  sym_flow_condition_body = 128,
  sym_flow_step_head = 129,
  sym_flow_step_head_part = 130,
  sym_flow_to_modifier = 131,
  sym_flow_par_modifier = 132,
  sym_flow_ref_list = 133,
  sym_flow_number_arg = 134,
  sym_flow_inline_body = 135,
  sym_flow_repeat_count = 136,
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
  sym_flow_step_keyword = 166,
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
  aux_sym_flow_step_head_repeat1 = 186,
  aux_sym_flow_ref_list_repeat1 = 187,
  aux_sym_directive_csv_repeat1 = 188,
  aux_sym_message_section_repeat1 = 189,
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
  [anon_sym_Pack] = anon_sym_Pack,
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
  field_messages = 17,
  field_name = 18,
  field_operator = 19,
  field_optional = 20,
  field_output = 21,
  field_param = 22,
  field_params = 23,
  field_part = 24,
  field_reference = 25,
  field_suffix = 26,
  field_tail = 27,
  field_target = 28,
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
  [59] = {.index = 145, .length = 2},
  [60] = {.index = 147, .length = 2},
  [61] = {.index = 149, .length = 2},
  [62] = {.index = 151, .length = 2},
  [63] = {.index = 153, .length = 2},
  [64] = {.index = 155, .length = 7},
  [65] = {.index = 162, .length = 1},
  [66] = {.index = 163, .length = 1},
  [67] = {.index = 164, .length = 5},
  [68] = {.index = 169, .length = 4},
  [69] = {.index = 173, .length = 4},
  [70] = {.index = 177, .length = 3},
  [71] = {.index = 180, .length = 3},
  [72] = {.index = 183, .length = 2},
  [73] = {.index = 185, .length = 3},
  [74] = {.index = 188, .length = 3},
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
    {field_target, 1},
  [145] =
    {field_target, 0, .inherited = true},
    {field_target, 1, .inherited = true},
  [147] =
    {field_part, 0, .inherited = true},
    {field_part, 1, .inherited = true},
  [149] =
    {field_close, 3},
    {field_frontmatter, 2},
  [151] =
    {field_close, 4},
    {field_language, 1},
  [153] =
    {field_instruction, 2},
    {field_tail, 4},
  [155] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [162] =
    {field_text, 1},
  [163] =
    {field_text, 0},
  [164] =
    {field_colon, 3},
    {field_condition, 4},
    {field_condition_keyword, 2},
    {field_count, 1},
    {field_keyword, 0},
  [169] =
    {field_body, 4},
    {field_colon, 2},
    {field_head, 1},
    {field_keyword, 0},
  [173] =
    {field_body, 3},
    {field_colon, 2},
    {field_head, 1},
    {field_keyword, 0},
  [177] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [180] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [183] =
    {field_close, 4},
    {field_frontmatter, 2},
  [185] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [188] =
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
  [63] = 45,
  [64] = 43,
  [65] = 41,
  [66] = 42,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 35,
  [75] = 36,
  [76] = 76,
  [77] = 37,
  [78] = 78,
  [79] = 79,
  [80] = 35,
  [81] = 73,
  [82] = 72,
  [83] = 83,
  [84] = 42,
  [85] = 44,
  [86] = 43,
  [87] = 41,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 73,
  [97] = 97,
  [98] = 35,
  [99] = 99,
  [100] = 42,
  [101] = 101,
  [102] = 59,
  [103] = 103,
  [104] = 45,
  [105] = 105,
  [106] = 72,
  [107] = 107,
  [108] = 43,
  [109] = 41,
  [110] = 110,
  [111] = 58,
  [112] = 95,
  [113] = 97,
  [114] = 91,
  [115] = 115,
  [116] = 45,
  [117] = 41,
  [118] = 59,
  [119] = 47,
  [120] = 101,
  [121] = 107,
  [122] = 42,
  [123] = 92,
  [124] = 93,
  [125] = 94,
  [126] = 43,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 43,
  [131] = 41,
  [132] = 42,
  [133] = 45,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 45,
  [140] = 43,
  [141] = 42,
  [142] = 41,
  [143] = 45,
  [144] = 59,
  [145] = 42,
  [146] = 43,
  [147] = 41,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 92,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 93,
  [175] = 94,
  [176] = 95,
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
  [188] = 97,
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
  [203] = 45,
  [204] = 204,
  [205] = 205,
  [206] = 43,
  [207] = 41,
  [208] = 208,
  [209] = 209,
  [210] = 42,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 45,
  [215] = 42,
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
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 256,
  [274] = 274,
  [275] = 255,
  [276] = 276,
  [277] = 260,
  [278] = 256,
  [279] = 255,
  [280] = 276,
  [281] = 260,
  [282] = 276,
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
  [295] = 290,
  [296] = 290,
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
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 42,
  [321] = 43,
  [322] = 41,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 43,
  [328] = 41,
  [329] = 42,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 331,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 335,
  [339] = 336,
  [340] = 340,
  [341] = 312,
  [342] = 342,
  [343] = 312,
  [344] = 309,
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
  [358] = 42,
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
  [373] = 43,
  [374] = 41,
  [375] = 42,
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
  [399] = 376,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 376,
  [409] = 378,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 378,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 376,
  [421] = 378,
  [422] = 376,
  [423] = 376,
  [424] = 376,
  [425] = 376,
  [426] = 376,
  [427] = 376,
  [428] = 376,
  [429] = 376,
  [430] = 430,
  [431] = 376,
  [432] = 391,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 43,
  [439] = 41,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 42,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 445,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 445,
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
  [477] = 477,
  [478] = 478,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(212);
      ADVANCE_MAP(
        '\n', 213,
        '\r', 1,
        '#', 217,
        '(', 300,
        ')', 301,
        '+', 29,
        ',', 302,
        '-', 24,
        ':', 299,
        '=', 247,
        '?', 297,
        'B', 327,
        'J', 329,
        'N', 332,
        'P', 313,
        'T', 317,
        '[', 31,
        '`', 33,
        'a', 161,
        'c', 142,
        'd', 63,
        'e', 34,
        'f', 115,
        'h', 36,
        'i', 129,
        'k', 73,
        'm', 58,
        'n', 145,
        'p', 35,
        'r', 38,
        's', 64,
        't', 88,
        'u', 126,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(334);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(213);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\f') SKIP(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(390);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\f') SKIP(3);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'k') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(393);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 213,
        '\r', 1,
        '#', 217,
        ')', 301,
        ',', 302,
        ':', 299,
        '[', 31,
        'p', 229,
        't', 230,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 213,
        '\r', 1,
        '#', 217,
        '`', 236,
        'd', 345,
        'n', 365,
        '\t', 233,
        '\f', 233,
        ' ', 233,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(554);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(216);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(214);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(225);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\f') SKIP(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '>') ADVANCE(298);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(304);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(203);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(298);
      END_STATE();
    case 31:
      if (lookahead == ']') ADVANCE(224);
      END_STATE();
    case 32:
      if (lookahead == '`') ADVANCE(303);
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'k') ADVANCE(100);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(284);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(284);
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(288);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(278);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(240);
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
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 191:
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 192:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 193:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 194:
      if (lookahead == 'w') ADVANCE(280);
      END_STATE();
    case 195:
      if (lookahead == 'x') ADVANCE(180);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 198:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 199:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(238);
      END_STATE();
    case 200:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 201:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(201);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 202:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(202);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 204:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\f') SKIP(204);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(389);
      END_STATE();
    case 205:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\f') SKIP(205);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'k') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(391);
      END_STATE();
    case 206:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\f') SKIP(206);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(392);
      END_STATE();
    case 207:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\f') SKIP(207);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'p') ADVANCE(369);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 208:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\f') SKIP(208);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(395);
      END_STATE();
    case 209:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\f') SKIP(209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      END_STATE();
    case 210:
      if (eof) ADVANCE(212);
      ADVANCE_MAP(
        '\n', 213,
        '\r', 1,
        '#', 11,
        'c', 142,
        'f', 114,
        'i', 129,
        'p', 157,
        's', 80,
        't', 87,
        'u', 176,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(210);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(334);
      END_STATE();
    case 211:
      if (eof) ADVANCE(212);
      ADVANCE_MAP(
        '\n', 213,
        '\r', 1,
        '#', 11,
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
          lookahead == ' ') SKIP(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_program_doc_comment);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Pack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_flow_number_arg_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_flow_number_arg_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_flow_arg);
      if (lookahead == 'a') ADVANCE(231);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_flow_arg);
      if (lookahead == 'o') ADVANCE(294);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_flow_arg);
      if (lookahead == 'r') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_flow_arg);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      ADVANCE_MAP(
        '\n', 213,
        '\r', 1,
        '#', 217,
        '`', 236,
        'd', 345,
        'n', 365,
        '\t', 233,
        '\f', 233,
        ' ', 233,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '`') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_flow_inline_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_flow_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_keep);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_rank);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_flow_to_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(310);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(311);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(308);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(306);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(330);
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
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'k') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(322);
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
      if (lookahead == 'e') ADVANCE(264);
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
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(275);
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
      if (lookahead == 'e') ADVANCE(261);
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
      if (lookahead == 'k') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(272);
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
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(259);
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
      if (lookahead == 'w') ADVANCE(281);
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
        '\n', 213,
        '\f', 389,
        '\r', 1,
        '#', 397,
        'a', 526,
        'c', 497,
        'f', 473,
        'h', 404,
        'i', 490,
        'm', 493,
        'p', 410,
        'r', 436,
        's', 437,
        't', 451,
        'u', 522,
        '\t', 389,
        ' ', 389,
      );
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 213,
        '\f', 390,
        '\r', 1,
        '#', 398,
        'a', 525,
        'd', 492,
        'e', 406,
        'f', 500,
        'h', 404,
        'k', 442,
        'm', 493,
        'p', 412,
        'r', 407,
        's', 445,
        't', 502,
        'u', 489,
        '\t', 390,
        ' ', 390,
      );
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 213,
        '\f', 391,
        '\r', 1,
        '#', 397,
        'a', 525,
        'c', 497,
        'd', 492,
        'e', 406,
        'f', 472,
        'i', 490,
        'k', 442,
        'p', 411,
        'r', 408,
        's', 446,
        't', 453,
        'u', 488,
        '\t', 391,
        ' ', 391,
      );
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 213,
        '\f', 392,
        '\r', 1,
        '#', 397,
        'a', 526,
        'c', 497,
        'f', 473,
        'i', 490,
        'p', 411,
        's', 446,
        't', 452,
        'u', 522,
        '\t', 392,
        ' ', 392,
      );
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 213,
        '\f', 393,
        '\r', 1,
        '#', 398,
        'a', 525,
        'd', 492,
        'e', 406,
        'f', 500,
        'k', 442,
        'p', 413,
        'r', 408,
        'u', 489,
        '\t', 393,
        ' ', 393,
      );
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 213,
        '\f', 394,
        '\r', 1,
        '#', 397,
        'c', 364,
        'f', 354,
        'i', 360,
        'p', 369,
        's', 340,
        't', 348,
        'u', 371,
        '\t', 394,
        ' ', 394,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 213,
        '\f', 395,
        '\r', 1,
        '#', 397,
        'c', 497,
        'f', 473,
        'i', 490,
        'p', 511,
        's', 446,
        't', 453,
        'u', 529,
        '\t', 395,
        ' ', 395,
      );
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 213,
        '\f', 396,
        '\r', 1,
        '#', 397,
        'a', 526,
        'c', 497,
        'f', 473,
        'i', 490,
        'p', 511,
        's', 446,
        't', 452,
        'u', 522,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(400);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(401);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '!') ADVANCE(402);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\f') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'r') ADVANCE(495);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'r') ADVANCE(495);
      if (lookahead == 's') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == 'k') ADVANCE(457);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'k') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'k') ADVANCE(463);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(495);
      if (lookahead == 's') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'w') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(554);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0) ADVANCE(557);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(557);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(557);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(557);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(557);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 210},
  [2] = {.lex_state = 204},
  [3] = {.lex_state = 204},
  [4] = {.lex_state = 204},
  [5] = {.lex_state = 204},
  [6] = {.lex_state = 204},
  [7] = {.lex_state = 204},
  [8] = {.lex_state = 204},
  [9] = {.lex_state = 204},
  [10] = {.lex_state = 204},
  [11] = {.lex_state = 204},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 205},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 205},
  [23] = {.lex_state = 205},
  [24] = {.lex_state = 205},
  [25] = {.lex_state = 205},
  [26] = {.lex_state = 210},
  [27] = {.lex_state = 210},
  [28] = {.lex_state = 206},
  [29] = {.lex_state = 204},
  [30] = {.lex_state = 206},
  [31] = {.lex_state = 206},
  [32] = {.lex_state = 206},
  [33] = {.lex_state = 206},
  [34] = {.lex_state = 206},
  [35] = {.lex_state = 205},
  [36] = {.lex_state = 205},
  [37] = {.lex_state = 205},
  [38] = {.lex_state = 209},
  [39] = {.lex_state = 209},
  [40] = {.lex_state = 209},
  [41] = {.lex_state = 204},
  [42] = {.lex_state = 204},
  [43] = {.lex_state = 204},
  [44] = {.lex_state = 204},
  [45] = {.lex_state = 204},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 205},
  [48] = {.lex_state = 205},
  [49] = {.lex_state = 205},
  [50] = {.lex_state = 205},
  [51] = {.lex_state = 205},
  [52] = {.lex_state = 205},
  [53] = {.lex_state = 205},
  [54] = {.lex_state = 205},
  [55] = {.lex_state = 205},
  [56] = {.lex_state = 205},
  [57] = {.lex_state = 205},
  [58] = {.lex_state = 205},
  [59] = {.lex_state = 205},
  [60] = {.lex_state = 205},
  [61] = {.lex_state = 205},
  [62] = {.lex_state = 205},
  [63] = {.lex_state = 205},
  [64] = {.lex_state = 205},
  [65] = {.lex_state = 205},
  [66] = {.lex_state = 205},
  [67] = {.lex_state = 206},
  [68] = {.lex_state = 206},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 206},
  [71] = {.lex_state = 206},
  [72] = {.lex_state = 206},
  [73] = {.lex_state = 206},
  [74] = {.lex_state = 206},
  [75] = {.lex_state = 209},
  [76] = {.lex_state = 207},
  [77] = {.lex_state = 209},
  [78] = {.lex_state = 207},
  [79] = {.lex_state = 206},
  [80] = {.lex_state = 209},
  [81] = {.lex_state = 209},
  [82] = {.lex_state = 209},
  [83] = {.lex_state = 207},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 211},
  [89] = {.lex_state = 211},
  [90] = {.lex_state = 206},
  [91] = {.lex_state = 206},
  [92] = {.lex_state = 206},
  [93] = {.lex_state = 206},
  [94] = {.lex_state = 206},
  [95] = {.lex_state = 206},
  [96] = {.lex_state = 208},
  [97] = {.lex_state = 206},
  [98] = {.lex_state = 208},
  [99] = {.lex_state = 206},
  [100] = {.lex_state = 206},
  [101] = {.lex_state = 206},
  [102] = {.lex_state = 206},
  [103] = {.lex_state = 206},
  [104] = {.lex_state = 206},
  [105] = {.lex_state = 206},
  [106] = {.lex_state = 208},
  [107] = {.lex_state = 206},
  [108] = {.lex_state = 206},
  [109] = {.lex_state = 206},
  [110] = {.lex_state = 209},
  [111] = {.lex_state = 209},
  [112] = {.lex_state = 209},
  [113] = {.lex_state = 209},
  [114] = {.lex_state = 209},
  [115] = {.lex_state = 209},
  [116] = {.lex_state = 209},
  [117] = {.lex_state = 209},
  [118] = {.lex_state = 209},
  [119] = {.lex_state = 209},
  [120] = {.lex_state = 209},
  [121] = {.lex_state = 209},
  [122] = {.lex_state = 209},
  [123] = {.lex_state = 209},
  [124] = {.lex_state = 209},
  [125] = {.lex_state = 209},
  [126] = {.lex_state = 209},
  [127] = {.lex_state = 207},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 207},
  [130] = {.lex_state = 207},
  [131] = {.lex_state = 207},
  [132] = {.lex_state = 207},
  [133] = {.lex_state = 207},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 211},
  [138] = {.lex_state = 211},
  [139] = {.lex_state = 208},
  [140] = {.lex_state = 208},
  [141] = {.lex_state = 211},
  [142] = {.lex_state = 208},
  [143] = {.lex_state = 211},
  [144] = {.lex_state = 208},
  [145] = {.lex_state = 208},
  [146] = {.lex_state = 211},
  [147] = {.lex_state = 211},
  [148] = {.lex_state = 210},
  [149] = {.lex_state = 210},
  [150] = {.lex_state = 210},
  [151] = {.lex_state = 210},
  [152] = {.lex_state = 210},
  [153] = {.lex_state = 210},
  [154] = {.lex_state = 210},
  [155] = {.lex_state = 210},
  [156] = {.lex_state = 210},
  [157] = {.lex_state = 210},
  [158] = {.lex_state = 210},
  [159] = {.lex_state = 210},
  [160] = {.lex_state = 210},
  [161] = {.lex_state = 210},
  [162] = {.lex_state = 210},
  [163] = {.lex_state = 210},
  [164] = {.lex_state = 210},
  [165] = {.lex_state = 210},
  [166] = {.lex_state = 210},
  [167] = {.lex_state = 210},
  [168] = {.lex_state = 210},
  [169] = {.lex_state = 210},
  [170] = {.lex_state = 210},
  [171] = {.lex_state = 210},
  [172] = {.lex_state = 210},
  [173] = {.lex_state = 210},
  [174] = {.lex_state = 210},
  [175] = {.lex_state = 210},
  [176] = {.lex_state = 210},
  [177] = {.lex_state = 210},
  [178] = {.lex_state = 210},
  [179] = {.lex_state = 210},
  [180] = {.lex_state = 210},
  [181] = {.lex_state = 210},
  [182] = {.lex_state = 210},
  [183] = {.lex_state = 210},
  [184] = {.lex_state = 210},
  [185] = {.lex_state = 210},
  [186] = {.lex_state = 210},
  [187] = {.lex_state = 210},
  [188] = {.lex_state = 210},
  [189] = {.lex_state = 210},
  [190] = {.lex_state = 210},
  [191] = {.lex_state = 210},
  [192] = {.lex_state = 210},
  [193] = {.lex_state = 210},
  [194] = {.lex_state = 210},
  [195] = {.lex_state = 210},
  [196] = {.lex_state = 210},
  [197] = {.lex_state = 210},
  [198] = {.lex_state = 210},
  [199] = {.lex_state = 210},
  [200] = {.lex_state = 210},
  [201] = {.lex_state = 210},
  [202] = {.lex_state = 210},
  [203] = {.lex_state = 210},
  [204] = {.lex_state = 210},
  [205] = {.lex_state = 210},
  [206] = {.lex_state = 210},
  [207] = {.lex_state = 210},
  [208] = {.lex_state = 210},
  [209] = {.lex_state = 210},
  [210] = {.lex_state = 210},
  [211] = {.lex_state = 210},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 210},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 9},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 22},
  [285] = {.lex_state = 22},
  [286] = {.lex_state = 22},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 210},
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
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 7},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 8},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 8},
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
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 199},
  [351] = {.lex_state = 7},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 9},
  [354] = {.lex_state = 200},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 22},
  [359] = {.lex_state = 21},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 22},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 21},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 21},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 9},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 199},
  [373] = {.lex_state = 9},
  [374] = {.lex_state = 9},
  [375] = {.lex_state = 9},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 7},
  [382] = {.lex_state = 7},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 7},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 210},
  [391] = {.lex_state = 201},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 7},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 7},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 7},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 200},
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
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 201},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 21},
  [439] = {.lex_state = 21},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 21},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 201},
  [451] = {.lex_state = 201},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 199},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 7},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 202},
  [470] = {.lex_state = 7},
  [471] = {.lex_state = 7},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 7},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
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
    [sym_comma] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_frontmatter_delimiter] = ACTIONS(1),
    [sym_type_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(434),
    [sym_item] = STATE(27),
    [sym_newline] = STATE(203),
    [sym_blank_line] = STATE(27),
    [sym_use] = STATE(204),
    [sym_struct] = STATE(204),
    [sym_psyche] = STATE(204),
    [sym_skill] = STATE(204),
    [sym_service] = STATE(204),
    [sym_prompt] = STATE(204),
    [sym_instruct] = STATE(204),
    [sym_context] = STATE(204),
    [sym_thunk] = STATE(204),
    [sym_flow] = STATE(204),
    [sym_psyche_keyword] = STATE(381),
    [sym_skill_keyword] = STATE(382),
    [sym_service_keyword] = STATE(388),
    [sym_prompt_keyword] = STATE(393),
    [sym_context_keyword] = STATE(347),
    [sym_instruct_keyword] = STATE(348),
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
    STATE(31), 1,
      sym_instruction_section,
    STATE(45), 1,
      sym_newline,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(157), 1,
      sym_thunk_tail,
    STATE(201), 1,
      sym_message_section,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
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
    STATE(28), 1,
      sym_instruction_section,
    STATE(45), 1,
      sym_newline,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(167), 1,
      sym_thunk_tail,
    STATE(201), 1,
      sym_message_section,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(29), 3,
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
    STATE(34), 1,
      sym_instruction_section,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(160), 1,
      sym_thunk_body,
    STATE(201), 1,
      sym_message_section,
    STATE(202), 1,
      sym_thunk_tail,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
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
    STATE(34), 1,
      sym_instruction_section,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(200), 1,
      sym_thunk_body,
    STATE(201), 1,
      sym_message_section,
    STATE(202), 1,
      sym_thunk_tail,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
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
    STATE(34), 1,
      sym_instruction_section,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(159), 1,
      sym_thunk_body,
    STATE(201), 1,
      sym_message_section,
    STATE(202), 1,
      sym_thunk_tail,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
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
    STATE(34), 1,
      sym_instruction_section,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(148), 1,
      sym_thunk_body,
    STATE(201), 1,
      sym_message_section,
    STATE(202), 1,
      sym_thunk_tail,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
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
    STATE(34), 1,
      sym_instruction_section,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(169), 1,
      sym_thunk_body,
    STATE(201), 1,
      sym_message_section,
    STATE(202), 1,
      sym_thunk_tail,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
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
    STATE(34), 1,
      sym_instruction_section,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(179), 1,
      sym_thunk_body,
    STATE(201), 1,
      sym_message_section,
    STATE(202), 1,
      sym_thunk_tail,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
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
    STATE(34), 1,
      sym_instruction_section,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(180), 1,
      sym_thunk_body,
    STATE(201), 1,
      sym_message_section,
    STATE(202), 1,
      sym_thunk_tail,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
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
    STATE(34), 1,
      sym_instruction_section,
    STATE(67), 1,
      sym_context_block,
    STATE(70), 1,
      sym_instruct_block,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(191), 1,
      sym_thunk_body,
    STATE(201), 1,
      sym_message_section,
    STATE(202), 1,
      sym_thunk_tail,
    STATE(205), 1,
      sym_pass_statement,
    STATE(309), 1,
      sym_directive_key,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
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
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(20), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(208), 1,
      sym_flow_body,
    STATE(209), 1,
      sym_flow_body_tail,
    STATE(211), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    STATE(344), 1,
      sym_directive_key,
    ACTIONS(91), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(46), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1065] = 21,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(20), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(163), 1,
      sym_flow_body,
    STATE(209), 1,
      sym_flow_body_tail,
    STATE(211), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    STATE(344), 1,
      sym_directive_key,
    ACTIONS(91), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(46), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1148] = 21,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(20), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(164), 1,
      sym_flow_body,
    STATE(209), 1,
      sym_flow_body_tail,
    STATE(211), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    STATE(344), 1,
      sym_directive_key,
    ACTIONS(91), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(46), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1231] = 21,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(20), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(182), 1,
      sym_flow_body,
    STATE(209), 1,
      sym_flow_body_tail,
    STATE(211), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    STATE(344), 1,
      sym_directive_key,
    ACTIONS(91), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(46), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1314] = 21,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(20), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(183), 1,
      sym_flow_body,
    STATE(209), 1,
      sym_flow_body_tail,
    STATE(211), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    STATE(344), 1,
      sym_directive_key,
    ACTIONS(91), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(46), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1397] = 21,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(20), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(170), 1,
      sym_flow_body,
    STATE(209), 1,
      sym_flow_body_tail,
    STATE(211), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    STATE(344), 1,
      sym_directive_key,
    ACTIONS(91), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(46), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1480] = 21,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(20), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(172), 1,
      sym_flow_body,
    STATE(209), 1,
      sym_flow_body_tail,
    STATE(211), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    STATE(344), 1,
      sym_directive_key,
    ACTIONS(91), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(46), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1563] = 21,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(20), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(194), 1,
      sym_flow_body,
    STATE(209), 1,
      sym_flow_body_tail,
    STATE(211), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    STATE(344), 1,
      sym_directive_key,
    ACTIONS(91), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(21), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    STATE(46), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    ACTIONS(39), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1646] = 17,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      aux_sym_newline_token1,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(63), 1,
      sym_newline,
    STATE(161), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    ACTIONS(105), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(24), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(103), 11,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1720] = 20,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(20), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(162), 1,
      sym_flow_body_tail,
    STATE(211), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    STATE(344), 1,
      sym_directive_key,
    ACTIONS(91), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(46), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(69), 2,
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
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [1800] = 17,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    ACTIONS(101), 1,
      aux_sym_newline_token1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(63), 1,
      sym_newline,
    STATE(171), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    ACTIONS(111), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(23), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(109), 11,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1874] = 17,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    ACTIONS(101), 1,
      aux_sym_newline_token1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(63), 1,
      sym_newline,
    STATE(181), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    ACTIONS(117), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(25), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(115), 11,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [1948] = 17,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    ACTIONS(101), 1,
      aux_sym_newline_token1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(63), 1,
      sym_newline,
    STATE(171), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    ACTIONS(117), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(25), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(109), 11,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [2022] = 15,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      aux_sym_newline_token1,
    ACTIONS(132), 1,
      sym_flow_repeat_keyword,
    ACTIONS(135), 1,
      sym_indented_raw_text,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(63), 1,
      sym_newline,
    STATE(212), 1,
      sym_flow_step_keyword,
    ACTIONS(126), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(25), 3,
      sym_blank_line,
      sym_flow_body_statement,
      aux_sym_flow_body_tail_repeat2,
    ACTIONS(129), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
    ACTIONS(124), 12,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
      sym_pass_keyword,
  [2091] = 23,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      aux_sym_newline_token1,
    ACTIONS(143), 1,
      sym_program_doc_comment,
    ACTIONS(149), 1,
      anon_sym_context,
    ACTIONS(152), 1,
      anon_sym_instruct,
    ACTIONS(155), 1,
      sym_use_keyword,
    ACTIONS(158), 1,
      sym_struct_keyword,
    ACTIONS(161), 1,
      anon_sym_psyche,
    ACTIONS(164), 1,
      anon_sym_skill,
    ACTIONS(167), 1,
      anon_sym_service,
    ACTIONS(170), 1,
      anon_sym_prompt,
    ACTIONS(173), 1,
      sym_thunk_keyword,
    ACTIONS(176), 1,
      sym_flow_keyword,
    STATE(203), 1,
      sym_newline,
    STATE(347), 1,
      sym_context_keyword,
    STATE(348), 1,
      sym_instruct_keyword,
    STATE(381), 1,
      sym_psyche_keyword,
    STATE(382), 1,
      sym_skill_keyword,
    STATE(388), 1,
      sym_service_keyword,
    STATE(393), 1,
      sym_prompt_keyword,
    ACTIONS(146), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(26), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(204), 10,
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
  [2173] = 23,
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
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      sym_program_doc_comment,
    STATE(203), 1,
      sym_newline,
    STATE(347), 1,
      sym_context_keyword,
    STATE(348), 1,
      sym_instruct_keyword,
    STATE(381), 1,
      sym_psyche_keyword,
    STATE(382), 1,
      sym_skill_keyword,
    STATE(388), 1,
      sym_service_keyword,
    STATE(393), 1,
      sym_prompt_keyword,
    ACTIONS(183), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(26), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(204), 10,
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
  [2255] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(191), 1,
      sym_comment_line,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(104), 1,
      sym_newline,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(178), 1,
      sym_thunk_tail,
    STATE(201), 1,
      sym_message_section,
    STATE(205), 1,
      sym_pass_statement,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(33), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(38), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(189), 12,
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
  [2325] = 8,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      aux_sym_newline_token1,
    ACTIONS(200), 1,
      sym_comment_line,
    STATE(45), 1,
      sym_newline,
    STATE(309), 1,
      sym_directive_key,
    STATE(29), 3,
      sym_blank_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(203), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(198), 17,
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
  [2375] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      sym_comment_line,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(104), 1,
      sym_newline,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(177), 1,
      sym_thunk_tail,
    STATE(201), 1,
      sym_message_section,
    STATE(205), 1,
      sym_pass_statement,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(79), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(45), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(208), 12,
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
  [2445] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      sym_comment_line,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(104), 1,
      sym_newline,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(166), 1,
      sym_thunk_tail,
    STATE(201), 1,
      sym_message_section,
    STATE(205), 1,
      sym_pass_statement,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(30), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(38), 2,
      sym_roled_message,
      sym_unroled_message,
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
  [2515] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(210), 1,
      sym_comment_line,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(104), 1,
      sym_newline,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(168), 1,
      sym_thunk_tail,
    STATE(201), 1,
      sym_message_section,
    STATE(205), 1,
      sym_pass_statement,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(79), 2,
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
  [2585] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(210), 1,
      sym_comment_line,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(104), 1,
      sym_newline,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(190), 1,
      sym_thunk_tail,
    STATE(201), 1,
      sym_message_section,
    STATE(205), 1,
      sym_pass_statement,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(38), 2,
      sym_roled_message,
      sym_unroled_message,
    STATE(79), 2,
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
  [2655] = 18,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      sym_comment_line,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(104), 1,
      sym_newline,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(158), 1,
      sym_thunk_tail,
    STATE(201), 1,
      sym_message_section,
    STATE(205), 1,
      sym_pass_statement,
    STATE(468), 1,
      sym_roled_message_kind,
    STATE(32), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(38), 2,
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
  [2725] = 6,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      aux_sym_newline_token1,
    ACTIONS(239), 1,
      sym_indented_raw_text,
    STATE(63), 1,
      sym_newline,
    STATE(35), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(237), 23,
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
  [2768] = 6,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    ACTIONS(101), 1,
      aux_sym_newline_token1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_newline,
    STATE(35), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(244), 23,
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
  [2811] = 6,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    ACTIONS(101), 1,
      aux_sym_newline_token1,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_newline,
    STATE(36), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(248), 23,
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
  [2854] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      aux_sym_newline_token1,
    ACTIONS(256), 1,
      sym_comment_line,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(116), 1,
      sym_newline,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(468), 1,
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
    ACTIONS(254), 12,
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
  [2910] = 13,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      aux_sym_newline_token1,
    ACTIONS(265), 1,
      sym_comment_line,
    ACTIONS(271), 1,
      sym_indented_raw_text,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(116), 1,
      sym_newline,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(468), 1,
      sym_roled_message_kind,
    ACTIONS(268), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(39), 4,
      sym_blank_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(263), 12,
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
  [2966] = 13,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(252), 1,
      aux_sym_newline_token1,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 1,
      sym_comment_line,
    STATE(77), 1,
      sym_block_indented_content_line,
    STATE(111), 1,
      sym_block_indented_implicit,
    STATE(115), 1,
      sym_roled_message_block,
    STATE(116), 1,
      sym_newline,
    STATE(119), 1,
      sym_unroled_message_block,
    STATE(468), 1,
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
    ACTIONS(276), 12,
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
  [3022] = 2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 27,
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
  [3055] = 2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 27,
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
  [3088] = 2,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 27,
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
  [3121] = 2,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 27,
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
  [3154] = 2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 27,
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
  [3187] = 16,
    ACTIONS(47), 1,
      sym_pass_keyword,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_flow_repeat_keyword,
    ACTIONS(97), 1,
      sym_indented_raw_text,
    STATE(22), 1,
      sym_flow_body_statement,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(47), 1,
      sym_unroled_message_block,
    STATE(58), 1,
      sym_block_indented_implicit,
    STATE(161), 1,
      sym_pass_statement,
    STATE(212), 1,
      sym_flow_step_keyword,
    STATE(214), 1,
      sym_newline,
    ACTIONS(300), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(55), 2,
      sym_flow_entry,
      sym_unroled_message,
    STATE(57), 2,
      sym_flow_task_step,
      sym_flow_repeat_step,
    STATE(135), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(93), 8,
      anon_sym_do,
      anon_sym_ask,
      anon_sym_unfold,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_rank,
      anon_sym_each,
      anon_sym_fold,
  [3247] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 25,
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
  [3278] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 25,
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
  [3309] = 2,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 25,
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
  [3340] = 2,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 25,
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
  [3371] = 2,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 25,
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
  [3402] = 2,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 25,
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
  [3433] = 2,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 25,
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
  [3464] = 2,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 25,
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
  [3495] = 2,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 25,
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
  [3526] = 2,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 25,
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
  [3557] = 2,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 25,
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
  [3588] = 2,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 25,
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
  [3619] = 2,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 25,
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
  [3650] = 2,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 25,
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
  [3681] = 2,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 25,
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
  [3712] = 2,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 25,
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
  [3743] = 2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 25,
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
  [3774] = 2,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 25,
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
  [3805] = 2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 25,
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
  [3836] = 2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 25,
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
  [3867] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      sym_comment_line,
    STATE(104), 1,
      sym_newline,
    STATE(105), 1,
      sym_instruct_block,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(71), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(368), 16,
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
  [3911] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(210), 1,
      sym_comment_line,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      sym_context_block,
    STATE(104), 1,
      sym_newline,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(79), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(374), 16,
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
  [3955] = 4,
    STATE(344), 1,
      sym_directive_key,
    STATE(69), 2,
      sym_directive,
      aux_sym_flow_body_repeat1,
    ACTIONS(378), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(376), 14,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
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
  [3989] = 9,
    ACTIONS(41), 1,
      anon_sym_context,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(381), 1,
      sym_comment_line,
    STATE(104), 1,
      sym_newline,
    STATE(105), 1,
      sym_context_block,
    STATE(464), 1,
      sym_context_block_kind,
    STATE(68), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(368), 16,
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
  [4033] = 9,
    ACTIONS(43), 1,
      anon_sym_instruct,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(210), 1,
      sym_comment_line,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      sym_instruct_block,
    STATE(104), 1,
      sym_newline,
    STATE(467), 1,
      sym_instruct_block_kind,
    STATE(79), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(374), 16,
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
  [4077] = 6,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(387), 1,
      sym_indented_raw_text,
    STATE(104), 1,
      sym_newline,
    STATE(74), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(385), 17,
      sym_program_doc_comment,
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
  [4114] = 6,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(387), 1,
      sym_indented_raw_text,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym_newline,
    STATE(72), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(391), 17,
      sym_program_doc_comment,
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
  [4151] = 6,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 1,
      aux_sym_newline_token1,
    ACTIONS(396), 1,
      sym_indented_raw_text,
    STATE(104), 1,
      sym_newline,
    STATE(74), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(237), 17,
      sym_program_doc_comment,
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
  [4188] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      aux_sym_newline_token1,
    STATE(116), 1,
      sym_newline,
    STATE(80), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(244), 16,
      sym_program_doc_comment,
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
  [4224] = 8,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 1,
      aux_sym_newline_token1,
    ACTIONS(406), 1,
      sym_value_name,
    ACTIONS(409), 1,
      sym_indented_raw_text,
    STATE(133), 1,
      sym_newline,
    STATE(430), 1,
      sym_property_key,
    STATE(76), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(404), 13,
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
  [4264] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      aux_sym_newline_token1,
    STATE(116), 1,
      sym_newline,
    STATE(75), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(248), 16,
      sym_program_doc_comment,
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
  [4300] = 8,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      aux_sym_newline_token1,
    ACTIONS(418), 1,
      sym_value_name,
    ACTIONS(420), 1,
      sym_indented_raw_text,
    STATE(133), 1,
      sym_newline,
    STATE(430), 1,
      sym_property_key,
    STATE(76), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(416), 13,
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
  [4340] = 6,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 1,
      aux_sym_newline_token1,
    ACTIONS(429), 1,
      sym_comment_line,
    STATE(104), 1,
      sym_newline,
    STATE(79), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(427), 17,
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
  [4376] = 6,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 1,
      aux_sym_newline_token1,
    ACTIONS(435), 1,
      sym_indented_raw_text,
    STATE(116), 1,
      sym_newline,
    STATE(80), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(237), 16,
      sym_program_doc_comment,
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
  [4412] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(252), 1,
      aux_sym_newline_token1,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_newline,
    STATE(82), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(391), 16,
      sym_program_doc_comment,
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
  [4448] = 6,
    ACTIONS(49), 1,
      sym_indented_raw_text,
    ACTIONS(252), 1,
      aux_sym_newline_token1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_newline,
    STATE(80), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(385), 16,
      sym_program_doc_comment,
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
  [4484] = 8,
    ACTIONS(414), 1,
      aux_sym_newline_token1,
    ACTIONS(418), 1,
      sym_value_name,
    ACTIONS(420), 1,
      sym_indented_raw_text,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_newline,
    STATE(430), 1,
      sym_property_key,
    STATE(78), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(440), 13,
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
  [4524] = 1,
    ACTIONS(286), 22,
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
  [4549] = 1,
    ACTIONS(294), 22,
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
  [4574] = 1,
    ACTIONS(290), 22,
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
  [4599] = 1,
    ACTIONS(282), 22,
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
  [4624] = 8,
    ACTIONS(444), 1,
      aux_sym_newline_token1,
    ACTIONS(452), 1,
      sym_value_name,
    STATE(143), 1,
      sym_newline,
    STATE(394), 1,
      sym_field_name,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(447), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(88), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(450), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [4662] = 8,
    ACTIONS(457), 1,
      aux_sym_newline_token1,
    ACTIONS(463), 1,
      sym_value_name,
    STATE(143), 1,
      sym_newline,
    STATE(394), 1,
      sym_field_name,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym_program_doc_comment,
    ACTIONS(459), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(88), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(461), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [4700] = 2,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
    ACTIONS(467), 19,
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
  [4725] = 2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 19,
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
  [4750] = 2,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(475), 19,
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
  [4775] = 2,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 19,
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
  [4800] = 2,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 19,
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
  [4825] = 2,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 19,
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
  [4850] = 6,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    ACTIONS(491), 1,
      sym_indented_raw_text,
    STATE(139), 1,
      sym_newline,
    STATE(106), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(391), 13,
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
  [4883] = 2,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 19,
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
  [4908] = 6,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(497), 1,
      aux_sym_newline_token1,
    ACTIONS(500), 1,
      sym_indented_raw_text,
    STATE(139), 1,
      sym_newline,
    STATE(98), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(237), 13,
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
  [4941] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 19,
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
  [4966] = 2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 19,
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
  [4991] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 19,
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
  [5016] = 2,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 19,
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
  [5041] = 2,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 19,
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
  [5066] = 2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 19,
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
  [5091] = 2,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 19,
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
  [5116] = 6,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    ACTIONS(491), 1,
      sym_indented_raw_text,
    STATE(139), 1,
      sym_newline,
    STATE(98), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(385), 13,
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
  [5149] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 19,
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
  [5174] = 2,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 19,
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
  [5199] = 2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 19,
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
  [5224] = 2,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 18,
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
  [5248] = 2,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 18,
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
  [5272] = 2,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 18,
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
  [5296] = 2,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 18,
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
  [5320] = 2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 18,
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
  [5344] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 18,
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
  [5368] = 2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 18,
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
  [5392] = 2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 18,
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
  [5416] = 2,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 18,
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
  [5440] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 18,
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
  [5464] = 2,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 18,
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
  [5488] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 18,
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
  [5512] = 2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 18,
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
  [5536] = 2,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(475), 18,
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
  [5560] = 2,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 18,
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
  [5584] = 2,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 18,
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
  [5608] = 2,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 18,
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
  [5632] = 2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 16,
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
  [5654] = 13,
    ACTIONS(252), 1,
      aux_sym_newline_token1,
    ACTIONS(531), 1,
      sym_inline_comment,
    ACTIONS(533), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(537), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(81), 1,
      sym_line_end,
    STATE(110), 1,
      sym_block_value,
    STATE(126), 1,
      sym_newline,
    STATE(296), 1,
      sym_fence_open,
    STATE(335), 1,
      sym_block_name,
    STATE(336), 1,
      sym_block_content_inline,
    STATE(410), 1,
      sym_inline_text,
    ACTIONS(535), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(120), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [5698] = 2,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 16,
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
  [5720] = 2,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 16,
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
  [5742] = 2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 16,
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
  [5764] = 2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 16,
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
  [5786] = 2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 16,
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
  [5808] = 13,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(533), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(537), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(543), 1,
      sym_inline_comment,
    STATE(73), 1,
      sym_line_end,
    STATE(90), 1,
      sym_block_value,
    STATE(108), 1,
      sym_newline,
    STATE(295), 1,
      sym_fence_open,
    STATE(338), 1,
      sym_block_name,
    STATE(339), 1,
      sym_block_content_inline,
    STATE(410), 1,
      sym_inline_text,
    ACTIONS(535), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(101), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [5852] = 5,
    ACTIONS(545), 1,
      aux_sym_newline_token1,
    STATE(214), 1,
      sym_newline,
    ACTIONS(548), 2,
      sym_doc_comment,
      sym_comment_line,
    STATE(135), 2,
      sym_blank_line,
      aux_sym_flow_body_tail_repeat1,
    ACTIONS(551), 11,
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
  [5880] = 13,
    ACTIONS(187), 1,
      aux_sym_newline_token1,
    ACTIONS(533), 1,
      aux_sym_flow_inline_text_token1,
    ACTIONS(537), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(543), 1,
      sym_inline_comment,
    STATE(73), 1,
      sym_line_end,
    STATE(103), 1,
      sym_block_value,
    STATE(108), 1,
      sym_newline,
    STATE(295), 1,
      sym_fence_open,
    STATE(338), 1,
      sym_block_name,
    STATE(339), 1,
      sym_block_content_inline,
    STATE(410), 1,
      sym_inline_text,
    ACTIONS(535), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(101), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [5924] = 2,
    ACTIONS(553), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(555), 13,
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
  [5945] = 2,
    ACTIONS(557), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(559), 13,
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
  [5966] = 2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 15,
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
  [5987] = 2,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 15,
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
  [6008] = 2,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(286), 13,
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
  [6029] = 2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 15,
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
  [6050] = 2,
    ACTIONS(296), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(298), 13,
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
  [6071] = 2,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 15,
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
  [6092] = 2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 15,
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
  [6113] = 2,
    ACTIONS(288), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(290), 13,
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
  [6134] = 2,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
    ACTIONS(282), 13,
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
  [6155] = 2,
    ACTIONS(563), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(561), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6175] = 2,
    ACTIONS(567), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(565), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6195] = 2,
    ACTIONS(571), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(569), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6215] = 2,
    ACTIONS(575), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(573), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6235] = 2,
    ACTIONS(579), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(577), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6255] = 2,
    ACTIONS(583), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(581), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6275] = 2,
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
  [6295] = 2,
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
  [6315] = 2,
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
  [6335] = 2,
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
  [6355] = 2,
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
  [6375] = 2,
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
  [6395] = 2,
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
  [6415] = 2,
    ACTIONS(109), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6435] = 2,
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
  [6455] = 2,
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
  [6475] = 2,
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
  [6495] = 2,
    ACTIONS(475), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(473), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6515] = 2,
    ACTIONS(627), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(625), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6535] = 2,
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
  [6555] = 2,
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
  [6575] = 2,
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
  [6595] = 2,
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
  [6615] = 2,
    ACTIONS(115), 2,
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
  [6635] = 2,
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
  [6655] = 2,
    ACTIONS(651), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(649), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6675] = 2,
    ACTIONS(479), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(477), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6695] = 2,
    ACTIONS(483), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(481), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6715] = 2,
    ACTIONS(487), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(485), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6735] = 2,
    ACTIONS(655), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(653), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6755] = 2,
    ACTIONS(659), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(657), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6775] = 2,
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
  [6795] = 2,
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
  [6815] = 2,
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
  [6835] = 2,
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
  [6855] = 2,
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
  [6875] = 2,
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
  [6895] = 2,
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
  [6915] = 2,
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
  [6935] = 2,
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
  [6955] = 2,
    ACTIONS(495), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(493), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [6975] = 2,
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
  [6995] = 2,
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
  [7015] = 2,
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
  [7035] = 2,
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
  [7055] = 2,
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
  [7075] = 2,
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
  [7095] = 2,
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
  [7115] = 2,
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
  [7135] = 2,
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
  [7155] = 2,
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
  [7175] = 2,
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
  [7195] = 2,
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
  [7215] = 2,
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
  [7235] = 2,
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
  [7255] = 2,
    ACTIONS(298), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(296), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7275] = 2,
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
  [7295] = 2,
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
  [7315] = 2,
    ACTIONS(290), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(288), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7335] = 2,
    ACTIONS(282), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(280), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7355] = 2,
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
  [7375] = 2,
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
  [7395] = 2,
    ACTIONS(286), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(284), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7415] = 2,
    ACTIONS(103), 2,
      sym_doc_comment,
      sym_comment_line,
    ACTIONS(99), 13,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_program_doc_comment,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_flow_keyword,
  [7435] = 12,
    ACTIONS(769), 1,
      aux_sym_newline_token1,
    ACTIONS(771), 1,
      sym_inline_comment,
    ACTIONS(773), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(775), 1,
      sym_flow_arg,
    ACTIONS(777), 1,
      sym_flow_to_keyword,
    ACTIONS(779), 1,
      sym_flow_par_keyword,
    ACTIONS(781), 1,
      sym_colon,
    STATE(60), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
    STATE(217), 1,
      sym_flow_step_head_part,
    STATE(293), 1,
      sym_flow_step_head,
    STATE(274), 4,
      sym_flow_to_modifier,
      sym_flow_par_modifier,
      sym_flow_ref_list,
      sym_flow_number_arg,
  [7475] = 2,
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
  [7495] = 1,
    ACTIONS(298), 14,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
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
  [7512] = 1,
    ACTIONS(286), 14,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_comment_line,
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
  [7529] = 8,
    ACTIONS(789), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(792), 1,
      sym_flow_arg,
    ACTIONS(795), 1,
      sym_flow_to_keyword,
    ACTIONS(798), 1,
      sym_flow_par_keyword,
    STATE(216), 1,
      aux_sym_flow_step_head_repeat1,
    STATE(264), 1,
      sym_flow_step_head_part,
    ACTIONS(787), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    STATE(274), 4,
      sym_flow_to_modifier,
      sym_flow_par_modifier,
      sym_flow_ref_list,
      sym_flow_number_arg,
  [7559] = 8,
    ACTIONS(773), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(775), 1,
      sym_flow_arg,
    ACTIONS(777), 1,
      sym_flow_to_keyword,
    ACTIONS(779), 1,
      sym_flow_par_keyword,
    STATE(218), 1,
      aux_sym_flow_step_head_repeat1,
    STATE(264), 1,
      sym_flow_step_head_part,
    ACTIONS(801), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    STATE(274), 4,
      sym_flow_to_modifier,
      sym_flow_par_modifier,
      sym_flow_ref_list,
      sym_flow_number_arg,
  [7589] = 8,
    ACTIONS(773), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(775), 1,
      sym_flow_arg,
    ACTIONS(777), 1,
      sym_flow_to_keyword,
    ACTIONS(779), 1,
      sym_flow_par_keyword,
    STATE(216), 1,
      aux_sym_flow_step_head_repeat1,
    STATE(264), 1,
      sym_flow_step_head_part,
    ACTIONS(803), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    STATE(274), 4,
      sym_flow_to_modifier,
      sym_flow_par_modifier,
      sym_flow_ref_list,
      sym_flow_number_arg,
  [7619] = 5,
    ACTIONS(807), 1,
      sym_array_suffix,
    STATE(219), 1,
      aux_sym_type_repeat1,
    STATE(239), 1,
      sym_type_suffix,
    ACTIONS(810), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(805), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7642] = 5,
    ACTIONS(814), 1,
      sym_array_suffix,
    STATE(221), 1,
      aux_sym_type_repeat1,
    STATE(239), 1,
      sym_type_suffix,
    ACTIONS(816), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(812), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7665] = 5,
    ACTIONS(814), 1,
      sym_array_suffix,
    STATE(219), 1,
      aux_sym_type_repeat1,
    STATE(239), 1,
      sym_type_suffix,
    ACTIONS(820), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(818), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7688] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(446), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7710] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(412), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7732] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(319), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7754] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(332), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7776] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(477), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7798] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(258), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7820] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(452), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7842] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(462), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7864] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(454), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7886] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(455), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7908] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(392), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7930] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(436), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7952] = 5,
    ACTIONS(824), 1,
      sym_type_name,
    STATE(220), 1,
      sym_base_type,
    STATE(456), 1,
      sym_type,
    STATE(235), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(822), 6,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
      anon_sym_Pack,
  [7974] = 2,
    ACTIONS(828), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(826), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7989] = 2,
    ACTIONS(832), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(830), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8004] = 2,
    ACTIONS(836), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
    ACTIONS(834), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8019] = 2,
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
  [8034] = 2,
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
  [8049] = 8,
    ACTIONS(457), 1,
      aux_sym_newline_token1,
    ACTIONS(846), 1,
      sym_doc_comment,
    ACTIONS(848), 1,
      sym_comment_line,
    ACTIONS(850), 1,
      sym_value_name,
    STATE(143), 1,
      sym_newline,
    STATE(155), 1,
      sym_struct_body,
    STATE(394), 1,
      sym_field_name,
    STATE(89), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [8076] = 8,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(856), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(83), 1,
      sym_line_end,
    STATE(130), 1,
      sym_newline,
    STATE(150), 1,
      sym_cap_body,
    STATE(294), 1,
      sym_fence_open,
    STATE(213), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [8102] = 8,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(856), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(83), 1,
      sym_line_end,
    STATE(130), 1,
      sym_newline,
    STATE(151), 1,
      sym_cap_body,
    STATE(294), 1,
      sym_fence_open,
    STATE(213), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [8128] = 8,
    ACTIONS(856), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    ACTIONS(860), 1,
      sym_inline_comment,
    STATE(96), 1,
      sym_line_end,
    STATE(140), 1,
      sym_newline,
    STATE(153), 1,
      sym_context_body,
    STATE(290), 1,
      sym_fence_open,
    STATE(189), 2,
      sym_block_indented,
      sym_block_fenced,
  [8154] = 8,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(856), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(83), 1,
      sym_line_end,
    STATE(130), 1,
      sym_newline,
    STATE(152), 1,
      sym_cap_body,
    STATE(294), 1,
      sym_fence_open,
    STATE(213), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [8180] = 4,
    ACTIONS(866), 1,
      sym_comma,
    STATE(248), 1,
      aux_sym_flow_ref_list_repeat1,
    ACTIONS(862), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(864), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8198] = 8,
    ACTIONS(856), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    ACTIONS(860), 1,
      sym_inline_comment,
    STATE(96), 1,
      sym_line_end,
    STATE(140), 1,
      sym_newline,
    STATE(154), 1,
      sym_instruct_body,
    STATE(290), 1,
      sym_fence_open,
    STATE(193), 2,
      sym_block_indented,
      sym_block_fenced,
  [8224] = 8,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(872), 1,
      sym_frontmatter_delimiter,
    ACTIONS(874), 1,
      sym_fenced_raw_text,
    STATE(173), 1,
      sym_fence_close,
    STATE(270), 1,
      sym_frontmatter,
    STATE(353), 1,
      sym_newline,
    STATE(271), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8250] = 4,
    ACTIONS(866), 1,
      sym_comma,
    STATE(249), 1,
      aux_sym_flow_ref_list_repeat1,
    ACTIONS(876), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(878), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8268] = 4,
    ACTIONS(884), 1,
      sym_comma,
    STATE(249), 1,
      aux_sym_flow_ref_list_repeat1,
    ACTIONS(880), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(882), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8286] = 8,
    ACTIONS(856), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    ACTIONS(860), 1,
      sym_inline_comment,
    STATE(96), 1,
      sym_line_end,
    STATE(140), 1,
      sym_newline,
    STATE(184), 1,
      sym_context_body,
    STATE(290), 1,
      sym_fence_open,
    STATE(189), 2,
      sym_block_indented,
      sym_block_fenced,
  [8312] = 8,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    ACTIONS(856), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(83), 1,
      sym_line_end,
    STATE(130), 1,
      sym_newline,
    STATE(149), 1,
      sym_cap_body,
    STATE(294), 1,
      sym_fence_open,
    STATE(213), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [8338] = 8,
    ACTIONS(856), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    ACTIONS(860), 1,
      sym_inline_comment,
    STATE(96), 1,
      sym_line_end,
    STATE(140), 1,
      sym_newline,
    STATE(192), 1,
      sym_instruct_body,
    STATE(290), 1,
      sym_fence_open,
    STATE(193), 2,
      sym_block_indented,
      sym_block_fenced,
  [8364] = 8,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(872), 1,
      sym_frontmatter_delimiter,
    ACTIONS(874), 1,
      sym_fenced_raw_text,
    STATE(185), 1,
      sym_fence_close,
    STATE(265), 1,
      sym_frontmatter,
    STATE(353), 1,
      sym_newline,
    STATE(268), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8390] = 2,
    ACTIONS(887), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_comma,
    ACTIONS(889), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8403] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    STATE(165), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(260), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8423] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    ACTIONS(893), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(113), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(289), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8443] = 2,
    ACTIONS(895), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(897), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8455] = 2,
    ACTIONS(899), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(901), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8467] = 7,
    ACTIONS(903), 1,
      aux_sym_newline_token1,
    ACTIONS(905), 1,
      sym_inline_comment,
    ACTIONS(907), 1,
      aux_sym_flow_inline_text_token1,
    STATE(52), 1,
      sym_flow_condition_body,
    STATE(307), 1,
      sym_flow_inline_text,
    STATE(367), 1,
      sym_line_end,
    STATE(438), 1,
      sym_newline,
  [8489] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    STATE(176), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(289), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8509] = 7,
    ACTIONS(903), 1,
      aux_sym_newline_token1,
    ACTIONS(905), 1,
      sym_inline_comment,
    ACTIONS(907), 1,
      aux_sym_flow_inline_text_token1,
    STATE(61), 1,
      sym_flow_condition_body,
    STATE(307), 1,
      sym_flow_inline_text,
    STATE(367), 1,
      sym_line_end,
    STATE(438), 1,
      sym_newline,
  [8531] = 2,
    ACTIONS(909), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(911), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8543] = 7,
    ACTIONS(903), 1,
      aux_sym_newline_token1,
    ACTIONS(905), 1,
      sym_inline_comment,
    ACTIONS(907), 1,
      aux_sym_flow_inline_text_token1,
    STATE(311), 1,
      sym_flow_inline_body,
    STATE(364), 1,
      sym_line_end,
    STATE(383), 1,
      sym_flow_inline_text,
    STATE(438), 1,
      sym_newline,
  [8565] = 2,
    ACTIONS(913), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(915), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8577] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(874), 1,
      sym_fenced_raw_text,
    STATE(196), 1,
      sym_fence_close,
    STATE(353), 1,
      sym_newline,
    STATE(267), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8597] = 7,
    ACTIONS(903), 1,
      aux_sym_newline_token1,
    ACTIONS(905), 1,
      sym_inline_comment,
    ACTIONS(907), 1,
      aux_sym_flow_inline_text_token1,
    STATE(310), 1,
      sym_flow_inline_body,
    STATE(359), 1,
      sym_line_end,
    STATE(383), 1,
      sym_flow_inline_text,
    STATE(438), 1,
      sym_newline,
  [8619] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(874), 1,
      sym_fenced_raw_text,
    STATE(199), 1,
      sym_fence_close,
    STATE(353), 1,
      sym_newline,
    STATE(288), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8639] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(874), 1,
      sym_fenced_raw_text,
    STATE(197), 1,
      sym_fence_close,
    STATE(353), 1,
      sym_newline,
    STATE(288), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8659] = 2,
    ACTIONS(917), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(919), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8671] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(874), 1,
      sym_fenced_raw_text,
    STATE(186), 1,
      sym_fence_close,
    STATE(353), 1,
      sym_newline,
    STATE(272), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8691] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(874), 1,
      sym_fenced_raw_text,
    STATE(187), 1,
      sym_fence_close,
    STATE(353), 1,
      sym_newline,
    STATE(288), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8711] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(874), 1,
      sym_fenced_raw_text,
    STATE(198), 1,
      sym_fence_close,
    STATE(353), 1,
      sym_newline,
    STATE(288), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [8731] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    STATE(188), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(289), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8751] = 2,
    ACTIONS(921), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
    ACTIONS(923), 4,
      aux_sym_flow_number_arg_token1,
      sym_flow_arg,
      sym_flow_to_keyword,
      sym_flow_par_keyword,
  [8763] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    ACTIONS(925), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(92), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(277), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8783] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    ACTIONS(925), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(93), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(278), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8803] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    ACTIONS(925), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(95), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(289), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8823] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    ACTIONS(925), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(97), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(289), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8843] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    ACTIONS(893), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(123), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(281), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8863] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    ACTIONS(893), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(124), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(256), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8883] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    ACTIONS(893), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(112), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(289), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8903] = 6,
    ACTIONS(868), 1,
      aux_sym_newline_token1,
    ACTIONS(870), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(891), 1,
      sym_fenced_raw_text,
    STATE(174), 1,
      sym_fence_close,
    STATE(357), 1,
      sym_newline,
    STATE(273), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [8923] = 6,
    ACTIONS(927), 1,
      sym_arrow,
    ACTIONS(929), 1,
      sym_colon,
    ACTIONS(931), 1,
      sym_lparen,
    ACTIONS(933), 1,
      sym_value_name,
    STATE(306), 1,
      sym_flow_name,
    STATE(433), 1,
      sym_params,
  [8942] = 5,
    ACTIONS(935), 1,
      sym_frontmatter_comment,
    ACTIONS(937), 1,
      sym_frontmatter_delimiter,
    ACTIONS(939), 1,
      sym_value_name,
    STATE(444), 1,
      sym_property_key,
    STATE(285), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [8959] = 5,
    ACTIONS(941), 1,
      sym_frontmatter_comment,
    ACTIONS(944), 1,
      sym_frontmatter_delimiter,
    ACTIONS(946), 1,
      sym_value_name,
    STATE(444), 1,
      sym_property_key,
    STATE(285), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [8976] = 5,
    ACTIONS(939), 1,
      sym_value_name,
    ACTIONS(949), 1,
      sym_frontmatter_comment,
    ACTIONS(951), 1,
      sym_frontmatter_delimiter,
    STATE(444), 1,
      sym_property_key,
    STATE(284), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [8993] = 6,
    ACTIONS(931), 1,
      sym_lparen,
    ACTIONS(953), 1,
      sym_arrow,
    ACTIONS(955), 1,
      sym_colon,
    ACTIONS(957), 1,
      sym_value_name,
    STATE(315), 1,
      sym_thunk_name,
    STATE(406), 1,
      sym_params,
  [9012] = 5,
    ACTIONS(959), 1,
      aux_sym_newline_token1,
    ACTIONS(962), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(964), 1,
      sym_fenced_raw_text,
    STATE(353), 1,
      sym_newline,
    STATE(288), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [9029] = 5,
    ACTIONS(967), 1,
      aux_sym_newline_token1,
    ACTIONS(970), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(972), 1,
      sym_fenced_raw_text,
    STATE(357), 1,
      sym_newline,
    STATE(289), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [9046] = 5,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    ACTIONS(977), 1,
      sym_inline_comment,
    ACTIONS(979), 1,
      sym_block_language,
    STATE(255), 1,
      sym_line_end,
    STATE(373), 1,
      sym_newline,
  [9062] = 5,
    ACTIONS(769), 1,
      aux_sym_newline_token1,
    ACTIONS(771), 1,
      sym_inline_comment,
    ACTIONS(981), 1,
      sym_flow_until_keyword,
    STATE(49), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
  [9078] = 2,
    STATE(354), 1,
      sym_cap_kind,
    ACTIONS(983), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [9088] = 5,
    ACTIONS(769), 1,
      aux_sym_newline_token1,
    ACTIONS(771), 1,
      sym_inline_comment,
    ACTIONS(985), 1,
      sym_colon,
    STATE(56), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
  [9104] = 5,
    ACTIONS(987), 1,
      aux_sym_newline_token1,
    ACTIONS(989), 1,
      sym_inline_comment,
    ACTIONS(991), 1,
      sym_block_language,
    STATE(247), 1,
      sym_line_end,
    STATE(327), 1,
      sym_newline,
  [9120] = 5,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    ACTIONS(977), 1,
      sym_inline_comment,
    ACTIONS(993), 1,
      sym_block_language,
    STATE(275), 1,
      sym_line_end,
    STATE(373), 1,
      sym_newline,
  [9136] = 5,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    ACTIONS(977), 1,
      sym_inline_comment,
    ACTIONS(995), 1,
      sym_block_language,
    STATE(279), 1,
      sym_line_end,
    STATE(373), 1,
      sym_newline,
  [9152] = 4,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    ACTIONS(999), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9165] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1001), 1,
      sym_inline_comment,
    STATE(195), 1,
      sym_line_end,
    STATE(206), 1,
      sym_newline,
  [9178] = 4,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(43), 1,
      sym_newline,
  [9191] = 4,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    ACTIONS(999), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9204] = 3,
    ACTIONS(1009), 1,
      sym_comma,
    STATE(337), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1007), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9215] = 4,
    ACTIONS(987), 1,
      aux_sym_newline_token1,
    ACTIONS(989), 1,
      sym_inline_comment,
    STATE(253), 1,
      sym_line_end,
    STATE(327), 1,
      sym_newline,
  [9228] = 4,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(43), 1,
      sym_newline,
  [9241] = 4,
    ACTIONS(1011), 1,
      aux_sym_newline_token1,
    ACTIONS(1013), 1,
      sym_inline_comment,
    STATE(240), 1,
      sym_line_end,
    STATE(321), 1,
      sym_newline,
  [9254] = 4,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(43), 1,
      sym_newline,
  [9267] = 4,
    ACTIONS(931), 1,
      sym_lparen,
    ACTIONS(1015), 1,
      sym_arrow,
    ACTIONS(1017), 1,
      sym_colon,
    STATE(413), 1,
      sym_params,
  [9280] = 4,
    ACTIONS(769), 1,
      aux_sym_newline_token1,
    ACTIONS(771), 1,
      sym_inline_comment,
    STATE(51), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
  [9293] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(1001), 1,
      sym_inline_comment,
    STATE(156), 1,
      sym_line_end,
    STATE(206), 1,
      sym_newline,
  [9306] = 2,
    STATE(391), 1,
      sym_directive_op,
    ACTIONS(1019), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9315] = 4,
    ACTIONS(769), 1,
      aux_sym_newline_token1,
    ACTIONS(771), 1,
      sym_inline_comment,
    STATE(48), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
  [9328] = 4,
    ACTIONS(769), 1,
      aux_sym_newline_token1,
    ACTIONS(771), 1,
      sym_inline_comment,
    STATE(54), 1,
      sym_line_end,
    STATE(64), 1,
      sym_newline,
  [9341] = 4,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    ACTIONS(977), 1,
      sym_inline_comment,
    STATE(282), 1,
      sym_line_end,
    STATE(373), 1,
      sym_newline,
  [9354] = 4,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(43), 1,
      sym_newline,
  [9367] = 4,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(43), 1,
      sym_newline,
  [9380] = 4,
    ACTIONS(931), 1,
      sym_lparen,
    ACTIONS(1021), 1,
      sym_arrow,
    ACTIONS(1023), 1,
      sym_colon,
    STATE(377), 1,
      sym_params,
  [9393] = 4,
    ACTIONS(1025), 1,
      sym_rparen,
    ACTIONS(1027), 1,
      sym_value_name,
    STATE(370), 1,
      sym_param,
    STATE(411), 1,
      sym_param_name,
  [9406] = 4,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    ACTIONS(854), 1,
      sym_inline_comment,
    STATE(129), 1,
      sym_line_end,
    STATE(130), 1,
      sym_newline,
  [9419] = 4,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    ACTIONS(999), 1,
      sym_inline_comment,
    STATE(19), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9432] = 4,
    ACTIONS(457), 1,
      aux_sym_newline_token1,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(138), 1,
      sym_line_end,
    STATE(146), 1,
      sym_newline,
  [9445] = 2,
    ACTIONS(286), 1,
      sym_comment_line,
    ACTIONS(284), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [9454] = 2,
    ACTIONS(290), 1,
      sym_comment_line,
    ACTIONS(288), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [9463] = 2,
    ACTIONS(282), 1,
      sym_comment_line,
    ACTIONS(280), 3,
      aux_sym_newline_token1,
      sym_doc_comment,
      sym_value_name,
  [9472] = 4,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(43), 1,
      sym_newline,
  [9485] = 4,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    ACTIONS(999), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9498] = 4,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    ACTIONS(999), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9511] = 4,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    ACTIONS(999), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9524] = 1,
    ACTIONS(290), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [9531] = 1,
    ACTIONS(282), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [9538] = 1,
    ACTIONS(286), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [9545] = 3,
    ACTIONS(1009), 1,
      sym_comma,
    STATE(301), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1031), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9556] = 4,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_newline,
    STATE(44), 1,
      sym_line_end,
  [9569] = 4,
    ACTIONS(457), 1,
      aux_sym_newline_token1,
    ACTIONS(1029), 1,
      sym_inline_comment,
    STATE(137), 1,
      sym_line_end,
    STATE(146), 1,
      sym_newline,
  [9582] = 4,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    ACTIONS(999), 1,
      sym_inline_comment,
    STATE(16), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9595] = 4,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    ACTIONS(999), 1,
      sym_inline_comment,
    STATE(85), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9608] = 4,
    ACTIONS(1033), 1,
      aux_sym_newline_token1,
    ACTIONS(1035), 1,
      sym_inline_comment,
    STATE(121), 1,
      sym_line_end,
    STATE(126), 1,
      sym_newline,
  [9621] = 4,
    ACTIONS(1033), 1,
      aux_sym_newline_token1,
    ACTIONS(1035), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
    STATE(126), 1,
      sym_newline,
  [9634] = 3,
    ACTIONS(1039), 1,
      sym_comma,
    STATE(337), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(1037), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [9645] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_line_end,
    STATE(108), 1,
      sym_newline,
  [9658] = 4,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    ACTIONS(1044), 1,
      sym_inline_comment,
    STATE(91), 1,
      sym_line_end,
    STATE(108), 1,
      sym_newline,
  [9671] = 4,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    ACTIONS(999), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
    STATE(86), 1,
      sym_newline,
  [9684] = 4,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    ACTIONS(977), 1,
      sym_inline_comment,
    STATE(276), 1,
      sym_line_end,
    STATE(373), 1,
      sym_newline,
  [9697] = 4,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(43), 1,
      sym_newline,
  [9710] = 4,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    ACTIONS(977), 1,
      sym_inline_comment,
    STATE(280), 1,
      sym_line_end,
    STATE(373), 1,
      sym_newline,
  [9723] = 2,
    STATE(432), 1,
      sym_directive_op,
    ACTIONS(1019), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9732] = 4,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    ACTIONS(1005), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(43), 1,
      sym_newline,
  [9745] = 1,
    ACTIONS(1046), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9751] = 3,
    ACTIONS(1048), 1,
      sym_colon,
    ACTIONS(1050), 1,
      sym_value_name,
    STATE(440), 1,
      sym_context_name,
  [9761] = 3,
    ACTIONS(1052), 1,
      sym_colon,
    ACTIONS(1054), 1,
      sym_value_name,
    STATE(466), 1,
      sym_instruct_name,
  [9771] = 1,
    ACTIONS(1056), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9777] = 3,
    ACTIONS(1058), 1,
      aux_sym_flow_inline_text_token1,
    STATE(387), 1,
      sym_inline_text,
    STATE(416), 1,
      sym_property_value,
  [9787] = 3,
    ACTIONS(1027), 1,
      sym_value_name,
    STATE(385), 1,
      sym_param,
    STATE(411), 1,
      sym_param_name,
  [9797] = 3,
    ACTIONS(1060), 1,
      sym_rparen,
    ACTIONS(1062), 1,
      sym_comma,
    STATE(355), 1,
      aux_sym_params_repeat1,
  [9807] = 1,
    ACTIONS(1064), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9813] = 3,
    ACTIONS(1066), 1,
      sym_cap_uri,
    ACTIONS(1068), 1,
      sym_cap_shorthand,
    STATE(298), 1,
      sym_cap_ref,
  [9823] = 3,
    ACTIONS(1070), 1,
      sym_rparen,
    ACTIONS(1072), 1,
      sym_comma,
    STATE(355), 1,
      aux_sym_params_repeat1,
  [9833] = 1,
    ACTIONS(1075), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9839] = 1,
    ACTIONS(1077), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9845] = 1,
    ACTIONS(284), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [9851] = 3,
    ACTIONS(1079), 1,
      sym_indented_raw_text,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(62), 1,
      sym_block_indented_implicit,
  [9861] = 1,
    ACTIONS(1081), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_flow_until_keyword,
  [9867] = 1,
    ACTIONS(1083), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9873] = 1,
    ACTIONS(1085), 3,
      sym_frontmatter_comment,
      sym_frontmatter_delimiter,
      sym_value_name,
  [9879] = 1,
    ACTIONS(1087), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [9885] = 3,
    ACTIONS(1079), 1,
      sym_indented_raw_text,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(53), 1,
      sym_block_indented_implicit,
  [9895] = 1,
    ACTIONS(1037), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [9901] = 1,
    ACTIONS(1089), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9907] = 3,
    ACTIONS(1079), 1,
      sym_indented_raw_text,
    STATE(37), 1,
      sym_block_indented_content_line,
    STATE(50), 1,
      sym_block_indented_implicit,
  [9917] = 1,
    ACTIONS(1091), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9923] = 1,
    ACTIONS(1093), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9929] = 3,
    ACTIONS(1062), 1,
      sym_comma,
    ACTIONS(1095), 1,
      sym_rparen,
    STATE(352), 1,
      aux_sym_params_repeat1,
  [9939] = 3,
    ACTIONS(1097), 1,
      aux_sym_flow_number_arg_token1,
    ACTIONS(1099), 1,
      sym_flow_until_keyword,
    STATE(291), 1,
      sym_flow_repeat_count,
  [9949] = 3,
    ACTIONS(1058), 1,
      aux_sym_flow_inline_text_token1,
    STATE(317), 1,
      sym_property_value,
    STATE(387), 1,
      sym_inline_text,
  [9959] = 1,
    ACTIONS(290), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9965] = 1,
    ACTIONS(282), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9971] = 1,
    ACTIONS(286), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [9977] = 2,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    STATE(142), 1,
      sym_newline,
  [9984] = 2,
    ACTIONS(1101), 1,
      sym_arrow,
    ACTIONS(1103), 1,
      sym_colon,
  [9991] = 2,
    ACTIONS(1033), 1,
      aux_sym_newline_token1,
    STATE(118), 1,
      sym_newline,
  [9998] = 1,
    ACTIONS(1105), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10003] = 2,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    STATE(369), 1,
      sym_newline,
  [10010] = 2,
    ACTIONS(1107), 1,
      sym_value_name,
    STATE(475), 1,
      sym_cap_name,
  [10017] = 2,
    ACTIONS(1107), 1,
      sym_value_name,
    STATE(460), 1,
      sym_cap_name,
  [10024] = 1,
    ACTIONS(1109), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10029] = 1,
    ACTIONS(1111), 2,
      sym_arrow,
      sym_colon,
  [10034] = 1,
    ACTIONS(1113), 2,
      sym_rparen,
      sym_comma,
  [10039] = 1,
    ACTIONS(1115), 2,
      sym_arrow,
      sym_colon,
  [10044] = 1,
    ACTIONS(1117), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10049] = 2,
    ACTIONS(1107), 1,
      sym_value_name,
    STATE(472), 1,
      sym_cap_name,
  [10056] = 2,
    ACTIONS(1119), 1,
      aux_sym_flow_number_arg_token1,
    STATE(262), 1,
      sym_flow_number_arg,
  [10063] = 2,
    ACTIONS(1121), 1,
      sym_type_name,
    STATE(437), 1,
      sym_struct_name,
  [10070] = 2,
    ACTIONS(1123), 1,
      sym_bare_value,
    STATE(331), 1,
      sym_directive_csv,
  [10077] = 1,
    ACTIONS(1125), 2,
      sym_rparen,
      sym_comma,
  [10082] = 2,
    ACTIONS(1107), 1,
      sym_value_name,
    STATE(457), 1,
      sym_cap_name,
  [10089] = 2,
    ACTIONS(1127), 1,
      sym_optional_marker,
    ACTIONS(1129), 1,
      sym_colon,
  [10096] = 1,
    ACTIONS(1131), 2,
      sym_optional_marker,
      sym_colon,
  [10101] = 2,
    ACTIONS(1133), 1,
      aux_sym_newline_token1,
    STATE(286), 1,
      sym_newline,
  [10108] = 2,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    STATE(346), 1,
      sym_newline,
  [10115] = 1,
    ACTIONS(1135), 2,
      sym_colon,
      sym_value_name,
  [10120] = 2,
    ACTIONS(1003), 1,
      aux_sym_newline_token1,
    STATE(41), 1,
      sym_newline,
  [10127] = 1,
    ACTIONS(1137), 2,
      sym_colon,
      sym_value_name,
  [10132] = 1,
    ACTIONS(1139), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10137] = 1,
    ACTIONS(1141), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10142] = 1,
    ACTIONS(1143), 2,
      sym_arrow,
      sym_colon,
  [10147] = 2,
    ACTIONS(1145), 1,
      sym_cap_uri,
    ACTIONS(1147), 1,
      sym_cap_shorthand,
  [10154] = 1,
    ACTIONS(1149), 2,
      sym_optional_marker,
      sym_colon,
  [10159] = 2,
    ACTIONS(1151), 1,
      sym_arrow,
    ACTIONS(1153), 1,
      sym_colon,
  [10166] = 2,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    STATE(368), 1,
      sym_newline,
  [10173] = 2,
    ACTIONS(997), 1,
      aux_sym_newline_token1,
    STATE(87), 1,
      sym_newline,
  [10180] = 2,
    ACTIONS(769), 1,
      aux_sym_newline_token1,
    STATE(59), 1,
      sym_newline,
  [10187] = 1,
    ACTIONS(1155), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10192] = 2,
    ACTIONS(1157), 1,
      sym_optional_marker,
    ACTIONS(1159), 1,
      sym_colon,
  [10199] = 1,
    ACTIONS(1161), 2,
      sym_rparen,
      sym_comma,
  [10204] = 2,
    ACTIONS(1163), 1,
      sym_arrow,
    ACTIONS(1165), 1,
      sym_colon,
  [10211] = 2,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    STATE(361), 1,
      sym_newline,
  [10218] = 2,
    ACTIONS(858), 1,
      aux_sym_newline_token1,
    STATE(144), 1,
      sym_newline,
  [10225] = 2,
    ACTIONS(1133), 1,
      aux_sym_newline_token1,
    STATE(362), 1,
      sym_newline,
  [10232] = 1,
    ACTIONS(1167), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [10237] = 1,
    ACTIONS(1169), 2,
      anon_sym_EQ,
      sym_colon,
  [10242] = 2,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    STATE(127), 1,
      sym_newline,
  [10249] = 2,
    ACTIONS(1011), 1,
      aux_sym_newline_token1,
    STATE(322), 1,
      sym_newline,
  [10256] = 2,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    STATE(102), 1,
      sym_newline,
  [10263] = 2,
    ACTIONS(852), 1,
      aux_sym_newline_token1,
    STATE(131), 1,
      sym_newline,
  [10270] = 2,
    ACTIONS(975), 1,
      aux_sym_newline_token1,
    STATE(374), 1,
      sym_newline,
  [10277] = 2,
    ACTIONS(769), 1,
      aux_sym_newline_token1,
    STATE(65), 1,
      sym_newline,
  [10284] = 2,
    ACTIONS(987), 1,
      aux_sym_newline_token1,
    STATE(328), 1,
      sym_newline,
  [10291] = 2,
    ACTIONS(1042), 1,
      aux_sym_newline_token1,
    STATE(109), 1,
      sym_newline,
  [10298] = 2,
    ACTIONS(1033), 1,
      aux_sym_newline_token1,
    STATE(117), 1,
      sym_newline,
  [10305] = 2,
    ACTIONS(1171), 1,
      aux_sym_newline_token1,
    STATE(439), 1,
      sym_newline,
  [10312] = 2,
    ACTIONS(457), 1,
      aux_sym_newline_token1,
    STATE(147), 1,
      sym_newline,
  [10319] = 2,
    ACTIONS(1173), 1,
      anon_sym_EQ,
    STATE(372), 1,
      sym_assign_operator,
  [10326] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(207), 1,
      sym_newline,
  [10333] = 2,
    ACTIONS(1123), 1,
      sym_bare_value,
    STATE(334), 1,
      sym_directive_csv,
  [10340] = 2,
    ACTIONS(1175), 1,
      sym_arrow,
    ACTIONS(1177), 1,
      sym_colon,
  [10347] = 1,
    ACTIONS(1179), 1,
      ts_builtin_sym_end,
  [10351] = 1,
    ACTIONS(1181), 1,
      sym_colon,
  [10355] = 1,
    ACTIONS(1183), 1,
      sym_colon,
  [10359] = 1,
    ACTIONS(1185), 1,
      sym_colon,
  [10363] = 1,
    ACTIONS(288), 1,
      sym_indented_raw_text,
  [10367] = 1,
    ACTIONS(280), 1,
      sym_indented_raw_text,
  [10371] = 1,
    ACTIONS(1187), 1,
      sym_colon,
  [10375] = 1,
    ACTIONS(1189), 1,
      sym_colon,
  [10379] = 1,
    ACTIONS(1191), 1,
      sym_colon,
  [10383] = 1,
    ACTIONS(284), 1,
      sym_indented_raw_text,
  [10387] = 1,
    ACTIONS(1193), 1,
      sym_colon,
  [10391] = 1,
    ACTIONS(1195), 1,
      aux_sym_newline_token1,
  [10395] = 1,
    ACTIONS(1197), 1,
      sym_colon,
  [10399] = 1,
    ACTIONS(1199), 1,
      sym_colon,
  [10403] = 1,
    ACTIONS(1201), 1,
      sym_colon,
  [10407] = 1,
    ACTIONS(1203), 1,
      aux_sym_newline_token1,
  [10411] = 1,
    ACTIONS(1205), 1,
      sym_bare_value,
  [10415] = 1,
    ACTIONS(1207), 1,
      sym_bare_value,
  [10419] = 1,
    ACTIONS(1209), 1,
      sym_colon,
  [10423] = 1,
    ACTIONS(1211), 1,
      sym_colon,
  [10427] = 1,
    ACTIONS(1213), 1,
      sym_colon,
  [10431] = 1,
    ACTIONS(1215), 1,
      sym_colon,
  [10435] = 1,
    ACTIONS(1217), 1,
      sym_colon,
  [10439] = 1,
    ACTIONS(1219), 1,
      sym_colon,
  [10443] = 1,
    ACTIONS(1221), 1,
      aux_sym_flow_inline_text_token1,
  [10447] = 1,
    ACTIONS(1223), 1,
      aux_sym_newline_token1,
  [10451] = 1,
    ACTIONS(1225), 1,
      sym_colon,
  [10455] = 1,
    ACTIONS(1227), 1,
      sym_colon,
  [10459] = 1,
    ACTIONS(1229), 1,
      sym_colon,
  [10463] = 1,
    ACTIONS(1231), 1,
      sym_value_name,
  [10467] = 1,
    ACTIONS(1233), 1,
      sym_colon,
  [10471] = 1,
    ACTIONS(1235), 1,
      sym_colon,
  [10475] = 1,
    ACTIONS(1237), 1,
      sym_colon,
  [10479] = 1,
    ACTIONS(1239), 1,
      sym_colon,
  [10483] = 1,
    ACTIONS(1241), 1,
      sym_colon,
  [10487] = 1,
    ACTIONS(1243), 1,
      sym_flow_arg,
  [10491] = 1,
    ACTIONS(1245), 1,
      sym_value_name,
  [10495] = 1,
    ACTIONS(1247), 1,
      sym_value_name,
  [10499] = 1,
    ACTIONS(1249), 1,
      sym_colon,
  [10503] = 1,
    ACTIONS(1251), 1,
      sym_colon,
  [10507] = 1,
    ACTIONS(1253), 1,
      sym_value_name,
  [10511] = 1,
    ACTIONS(1255), 1,
      sym_colon,
  [10515] = 1,
    ACTIONS(1257), 1,
      sym_colon,
  [10519] = 1,
    ACTIONS(1259), 1,
      sym_colon,
  [10523] = 1,
    ACTIONS(1261), 1,
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
  [SMALL_STATE(13)] = 1065,
  [SMALL_STATE(14)] = 1148,
  [SMALL_STATE(15)] = 1231,
  [SMALL_STATE(16)] = 1314,
  [SMALL_STATE(17)] = 1397,
  [SMALL_STATE(18)] = 1480,
  [SMALL_STATE(19)] = 1563,
  [SMALL_STATE(20)] = 1646,
  [SMALL_STATE(21)] = 1720,
  [SMALL_STATE(22)] = 1800,
  [SMALL_STATE(23)] = 1874,
  [SMALL_STATE(24)] = 1948,
  [SMALL_STATE(25)] = 2022,
  [SMALL_STATE(26)] = 2091,
  [SMALL_STATE(27)] = 2173,
  [SMALL_STATE(28)] = 2255,
  [SMALL_STATE(29)] = 2325,
  [SMALL_STATE(30)] = 2375,
  [SMALL_STATE(31)] = 2445,
  [SMALL_STATE(32)] = 2515,
  [SMALL_STATE(33)] = 2585,
  [SMALL_STATE(34)] = 2655,
  [SMALL_STATE(35)] = 2725,
  [SMALL_STATE(36)] = 2768,
  [SMALL_STATE(37)] = 2811,
  [SMALL_STATE(38)] = 2854,
  [SMALL_STATE(39)] = 2910,
  [SMALL_STATE(40)] = 2966,
  [SMALL_STATE(41)] = 3022,
  [SMALL_STATE(42)] = 3055,
  [SMALL_STATE(43)] = 3088,
  [SMALL_STATE(44)] = 3121,
  [SMALL_STATE(45)] = 3154,
  [SMALL_STATE(46)] = 3187,
  [SMALL_STATE(47)] = 3247,
  [SMALL_STATE(48)] = 3278,
  [SMALL_STATE(49)] = 3309,
  [SMALL_STATE(50)] = 3340,
  [SMALL_STATE(51)] = 3371,
  [SMALL_STATE(52)] = 3402,
  [SMALL_STATE(53)] = 3433,
  [SMALL_STATE(54)] = 3464,
  [SMALL_STATE(55)] = 3495,
  [SMALL_STATE(56)] = 3526,
  [SMALL_STATE(57)] = 3557,
  [SMALL_STATE(58)] = 3588,
  [SMALL_STATE(59)] = 3619,
  [SMALL_STATE(60)] = 3650,
  [SMALL_STATE(61)] = 3681,
  [SMALL_STATE(62)] = 3712,
  [SMALL_STATE(63)] = 3743,
  [SMALL_STATE(64)] = 3774,
  [SMALL_STATE(65)] = 3805,
  [SMALL_STATE(66)] = 3836,
  [SMALL_STATE(67)] = 3867,
  [SMALL_STATE(68)] = 3911,
  [SMALL_STATE(69)] = 3955,
  [SMALL_STATE(70)] = 3989,
  [SMALL_STATE(71)] = 4033,
  [SMALL_STATE(72)] = 4077,
  [SMALL_STATE(73)] = 4114,
  [SMALL_STATE(74)] = 4151,
  [SMALL_STATE(75)] = 4188,
  [SMALL_STATE(76)] = 4224,
  [SMALL_STATE(77)] = 4264,
  [SMALL_STATE(78)] = 4300,
  [SMALL_STATE(79)] = 4340,
  [SMALL_STATE(80)] = 4376,
  [SMALL_STATE(81)] = 4412,
  [SMALL_STATE(82)] = 4448,
  [SMALL_STATE(83)] = 4484,
  [SMALL_STATE(84)] = 4524,
  [SMALL_STATE(85)] = 4549,
  [SMALL_STATE(86)] = 4574,
  [SMALL_STATE(87)] = 4599,
  [SMALL_STATE(88)] = 4624,
  [SMALL_STATE(89)] = 4662,
  [SMALL_STATE(90)] = 4700,
  [SMALL_STATE(91)] = 4725,
  [SMALL_STATE(92)] = 4750,
  [SMALL_STATE(93)] = 4775,
  [SMALL_STATE(94)] = 4800,
  [SMALL_STATE(95)] = 4825,
  [SMALL_STATE(96)] = 4850,
  [SMALL_STATE(97)] = 4883,
  [SMALL_STATE(98)] = 4908,
  [SMALL_STATE(99)] = 4941,
  [SMALL_STATE(100)] = 4966,
  [SMALL_STATE(101)] = 4991,
  [SMALL_STATE(102)] = 5016,
  [SMALL_STATE(103)] = 5041,
  [SMALL_STATE(104)] = 5066,
  [SMALL_STATE(105)] = 5091,
  [SMALL_STATE(106)] = 5116,
  [SMALL_STATE(107)] = 5149,
  [SMALL_STATE(108)] = 5174,
  [SMALL_STATE(109)] = 5199,
  [SMALL_STATE(110)] = 5224,
  [SMALL_STATE(111)] = 5248,
  [SMALL_STATE(112)] = 5272,
  [SMALL_STATE(113)] = 5296,
  [SMALL_STATE(114)] = 5320,
  [SMALL_STATE(115)] = 5344,
  [SMALL_STATE(116)] = 5368,
  [SMALL_STATE(117)] = 5392,
  [SMALL_STATE(118)] = 5416,
  [SMALL_STATE(119)] = 5440,
  [SMALL_STATE(120)] = 5464,
  [SMALL_STATE(121)] = 5488,
  [SMALL_STATE(122)] = 5512,
  [SMALL_STATE(123)] = 5536,
  [SMALL_STATE(124)] = 5560,
  [SMALL_STATE(125)] = 5584,
  [SMALL_STATE(126)] = 5608,
  [SMALL_STATE(127)] = 5632,
  [SMALL_STATE(128)] = 5654,
  [SMALL_STATE(129)] = 5698,
  [SMALL_STATE(130)] = 5720,
  [SMALL_STATE(131)] = 5742,
  [SMALL_STATE(132)] = 5764,
  [SMALL_STATE(133)] = 5786,
  [SMALL_STATE(134)] = 5808,
  [SMALL_STATE(135)] = 5852,
  [SMALL_STATE(136)] = 5880,
  [SMALL_STATE(137)] = 5924,
  [SMALL_STATE(138)] = 5945,
  [SMALL_STATE(139)] = 5966,
  [SMALL_STATE(140)] = 5987,
  [SMALL_STATE(141)] = 6008,
  [SMALL_STATE(142)] = 6029,
  [SMALL_STATE(143)] = 6050,
  [SMALL_STATE(144)] = 6071,
  [SMALL_STATE(145)] = 6092,
  [SMALL_STATE(146)] = 6113,
  [SMALL_STATE(147)] = 6134,
  [SMALL_STATE(148)] = 6155,
  [SMALL_STATE(149)] = 6175,
  [SMALL_STATE(150)] = 6195,
  [SMALL_STATE(151)] = 6215,
  [SMALL_STATE(152)] = 6235,
  [SMALL_STATE(153)] = 6255,
  [SMALL_STATE(154)] = 6275,
  [SMALL_STATE(155)] = 6295,
  [SMALL_STATE(156)] = 6315,
  [SMALL_STATE(157)] = 6335,
  [SMALL_STATE(158)] = 6355,
  [SMALL_STATE(159)] = 6375,
  [SMALL_STATE(160)] = 6395,
  [SMALL_STATE(161)] = 6415,
  [SMALL_STATE(162)] = 6435,
  [SMALL_STATE(163)] = 6455,
  [SMALL_STATE(164)] = 6475,
  [SMALL_STATE(165)] = 6495,
  [SMALL_STATE(166)] = 6515,
  [SMALL_STATE(167)] = 6535,
  [SMALL_STATE(168)] = 6555,
  [SMALL_STATE(169)] = 6575,
  [SMALL_STATE(170)] = 6595,
  [SMALL_STATE(171)] = 6615,
  [SMALL_STATE(172)] = 6635,
  [SMALL_STATE(173)] = 6655,
  [SMALL_STATE(174)] = 6675,
  [SMALL_STATE(175)] = 6695,
  [SMALL_STATE(176)] = 6715,
  [SMALL_STATE(177)] = 6735,
  [SMALL_STATE(178)] = 6755,
  [SMALL_STATE(179)] = 6775,
  [SMALL_STATE(180)] = 6795,
  [SMALL_STATE(181)] = 6815,
  [SMALL_STATE(182)] = 6835,
  [SMALL_STATE(183)] = 6855,
  [SMALL_STATE(184)] = 6875,
  [SMALL_STATE(185)] = 6895,
  [SMALL_STATE(186)] = 6915,
  [SMALL_STATE(187)] = 6935,
  [SMALL_STATE(188)] = 6955,
  [SMALL_STATE(189)] = 6975,
  [SMALL_STATE(190)] = 6995,
  [SMALL_STATE(191)] = 7015,
  [SMALL_STATE(192)] = 7035,
  [SMALL_STATE(193)] = 7055,
  [SMALL_STATE(194)] = 7075,
  [SMALL_STATE(195)] = 7095,
  [SMALL_STATE(196)] = 7115,
  [SMALL_STATE(197)] = 7135,
  [SMALL_STATE(198)] = 7155,
  [SMALL_STATE(199)] = 7175,
  [SMALL_STATE(200)] = 7195,
  [SMALL_STATE(201)] = 7215,
  [SMALL_STATE(202)] = 7235,
  [SMALL_STATE(203)] = 7255,
  [SMALL_STATE(204)] = 7275,
  [SMALL_STATE(205)] = 7295,
  [SMALL_STATE(206)] = 7315,
  [SMALL_STATE(207)] = 7335,
  [SMALL_STATE(208)] = 7355,
  [SMALL_STATE(209)] = 7375,
  [SMALL_STATE(210)] = 7395,
  [SMALL_STATE(211)] = 7415,
  [SMALL_STATE(212)] = 7435,
  [SMALL_STATE(213)] = 7475,
  [SMALL_STATE(214)] = 7495,
  [SMALL_STATE(215)] = 7512,
  [SMALL_STATE(216)] = 7529,
  [SMALL_STATE(217)] = 7559,
  [SMALL_STATE(218)] = 7589,
  [SMALL_STATE(219)] = 7619,
  [SMALL_STATE(220)] = 7642,
  [SMALL_STATE(221)] = 7665,
  [SMALL_STATE(222)] = 7688,
  [SMALL_STATE(223)] = 7710,
  [SMALL_STATE(224)] = 7732,
  [SMALL_STATE(225)] = 7754,
  [SMALL_STATE(226)] = 7776,
  [SMALL_STATE(227)] = 7798,
  [SMALL_STATE(228)] = 7820,
  [SMALL_STATE(229)] = 7842,
  [SMALL_STATE(230)] = 7864,
  [SMALL_STATE(231)] = 7886,
  [SMALL_STATE(232)] = 7908,
  [SMALL_STATE(233)] = 7930,
  [SMALL_STATE(234)] = 7952,
  [SMALL_STATE(235)] = 7974,
  [SMALL_STATE(236)] = 7989,
  [SMALL_STATE(237)] = 8004,
  [SMALL_STATE(238)] = 8019,
  [SMALL_STATE(239)] = 8034,
  [SMALL_STATE(240)] = 8049,
  [SMALL_STATE(241)] = 8076,
  [SMALL_STATE(242)] = 8102,
  [SMALL_STATE(243)] = 8128,
  [SMALL_STATE(244)] = 8154,
  [SMALL_STATE(245)] = 8180,
  [SMALL_STATE(246)] = 8198,
  [SMALL_STATE(247)] = 8224,
  [SMALL_STATE(248)] = 8250,
  [SMALL_STATE(249)] = 8268,
  [SMALL_STATE(250)] = 8286,
  [SMALL_STATE(251)] = 8312,
  [SMALL_STATE(252)] = 8338,
  [SMALL_STATE(253)] = 8364,
  [SMALL_STATE(254)] = 8390,
  [SMALL_STATE(255)] = 8403,
  [SMALL_STATE(256)] = 8423,
  [SMALL_STATE(257)] = 8443,
  [SMALL_STATE(258)] = 8455,
  [SMALL_STATE(259)] = 8467,
  [SMALL_STATE(260)] = 8489,
  [SMALL_STATE(261)] = 8509,
  [SMALL_STATE(262)] = 8531,
  [SMALL_STATE(263)] = 8543,
  [SMALL_STATE(264)] = 8565,
  [SMALL_STATE(265)] = 8577,
  [SMALL_STATE(266)] = 8597,
  [SMALL_STATE(267)] = 8619,
  [SMALL_STATE(268)] = 8639,
  [SMALL_STATE(269)] = 8659,
  [SMALL_STATE(270)] = 8671,
  [SMALL_STATE(271)] = 8691,
  [SMALL_STATE(272)] = 8711,
  [SMALL_STATE(273)] = 8731,
  [SMALL_STATE(274)] = 8751,
  [SMALL_STATE(275)] = 8763,
  [SMALL_STATE(276)] = 8783,
  [SMALL_STATE(277)] = 8803,
  [SMALL_STATE(278)] = 8823,
  [SMALL_STATE(279)] = 8843,
  [SMALL_STATE(280)] = 8863,
  [SMALL_STATE(281)] = 8883,
  [SMALL_STATE(282)] = 8903,
  [SMALL_STATE(283)] = 8923,
  [SMALL_STATE(284)] = 8942,
  [SMALL_STATE(285)] = 8959,
  [SMALL_STATE(286)] = 8976,
  [SMALL_STATE(287)] = 8993,
  [SMALL_STATE(288)] = 9012,
  [SMALL_STATE(289)] = 9029,
  [SMALL_STATE(290)] = 9046,
  [SMALL_STATE(291)] = 9062,
  [SMALL_STATE(292)] = 9078,
  [SMALL_STATE(293)] = 9088,
  [SMALL_STATE(294)] = 9104,
  [SMALL_STATE(295)] = 9120,
  [SMALL_STATE(296)] = 9136,
  [SMALL_STATE(297)] = 9152,
  [SMALL_STATE(298)] = 9165,
  [SMALL_STATE(299)] = 9178,
  [SMALL_STATE(300)] = 9191,
  [SMALL_STATE(301)] = 9204,
  [SMALL_STATE(302)] = 9215,
  [SMALL_STATE(303)] = 9228,
  [SMALL_STATE(304)] = 9241,
  [SMALL_STATE(305)] = 9254,
  [SMALL_STATE(306)] = 9267,
  [SMALL_STATE(307)] = 9280,
  [SMALL_STATE(308)] = 9293,
  [SMALL_STATE(309)] = 9306,
  [SMALL_STATE(310)] = 9315,
  [SMALL_STATE(311)] = 9328,
  [SMALL_STATE(312)] = 9341,
  [SMALL_STATE(313)] = 9354,
  [SMALL_STATE(314)] = 9367,
  [SMALL_STATE(315)] = 9380,
  [SMALL_STATE(316)] = 9393,
  [SMALL_STATE(317)] = 9406,
  [SMALL_STATE(318)] = 9419,
  [SMALL_STATE(319)] = 9432,
  [SMALL_STATE(320)] = 9445,
  [SMALL_STATE(321)] = 9454,
  [SMALL_STATE(322)] = 9463,
  [SMALL_STATE(323)] = 9472,
  [SMALL_STATE(324)] = 9485,
  [SMALL_STATE(325)] = 9498,
  [SMALL_STATE(326)] = 9511,
  [SMALL_STATE(327)] = 9524,
  [SMALL_STATE(328)] = 9531,
  [SMALL_STATE(329)] = 9538,
  [SMALL_STATE(330)] = 9545,
  [SMALL_STATE(331)] = 9556,
  [SMALL_STATE(332)] = 9569,
  [SMALL_STATE(333)] = 9582,
  [SMALL_STATE(334)] = 9595,
  [SMALL_STATE(335)] = 9608,
  [SMALL_STATE(336)] = 9621,
  [SMALL_STATE(337)] = 9634,
  [SMALL_STATE(338)] = 9645,
  [SMALL_STATE(339)] = 9658,
  [SMALL_STATE(340)] = 9671,
  [SMALL_STATE(341)] = 9684,
  [SMALL_STATE(342)] = 9697,
  [SMALL_STATE(343)] = 9710,
  [SMALL_STATE(344)] = 9723,
  [SMALL_STATE(345)] = 9732,
  [SMALL_STATE(346)] = 9745,
  [SMALL_STATE(347)] = 9751,
  [SMALL_STATE(348)] = 9761,
  [SMALL_STATE(349)] = 9771,
  [SMALL_STATE(350)] = 9777,
  [SMALL_STATE(351)] = 9787,
  [SMALL_STATE(352)] = 9797,
  [SMALL_STATE(353)] = 9807,
  [SMALL_STATE(354)] = 9813,
  [SMALL_STATE(355)] = 9823,
  [SMALL_STATE(356)] = 9833,
  [SMALL_STATE(357)] = 9839,
  [SMALL_STATE(358)] = 9845,
  [SMALL_STATE(359)] = 9851,
  [SMALL_STATE(360)] = 9861,
  [SMALL_STATE(361)] = 9867,
  [SMALL_STATE(362)] = 9873,
  [SMALL_STATE(363)] = 9879,
  [SMALL_STATE(364)] = 9885,
  [SMALL_STATE(365)] = 9895,
  [SMALL_STATE(366)] = 9901,
  [SMALL_STATE(367)] = 9907,
  [SMALL_STATE(368)] = 9917,
  [SMALL_STATE(369)] = 9923,
  [SMALL_STATE(370)] = 9929,
  [SMALL_STATE(371)] = 9939,
  [SMALL_STATE(372)] = 9949,
  [SMALL_STATE(373)] = 9959,
  [SMALL_STATE(374)] = 9965,
  [SMALL_STATE(375)] = 9971,
  [SMALL_STATE(376)] = 9977,
  [SMALL_STATE(377)] = 9984,
  [SMALL_STATE(378)] = 9991,
  [SMALL_STATE(379)] = 9998,
  [SMALL_STATE(380)] = 10003,
  [SMALL_STATE(381)] = 10010,
  [SMALL_STATE(382)] = 10017,
  [SMALL_STATE(383)] = 10024,
  [SMALL_STATE(384)] = 10029,
  [SMALL_STATE(385)] = 10034,
  [SMALL_STATE(386)] = 10039,
  [SMALL_STATE(387)] = 10044,
  [SMALL_STATE(388)] = 10049,
  [SMALL_STATE(389)] = 10056,
  [SMALL_STATE(390)] = 10063,
  [SMALL_STATE(391)] = 10070,
  [SMALL_STATE(392)] = 10077,
  [SMALL_STATE(393)] = 10082,
  [SMALL_STATE(394)] = 10089,
  [SMALL_STATE(395)] = 10096,
  [SMALL_STATE(396)] = 10101,
  [SMALL_STATE(397)] = 10108,
  [SMALL_STATE(398)] = 10115,
  [SMALL_STATE(399)] = 10120,
  [SMALL_STATE(400)] = 10127,
  [SMALL_STATE(401)] = 10132,
  [SMALL_STATE(402)] = 10137,
  [SMALL_STATE(403)] = 10142,
  [SMALL_STATE(404)] = 10147,
  [SMALL_STATE(405)] = 10154,
  [SMALL_STATE(406)] = 10159,
  [SMALL_STATE(407)] = 10166,
  [SMALL_STATE(408)] = 10173,
  [SMALL_STATE(409)] = 10180,
  [SMALL_STATE(410)] = 10187,
  [SMALL_STATE(411)] = 10192,
  [SMALL_STATE(412)] = 10199,
  [SMALL_STATE(413)] = 10204,
  [SMALL_STATE(414)] = 10211,
  [SMALL_STATE(415)] = 10218,
  [SMALL_STATE(416)] = 10225,
  [SMALL_STATE(417)] = 10232,
  [SMALL_STATE(418)] = 10237,
  [SMALL_STATE(419)] = 10242,
  [SMALL_STATE(420)] = 10249,
  [SMALL_STATE(421)] = 10256,
  [SMALL_STATE(422)] = 10263,
  [SMALL_STATE(423)] = 10270,
  [SMALL_STATE(424)] = 10277,
  [SMALL_STATE(425)] = 10284,
  [SMALL_STATE(426)] = 10291,
  [SMALL_STATE(427)] = 10298,
  [SMALL_STATE(428)] = 10305,
  [SMALL_STATE(429)] = 10312,
  [SMALL_STATE(430)] = 10319,
  [SMALL_STATE(431)] = 10326,
  [SMALL_STATE(432)] = 10333,
  [SMALL_STATE(433)] = 10340,
  [SMALL_STATE(434)] = 10347,
  [SMALL_STATE(435)] = 10351,
  [SMALL_STATE(436)] = 10355,
  [SMALL_STATE(437)] = 10359,
  [SMALL_STATE(438)] = 10363,
  [SMALL_STATE(439)] = 10367,
  [SMALL_STATE(440)] = 10371,
  [SMALL_STATE(441)] = 10375,
  [SMALL_STATE(442)] = 10379,
  [SMALL_STATE(443)] = 10383,
  [SMALL_STATE(444)] = 10387,
  [SMALL_STATE(445)] = 10391,
  [SMALL_STATE(446)] = 10395,
  [SMALL_STATE(447)] = 10399,
  [SMALL_STATE(448)] = 10403,
  [SMALL_STATE(449)] = 10407,
  [SMALL_STATE(450)] = 10411,
  [SMALL_STATE(451)] = 10415,
  [SMALL_STATE(452)] = 10419,
  [SMALL_STATE(453)] = 10423,
  [SMALL_STATE(454)] = 10427,
  [SMALL_STATE(455)] = 10431,
  [SMALL_STATE(456)] = 10435,
  [SMALL_STATE(457)] = 10439,
  [SMALL_STATE(458)] = 10443,
  [SMALL_STATE(459)] = 10447,
  [SMALL_STATE(460)] = 10451,
  [SMALL_STATE(461)] = 10455,
  [SMALL_STATE(462)] = 10459,
  [SMALL_STATE(463)] = 10463,
  [SMALL_STATE(464)] = 10467,
  [SMALL_STATE(465)] = 10471,
  [SMALL_STATE(466)] = 10475,
  [SMALL_STATE(467)] = 10479,
  [SMALL_STATE(468)] = 10483,
  [SMALL_STATE(469)] = 10487,
  [SMALL_STATE(470)] = 10491,
  [SMALL_STATE(471)] = 10495,
  [SMALL_STATE(472)] = 10499,
  [SMALL_STATE(473)] = 10503,
  [SMALL_STATE(474)] = 10507,
  [SMALL_STATE(475)] = 10511,
  [SMALL_STATE(476)] = 10515,
  [SMALL_STATE(477)] = 10519,
  [SMALL_STATE(478)] = 10523,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 14),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 14),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 13),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 13),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 28),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 28),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 40),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 40),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 42),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 42),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 55),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 55),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(66),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(25),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(269),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(371),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat2, 2, 0, 0), SHIFT_REPEAT(409),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 35),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 35),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 52),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 52),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 4, 0, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 4, 0, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 3, 0, 43),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 3, 0, 43),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 65),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 65),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_condition_body, 2, 0, 66),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_condition_body, 2, 0, 66),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 5, 0, 67),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 5, 0, 67),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 5, 0, 68),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 5, 0, 68),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 5, 0, 69),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 5, 0, 69),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_statement, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 3, 0, 46),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 3, 0, 46),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_entry, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 2, 0, 20),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 2, 0, 20),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_step, 4, 0, 57),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_repeat_step, 4, 0, 57),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_task_step, 4, 0, 7),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_task_step, 4, 0, 7),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(100),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(79),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 38),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 38),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 21),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 21),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 32),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 32),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 48),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 48),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 49),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 49),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 62),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 62),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 38),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 38),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 53),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 53),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 38),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 38),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 70),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 70),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_body_tail_repeat1, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 39),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 39),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 27),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 27),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 33),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 33),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 15),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche, 4, 0, 15),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 15),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skill, 4, 0, 15),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 15),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service, 4, 0, 15),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 15),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 4, 0, 15),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 16),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 16),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 16),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 4, 0, 16),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 17),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 17),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 17),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 17),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 29),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 29),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 2, 0, 23),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 2, 0, 23),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 29),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 29),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 17),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 5, 0, 17),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 34),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 34),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 36),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 37),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 41),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 41),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 33),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 33),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 41),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 6, 0, 41),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 32),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 3, 0, 32),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 50),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 50),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 51),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 51),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 54),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 54),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 56),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 56),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body_tail, 4, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 56),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 56),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 54),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 7, 0, 54),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 48),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 48),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 61),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 61),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 49),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 4, 0, 49),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_body, 1, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 63),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 5, 0, 63),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 64),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 8, 0, 64),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct, 3, 0, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 64),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 8, 0, 64),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, 0, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 71),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 71),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 62),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 62),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 72),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 5, 0, 72),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 73),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_markdown, 6, 0, 73),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 7),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 7),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 7),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 4, 0, 7),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 1, 0, 10),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_body, 1, 0, 10),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_body, 1, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 60),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 60), SHIFT_REPEAT(257),
  [792] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 60), SHIFT_REPEAT(245),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 60), SHIFT_REPEAT(227),
  [798] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 2, 0, 60), SHIFT_REPEAT(389),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_head, 1, 0, 31),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_head, 2, 0, 47),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19), SHIFT_REPEAT(238),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 6),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 6),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_ref_list, 1, 0, 30),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_ref_list, 1, 0, 30),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_ref_list, 2, 0, 44),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_ref_list, 2, 0, 44),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 59),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 59),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 59), SHIFT_REPEAT(469),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 58),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_ref_list_repeat1, 2, 0, 58),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_number_arg, 1, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_number_arg, 1, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_to_modifier, 2, 0, 45),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_to_modifier, 2, 0, 45),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_par_modifier, 2, 0, 43),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_par_modifier, 2, 0, 43),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_step_head_repeat1, 1, 0, 31),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_step_head_repeat1, 1, 0, 31),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_keyword, 1, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_step_keyword, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_step_head_part, 1, 0, 0),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_step_head_part, 1, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [964] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [967] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [972] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 21),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26), SHIFT_REPEAT(351),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_repeat_count, 1, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 74),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1091] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 21),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_text, 1, 0, 0),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_inline_body, 1, 0, 0),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 25),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 27),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 39),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
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
