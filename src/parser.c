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
#define STATE_COUNT 359
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 59

enum ts_symbol_identifiers {
  aux_sym_newline_token1 = 1,
  aux_sym_comment_line_token1 = 2,
  sym_inline_comment = 3,
  anon_sym_Text = 4,
  anon_sym_Number = 5,
  anon_sym_Boolean = 6,
  anon_sym_Json = 7,
  anon_sym_Part = 8,
  sym_array_suffix = 9,
  sym_block_language = 10,
  anon_sym_models = 11,
  anon_sym_tools = 12,
  anon_sym_skills = 13,
  anon_sym_services = 14,
  anon_sym_psyches = 15,
  anon_sym_hands = 16,
  anon_sym_handoffs = 17,
  anon_sym_recall = 18,
  anon_sym_EQ = 19,
  anon_sym_PLUS_EQ = 20,
  anon_sym_DASH_EQ = 21,
  anon_sym_context = 22,
  anon_sym_instruct = 23,
  anon_sym_user = 24,
  anon_sym_assistant = 25,
  anon_sym_tool = 26,
  anon_sym_default = 27,
  anon_sym_none = 28,
  sym_use_keyword = 29,
  sym_struct_keyword = 30,
  anon_sym_psyche = 31,
  anon_sym_skill = 32,
  anon_sym_service = 33,
  anon_sym_prompt = 34,
  sym_thunk_keyword = 35,
  sym_pass_keyword = 36,
  sym_optional_marker = 37,
  sym_arrow = 38,
  sym_colon = 39,
  sym_lparen = 40,
  sym_rparen = 41,
  sym_comma = 42,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 43,
  sym_frontmatter_delimiter = 44,
  sym_cap_uri = 45,
  sym_cap_shorthand = 46,
  sym_bare_value = 47,
  sym_type_name = 48,
  sym_value_name = 49,
  sym_inline_text = 50,
  sym_indented_raw_text = 51,
  sym_fenced_raw_text = 52,
  sym_source_file = 53,
  sym_item = 54,
  sym_newline = 55,
  sym_blank_line = 56,
  sym_comment_line = 57,
  sym_line_end = 58,
  sym_use = 59,
  sym_type = 60,
  sym_base_type = 61,
  sym_builtin_type = 62,
  sym_user_type = 63,
  sym_type_suffix = 64,
  sym_struct = 65,
  sym_struct_name = 66,
  sym_struct_body = 67,
  sym_field = 68,
  sym_field_name = 69,
  sym_psyche = 70,
  sym_skill = 71,
  sym_service = 72,
  sym_prompt = 73,
  sym_cap_name = 74,
  sym_cap_ref = 75,
  sym_cap_body = 76,
  sym_cap_indented = 77,
  sym_cap_markdown = 78,
  sym_cap_indented_content_line = 79,
  sym_cap_fenced_content_line = 80,
  sym_frontmatter = 81,
  sym_property_eq = 82,
  sym_property_colon = 83,
  sym_frontmatter_comment = 84,
  sym_property_key = 85,
  sym_property_value = 86,
  sym_instruct = 87,
  sym_instruct_name = 88,
  sym_instruct_body = 89,
  sym_context = 90,
  sym_context_name = 91,
  sym_context_body = 92,
  sym_block_indented = 93,
  sym_block_fenced = 94,
  sym_block_indented_content_line = 95,
  sym_block_fenced_content_line = 96,
  sym_thunk = 97,
  sym_thunk_name = 98,
  sym_thunk_body = 99,
  sym_params = 100,
  sym_param = 101,
  sym_param_name = 102,
  sym_directive = 103,
  sym_directive_key = 104,
  sym_directive_op = 105,
  sym_directive_csv = 106,
  sym_instruction_section = 107,
  sym_message_section = 108,
  sym_thunk_tail = 109,
  sym_roled_message = 110,
  sym_unroled_message = 111,
  sym_unroled_message_block = 112,
  sym_block_indented_implicit = 113,
  sym_context_block = 114,
  sym_instruct_block = 115,
  sym_roled_message_block = 116,
  sym_pass_statement = 117,
  sym_context_block_kind = 118,
  sym_instruct_block_kind = 119,
  sym_roled_message_kind = 120,
  sym_block_value = 121,
  sym_block_inline = 122,
  sym_block_name = 123,
  sym_block_content_inline = 124,
  sym_psyche_keyword = 125,
  sym_skill_keyword = 126,
  sym_service_keyword = 127,
  sym_prompt_keyword = 128,
  sym_context_keyword = 129,
  sym_instruct_keyword = 130,
  sym_assign_operator = 131,
  sym_fence_open = 132,
  sym_fence_close = 133,
  sym_cap_kind = 134,
  aux_sym_source_file_repeat1 = 135,
  aux_sym_type_repeat1 = 136,
  aux_sym_struct_body_repeat1 = 137,
  aux_sym_cap_indented_repeat1 = 138,
  aux_sym_cap_markdown_repeat1 = 139,
  aux_sym_frontmatter_repeat1 = 140,
  aux_sym_block_indented_repeat1 = 141,
  aux_sym_block_fenced_repeat1 = 142,
  aux_sym_thunk_body_repeat1 = 143,
  aux_sym_thunk_body_repeat2 = 144,
  aux_sym_params_repeat1 = 145,
  aux_sym_directive_csv_repeat1 = 146,
  aux_sym_message_section_repeat1 = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_newline_token1] = "newline_token1",
  [aux_sym_comment_line_token1] = "comment_line_token1",
  [sym_inline_comment] = "inline_comment",
  [anon_sym_Text] = "Text",
  [anon_sym_Number] = "Number",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Json] = "Json",
  [anon_sym_Part] = "Part",
  [sym_array_suffix] = "array_suffix",
  [sym_block_language] = "block_language",
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
  [sym_pass_keyword] = "pass_keyword",
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
  [sym_inline_text] = "inline_text",
  [sym_indented_raw_text] = "indented_raw_text",
  [sym_fenced_raw_text] = "fenced_raw_text",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_newline] = "newline",
  [sym_blank_line] = "blank_line",
  [sym_comment_line] = "comment_line",
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
  [sym_frontmatter_comment] = "frontmatter_comment",
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
  [aux_sym_directive_csv_repeat1] = "directive_csv_repeat1",
  [aux_sym_message_section_repeat1] = "message_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_newline_token1] = aux_sym_newline_token1,
  [aux_sym_comment_line_token1] = aux_sym_comment_line_token1,
  [sym_inline_comment] = sym_inline_comment,
  [anon_sym_Text] = anon_sym_Text,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Json] = anon_sym_Json,
  [anon_sym_Part] = anon_sym_Part,
  [sym_array_suffix] = sym_array_suffix,
  [sym_block_language] = sym_block_language,
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
  [sym_pass_keyword] = sym_pass_keyword,
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
  [sym_inline_text] = sym_inline_text,
  [sym_indented_raw_text] = sym_indented_raw_text,
  [sym_fenced_raw_text] = sym_fenced_raw_text,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_newline] = sym_newline,
  [sym_blank_line] = sym_blank_line,
  [sym_comment_line] = sym_comment_line,
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
  [sym_frontmatter_comment] = sym_frontmatter_comment,
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
  [aux_sym_comment_line_token1] = {
    .visible = false,
    .named = false,
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
  [sym_block_language] = {
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
  [sym_pass_keyword] = {
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
  [sym_inline_text] = {
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
  [sym_comment_line] = {
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
  [sym_frontmatter_comment] = {
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
  field_content = 6,
  field_frontmatter = 7,
  field_instruction = 8,
  field_key = 9,
  field_keyword = 10,
  field_kind = 11,
  field_language = 12,
  field_messages = 13,
  field_name = 14,
  field_operator = 15,
  field_optional = 16,
  field_output = 17,
  field_param = 18,
  field_params = 19,
  field_reference = 20,
  field_suffix = 21,
  field_tail = 22,
  field_type = 23,
  field_value = 24,
  field_values = 25,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arrow] = "arrow",
  [field_base] = "base",
  [field_body] = "body",
  [field_close] = "close",
  [field_colon] = "colon",
  [field_content] = "content",
  [field_frontmatter] = "frontmatter",
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
  [31] = {.index = 66, .length = 5},
  [32] = {.index = 71, .length = 2},
  [33] = {.index = 73, .length = 1},
  [34] = {.index = 74, .length = 1},
  [35] = {.index = 75, .length = 2},
  [36] = {.index = 77, .length = 3},
  [37] = {.index = 80, .length = 4},
  [38] = {.index = 84, .length = 5},
  [39] = {.index = 89, .length = 5},
  [40] = {.index = 94, .length = 5},
  [41] = {.index = 99, .length = 2},
  [42] = {.index = 101, .length = 1},
  [43] = {.index = 102, .length = 2},
  [44] = {.index = 104, .length = 2},
  [45] = {.index = 106, .length = 3},
  [46] = {.index = 109, .length = 1},
  [47] = {.index = 110, .length = 6},
  [48] = {.index = 116, .length = 6},
  [49] = {.index = 122, .length = 6},
  [50] = {.index = 128, .length = 2},
  [51] = {.index = 130, .length = 2},
  [52] = {.index = 132, .length = 2},
  [53] = {.index = 134, .length = 7},
  [54] = {.index = 141, .length = 3},
  [55] = {.index = 144, .length = 3},
  [56] = {.index = 147, .length = 2},
  [57] = {.index = 149, .length = 3},
  [58] = {.index = 152, .length = 3},
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
    {field_close, 2},
  [66] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [71] =
    {field_instruction, 1},
    {field_tail, 2},
  [73] =
    {field_instruction, 2},
  [74] =
    {field_tail, 2},
  [75] =
    {field_instruction, 0},
    {field_tail, 2},
  [77] =
    {field_colon, 1},
    {field_kind, 0},
    {field_value, 2},
  [80] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [84] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [89] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [94] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [99] =
    {field_close, 3},
    {field_language, 1},
  [101] =
    {field_close, 3},
  [102] =
    {field_instruction, 1},
    {field_tail, 3},
  [104] =
    {field_instruction, 2},
    {field_tail, 3},
  [106] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [109] =
    {field_name, 0},
  [110] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [116] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [122] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [128] =
    {field_close, 3},
    {field_frontmatter, 2},
  [130] =
    {field_close, 4},
    {field_language, 1},
  [132] =
    {field_instruction, 2},
    {field_tail, 4},
  [134] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [141] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [144] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [147] =
    {field_close, 4},
    {field_frontmatter, 2},
  [149] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [152] =
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
  [42] = 37,
  [43] = 43,
  [44] = 35,
  [45] = 36,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 37,
  [51] = 35,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 36,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 28,
  [65] = 24,
  [66] = 25,
  [67] = 26,
  [68] = 29,
  [69] = 63,
  [70] = 26,
  [71] = 71,
  [72] = 72,
  [73] = 34,
  [74] = 48,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 55,
  [79] = 56,
  [80] = 80,
  [81] = 81,
  [82] = 58,
  [83] = 59,
  [84] = 60,
  [85] = 61,
  [86] = 62,
  [87] = 28,
  [88] = 24,
  [89] = 29,
  [90] = 90,
  [91] = 91,
  [92] = 25,
  [93] = 93,
  [94] = 25,
  [95] = 24,
  [96] = 26,
  [97] = 29,
  [98] = 98,
  [99] = 99,
  [100] = 28,
  [101] = 29,
  [102] = 24,
  [103] = 63,
  [104] = 25,
  [105] = 105,
  [106] = 29,
  [107] = 24,
  [108] = 26,
  [109] = 25,
  [110] = 26,
  [111] = 111,
  [112] = 29,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 58,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 28,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 24,
  [132] = 132,
  [133] = 133,
  [134] = 25,
  [135] = 135,
  [136] = 26,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 59,
  [145] = 60,
  [146] = 61,
  [147] = 147,
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
  [160] = 62,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
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
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 185,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 184,
  [199] = 196,
  [200] = 185,
  [201] = 197,
  [202] = 184,
  [203] = 196,
  [204] = 197,
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
  [216] = 214,
  [217] = 214,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 219,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 29,
  [235] = 235,
  [236] = 236,
  [237] = 25,
  [238] = 26,
  [239] = 239,
  [240] = 29,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 220,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 219,
  [250] = 243,
  [251] = 251,
  [252] = 26,
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
  [264] = 25,
  [265] = 26,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 29,
  [272] = 272,
  [273] = 273,
  [274] = 25,
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
  [285] = 278,
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
  [306] = 278,
  [307] = 276,
  [308] = 308,
  [309] = 309,
  [310] = 278,
  [311] = 276,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 278,
  [317] = 278,
  [318] = 278,
  [319] = 278,
  [320] = 278,
  [321] = 278,
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
  [336] = 329,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 329,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(130);
      ADVANCE_MAP(
        '\n', 131,
        '\r', 1,
        '#', 133,
        '(', 186,
        ')', 187,
        '+', 14,
        ',', 188,
        '-', 8,
        ':', 185,
        '=', 149,
        '?', 183,
        'B', 211,
        'J', 214,
        'N', 217,
        'P', 199,
        'T', 202,
        '[', 15,
        '`', 17,
        'a', 96,
        'c', 80,
        'd', 34,
        'h', 18,
        'i', 75,
        'm', 31,
        'n', 83,
        'p', 21,
        'r', 35,
        's', 36,
        't', 51,
        'u', 97,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(131);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 131,
        '\r', 1,
        '#', 133,
        '`', 273,
        'd', 230,
        'n', 248,
        '\t', 271,
        '\f', 271,
        ' ', 271,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '(') ADVANCE(186);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(184);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '>') ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(122);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(150);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(139);
      END_STATE();
    case 16:
      if (lookahead == '`') ADVANCE(189);
      END_STATE();
    case 17:
      if (lookahead == '`') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'k') ADVANCE(55);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'k') ADVANCE(59);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 114:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 115:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 116:
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 118:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 119:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 120:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(120);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 121:
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
    case 122:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(192);
      END_STATE();
    case 123:
      if (eof) ADVANCE(130);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\f') SKIP(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 124:
      if (eof) ADVANCE(130);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\f') SKIP(124);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 125:
      if (eof) ADVANCE(130);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\f') SKIP(125);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 126:
      if (eof) ADVANCE(130);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\f') SKIP(126);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 127:
      if (eof) ADVANCE(130);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\f') SKIP(127);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 128:
      if (eof) ADVANCE(130);
      ADVANCE_MAP(
        '\n', 131,
        '\r', 1,
        '#', 7,
        'c', 80,
        'i', 75,
        'p', 87,
        's', 46,
        't', 50,
        'u', 100,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 129:
      if (eof) ADVANCE(130);
      ADVANCE_MAP(
        '\n', 131,
        '\r', 1,
        '#', 7,
        'c', 247,
        'i', 244,
        'p', 251,
        's', 225,
        't', 233,
        'u', 254,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_comment_line_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(196);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(197);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(194);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(192);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_inline_text);
      ADVANCE_MAP(
        '\n', 131,
        '\r', 1,
        '#', 133,
        '`', 273,
        'd', 230,
        'n', 248,
        '\t', 271,
        '\f', 271,
        ' ', 271,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '`') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_inline_text);
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
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 131,
        '\f', 276,
        '\r', 1,
        '#', 281,
        'a', 353,
        'c', 338,
        'h', 282,
        'i', 333,
        'm', 335,
        'p', 284,
        'r', 302,
        's', 303,
        't', 309,
        'u', 350,
        '\t', 276,
        ' ', 276,
      );
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 131,
        '\f', 277,
        '\r', 1,
        '#', 281,
        'a', 353,
        'c', 338,
        'i', 333,
        'p', 285,
        's', 306,
        't', 310,
        'u', 350,
        '\t', 277,
        ' ', 277,
      );
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 131,
        '\f', 278,
        '\r', 1,
        '#', 281,
        'c', 247,
        'i', 244,
        'p', 251,
        's', 225,
        't', 233,
        'u', 254,
        '\t', 278,
        ' ', 278,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 131,
        '\f', 279,
        '\r', 1,
        '#', 281,
        'c', 338,
        'i', 333,
        'p', 344,
        's', 306,
        't', 311,
        'u', 356,
        '\t', 279,
        ' ', 279,
      );
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 131,
        '\f', 280,
        '\r', 1,
        '#', 281,
        'a', 353,
        'c', 338,
        'i', 333,
        'p', 344,
        's', 306,
        't', 310,
        'u', 350,
        '\t', 280,
        ' ', 280,
      );
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'k') ADVANCE(314);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'k') ADVANCE(318);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(380);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(380);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(380);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 128},
  [2] = {.lex_state = 123},
  [3] = {.lex_state = 123},
  [4] = {.lex_state = 123},
  [5] = {.lex_state = 123},
  [6] = {.lex_state = 123},
  [7] = {.lex_state = 123},
  [8] = {.lex_state = 123},
  [9] = {.lex_state = 123},
  [10] = {.lex_state = 123},
  [11] = {.lex_state = 123},
  [12] = {.lex_state = 128},
  [13] = {.lex_state = 128},
  [14] = {.lex_state = 124},
  [15] = {.lex_state = 124},
  [16] = {.lex_state = 124},
  [17] = {.lex_state = 123},
  [18] = {.lex_state = 124},
  [19] = {.lex_state = 124},
  [20] = {.lex_state = 124},
  [21] = {.lex_state = 127},
  [22] = {.lex_state = 127},
  [23] = {.lex_state = 127},
  [24] = {.lex_state = 123},
  [25] = {.lex_state = 123},
  [26] = {.lex_state = 123},
  [27] = {.lex_state = 123},
  [28] = {.lex_state = 123},
  [29] = {.lex_state = 123},
  [30] = {.lex_state = 124},
  [31] = {.lex_state = 124},
  [32] = {.lex_state = 124},
  [33] = {.lex_state = 124},
  [34] = {.lex_state = 124},
  [35] = {.lex_state = 124},
  [36] = {.lex_state = 124},
  [37] = {.lex_state = 124},
  [38] = {.lex_state = 125},
  [39] = {.lex_state = 127},
  [40] = {.lex_state = 127},
  [41] = {.lex_state = 125},
  [42] = {.lex_state = 127},
  [43] = {.lex_state = 125},
  [44] = {.lex_state = 127},
  [45] = {.lex_state = 127},
  [46] = {.lex_state = 129},
  [47] = {.lex_state = 129},
  [48] = {.lex_state = 124},
  [49] = {.lex_state = 124},
  [50] = {.lex_state = 126},
  [51] = {.lex_state = 126},
  [52] = {.lex_state = 124},
  [53] = {.lex_state = 124},
  [54] = {.lex_state = 124},
  [55] = {.lex_state = 124},
  [56] = {.lex_state = 124},
  [57] = {.lex_state = 126},
  [58] = {.lex_state = 124},
  [59] = {.lex_state = 124},
  [60] = {.lex_state = 124},
  [61] = {.lex_state = 124},
  [62] = {.lex_state = 124},
  [63] = {.lex_state = 124},
  [64] = {.lex_state = 124},
  [65] = {.lex_state = 124},
  [66] = {.lex_state = 124},
  [67] = {.lex_state = 124},
  [68] = {.lex_state = 124},
  [69] = {.lex_state = 127},
  [70] = {.lex_state = 127},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 127},
  [73] = {.lex_state = 128},
  [74] = {.lex_state = 127},
  [75] = {.lex_state = 128},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 127},
  [79] = {.lex_state = 127},
  [80] = {.lex_state = 128},
  [81] = {.lex_state = 127},
  [82] = {.lex_state = 127},
  [83] = {.lex_state = 127},
  [84] = {.lex_state = 127},
  [85] = {.lex_state = 127},
  [86] = {.lex_state = 127},
  [87] = {.lex_state = 127},
  [88] = {.lex_state = 127},
  [89] = {.lex_state = 127},
  [90] = {.lex_state = 127},
  [91] = {.lex_state = 127},
  [92] = {.lex_state = 127},
  [93] = {.lex_state = 125},
  [94] = {.lex_state = 125},
  [95] = {.lex_state = 125},
  [96] = {.lex_state = 125},
  [97] = {.lex_state = 125},
  [98] = {.lex_state = 125},
  [99] = {.lex_state = 129},
  [100] = {.lex_state = 129},
  [101] = {.lex_state = 129},
  [102] = {.lex_state = 126},
  [103] = {.lex_state = 126},
  [104] = {.lex_state = 126},
  [105] = {.lex_state = 129},
  [106] = {.lex_state = 126},
  [107] = {.lex_state = 129},
  [108] = {.lex_state = 126},
  [109] = {.lex_state = 129},
  [110] = {.lex_state = 129},
  [111] = {.lex_state = 128},
  [112] = {.lex_state = 128},
  [113] = {.lex_state = 128},
  [114] = {.lex_state = 128},
  [115] = {.lex_state = 128},
  [116] = {.lex_state = 128},
  [117] = {.lex_state = 128},
  [118] = {.lex_state = 128},
  [119] = {.lex_state = 128},
  [120] = {.lex_state = 128},
  [121] = {.lex_state = 128},
  [122] = {.lex_state = 128},
  [123] = {.lex_state = 128},
  [124] = {.lex_state = 128},
  [125] = {.lex_state = 128},
  [126] = {.lex_state = 128},
  [127] = {.lex_state = 128},
  [128] = {.lex_state = 128},
  [129] = {.lex_state = 128},
  [130] = {.lex_state = 128},
  [131] = {.lex_state = 128},
  [132] = {.lex_state = 128},
  [133] = {.lex_state = 128},
  [134] = {.lex_state = 128},
  [135] = {.lex_state = 128},
  [136] = {.lex_state = 128},
  [137] = {.lex_state = 128},
  [138] = {.lex_state = 128},
  [139] = {.lex_state = 128},
  [140] = {.lex_state = 128},
  [141] = {.lex_state = 128},
  [142] = {.lex_state = 128},
  [143] = {.lex_state = 128},
  [144] = {.lex_state = 128},
  [145] = {.lex_state = 128},
  [146] = {.lex_state = 128},
  [147] = {.lex_state = 128},
  [148] = {.lex_state = 128},
  [149] = {.lex_state = 128},
  [150] = {.lex_state = 128},
  [151] = {.lex_state = 128},
  [152] = {.lex_state = 128},
  [153] = {.lex_state = 128},
  [154] = {.lex_state = 128},
  [155] = {.lex_state = 128},
  [156] = {.lex_state = 128},
  [157] = {.lex_state = 128},
  [158] = {.lex_state = 128},
  [159] = {.lex_state = 128},
  [160] = {.lex_state = 128},
  [161] = {.lex_state = 128},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 128},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 119},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 120},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 121},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 119},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 128},
  [309] = {.lex_state = 121},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 3},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 3},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 120},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 3},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 121},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 3},
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
  [356] = {.lex_state = 120},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
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
    [sym_pass_keyword] = ACTIONS(1),
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
    [sym_source_file] = STATE(328),
    [sym_item] = STATE(12),
    [sym_newline] = STATE(131),
    [sym_blank_line] = STATE(12),
    [sym_comment_line] = STATE(12),
    [sym_use] = STATE(121),
    [sym_struct] = STATE(121),
    [sym_psyche] = STATE(121),
    [sym_skill] = STATE(121),
    [sym_service] = STATE(121),
    [sym_prompt] = STATE(121),
    [sym_instruct] = STATE(121),
    [sym_context] = STATE(121),
    [sym_thunk] = STATE(121),
    [sym_psyche_keyword] = STATE(322),
    [sym_skill_keyword] = STATE(277),
    [sym_service_keyword] = STATE(293),
    [sym_prompt_keyword] = STATE(275),
    [sym_context_keyword] = STATE(253),
    [sym_instruct_keyword] = STATE(273),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [aux_sym_comment_line_token1] = ACTIONS(7),
    [anon_sym_context] = ACTIONS(9),
    [anon_sym_instruct] = ACTIONS(11),
    [sym_use_keyword] = ACTIONS(13),
    [sym_struct_keyword] = ACTIONS(15),
    [anon_sym_psyche] = ACTIONS(17),
    [anon_sym_skill] = ACTIONS(19),
    [anon_sym_service] = ACTIONS(21),
    [anon_sym_prompt] = ACTIONS(23),
    [sym_thunk_keyword] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    STATE(15), 1,
      sym_instruction_section,
    STATE(24), 1,
      sym_newline,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(129), 1,
      sym_message_section,
    STATE(130), 1,
      sym_thunk_tail,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(3), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(41), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [101] = 27,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_instruction_section,
    STATE(24), 1,
      sym_newline,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(126), 1,
      sym_thunk_tail,
    STATE(129), 1,
      sym_message_section,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(17), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(49), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [202] = 25,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(14), 1,
      sym_instruction_section,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(129), 1,
      sym_message_section,
    STATE(152), 1,
      sym_thunk_tail,
    STATE(153), 1,
      sym_thunk_body,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(53), 9,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [296] = 25,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(14), 1,
      sym_instruction_section,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(114), 1,
      sym_thunk_body,
    STATE(129), 1,
      sym_message_section,
    STATE(152), 1,
      sym_thunk_tail,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(57), 9,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [390] = 25,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(14), 1,
      sym_instruction_section,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(129), 1,
      sym_message_section,
    STATE(140), 1,
      sym_thunk_body,
    STATE(152), 1,
      sym_thunk_tail,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(61), 9,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [484] = 25,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(14), 1,
      sym_instruction_section,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(122), 1,
      sym_thunk_body,
    STATE(129), 1,
      sym_message_section,
    STATE(152), 1,
      sym_thunk_tail,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(65), 9,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [578] = 25,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(14), 1,
      sym_instruction_section,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(129), 1,
      sym_message_section,
    STATE(152), 1,
      sym_thunk_tail,
    STATE(154), 1,
      sym_thunk_body,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(69), 9,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [672] = 25,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(14), 1,
      sym_instruction_section,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(129), 1,
      sym_message_section,
    STATE(152), 1,
      sym_thunk_tail,
    STATE(156), 1,
      sym_thunk_body,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(73), 9,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [766] = 25,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(14), 1,
      sym_instruction_section,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(129), 1,
      sym_message_section,
    STATE(138), 1,
      sym_thunk_body,
    STATE(152), 1,
      sym_thunk_tail,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(77), 9,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [860] = 25,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_directive,
    STATE(14), 1,
      sym_instruction_section,
    STATE(30), 1,
      sym_instruct_block,
    STATE(31), 1,
      sym_context_block,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(113), 1,
      sym_thunk_body,
    STATE(129), 1,
      sym_message_section,
    STATE(152), 1,
      sym_thunk_tail,
    STATE(235), 1,
      sym_directive_key,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(81), 9,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [954] = 21,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(9), 1,
      anon_sym_context,
    ACTIONS(11), 1,
      anon_sym_instruct,
    ACTIONS(13), 1,
      sym_use_keyword,
    ACTIONS(15), 1,
      sym_struct_keyword,
    ACTIONS(17), 1,
      anon_sym_psyche,
    ACTIONS(19), 1,
      anon_sym_skill,
    ACTIONS(21), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      anon_sym_prompt,
    ACTIONS(25), 1,
      sym_thunk_keyword,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_newline,
    STATE(253), 1,
      sym_context_keyword,
    STATE(273), 1,
      sym_instruct_keyword,
    STATE(275), 1,
      sym_prompt_keyword,
    STATE(277), 1,
      sym_skill_keyword,
    STATE(293), 1,
      sym_service_keyword,
    STATE(322), 1,
      sym_psyche_keyword,
    STATE(13), 4,
      sym_item,
      sym_blank_line,
      sym_comment_line,
      aux_sym_source_file_repeat1,
    STATE(121), 9,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_context,
      sym_thunk,
  [1029] = 21,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym_newline_token1,
    ACTIONS(90), 1,
      aux_sym_comment_line_token1,
    ACTIONS(93), 1,
      anon_sym_context,
    ACTIONS(96), 1,
      anon_sym_instruct,
    ACTIONS(99), 1,
      sym_use_keyword,
    ACTIONS(102), 1,
      sym_struct_keyword,
    ACTIONS(105), 1,
      anon_sym_psyche,
    ACTIONS(108), 1,
      anon_sym_skill,
    ACTIONS(111), 1,
      anon_sym_service,
    ACTIONS(114), 1,
      anon_sym_prompt,
    ACTIONS(117), 1,
      sym_thunk_keyword,
    STATE(131), 1,
      sym_newline,
    STATE(253), 1,
      sym_context_keyword,
    STATE(273), 1,
      sym_instruct_keyword,
    STATE(275), 1,
      sym_prompt_keyword,
    STATE(277), 1,
      sym_skill_keyword,
    STATE(293), 1,
      sym_service_keyword,
    STATE(322), 1,
      sym_psyche_keyword,
    STATE(13), 4,
      sym_item,
      sym_blank_line,
      sym_comment_line,
      aux_sym_source_file_repeat1,
    STATE(121), 9,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_context,
      sym_thunk,
  [1104] = 18,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(65), 1,
      sym_newline,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(129), 1,
      sym_message_section,
    STATE(132), 1,
      sym_thunk_tail,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(16), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(126), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1172] = 18,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(65), 1,
      sym_newline,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(124), 1,
      sym_thunk_tail,
    STATE(129), 1,
      sym_message_section,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(18), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(130), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1240] = 18,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(65), 1,
      sym_newline,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(128), 1,
      sym_thunk_tail,
    STATE(129), 1,
      sym_message_section,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(34), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(134), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1308] = 8,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      aux_sym_newline_token1,
    ACTIONS(141), 1,
      aux_sym_comment_line_token1,
    STATE(24), 1,
      sym_newline,
    STATE(235), 1,
      sym_directive_key,
    STATE(17), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(144), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
    ACTIONS(147), 14,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [1356] = 18,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(65), 1,
      sym_newline,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(129), 1,
      sym_message_section,
    STATE(148), 1,
      sym_thunk_tail,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(34), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(151), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1424] = 18,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(65), 1,
      sym_newline,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(129), 1,
      sym_message_section,
    STATE(149), 1,
      sym_thunk_tail,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(20), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(155), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1492] = 18,
    ACTIONS(43), 1,
      sym_pass_keyword,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(65), 1,
      sym_newline,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(75), 1,
      sym_pass_statement,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(111), 1,
      sym_thunk_tail,
    STATE(129), 1,
      sym_message_section,
    STATE(332), 1,
      sym_roled_message_kind,
    STATE(21), 2,
      sym_roled_message,
      sym_unroled_message,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(34), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(159), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1560] = 13,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      aux_sym_newline_token1,
    ACTIONS(165), 1,
      aux_sym_comment_line_token1,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(88), 1,
      sym_newline,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(332), 1,
      sym_roled_message_kind,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(23), 5,
      sym_blank_line,
      sym_comment_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(167), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1614] = 13,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      aux_sym_newline_token1,
    ACTIONS(174), 1,
      aux_sym_comment_line_token1,
    ACTIONS(182), 1,
      sym_indented_raw_text,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(88), 1,
      sym_newline,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(332), 1,
      sym_roled_message_kind,
    ACTIONS(179), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(22), 5,
      sym_blank_line,
      sym_comment_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(177), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1668] = 13,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(163), 1,
      aux_sym_newline_token1,
    ACTIONS(165), 1,
      aux_sym_comment_line_token1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_block_indented_content_line,
    STATE(72), 1,
      sym_roled_message_block,
    STATE(88), 1,
      sym_newline,
    STATE(90), 1,
      sym_block_indented_implicit,
    STATE(91), 1,
      sym_unroled_message_block,
    STATE(332), 1,
      sym_roled_message_kind,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(22), 5,
      sym_blank_line,
      sym_comment_line,
      sym_roled_message,
      sym_unroled_message,
      aux_sym_message_section_repeat1,
    ACTIONS(187), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1722] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 24,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [1752] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 24,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [1782] = 2,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 24,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [1812] = 2,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 24,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [1842] = 2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 24,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [1872] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 24,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [1902] = 9,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_context_block,
    STATE(65), 1,
      sym_newline,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(32), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(215), 13,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [1944] = 9,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_instruct_block,
    STATE(65), 1,
      sym_newline,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(33), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(215), 13,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [1986] = 9,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_context_block,
    STATE(65), 1,
      sym_newline,
    STATE(342), 1,
      sym_context_block_kind,
    STATE(34), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(219), 13,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2028] = 9,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(124), 1,
      aux_sym_comment_line_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_instruct_block,
    STATE(65), 1,
      sym_newline,
    STATE(325), 1,
      sym_instruct_block_kind,
    STATE(34), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(219), 13,
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
      sym_pass_keyword,
      sym_indented_raw_text,
  [2070] = 6,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      aux_sym_comment_line_token1,
    STATE(65), 1,
      sym_newline,
    STATE(34), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(229), 14,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2104] = 6,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      sym_indented_raw_text,
    STATE(65), 1,
      sym_newline,
    STATE(36), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(233), 14,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
  [2138] = 6,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(235), 1,
      sym_indented_raw_text,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_newline,
    STATE(37), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(239), 14,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
  [2172] = 6,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      aux_sym_newline_token1,
    ACTIONS(248), 1,
      sym_indented_raw_text,
    STATE(65), 1,
      sym_newline,
    STATE(37), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(246), 14,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
  [2206] = 8,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      aux_sym_newline_token1,
    ACTIONS(257), 1,
      sym_value_name,
    ACTIONS(259), 1,
      sym_indented_raw_text,
    STATE(95), 1,
      sym_newline,
    STATE(304), 1,
      sym_property_key,
    STATE(41), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(255), 10,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2243] = 6,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(163), 1,
      aux_sym_newline_token1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_newline,
    STATE(40), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(263), 13,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2276] = 6,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(163), 1,
      aux_sym_newline_token1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_newline,
    STATE(42), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(267), 13,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2309] = 8,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 1,
      aux_sym_newline_token1,
    ACTIONS(276), 1,
      sym_value_name,
    ACTIONS(279), 1,
      sym_indented_raw_text,
    STATE(95), 1,
      sym_newline,
    STATE(304), 1,
      sym_property_key,
    STATE(41), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(274), 10,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2346] = 6,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      aux_sym_newline_token1,
    ACTIONS(285), 1,
      sym_indented_raw_text,
    STATE(88), 1,
      sym_newline,
    STATE(42), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(246), 13,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2379] = 8,
    ACTIONS(253), 1,
      aux_sym_newline_token1,
    ACTIONS(257), 1,
      sym_value_name,
    ACTIONS(259), 1,
      sym_indented_raw_text,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_newline,
    STATE(304), 1,
      sym_property_key,
    STATE(38), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(290), 10,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2416] = 6,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(163), 1,
      aux_sym_newline_token1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_newline,
    STATE(45), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(233), 13,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2449] = 6,
    ACTIONS(45), 1,
      sym_indented_raw_text,
    ACTIONS(163), 1,
      aux_sym_newline_token1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_newline,
    STATE(42), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(239), 13,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2482] = 8,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      aux_sym_newline_token1,
    ACTIONS(296), 1,
      aux_sym_comment_line_token1,
    ACTIONS(300), 1,
      sym_value_name,
    STATE(107), 1,
      sym_newline,
    STATE(281), 1,
      sym_field_name,
    STATE(47), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(298), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2518] = 8,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      aux_sym_newline_token1,
    ACTIONS(307), 1,
      aux_sym_comment_line_token1,
    ACTIONS(312), 1,
      sym_value_name,
    STATE(107), 1,
      sym_newline,
    STATE(281), 1,
      sym_field_name,
    STATE(47), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(310), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2554] = 2,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2576] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2598] = 6,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(322), 1,
      sym_indented_raw_text,
    STATE(102), 1,
      sym_newline,
    STATE(50), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(246), 10,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2628] = 6,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_indented_raw_text,
    STATE(102), 1,
      sym_newline,
    STATE(57), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(233), 10,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2658] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2680] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2702] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2724] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2746] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2768] = 6,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_indented_raw_text,
    STATE(102), 1,
      sym_newline,
    STATE(50), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(239), 10,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2798] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2820] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2842] = 2,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2864] = 2,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2886] = 2,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2908] = 2,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2930] = 2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2952] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2974] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [2996] = 2,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3018] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 16,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_pass_keyword,
      sym_indented_raw_text,
  [3040] = 2,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3061] = 2,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3082] = 12,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(373), 1,
      sym_inline_comment,
    ACTIONS(377), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(379), 1,
      sym_inline_text,
    STATE(35), 1,
      sym_line_end,
    STATE(53), 1,
      sym_block_value,
    STATE(66), 1,
      sym_newline,
    STATE(217), 1,
      sym_fence_open,
    STATE(220), 1,
      sym_block_content_inline,
    STATE(250), 1,
      sym_block_name,
    ACTIONS(375), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(48), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [3123] = 2,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    ACTIONS(383), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3144] = 5,
    ACTIONS(385), 1,
      aux_sym_newline_token1,
    ACTIONS(388), 1,
      aux_sym_comment_line_token1,
    STATE(131), 1,
      sym_newline,
    STATE(73), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(221), 10,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [3171] = 2,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3192] = 5,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    STATE(131), 1,
      sym_newline,
    STATE(80), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(391), 10,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [3219] = 12,
    ACTIONS(122), 1,
      aux_sym_newline_token1,
    ACTIONS(373), 1,
      sym_inline_comment,
    ACTIONS(377), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(379), 1,
      sym_inline_text,
    STATE(35), 1,
      sym_line_end,
    STATE(54), 1,
      sym_block_value,
    STATE(66), 1,
      sym_newline,
    STATE(217), 1,
      sym_fence_open,
    STATE(220), 1,
      sym_block_content_inline,
    STATE(250), 1,
      sym_block_name,
    ACTIONS(375), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(48), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [3260] = 12,
    ACTIONS(163), 1,
      aux_sym_newline_token1,
    ACTIONS(377), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(379), 1,
      sym_inline_text,
    ACTIONS(393), 1,
      sym_inline_comment,
    STATE(44), 1,
      sym_line_end,
    STATE(81), 1,
      sym_block_value,
    STATE(92), 1,
      sym_newline,
    STATE(214), 1,
      sym_fence_open,
    STATE(243), 1,
      sym_block_name,
    STATE(244), 1,
      sym_block_content_inline,
    ACTIONS(375), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(74), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [3301] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3322] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3343] = 5,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    STATE(131), 1,
      sym_newline,
    STATE(73), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(395), 10,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [3370] = 2,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3391] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3412] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3433] = 2,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3454] = 2,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3475] = 2,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3496] = 2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3517] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3538] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3559] = 2,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3580] = 2,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3601] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 15,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3622] = 2,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(411), 13,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [3641] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 13,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [3660] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 13,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [3679] = 2,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 13,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [3698] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 13,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [3717] = 2,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 13,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
      sym_indented_raw_text,
  [3736] = 2,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(419), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [3754] = 2,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(207), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [3772] = 2,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(211), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [3790] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3808] = 2,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3826] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3844] = 2,
    ACTIONS(421), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(423), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [3862] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3880] = 2,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(191), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [3898] = 2,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [3916] = 2,
    ACTIONS(193), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(195), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [3934] = 2,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(199), 10,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [3952] = 1,
    ACTIONS(425), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [3967] = 1,
    ACTIONS(209), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [3982] = 1,
    ACTIONS(427), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [3997] = 1,
    ACTIONS(429), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4012] = 1,
    ACTIONS(431), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4027] = 1,
    ACTIONS(433), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4042] = 1,
    ACTIONS(435), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4057] = 1,
    ACTIONS(349), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4072] = 1,
    ACTIONS(437), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4087] = 1,
    ACTIONS(439), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4102] = 1,
    ACTIONS(441), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4117] = 1,
    ACTIONS(443), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4132] = 1,
    ACTIONS(445), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4147] = 1,
    ACTIONS(447), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4162] = 1,
    ACTIONS(449), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4177] = 1,
    ACTIONS(451), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4192] = 1,
    ACTIONS(205), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4207] = 1,
    ACTIONS(453), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4222] = 1,
    ACTIONS(455), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4237] = 1,
    ACTIONS(457), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4252] = 1,
    ACTIONS(189), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4267] = 1,
    ACTIONS(459), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4282] = 1,
    ACTIONS(461), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4297] = 1,
    ACTIONS(193), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4312] = 1,
    ACTIONS(463), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4327] = 1,
    ACTIONS(197), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4342] = 1,
    ACTIONS(465), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4357] = 1,
    ACTIONS(467), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4372] = 1,
    ACTIONS(469), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4387] = 1,
    ACTIONS(471), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4402] = 1,
    ACTIONS(473), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4417] = 1,
    ACTIONS(475), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4432] = 1,
    ACTIONS(477), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4447] = 1,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4462] = 1,
    ACTIONS(357), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4477] = 1,
    ACTIONS(361), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4492] = 1,
    ACTIONS(479), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4507] = 1,
    ACTIONS(481), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4522] = 1,
    ACTIONS(483), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4537] = 1,
    ACTIONS(485), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4552] = 1,
    ACTIONS(487), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4567] = 1,
    ACTIONS(489), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4582] = 1,
    ACTIONS(491), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4597] = 1,
    ACTIONS(493), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4612] = 1,
    ACTIONS(495), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4627] = 1,
    ACTIONS(497), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4642] = 1,
    ACTIONS(499), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4657] = 1,
    ACTIONS(501), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4672] = 1,
    ACTIONS(503), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4687] = 1,
    ACTIONS(365), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4702] = 1,
    ACTIONS(505), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [4717] = 7,
    ACTIONS(294), 1,
      aux_sym_newline_token1,
    ACTIONS(296), 1,
      aux_sym_comment_line_token1,
    ACTIONS(507), 1,
      sym_value_name,
    STATE(107), 1,
      sym_newline,
    STATE(135), 1,
      sym_struct_body,
    STATE(281), 1,
      sym_field_name,
    STATE(46), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [4742] = 5,
    ACTIONS(511), 1,
      sym_type_name,
    STATE(182), 1,
      sym_base_type,
    STATE(313), 1,
      sym_type,
    STATE(211), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(509), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [4763] = 5,
    ACTIONS(511), 1,
      sym_type_name,
    STATE(182), 1,
      sym_base_type,
    STATE(347), 1,
      sym_type,
    STATE(211), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(509), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [4784] = 5,
    ACTIONS(511), 1,
      sym_type_name,
    STATE(182), 1,
      sym_base_type,
    STATE(246), 1,
      sym_type,
    STATE(211), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(509), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [4805] = 5,
    ACTIONS(511), 1,
      sym_type_name,
    STATE(182), 1,
      sym_base_type,
    STATE(351), 1,
      sym_type,
    STATE(211), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(509), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [4826] = 5,
    ACTIONS(511), 1,
      sym_type_name,
    STATE(182), 1,
      sym_base_type,
    STATE(334), 1,
      sym_type,
    STATE(211), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(509), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [4847] = 5,
    ACTIONS(511), 1,
      sym_type_name,
    STATE(182), 1,
      sym_base_type,
    STATE(354), 1,
      sym_type,
    STATE(211), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(509), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [4868] = 5,
    ACTIONS(511), 1,
      sym_type_name,
    STATE(182), 1,
      sym_base_type,
    STATE(300), 1,
      sym_type,
    STATE(211), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(509), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [4889] = 5,
    ACTIONS(511), 1,
      sym_type_name,
    STATE(182), 1,
      sym_base_type,
    STATE(222), 1,
      sym_type,
    STATE(211), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(509), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [4910] = 8,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(517), 1,
      sym_frontmatter_delimiter,
    ACTIONS(519), 1,
      sym_fenced_raw_text,
    STATE(157), 1,
      sym_fence_close,
    STATE(189), 1,
      sym_frontmatter,
    STATE(272), 1,
      sym_newline,
    STATE(190), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [4936] = 8,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(517), 1,
      sym_frontmatter_delimiter,
    ACTIONS(519), 1,
      sym_fenced_raw_text,
    STATE(143), 1,
      sym_fence_close,
    STATE(186), 1,
      sym_frontmatter,
    STATE(272), 1,
      sym_newline,
    STATE(187), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [4962] = 8,
    ACTIONS(521), 1,
      aux_sym_newline_token1,
    ACTIONS(523), 1,
      sym_inline_comment,
    ACTIONS(525), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(51), 1,
      sym_line_end,
    STATE(104), 1,
      sym_newline,
    STATE(125), 1,
      sym_context_body,
    STATE(216), 1,
      sym_fence_open,
    STATE(141), 2,
      sym_block_indented,
      sym_block_fenced,
  [4988] = 8,
    ACTIONS(521), 1,
      aux_sym_newline_token1,
    ACTIONS(523), 1,
      sym_inline_comment,
    ACTIONS(525), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(51), 1,
      sym_line_end,
    STATE(104), 1,
      sym_newline,
    STATE(161), 1,
      sym_instruct_body,
    STATE(216), 1,
      sym_fence_open,
    STATE(137), 2,
      sym_block_indented,
      sym_block_fenced,
  [5014] = 8,
    ACTIONS(525), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(527), 1,
      aux_sym_newline_token1,
    ACTIONS(529), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_line_end,
    STATE(94), 1,
      sym_newline,
    STATE(150), 1,
      sym_cap_body,
    STATE(215), 1,
      sym_fence_open,
    STATE(151), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [5040] = 8,
    ACTIONS(521), 1,
      aux_sym_newline_token1,
    ACTIONS(523), 1,
      sym_inline_comment,
    ACTIONS(525), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(51), 1,
      sym_line_end,
    STATE(104), 1,
      sym_newline,
    STATE(133), 1,
      sym_context_body,
    STATE(216), 1,
      sym_fence_open,
    STATE(141), 2,
      sym_block_indented,
      sym_block_fenced,
  [5066] = 8,
    ACTIONS(521), 1,
      aux_sym_newline_token1,
    ACTIONS(523), 1,
      sym_inline_comment,
    ACTIONS(525), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(51), 1,
      sym_line_end,
    STATE(104), 1,
      sym_newline,
    STATE(142), 1,
      sym_instruct_body,
    STATE(216), 1,
      sym_fence_open,
    STATE(137), 2,
      sym_block_indented,
      sym_block_fenced,
  [5092] = 8,
    ACTIONS(525), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(527), 1,
      aux_sym_newline_token1,
    ACTIONS(529), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_line_end,
    STATE(94), 1,
      sym_newline,
    STATE(155), 1,
      sym_cap_body,
    STATE(215), 1,
      sym_fence_open,
    STATE(151), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [5118] = 8,
    ACTIONS(525), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(527), 1,
      aux_sym_newline_token1,
    ACTIONS(529), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_line_end,
    STATE(94), 1,
      sym_newline,
    STATE(120), 1,
      sym_cap_body,
    STATE(215), 1,
      sym_fence_open,
    STATE(151), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [5144] = 8,
    ACTIONS(525), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(527), 1,
      aux_sym_newline_token1,
    ACTIONS(529), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_line_end,
    STATE(94), 1,
      sym_newline,
    STATE(123), 1,
      sym_cap_body,
    STATE(215), 1,
      sym_fence_open,
    STATE(151), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [5170] = 4,
    ACTIONS(533), 1,
      sym_array_suffix,
    STATE(181), 1,
      aux_sym_type_repeat1,
    STATE(207), 1,
      sym_type_suffix,
    ACTIONS(531), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [5187] = 4,
    ACTIONS(538), 1,
      sym_array_suffix,
    STATE(183), 1,
      aux_sym_type_repeat1,
    STATE(207), 1,
      sym_type_suffix,
    ACTIONS(536), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [5204] = 4,
    ACTIONS(538), 1,
      sym_array_suffix,
    STATE(181), 1,
      aux_sym_type_repeat1,
    STATE(207), 1,
      sym_type_suffix,
    ACTIONS(540), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [5221] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    STATE(144), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(188), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5241] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    ACTIONS(544), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(86), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(210), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5261] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(519), 1,
      sym_fenced_raw_text,
    STATE(158), 1,
      sym_fence_close,
    STATE(272), 1,
      sym_newline,
    STATE(192), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [5281] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(519), 1,
      sym_fenced_raw_text,
    STATE(159), 1,
      sym_fence_close,
    STATE(272), 1,
      sym_newline,
    STATE(208), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [5301] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    STATE(160), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(210), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5321] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(519), 1,
      sym_fenced_raw_text,
    STATE(115), 1,
      sym_fence_close,
    STATE(272), 1,
      sym_newline,
    STATE(193), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [5341] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(519), 1,
      sym_fenced_raw_text,
    STATE(116), 1,
      sym_fence_close,
    STATE(272), 1,
      sym_newline,
    STATE(208), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [5361] = 5,
    ACTIONS(546), 1,
      aux_sym_comment_line_token1,
    ACTIONS(548), 1,
      sym_frontmatter_delimiter,
    ACTIONS(550), 1,
      sym_value_name,
    STATE(331), 1,
      sym_property_key,
    STATE(194), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [5379] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(519), 1,
      sym_fenced_raw_text,
    STATE(117), 1,
      sym_fence_close,
    STATE(272), 1,
      sym_newline,
    STATE(208), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [5399] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(519), 1,
      sym_fenced_raw_text,
    STATE(119), 1,
      sym_fence_close,
    STATE(272), 1,
      sym_newline,
    STATE(208), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [5419] = 5,
    ACTIONS(546), 1,
      aux_sym_comment_line_token1,
    ACTIONS(550), 1,
      sym_value_name,
    ACTIONS(552), 1,
      sym_frontmatter_delimiter,
    STATE(331), 1,
      sym_property_key,
    STATE(195), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [5437] = 5,
    ACTIONS(554), 1,
      aux_sym_comment_line_token1,
    ACTIONS(557), 1,
      sym_frontmatter_delimiter,
    ACTIONS(559), 1,
      sym_value_name,
    STATE(331), 1,
      sym_property_key,
    STATE(195), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [5455] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    STATE(146), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(210), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5475] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    ACTIONS(562), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(58), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(199), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5495] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    ACTIONS(562), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(59), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(200), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5515] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    ACTIONS(562), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(61), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(210), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5535] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    ACTIONS(562), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(62), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(210), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5555] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    ACTIONS(544), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(82), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(203), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5575] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    ACTIONS(544), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(83), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(185), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5595] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    ACTIONS(544), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(85), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(210), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5615] = 6,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(542), 1,
      sym_fenced_raw_text,
    STATE(118), 1,
      sym_fence_close,
    STATE(261), 1,
      sym_newline,
    STATE(196), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5635] = 6,
    ACTIONS(564), 1,
      sym_arrow,
    ACTIONS(566), 1,
      sym_colon,
    ACTIONS(568), 1,
      sym_lparen,
    ACTIONS(570), 1,
      sym_value_name,
    STATE(228), 1,
      sym_thunk_name,
    STATE(323), 1,
      sym_params,
  [5654] = 1,
    ACTIONS(572), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [5663] = 1,
    ACTIONS(574), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [5672] = 5,
    ACTIONS(576), 1,
      aux_sym_newline_token1,
    ACTIONS(579), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(581), 1,
      sym_fenced_raw_text,
    STATE(272), 1,
      sym_newline,
    STATE(208), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [5689] = 1,
    ACTIONS(584), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [5698] = 5,
    ACTIONS(586), 1,
      aux_sym_newline_token1,
    ACTIONS(589), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(591), 1,
      sym_fenced_raw_text,
    STATE(261), 1,
      sym_newline,
    STATE(210), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [5715] = 1,
    ACTIONS(594), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [5724] = 1,
    ACTIONS(596), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [5733] = 2,
    STATE(266), 1,
      sym_cap_kind,
    ACTIONS(598), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [5743] = 5,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    ACTIONS(602), 1,
      sym_inline_comment,
    ACTIONS(604), 1,
      sym_block_language,
    STATE(201), 1,
      sym_line_end,
    STATE(274), 1,
      sym_newline,
  [5759] = 5,
    ACTIONS(606), 1,
      aux_sym_newline_token1,
    ACTIONS(608), 1,
      sym_inline_comment,
    ACTIONS(610), 1,
      sym_block_language,
    STATE(172), 1,
      sym_line_end,
    STATE(237), 1,
      sym_newline,
  [5775] = 5,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    ACTIONS(602), 1,
      sym_inline_comment,
    ACTIONS(612), 1,
      sym_block_language,
    STATE(204), 1,
      sym_line_end,
    STATE(274), 1,
      sym_newline,
  [5791] = 5,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    ACTIONS(602), 1,
      sym_inline_comment,
    ACTIONS(614), 1,
      sym_block_language,
    STATE(197), 1,
      sym_line_end,
    STATE(274), 1,
      sym_newline,
  [5807] = 4,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    ACTIONS(618), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_newline,
    STATE(27), 1,
      sym_line_end,
  [5820] = 4,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    ACTIONS(602), 1,
      sym_inline_comment,
    STATE(202), 1,
      sym_line_end,
    STATE(274), 1,
      sym_newline,
  [5833] = 4,
    ACTIONS(620), 1,
      aux_sym_newline_token1,
    ACTIONS(622), 1,
      sym_inline_comment,
    STATE(56), 1,
      sym_line_end,
    STATE(66), 1,
      sym_newline,
  [5846] = 4,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    ACTIONS(618), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(25), 1,
      sym_newline,
  [5859] = 4,
    ACTIONS(294), 1,
      aux_sym_newline_token1,
    ACTIONS(624), 1,
      sym_inline_comment,
    STATE(99), 1,
      sym_line_end,
    STATE(109), 1,
      sym_newline,
  [5872] = 4,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    ACTIONS(618), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(25), 1,
      sym_newline,
  [5885] = 4,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    ACTIONS(602), 1,
      sym_inline_comment,
    STATE(184), 1,
      sym_line_end,
    STATE(274), 1,
      sym_newline,
  [5898] = 4,
    ACTIONS(626), 1,
      sym_rparen,
    ACTIONS(628), 1,
      sym_value_name,
    STATE(254), 1,
      sym_param,
    STATE(289), 1,
      sym_param_name,
  [5911] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(630), 1,
      sym_inline_comment,
    STATE(134), 1,
      sym_newline,
    STATE(139), 1,
      sym_line_end,
  [5924] = 4,
    ACTIONS(632), 1,
      aux_sym_newline_token1,
    ACTIONS(634), 1,
      sym_inline_comment,
    STATE(162), 1,
      sym_line_end,
    STATE(264), 1,
      sym_newline,
  [5937] = 4,
    ACTIONS(568), 1,
      sym_lparen,
    ACTIONS(636), 1,
      sym_arrow,
    ACTIONS(638), 1,
      sym_colon,
    STATE(291), 1,
      sym_params,
  [5950] = 3,
    ACTIONS(642), 1,
      sym_comma,
    STATE(230), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(640), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [5961] = 3,
    ACTIONS(642), 1,
      sym_comma,
    STATE(247), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(644), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [5972] = 4,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    ACTIONS(618), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(25), 1,
      sym_newline,
  [5985] = 4,
    ACTIONS(527), 1,
      aux_sym_newline_token1,
    ACTIONS(529), 1,
      sym_inline_comment,
    STATE(94), 1,
      sym_newline,
    STATE(98), 1,
      sym_line_end,
  [5998] = 4,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    ACTIONS(618), 1,
      sym_inline_comment,
    STATE(4), 1,
      sym_line_end,
    STATE(25), 1,
      sym_newline,
  [6011] = 1,
    ACTIONS(209), 4,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [6018] = 2,
    STATE(286), 1,
      sym_directive_op,
    ACTIONS(646), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [6027] = 4,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    ACTIONS(618), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(25), 1,
      sym_newline,
  [6040] = 1,
    ACTIONS(195), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [6047] = 1,
    ACTIONS(199), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [6054] = 4,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    ACTIONS(618), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(25), 1,
      sym_newline,
  [6067] = 1,
    ACTIONS(211), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [6074] = 4,
    ACTIONS(606), 1,
      aux_sym_newline_token1,
    ACTIONS(608), 1,
      sym_inline_comment,
    STATE(171), 1,
      sym_line_end,
    STATE(237), 1,
      sym_newline,
  [6087] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(630), 1,
      sym_inline_comment,
    STATE(134), 1,
      sym_newline,
    STATE(147), 1,
      sym_line_end,
  [6100] = 4,
    ACTIONS(648), 1,
      aux_sym_newline_token1,
    ACTIONS(650), 1,
      sym_inline_comment,
    STATE(78), 1,
      sym_line_end,
    STATE(92), 1,
      sym_newline,
  [6113] = 4,
    ACTIONS(648), 1,
      aux_sym_newline_token1,
    ACTIONS(650), 1,
      sym_inline_comment,
    STATE(79), 1,
      sym_line_end,
    STATE(92), 1,
      sym_newline,
  [6126] = 4,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    ACTIONS(618), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(25), 1,
      sym_newline,
  [6139] = 4,
    ACTIONS(294), 1,
      aux_sym_newline_token1,
    ACTIONS(624), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_line_end,
    STATE(109), 1,
      sym_newline,
  [6152] = 3,
    ACTIONS(654), 1,
      sym_comma,
    STATE(247), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(652), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [6163] = 4,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    ACTIONS(618), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(25), 1,
      sym_newline,
  [6176] = 4,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    ACTIONS(602), 1,
      sym_inline_comment,
    STATE(198), 1,
      sym_line_end,
    STATE(274), 1,
      sym_newline,
  [6189] = 4,
    ACTIONS(620), 1,
      aux_sym_newline_token1,
    ACTIONS(622), 1,
      sym_inline_comment,
    STATE(55), 1,
      sym_line_end,
    STATE(66), 1,
      sym_newline,
  [6202] = 1,
    ACTIONS(657), 3,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [6208] = 1,
    ACTIONS(199), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [6214] = 3,
    ACTIONS(659), 1,
      sym_colon,
    ACTIONS(661), 1,
      sym_value_name,
    STATE(338), 1,
      sym_context_name,
  [6224] = 3,
    ACTIONS(663), 1,
      sym_rparen,
    ACTIONS(665), 1,
      sym_comma,
    STATE(263), 1,
      aux_sym_params_repeat1,
  [6234] = 1,
    ACTIONS(667), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [6240] = 1,
    ACTIONS(669), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [6246] = 1,
    ACTIONS(671), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [6252] = 1,
    ACTIONS(673), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [6258] = 1,
    ACTIONS(675), 3,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [6264] = 1,
    ACTIONS(677), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [6270] = 1,
    ACTIONS(679), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [6276] = 1,
    ACTIONS(681), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [6282] = 3,
    ACTIONS(665), 1,
      sym_comma,
    ACTIONS(683), 1,
      sym_rparen,
    STATE(267), 1,
      aux_sym_params_repeat1,
  [6292] = 1,
    ACTIONS(193), 3,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_value_name,
  [6298] = 1,
    ACTIONS(197), 3,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_value_name,
  [6304] = 3,
    ACTIONS(685), 1,
      sym_cap_uri,
    ACTIONS(687), 1,
      sym_cap_shorthand,
    STATE(226), 1,
      sym_cap_ref,
  [6314] = 3,
    ACTIONS(689), 1,
      sym_rparen,
    ACTIONS(691), 1,
      sym_comma,
    STATE(267), 1,
      aux_sym_params_repeat1,
  [6324] = 3,
    ACTIONS(628), 1,
      sym_value_name,
    STATE(289), 1,
      sym_param_name,
    STATE(296), 1,
      sym_param,
  [6334] = 1,
    ACTIONS(652), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [6340] = 1,
    ACTIONS(694), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [6346] = 1,
    ACTIONS(211), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [6352] = 1,
    ACTIONS(696), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [6358] = 3,
    ACTIONS(698), 1,
      sym_colon,
    ACTIONS(700), 1,
      sym_value_name,
    STATE(339), 1,
      sym_instruct_name,
  [6368] = 1,
    ACTIONS(195), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [6374] = 2,
    ACTIONS(702), 1,
      sym_value_name,
    STATE(340), 1,
      sym_cap_name,
  [6381] = 2,
    ACTIONS(648), 1,
      aux_sym_newline_token1,
    STATE(69), 1,
      sym_newline,
  [6388] = 2,
    ACTIONS(702), 1,
      sym_value_name,
    STATE(348), 1,
      sym_cap_name,
  [6395] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(136), 1,
      sym_newline,
  [6402] = 1,
    ACTIONS(704), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [6407] = 1,
    ACTIONS(706), 2,
      sym_optional_marker,
      sym_colon,
  [6412] = 2,
    ACTIONS(708), 1,
      sym_optional_marker,
    ACTIONS(710), 1,
      sym_colon,
  [6419] = 1,
    ACTIONS(712), 2,
      sym_arrow,
      sym_colon,
  [6424] = 1,
    ACTIONS(714), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [6429] = 2,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    STATE(255), 1,
      sym_newline,
  [6436] = 2,
    ACTIONS(616), 1,
      aux_sym_newline_token1,
    STATE(26), 1,
      sym_newline,
  [6443] = 2,
    ACTIONS(716), 1,
      sym_bare_value,
    STATE(218), 1,
      sym_directive_csv,
  [6450] = 1,
    ACTIONS(718), 2,
      sym_arrow,
      sym_colon,
  [6455] = 1,
    ACTIONS(720), 2,
      sym_optional_marker,
      sym_colon,
  [6460] = 2,
    ACTIONS(722), 1,
      sym_optional_marker,
    ACTIONS(724), 1,
      sym_colon,
  [6467] = 2,
    ACTIONS(726), 1,
      sym_inline_text,
    STATE(232), 1,
      sym_property_value,
  [6474] = 2,
    ACTIONS(728), 1,
      sym_arrow,
    ACTIONS(730), 1,
      sym_colon,
  [6481] = 2,
    ACTIONS(732), 1,
      sym_cap_uri,
    ACTIONS(734), 1,
      sym_cap_shorthand,
  [6488] = 2,
    ACTIONS(702), 1,
      sym_value_name,
    STATE(352), 1,
      sym_cap_name,
  [6495] = 2,
    ACTIONS(632), 1,
      aux_sym_newline_token1,
    STATE(191), 1,
      sym_newline,
  [6502] = 2,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    STATE(262), 1,
      sym_newline,
  [6509] = 1,
    ACTIONS(736), 2,
      sym_rparen,
      sym_comma,
  [6514] = 1,
    ACTIONS(738), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [6519] = 1,
    ACTIONS(740), 2,
      sym_arrow,
      sym_colon,
  [6524] = 1,
    ACTIONS(742), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [6529] = 1,
    ACTIONS(744), 2,
      sym_rparen,
      sym_comma,
  [6534] = 1,
    ACTIONS(746), 2,
      sym_colon,
      sym_value_name,
  [6539] = 1,
    ACTIONS(748), 2,
      anon_sym_EQ,
      sym_colon,
  [6544] = 2,
    ACTIONS(527), 1,
      aux_sym_newline_token1,
    STATE(93), 1,
      sym_newline,
  [6551] = 2,
    ACTIONS(750), 1,
      anon_sym_EQ,
    STATE(290), 1,
      sym_assign_operator,
  [6558] = 2,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    STATE(270), 1,
      sym_newline,
  [6565] = 2,
    ACTIONS(521), 1,
      aux_sym_newline_token1,
    STATE(108), 1,
      sym_newline,
  [6572] = 2,
    ACTIONS(521), 1,
      aux_sym_newline_token1,
    STATE(103), 1,
      sym_newline,
  [6579] = 2,
    ACTIONS(752), 1,
      sym_type_name,
    STATE(355), 1,
      sym_struct_name,
  [6586] = 2,
    ACTIONS(726), 1,
      sym_inline_text,
    STATE(314), 1,
      sym_property_value,
  [6593] = 2,
    ACTIONS(632), 1,
      aux_sym_newline_token1,
    STATE(265), 1,
      sym_newline,
  [6600] = 2,
    ACTIONS(620), 1,
      aux_sym_newline_token1,
    STATE(63), 1,
      sym_newline,
  [6607] = 2,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    STATE(258), 1,
      sym_newline,
  [6614] = 1,
    ACTIONS(754), 2,
      sym_rparen,
      sym_comma,
  [6619] = 2,
    ACTIONS(632), 1,
      aux_sym_newline_token1,
    STATE(259), 1,
      sym_newline,
  [6626] = 1,
    ACTIONS(756), 2,
      sym_colon,
      sym_value_name,
  [6631] = 2,
    ACTIONS(527), 1,
      aux_sym_newline_token1,
    STATE(96), 1,
      sym_newline,
  [6638] = 2,
    ACTIONS(600), 1,
      aux_sym_newline_token1,
    STATE(252), 1,
      sym_newline,
  [6645] = 2,
    ACTIONS(606), 1,
      aux_sym_newline_token1,
    STATE(238), 1,
      sym_newline,
  [6652] = 2,
    ACTIONS(620), 1,
      aux_sym_newline_token1,
    STATE(67), 1,
      sym_newline,
  [6659] = 2,
    ACTIONS(648), 1,
      aux_sym_newline_token1,
    STATE(70), 1,
      sym_newline,
  [6666] = 2,
    ACTIONS(294), 1,
      aux_sym_newline_token1,
    STATE(110), 1,
      sym_newline,
  [6673] = 2,
    ACTIONS(702), 1,
      sym_value_name,
    STATE(343), 1,
      sym_cap_name,
  [6680] = 2,
    ACTIONS(758), 1,
      sym_arrow,
    ACTIONS(760), 1,
      sym_colon,
  [6687] = 1,
    ACTIONS(762), 1,
      sym_colon,
  [6691] = 1,
    ACTIONS(764), 1,
      sym_colon,
  [6695] = 1,
    ACTIONS(766), 1,
      sym_value_name,
  [6699] = 1,
    ACTIONS(768), 1,
      sym_value_name,
  [6703] = 1,
    ACTIONS(770), 1,
      ts_builtin_sym_end,
  [6707] = 1,
    ACTIONS(772), 1,
      aux_sym_newline_token1,
  [6711] = 1,
    ACTIONS(774), 1,
      sym_bare_value,
  [6715] = 1,
    ACTIONS(776), 1,
      sym_colon,
  [6719] = 1,
    ACTIONS(778), 1,
      sym_colon,
  [6723] = 1,
    ACTIONS(780), 1,
      sym_value_name,
  [6727] = 1,
    ACTIONS(782), 1,
      sym_colon,
  [6731] = 1,
    ACTIONS(784), 1,
      sym_colon,
  [6735] = 1,
    ACTIONS(786), 1,
      aux_sym_newline_token1,
  [6739] = 1,
    ACTIONS(788), 1,
      sym_colon,
  [6743] = 1,
    ACTIONS(790), 1,
      sym_colon,
  [6747] = 1,
    ACTIONS(792), 1,
      sym_colon,
  [6751] = 1,
    ACTIONS(794), 1,
      sym_colon,
  [6755] = 1,
    ACTIONS(796), 1,
      sym_inline_text,
  [6759] = 1,
    ACTIONS(798), 1,
      sym_colon,
  [6763] = 1,
    ACTIONS(800), 1,
      sym_colon,
  [6767] = 1,
    ACTIONS(802), 1,
      sym_value_name,
  [6771] = 1,
    ACTIONS(804), 1,
      aux_sym_newline_token1,
  [6775] = 1,
    ACTIONS(806), 1,
      sym_colon,
  [6779] = 1,
    ACTIONS(808), 1,
      sym_colon,
  [6783] = 1,
    ACTIONS(810), 1,
      sym_colon,
  [6787] = 1,
    ACTIONS(812), 1,
      sym_colon,
  [6791] = 1,
    ACTIONS(814), 1,
      sym_colon,
  [6795] = 1,
    ACTIONS(816), 1,
      sym_colon,
  [6799] = 1,
    ACTIONS(818), 1,
      sym_colon,
  [6803] = 1,
    ACTIONS(820), 1,
      sym_colon,
  [6807] = 1,
    ACTIONS(822), 1,
      sym_colon,
  [6811] = 1,
    ACTIONS(824), 1,
      sym_colon,
  [6815] = 1,
    ACTIONS(826), 1,
      sym_bare_value,
  [6819] = 1,
    ACTIONS(828), 1,
      sym_colon,
  [6823] = 1,
    ACTIONS(830), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 202,
  [SMALL_STATE(5)] = 296,
  [SMALL_STATE(6)] = 390,
  [SMALL_STATE(7)] = 484,
  [SMALL_STATE(8)] = 578,
  [SMALL_STATE(9)] = 672,
  [SMALL_STATE(10)] = 766,
  [SMALL_STATE(11)] = 860,
  [SMALL_STATE(12)] = 954,
  [SMALL_STATE(13)] = 1029,
  [SMALL_STATE(14)] = 1104,
  [SMALL_STATE(15)] = 1172,
  [SMALL_STATE(16)] = 1240,
  [SMALL_STATE(17)] = 1308,
  [SMALL_STATE(18)] = 1356,
  [SMALL_STATE(19)] = 1424,
  [SMALL_STATE(20)] = 1492,
  [SMALL_STATE(21)] = 1560,
  [SMALL_STATE(22)] = 1614,
  [SMALL_STATE(23)] = 1668,
  [SMALL_STATE(24)] = 1722,
  [SMALL_STATE(25)] = 1752,
  [SMALL_STATE(26)] = 1782,
  [SMALL_STATE(27)] = 1812,
  [SMALL_STATE(28)] = 1842,
  [SMALL_STATE(29)] = 1872,
  [SMALL_STATE(30)] = 1902,
  [SMALL_STATE(31)] = 1944,
  [SMALL_STATE(32)] = 1986,
  [SMALL_STATE(33)] = 2028,
  [SMALL_STATE(34)] = 2070,
  [SMALL_STATE(35)] = 2104,
  [SMALL_STATE(36)] = 2138,
  [SMALL_STATE(37)] = 2172,
  [SMALL_STATE(38)] = 2206,
  [SMALL_STATE(39)] = 2243,
  [SMALL_STATE(40)] = 2276,
  [SMALL_STATE(41)] = 2309,
  [SMALL_STATE(42)] = 2346,
  [SMALL_STATE(43)] = 2379,
  [SMALL_STATE(44)] = 2416,
  [SMALL_STATE(45)] = 2449,
  [SMALL_STATE(46)] = 2482,
  [SMALL_STATE(47)] = 2518,
  [SMALL_STATE(48)] = 2554,
  [SMALL_STATE(49)] = 2576,
  [SMALL_STATE(50)] = 2598,
  [SMALL_STATE(51)] = 2628,
  [SMALL_STATE(52)] = 2658,
  [SMALL_STATE(53)] = 2680,
  [SMALL_STATE(54)] = 2702,
  [SMALL_STATE(55)] = 2724,
  [SMALL_STATE(56)] = 2746,
  [SMALL_STATE(57)] = 2768,
  [SMALL_STATE(58)] = 2798,
  [SMALL_STATE(59)] = 2820,
  [SMALL_STATE(60)] = 2842,
  [SMALL_STATE(61)] = 2864,
  [SMALL_STATE(62)] = 2886,
  [SMALL_STATE(63)] = 2908,
  [SMALL_STATE(64)] = 2930,
  [SMALL_STATE(65)] = 2952,
  [SMALL_STATE(66)] = 2974,
  [SMALL_STATE(67)] = 2996,
  [SMALL_STATE(68)] = 3018,
  [SMALL_STATE(69)] = 3040,
  [SMALL_STATE(70)] = 3061,
  [SMALL_STATE(71)] = 3082,
  [SMALL_STATE(72)] = 3123,
  [SMALL_STATE(73)] = 3144,
  [SMALL_STATE(74)] = 3171,
  [SMALL_STATE(75)] = 3192,
  [SMALL_STATE(76)] = 3219,
  [SMALL_STATE(77)] = 3260,
  [SMALL_STATE(78)] = 3301,
  [SMALL_STATE(79)] = 3322,
  [SMALL_STATE(80)] = 3343,
  [SMALL_STATE(81)] = 3370,
  [SMALL_STATE(82)] = 3391,
  [SMALL_STATE(83)] = 3412,
  [SMALL_STATE(84)] = 3433,
  [SMALL_STATE(85)] = 3454,
  [SMALL_STATE(86)] = 3475,
  [SMALL_STATE(87)] = 3496,
  [SMALL_STATE(88)] = 3517,
  [SMALL_STATE(89)] = 3538,
  [SMALL_STATE(90)] = 3559,
  [SMALL_STATE(91)] = 3580,
  [SMALL_STATE(92)] = 3601,
  [SMALL_STATE(93)] = 3622,
  [SMALL_STATE(94)] = 3641,
  [SMALL_STATE(95)] = 3660,
  [SMALL_STATE(96)] = 3679,
  [SMALL_STATE(97)] = 3698,
  [SMALL_STATE(98)] = 3717,
  [SMALL_STATE(99)] = 3736,
  [SMALL_STATE(100)] = 3754,
  [SMALL_STATE(101)] = 3772,
  [SMALL_STATE(102)] = 3790,
  [SMALL_STATE(103)] = 3808,
  [SMALL_STATE(104)] = 3826,
  [SMALL_STATE(105)] = 3844,
  [SMALL_STATE(106)] = 3862,
  [SMALL_STATE(107)] = 3880,
  [SMALL_STATE(108)] = 3898,
  [SMALL_STATE(109)] = 3916,
  [SMALL_STATE(110)] = 3934,
  [SMALL_STATE(111)] = 3952,
  [SMALL_STATE(112)] = 3967,
  [SMALL_STATE(113)] = 3982,
  [SMALL_STATE(114)] = 3997,
  [SMALL_STATE(115)] = 4012,
  [SMALL_STATE(116)] = 4027,
  [SMALL_STATE(117)] = 4042,
  [SMALL_STATE(118)] = 4057,
  [SMALL_STATE(119)] = 4072,
  [SMALL_STATE(120)] = 4087,
  [SMALL_STATE(121)] = 4102,
  [SMALL_STATE(122)] = 4117,
  [SMALL_STATE(123)] = 4132,
  [SMALL_STATE(124)] = 4147,
  [SMALL_STATE(125)] = 4162,
  [SMALL_STATE(126)] = 4177,
  [SMALL_STATE(127)] = 4192,
  [SMALL_STATE(128)] = 4207,
  [SMALL_STATE(129)] = 4222,
  [SMALL_STATE(130)] = 4237,
  [SMALL_STATE(131)] = 4252,
  [SMALL_STATE(132)] = 4267,
  [SMALL_STATE(133)] = 4282,
  [SMALL_STATE(134)] = 4297,
  [SMALL_STATE(135)] = 4312,
  [SMALL_STATE(136)] = 4327,
  [SMALL_STATE(137)] = 4342,
  [SMALL_STATE(138)] = 4357,
  [SMALL_STATE(139)] = 4372,
  [SMALL_STATE(140)] = 4387,
  [SMALL_STATE(141)] = 4402,
  [SMALL_STATE(142)] = 4417,
  [SMALL_STATE(143)] = 4432,
  [SMALL_STATE(144)] = 4447,
  [SMALL_STATE(145)] = 4462,
  [SMALL_STATE(146)] = 4477,
  [SMALL_STATE(147)] = 4492,
  [SMALL_STATE(148)] = 4507,
  [SMALL_STATE(149)] = 4522,
  [SMALL_STATE(150)] = 4537,
  [SMALL_STATE(151)] = 4552,
  [SMALL_STATE(152)] = 4567,
  [SMALL_STATE(153)] = 4582,
  [SMALL_STATE(154)] = 4597,
  [SMALL_STATE(155)] = 4612,
  [SMALL_STATE(156)] = 4627,
  [SMALL_STATE(157)] = 4642,
  [SMALL_STATE(158)] = 4657,
  [SMALL_STATE(159)] = 4672,
  [SMALL_STATE(160)] = 4687,
  [SMALL_STATE(161)] = 4702,
  [SMALL_STATE(162)] = 4717,
  [SMALL_STATE(163)] = 4742,
  [SMALL_STATE(164)] = 4763,
  [SMALL_STATE(165)] = 4784,
  [SMALL_STATE(166)] = 4805,
  [SMALL_STATE(167)] = 4826,
  [SMALL_STATE(168)] = 4847,
  [SMALL_STATE(169)] = 4868,
  [SMALL_STATE(170)] = 4889,
  [SMALL_STATE(171)] = 4910,
  [SMALL_STATE(172)] = 4936,
  [SMALL_STATE(173)] = 4962,
  [SMALL_STATE(174)] = 4988,
  [SMALL_STATE(175)] = 5014,
  [SMALL_STATE(176)] = 5040,
  [SMALL_STATE(177)] = 5066,
  [SMALL_STATE(178)] = 5092,
  [SMALL_STATE(179)] = 5118,
  [SMALL_STATE(180)] = 5144,
  [SMALL_STATE(181)] = 5170,
  [SMALL_STATE(182)] = 5187,
  [SMALL_STATE(183)] = 5204,
  [SMALL_STATE(184)] = 5221,
  [SMALL_STATE(185)] = 5241,
  [SMALL_STATE(186)] = 5261,
  [SMALL_STATE(187)] = 5281,
  [SMALL_STATE(188)] = 5301,
  [SMALL_STATE(189)] = 5321,
  [SMALL_STATE(190)] = 5341,
  [SMALL_STATE(191)] = 5361,
  [SMALL_STATE(192)] = 5379,
  [SMALL_STATE(193)] = 5399,
  [SMALL_STATE(194)] = 5419,
  [SMALL_STATE(195)] = 5437,
  [SMALL_STATE(196)] = 5455,
  [SMALL_STATE(197)] = 5475,
  [SMALL_STATE(198)] = 5495,
  [SMALL_STATE(199)] = 5515,
  [SMALL_STATE(200)] = 5535,
  [SMALL_STATE(201)] = 5555,
  [SMALL_STATE(202)] = 5575,
  [SMALL_STATE(203)] = 5595,
  [SMALL_STATE(204)] = 5615,
  [SMALL_STATE(205)] = 5635,
  [SMALL_STATE(206)] = 5654,
  [SMALL_STATE(207)] = 5663,
  [SMALL_STATE(208)] = 5672,
  [SMALL_STATE(209)] = 5689,
  [SMALL_STATE(210)] = 5698,
  [SMALL_STATE(211)] = 5715,
  [SMALL_STATE(212)] = 5724,
  [SMALL_STATE(213)] = 5733,
  [SMALL_STATE(214)] = 5743,
  [SMALL_STATE(215)] = 5759,
  [SMALL_STATE(216)] = 5775,
  [SMALL_STATE(217)] = 5791,
  [SMALL_STATE(218)] = 5807,
  [SMALL_STATE(219)] = 5820,
  [SMALL_STATE(220)] = 5833,
  [SMALL_STATE(221)] = 5846,
  [SMALL_STATE(222)] = 5859,
  [SMALL_STATE(223)] = 5872,
  [SMALL_STATE(224)] = 5885,
  [SMALL_STATE(225)] = 5898,
  [SMALL_STATE(226)] = 5911,
  [SMALL_STATE(227)] = 5924,
  [SMALL_STATE(228)] = 5937,
  [SMALL_STATE(229)] = 5950,
  [SMALL_STATE(230)] = 5961,
  [SMALL_STATE(231)] = 5972,
  [SMALL_STATE(232)] = 5985,
  [SMALL_STATE(233)] = 5998,
  [SMALL_STATE(234)] = 6011,
  [SMALL_STATE(235)] = 6018,
  [SMALL_STATE(236)] = 6027,
  [SMALL_STATE(237)] = 6040,
  [SMALL_STATE(238)] = 6047,
  [SMALL_STATE(239)] = 6054,
  [SMALL_STATE(240)] = 6067,
  [SMALL_STATE(241)] = 6074,
  [SMALL_STATE(242)] = 6087,
  [SMALL_STATE(243)] = 6100,
  [SMALL_STATE(244)] = 6113,
  [SMALL_STATE(245)] = 6126,
  [SMALL_STATE(246)] = 6139,
  [SMALL_STATE(247)] = 6152,
  [SMALL_STATE(248)] = 6163,
  [SMALL_STATE(249)] = 6176,
  [SMALL_STATE(250)] = 6189,
  [SMALL_STATE(251)] = 6202,
  [SMALL_STATE(252)] = 6208,
  [SMALL_STATE(253)] = 6214,
  [SMALL_STATE(254)] = 6224,
  [SMALL_STATE(255)] = 6234,
  [SMALL_STATE(256)] = 6240,
  [SMALL_STATE(257)] = 6246,
  [SMALL_STATE(258)] = 6252,
  [SMALL_STATE(259)] = 6258,
  [SMALL_STATE(260)] = 6264,
  [SMALL_STATE(261)] = 6270,
  [SMALL_STATE(262)] = 6276,
  [SMALL_STATE(263)] = 6282,
  [SMALL_STATE(264)] = 6292,
  [SMALL_STATE(265)] = 6298,
  [SMALL_STATE(266)] = 6304,
  [SMALL_STATE(267)] = 6314,
  [SMALL_STATE(268)] = 6324,
  [SMALL_STATE(269)] = 6334,
  [SMALL_STATE(270)] = 6340,
  [SMALL_STATE(271)] = 6346,
  [SMALL_STATE(272)] = 6352,
  [SMALL_STATE(273)] = 6358,
  [SMALL_STATE(274)] = 6368,
  [SMALL_STATE(275)] = 6374,
  [SMALL_STATE(276)] = 6381,
  [SMALL_STATE(277)] = 6388,
  [SMALL_STATE(278)] = 6395,
  [SMALL_STATE(279)] = 6402,
  [SMALL_STATE(280)] = 6407,
  [SMALL_STATE(281)] = 6412,
  [SMALL_STATE(282)] = 6419,
  [SMALL_STATE(283)] = 6424,
  [SMALL_STATE(284)] = 6429,
  [SMALL_STATE(285)] = 6436,
  [SMALL_STATE(286)] = 6443,
  [SMALL_STATE(287)] = 6450,
  [SMALL_STATE(288)] = 6455,
  [SMALL_STATE(289)] = 6460,
  [SMALL_STATE(290)] = 6467,
  [SMALL_STATE(291)] = 6474,
  [SMALL_STATE(292)] = 6481,
  [SMALL_STATE(293)] = 6488,
  [SMALL_STATE(294)] = 6495,
  [SMALL_STATE(295)] = 6502,
  [SMALL_STATE(296)] = 6509,
  [SMALL_STATE(297)] = 6514,
  [SMALL_STATE(298)] = 6519,
  [SMALL_STATE(299)] = 6524,
  [SMALL_STATE(300)] = 6529,
  [SMALL_STATE(301)] = 6534,
  [SMALL_STATE(302)] = 6539,
  [SMALL_STATE(303)] = 6544,
  [SMALL_STATE(304)] = 6551,
  [SMALL_STATE(305)] = 6558,
  [SMALL_STATE(306)] = 6565,
  [SMALL_STATE(307)] = 6572,
  [SMALL_STATE(308)] = 6579,
  [SMALL_STATE(309)] = 6586,
  [SMALL_STATE(310)] = 6593,
  [SMALL_STATE(311)] = 6600,
  [SMALL_STATE(312)] = 6607,
  [SMALL_STATE(313)] = 6614,
  [SMALL_STATE(314)] = 6619,
  [SMALL_STATE(315)] = 6626,
  [SMALL_STATE(316)] = 6631,
  [SMALL_STATE(317)] = 6638,
  [SMALL_STATE(318)] = 6645,
  [SMALL_STATE(319)] = 6652,
  [SMALL_STATE(320)] = 6659,
  [SMALL_STATE(321)] = 6666,
  [SMALL_STATE(322)] = 6673,
  [SMALL_STATE(323)] = 6680,
  [SMALL_STATE(324)] = 6687,
  [SMALL_STATE(325)] = 6691,
  [SMALL_STATE(326)] = 6695,
  [SMALL_STATE(327)] = 6699,
  [SMALL_STATE(328)] = 6703,
  [SMALL_STATE(329)] = 6707,
  [SMALL_STATE(330)] = 6711,
  [SMALL_STATE(331)] = 6715,
  [SMALL_STATE(332)] = 6719,
  [SMALL_STATE(333)] = 6723,
  [SMALL_STATE(334)] = 6727,
  [SMALL_STATE(335)] = 6731,
  [SMALL_STATE(336)] = 6735,
  [SMALL_STATE(337)] = 6739,
  [SMALL_STATE(338)] = 6743,
  [SMALL_STATE(339)] = 6747,
  [SMALL_STATE(340)] = 6751,
  [SMALL_STATE(341)] = 6755,
  [SMALL_STATE(342)] = 6759,
  [SMALL_STATE(343)] = 6763,
  [SMALL_STATE(344)] = 6767,
  [SMALL_STATE(345)] = 6771,
  [SMALL_STATE(346)] = 6775,
  [SMALL_STATE(347)] = 6779,
  [SMALL_STATE(348)] = 6783,
  [SMALL_STATE(349)] = 6787,
  [SMALL_STATE(350)] = 6791,
  [SMALL_STATE(351)] = 6795,
  [SMALL_STATE(352)] = 6799,
  [SMALL_STATE(353)] = 6803,
  [SMALL_STATE(354)] = 6807,
  [SMALL_STATE(355)] = 6811,
  [SMALL_STATE(356)] = 6815,
  [SMALL_STATE(357)] = 6819,
  [SMALL_STATE(358)] = 6823,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 14),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 14),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 3, 0, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 3, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 13),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 4, 0, 13),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 18),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 18),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 38),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 38),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 40),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 6, 0, 40),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 28),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 5, 0, 28),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 48),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 7, 0, 48),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 8),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 22),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 22),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 33),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 33),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 33),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 4, 0, 33),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_section_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_section, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_section, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 45),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 45),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_line, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(64),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_implicit, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_section, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 36),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 36),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 36),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 36),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 46),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 46),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 21),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 21),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 30),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 30),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 41),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 41),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 42),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 42),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 51),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 51),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 21),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message, 1, 0, 0),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(112),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(127),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_block, 3, 0, 36),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roled_message_block, 3, 0, 36),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message_block, 1, 0, 11),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unroled_message, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 21),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 54),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 54),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 27),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 27),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 37),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 37),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 5, 0, 52),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 53),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 7),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 55),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 51),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 56),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 57),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 15),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 31),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 15),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 32),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 16),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 34),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 35),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_tail, 1, 0, 9),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 23),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 24),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 17),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 39),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 17),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 30),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pass_statement, 2, 0, 20),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 43),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 4, 0, 44),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 15),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 10),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 29),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 47),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 15),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 49),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 41),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 50),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 42),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 16),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 19), SHIFT_REPEAT(206),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 6),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 5),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter_comment, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 21),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 58),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 21),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 26), SHIFT_REPEAT(268),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 25),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 27),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 37),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roled_message_kind, 1, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
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
