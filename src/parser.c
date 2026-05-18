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
#define STATE_COUNT 259
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 32

enum ts_symbol_identifiers {
  aux_sym_newline_token1 = 1,
  aux_sym_comment_line_token1 = 2,
  sym_inline_comment = 3,
  anon_sym_Text = 4,
  anon_sym_Number = 5,
  anon_sym_Boolean = 6,
  anon_sym_Json = 7,
  anon_sym_Message = 8,
  sym_array_suffix = 9,
  sym_block_language = 10,
  anon_sym_models = 11,
  anon_sym_tools = 12,
  anon_sym_skills = 13,
  anon_sym_services = 14,
  anon_sym_psyches = 15,
  anon_sym_handoffs = 16,
  anon_sym_delegates = 17,
  anon_sym_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_DASH_EQ = 20,
  anon_sym_instruct = 21,
  anon_sym_system = 22,
  anon_sym_user = 23,
  anon_sym_default = 24,
  anon_sym_none = 25,
  sym_use_keyword = 26,
  sym_struct_keyword = 27,
  anon_sym_psyche = 28,
  anon_sym_skill = 29,
  anon_sym_service = 30,
  anon_sym_prompt = 31,
  sym_thunk_keyword = 32,
  sym_optional_marker = 33,
  sym_arrow = 34,
  sym_colon = 35,
  sym_lparen = 36,
  sym_rparen = 37,
  sym_comma = 38,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 39,
  sym_frontmatter_delimiter = 40,
  sym_cap_uri = 41,
  sym_cap_shorthand = 42,
  sym_bare_value = 43,
  sym_type_name = 44,
  sym_value_name = 45,
  sym_inline_text = 46,
  sym_indented_raw_text = 47,
  sym_fenced_raw_text = 48,
  sym_source_file = 49,
  sym_item = 50,
  sym_newline = 51,
  sym_blank_line = 52,
  sym_comment_line = 53,
  sym_line_end = 54,
  sym_use = 55,
  sym_type = 56,
  sym_base_type = 57,
  sym_builtin_type = 58,
  sym_user_type = 59,
  sym_type_suffix = 60,
  sym_struct = 61,
  sym_struct_name = 62,
  sym_struct_body = 63,
  sym_field = 64,
  sym_field_name = 65,
  sym_psyche = 66,
  sym_skill = 67,
  sym_service = 68,
  sym_prompt = 69,
  sym_cap_name = 70,
  sym_cap_ref = 71,
  sym_cap_body = 72,
  sym_cap_indented = 73,
  sym_cap_markdown = 74,
  sym_cap_indented_content_line = 75,
  sym_cap_fenced_content_line = 76,
  sym_frontmatter = 77,
  sym_property_eq = 78,
  sym_property_colon = 79,
  sym_frontmatter_comment = 80,
  sym_property_key = 81,
  sym_property_value = 82,
  sym_instruct = 83,
  sym_instruct_name = 84,
  sym_instruct_body = 85,
  sym_block_indented = 86,
  sym_block_fenced = 87,
  sym_block_indented_content_line = 88,
  sym_block_fenced_content_line = 89,
  sym_thunk = 90,
  sym_thunk_name = 91,
  sym_thunk_body = 92,
  sym_params = 93,
  sym_param = 94,
  sym_param_name = 95,
  sym_directive = 96,
  sym_directive_key = 97,
  sym_directive_op = 98,
  sym_directive_csv = 99,
  sym_block = 100,
  sym_block_kind = 101,
  sym_block_value = 102,
  sym_block_inline = 103,
  sym_block_name = 104,
  sym_block_content_inline = 105,
  sym_psyche_keyword = 106,
  sym_skill_keyword = 107,
  sym_service_keyword = 108,
  sym_prompt_keyword = 109,
  sym_instruct_keyword = 110,
  sym_assign_operator = 111,
  sym_fence_open = 112,
  sym_fence_close = 113,
  sym_cap_kind = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_type_repeat1 = 116,
  aux_sym_struct_body_repeat1 = 117,
  aux_sym_cap_indented_repeat1 = 118,
  aux_sym_cap_markdown_repeat1 = 119,
  aux_sym_frontmatter_repeat1 = 120,
  aux_sym_block_indented_repeat1 = 121,
  aux_sym_block_fenced_repeat1 = 122,
  aux_sym_thunk_body_repeat1 = 123,
  aux_sym_params_repeat1 = 124,
  aux_sym_directive_csv_repeat1 = 125,
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
  [anon_sym_Message] = "Message",
  [sym_array_suffix] = "array_suffix",
  [sym_block_language] = "block_language",
  [anon_sym_models] = "models",
  [anon_sym_tools] = "tools",
  [anon_sym_skills] = "skills",
  [anon_sym_services] = "services",
  [anon_sym_psyches] = "psyches",
  [anon_sym_handoffs] = "handoffs",
  [anon_sym_delegates] = "delegates",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_instruct] = "instruct",
  [anon_sym_system] = "system",
  [anon_sym_user] = "user",
  [anon_sym_default] = "default",
  [anon_sym_none] = "none",
  [sym_use_keyword] = "use_keyword",
  [sym_struct_keyword] = "struct_keyword",
  [anon_sym_psyche] = "psyche",
  [anon_sym_skill] = "skill",
  [anon_sym_service] = "service",
  [anon_sym_prompt] = "prompt",
  [sym_thunk_keyword] = "thunk_keyword",
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
  [sym_block] = "block",
  [sym_block_kind] = "block_kind",
  [sym_block_value] = "block_value",
  [sym_block_inline] = "block_inline",
  [sym_block_name] = "block_name",
  [sym_block_content_inline] = "block_content_inline",
  [sym_psyche_keyword] = "psyche_keyword",
  [sym_skill_keyword] = "skill_keyword",
  [sym_service_keyword] = "service_keyword",
  [sym_prompt_keyword] = "prompt_keyword",
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
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_directive_csv_repeat1] = "directive_csv_repeat1",
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
  [anon_sym_Message] = anon_sym_Message,
  [sym_array_suffix] = sym_array_suffix,
  [sym_block_language] = sym_block_language,
  [anon_sym_models] = anon_sym_models,
  [anon_sym_tools] = anon_sym_tools,
  [anon_sym_skills] = anon_sym_skills,
  [anon_sym_services] = anon_sym_services,
  [anon_sym_psyches] = anon_sym_psyches,
  [anon_sym_handoffs] = anon_sym_handoffs,
  [anon_sym_delegates] = anon_sym_delegates,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_instruct] = anon_sym_instruct,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_user] = anon_sym_user,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_none] = anon_sym_none,
  [sym_use_keyword] = sym_use_keyword,
  [sym_struct_keyword] = sym_struct_keyword,
  [anon_sym_psyche] = anon_sym_psyche,
  [anon_sym_skill] = anon_sym_skill,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_prompt] = anon_sym_prompt,
  [sym_thunk_keyword] = sym_thunk_keyword,
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
  [sym_block] = sym_block,
  [sym_block_kind] = sym_block_kind,
  [sym_block_value] = sym_block_value,
  [sym_block_inline] = sym_block_inline,
  [sym_block_name] = sym_block_name,
  [sym_block_content_inline] = sym_block_content_inline,
  [sym_psyche_keyword] = sym_psyche_keyword,
  [sym_skill_keyword] = sym_skill_keyword,
  [sym_service_keyword] = sym_service_keyword,
  [sym_prompt_keyword] = sym_prompt_keyword,
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
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_directive_csv_repeat1] = aux_sym_directive_csv_repeat1,
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
  [anon_sym_Message] = {
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
  [anon_sym_handoffs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegates] = {
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
  [anon_sym_instruct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_user] = {
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
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_kind] = {
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
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_csv_repeat1] = {
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
  field_key = 8,
  field_keyword = 9,
  field_kind = 10,
  field_language = 11,
  field_name = 12,
  field_operator = 13,
  field_optional = 14,
  field_output = 15,
  field_param = 16,
  field_params = 17,
  field_reference = 18,
  field_suffix = 19,
  field_type = 20,
  field_value = 21,
  field_values = 22,
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
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_language] = "language",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_optional] = "optional",
  [field_output] = "output",
  [field_param] = "param",
  [field_params] = "params",
  [field_reference] = "reference",
  [field_suffix] = "suffix",
  [field_type] = "type",
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
  [3] = {.index = 6, .length = 1},
  [4] = {.index = 7, .length = 4},
  [5] = {.index = 11, .length = 4},
  [6] = {.index = 15, .length = 4},
  [7] = {.index = 19, .length = 1},
  [8] = {.index = 20, .length = 2},
  [9] = {.index = 22, .length = 1},
  [10] = {.index = 23, .length = 1},
  [11] = {.index = 24, .length = 1},
  [12] = {.index = 25, .length = 2},
  [13] = {.index = 27, .length = 2},
  [14] = {.index = 29, .length = 2},
  [15] = {.index = 31, .length = 3},
  [16] = {.index = 34, .length = 5},
  [17] = {.index = 39, .length = 2},
  [18] = {.index = 41, .length = 1},
  [19] = {.index = 42, .length = 6},
  [20] = {.index = 48, .length = 3},
  [21] = {.index = 51, .length = 4},
  [22] = {.index = 55, .length = 2},
  [23] = {.index = 57, .length = 2},
  [24] = {.index = 59, .length = 3},
  [25] = {.index = 62, .length = 1},
  [26] = {.index = 63, .length = 7},
  [27] = {.index = 70, .length = 3},
  [28] = {.index = 73, .length = 3},
  [29] = {.index = 76, .length = 2},
  [30] = {.index = 78, .length = 3},
  [31] = {.index = 81, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_colon, 1},
    {field_keyword, 0},
  [3] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [6] =
    {field_base, 0},
  [7] =
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
  [11] =
    {field_body, 3},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [15] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [19] =
    {field_suffix, 0},
  [20] =
    {field_base, 0},
    {field_suffix, 1, .inherited = true},
  [22] =
    {field_param, 1},
  [23] =
    {field_content, 0},
  [24] =
    {field_close, 2},
  [25] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [27] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [29] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [31] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [34] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [39] =
    {field_close, 3},
    {field_language, 1},
  [41] =
    {field_close, 3},
  [42] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [48] =
    {field_colon, 1},
    {field_kind, 0},
    {field_value, 2},
  [51] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [55] =
    {field_close, 3},
    {field_frontmatter, 2},
  [57] =
    {field_close, 4},
    {field_language, 1},
  [59] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [62] =
    {field_name, 0},
  [63] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [70] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [73] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [76] =
    {field_close, 4},
    {field_frontmatter, 2},
  [78] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [81] =
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
  [29] = 17,
  [30] = 14,
  [31] = 15,
  [32] = 16,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 8,
  [39] = 6,
  [40] = 7,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 17,
  [45] = 14,
  [46] = 15,
  [47] = 16,
  [48] = 48,
  [49] = 49,
  [50] = 28,
  [51] = 14,
  [52] = 14,
  [53] = 17,
  [54] = 15,
  [55] = 16,
  [56] = 17,
  [57] = 12,
  [58] = 16,
  [59] = 15,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 20,
  [68] = 15,
  [69] = 69,
  [70] = 16,
  [71] = 71,
  [72] = 72,
  [73] = 28,
  [74] = 74,
  [75] = 75,
  [76] = 14,
  [77] = 77,
  [78] = 78,
  [79] = 24,
  [80] = 25,
  [81] = 26,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 17,
  [88] = 88,
  [89] = 27,
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
  [119] = 118,
  [120] = 120,
  [121] = 111,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 112,
  [127] = 115,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 135,
  [139] = 15,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 16,
  [152] = 17,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 17,
  [161] = 161,
  [162] = 162,
  [163] = 142,
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
  [176] = 15,
  [177] = 16,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 17,
  [182] = 15,
  [183] = 16,
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
  [213] = 200,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 200,
  [222] = 207,
  [223] = 223,
  [224] = 224,
  [225] = 200,
  [226] = 200,
  [227] = 200,
  [228] = 200,
  [229] = 200,
  [230] = 200,
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
  [255] = 248,
  [256] = 256,
  [257] = 257,
  [258] = 258,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(117);
      ADVANCE_MAP(
        '\n', 118,
        '\r', 1,
        '#', 120,
        '(', 167,
        ')', 168,
        '+', 14,
        ',', 169,
        '-', 9,
        ':', 166,
        '=', 135,
        '?', 164,
        'B', 195,
        'J', 198,
        'M', 186,
        'N', 201,
        'T', 183,
        '[', 15,
        '`', 17,
        'd', 30,
        'h', 18,
        'i', 69,
        'm', 27,
        'n', 76,
        'p', 79,
        's', 31,
        't', 50,
        'u', 89,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(118);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 118,
        '\r', 1,
        '#', 120,
        '`', 251,
        'd', 213,
        'n', 229,
        '\t', 249,
        '\f', 249,
        ' ', 249,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(171);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(110);
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
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(126);
      END_STATE();
    case 16:
      if (lookahead == '`') ADVANCE(170);
      END_STATE();
    case 17:
      if (lookahead == '`') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'k') ADVANCE(53);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'k') ADVANCE(55);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(162);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 103:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 105:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 106:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(253);
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(109);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 110:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(173);
      END_STATE();
    case 111:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\f') SKIP(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 112:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\f') SKIP(112);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 113:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\f') SKIP(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 114:
      if (eof) ADVANCE(117);
      ADVANCE_MAP(
        '\n', 118,
        '\r', 1,
        '#', 7,
        'd', 41,
        'h', 18,
        'i', 69,
        'm', 72,
        'p', 79,
        's', 31,
        't', 50,
        'u', 89,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(114);
      END_STATE();
    case 115:
      if (eof) ADVANCE(117);
      ADVANCE_MAP(
        '\n', 118,
        '\r', 1,
        '#', 7,
        'i', 69,
        'p', 80,
        's', 44,
        't', 49,
        'u', 91,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      ADVANCE_MAP(
        '\n', 118,
        '\r', 1,
        '#', 7,
        'i', 226,
        'p', 231,
        's', 209,
        't', 216,
        'u', 235,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_comment_line_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_delegates);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(177);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(178);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(175);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(173);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'g') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'k') ADVANCE(218);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_inline_text);
      ADVANCE_MAP(
        '\n', 118,
        '\r', 1,
        '#', 120,
        '`', 251,
        'd', 213,
        'n', 229,
        '\t', 249,
        '\f', 249,
        ' ', 249,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '`') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 118,
        '\f', 254,
        '\r', 1,
        '#', 257,
        'd', 274,
        'h', 258,
        'i', 303,
        'm', 305,
        'p', 311,
        's', 275,
        't', 284,
        'u', 321,
        '\t', 254,
        ' ', 254,
      );
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 118,
        '\f', 255,
        '\r', 1,
        '#', 257,
        'i', 226,
        'p', 231,
        's', 209,
        't', 216,
        'u', 235,
        '\t', 255,
        ' ', 255,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 118,
        '\f', 256,
        '\r', 1,
        '#', 257,
        'i', 303,
        'p', 312,
        's', 280,
        't', 285,
        'u', 323,
        '\t', 256,
        ' ', 256,
      );
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'k') ADVANCE(288);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead == 'y') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'k') ADVANCE(290);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'g') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '`') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(344);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 115},
  [3] = {.lex_state = 115},
  [4] = {.lex_state = 114},
  [5] = {.lex_state = 114},
  [6] = {.lex_state = 111},
  [7] = {.lex_state = 111},
  [8] = {.lex_state = 111},
  [9] = {.lex_state = 114},
  [10] = {.lex_state = 114},
  [11] = {.lex_state = 114},
  [12] = {.lex_state = 111},
  [13] = {.lex_state = 114},
  [14] = {.lex_state = 111},
  [15] = {.lex_state = 111},
  [16] = {.lex_state = 111},
  [17] = {.lex_state = 111},
  [18] = {.lex_state = 114},
  [19] = {.lex_state = 114},
  [20] = {.lex_state = 114},
  [21] = {.lex_state = 114},
  [22] = {.lex_state = 114},
  [23] = {.lex_state = 114},
  [24] = {.lex_state = 114},
  [25] = {.lex_state = 114},
  [26] = {.lex_state = 114},
  [27] = {.lex_state = 114},
  [28] = {.lex_state = 114},
  [29] = {.lex_state = 114},
  [30] = {.lex_state = 114},
  [31] = {.lex_state = 114},
  [32] = {.lex_state = 114},
  [33] = {.lex_state = 112},
  [34] = {.lex_state = 112},
  [35] = {.lex_state = 112},
  [36] = {.lex_state = 116},
  [37] = {.lex_state = 116},
  [38] = {.lex_state = 113},
  [39] = {.lex_state = 113},
  [40] = {.lex_state = 113},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 112},
  [43] = {.lex_state = 112},
  [44] = {.lex_state = 112},
  [45] = {.lex_state = 112},
  [46] = {.lex_state = 112},
  [47] = {.lex_state = 112},
  [48] = {.lex_state = 116},
  [49] = {.lex_state = 116},
  [50] = {.lex_state = 116},
  [51] = {.lex_state = 116},
  [52] = {.lex_state = 113},
  [53] = {.lex_state = 113},
  [54] = {.lex_state = 113},
  [55] = {.lex_state = 113},
  [56] = {.lex_state = 116},
  [57] = {.lex_state = 113},
  [58] = {.lex_state = 116},
  [59] = {.lex_state = 116},
  [60] = {.lex_state = 115},
  [61] = {.lex_state = 115},
  [62] = {.lex_state = 115},
  [63] = {.lex_state = 115},
  [64] = {.lex_state = 115},
  [65] = {.lex_state = 115},
  [66] = {.lex_state = 115},
  [67] = {.lex_state = 115},
  [68] = {.lex_state = 115},
  [69] = {.lex_state = 115},
  [70] = {.lex_state = 115},
  [71] = {.lex_state = 115},
  [72] = {.lex_state = 115},
  [73] = {.lex_state = 115},
  [74] = {.lex_state = 115},
  [75] = {.lex_state = 115},
  [76] = {.lex_state = 115},
  [77] = {.lex_state = 115},
  [78] = {.lex_state = 115},
  [79] = {.lex_state = 115},
  [80] = {.lex_state = 115},
  [81] = {.lex_state = 115},
  [82] = {.lex_state = 115},
  [83] = {.lex_state = 115},
  [84] = {.lex_state = 115},
  [85] = {.lex_state = 115},
  [86] = {.lex_state = 115},
  [87] = {.lex_state = 115},
  [88] = {.lex_state = 115},
  [89] = {.lex_state = 115},
  [90] = {.lex_state = 115},
  [91] = {.lex_state = 115},
  [92] = {.lex_state = 115},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 115},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 107},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 108},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 109},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 115},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 108},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 107},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
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
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 109},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 109},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 108},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 0},
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
    [anon_sym_Message] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [sym_block_language] = ACTIONS(1),
    [anon_sym_models] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [anon_sym_skills] = ACTIONS(1),
    [anon_sym_services] = ACTIONS(1),
    [anon_sym_psyches] = ACTIONS(1),
    [anon_sym_handoffs] = ACTIONS(1),
    [anon_sym_delegates] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_instruct] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_user] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_struct_keyword] = ACTIONS(1),
    [anon_sym_psyche] = ACTIONS(1),
    [anon_sym_skill] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [sym_thunk_keyword] = ACTIONS(1),
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
    [sym_source_file] = STATE(254),
    [sym_item] = STATE(2),
    [sym_newline] = STATE(76),
    [sym_blank_line] = STATE(2),
    [sym_comment_line] = STATE(2),
    [sym_use] = STATE(66),
    [sym_struct] = STATE(66),
    [sym_psyche] = STATE(66),
    [sym_skill] = STATE(66),
    [sym_service] = STATE(66),
    [sym_prompt] = STATE(66),
    [sym_instruct] = STATE(66),
    [sym_thunk] = STATE(66),
    [sym_psyche_keyword] = STATE(205),
    [sym_skill_keyword] = STATE(208),
    [sym_service_keyword] = STATE(211),
    [sym_prompt_keyword] = STATE(232),
    [sym_instruct_keyword] = STATE(178),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [aux_sym_comment_line_token1] = ACTIONS(7),
    [anon_sym_instruct] = ACTIONS(9),
    [sym_use_keyword] = ACTIONS(11),
    [sym_struct_keyword] = ACTIONS(13),
    [anon_sym_psyche] = ACTIONS(15),
    [anon_sym_skill] = ACTIONS(17),
    [anon_sym_service] = ACTIONS(19),
    [anon_sym_prompt] = ACTIONS(21),
    [sym_thunk_keyword] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(9), 1,
      anon_sym_instruct,
    ACTIONS(11), 1,
      sym_use_keyword,
    ACTIONS(13), 1,
      sym_struct_keyword,
    ACTIONS(15), 1,
      anon_sym_psyche,
    ACTIONS(17), 1,
      anon_sym_skill,
    ACTIONS(19), 1,
      anon_sym_service,
    ACTIONS(21), 1,
      anon_sym_prompt,
    ACTIONS(23), 1,
      sym_thunk_keyword,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_newline,
    STATE(178), 1,
      sym_instruct_keyword,
    STATE(205), 1,
      sym_psyche_keyword,
    STATE(208), 1,
      sym_skill_keyword,
    STATE(211), 1,
      sym_service_keyword,
    STATE(232), 1,
      sym_prompt_keyword,
    STATE(3), 4,
      sym_item,
      sym_blank_line,
      sym_comment_line,
      aux_sym_source_file_repeat1,
    STATE(66), 8,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_thunk,
  [68] = 19,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(32), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_instruct,
    ACTIONS(38), 1,
      sym_use_keyword,
    ACTIONS(41), 1,
      sym_struct_keyword,
    ACTIONS(44), 1,
      anon_sym_psyche,
    ACTIONS(47), 1,
      anon_sym_skill,
    ACTIONS(50), 1,
      anon_sym_service,
    ACTIONS(53), 1,
      anon_sym_prompt,
    ACTIONS(56), 1,
      sym_thunk_keyword,
    STATE(76), 1,
      sym_newline,
    STATE(178), 1,
      sym_instruct_keyword,
    STATE(205), 1,
      sym_psyche_keyword,
    STATE(208), 1,
      sym_skill_keyword,
    STATE(211), 1,
      sym_service_keyword,
    STATE(232), 1,
      sym_prompt_keyword,
    STATE(3), 4,
      sym_item,
      sym_blank_line,
      sym_comment_line,
      aux_sym_source_file_repeat1,
    STATE(66), 8,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_thunk,
  [136] = 10,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(30), 1,
      sym_newline,
    STATE(146), 1,
      sym_directive_key,
    STATE(246), 1,
      sym_block_kind,
    ACTIONS(67), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
    ACTIONS(69), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(5), 5,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(65), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [185] = 10,
    ACTIONS(73), 1,
      aux_sym_newline_token1,
    ACTIONS(76), 1,
      aux_sym_comment_line_token1,
    STATE(30), 1,
      sym_newline,
    STATE(146), 1,
      sym_directive_key,
    STATE(246), 1,
      sym_block_kind,
    ACTIONS(82), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
    ACTIONS(85), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(5), 5,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(79), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [234] = 6,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(93), 1,
      sym_indented_raw_text,
    STATE(14), 1,
      sym_newline,
    STATE(8), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(91), 18,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [272] = 6,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(93), 1,
      sym_indented_raw_text,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_newline,
    STATE(6), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(97), 18,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [310] = 6,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      aux_sym_newline_token1,
    ACTIONS(106), 1,
      sym_indented_raw_text,
    STATE(14), 1,
      sym_newline,
    STATE(8), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(104), 18,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [348] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(30), 1,
      sym_newline,
    STATE(82), 1,
      sym_thunk_body,
    STATE(146), 1,
      sym_directive_key,
    STATE(246), 1,
      sym_block_kind,
    ACTIONS(67), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(4), 5,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(65), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [388] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(30), 1,
      sym_newline,
    STATE(75), 1,
      sym_thunk_body,
    STATE(146), 1,
      sym_directive_key,
    STATE(246), 1,
      sym_block_kind,
    ACTIONS(67), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(4), 5,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(65), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [428] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(30), 1,
      sym_newline,
    STATE(90), 1,
      sym_thunk_body,
    STATE(146), 1,
      sym_directive_key,
    STATE(246), 1,
      sym_block_kind,
    ACTIONS(67), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(4), 5,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(65), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [468] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 20,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [494] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(30), 1,
      sym_newline,
    STATE(61), 1,
      sym_thunk_body,
    STATE(146), 1,
      sym_directive_key,
    STATE(246), 1,
      sym_block_kind,
    ACTIONS(67), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(4), 5,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(65), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [534] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 20,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [560] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 20,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [586] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 20,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [612] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 20,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [638] = 2,
    ACTIONS(131), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(129), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [663] = 2,
    ACTIONS(135), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [688] = 2,
    ACTIONS(139), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [713] = 2,
    ACTIONS(143), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(141), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [738] = 2,
    ACTIONS(147), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(145), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [763] = 2,
    ACTIONS(151), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(149), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [788] = 2,
    ACTIONS(155), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(153), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [813] = 2,
    ACTIONS(159), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(157), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [838] = 2,
    ACTIONS(163), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(161), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [863] = 2,
    ACTIONS(167), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [888] = 2,
    ACTIONS(171), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [913] = 2,
    ACTIONS(127), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(125), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [938] = 2,
    ACTIONS(115), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(113), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [963] = 2,
    ACTIONS(119), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(117), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [988] = 2,
    ACTIONS(123), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(121), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1013] = 8,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      aux_sym_newline_token1,
    ACTIONS(180), 1,
      sym_value_name,
    ACTIONS(183), 1,
      sym_indented_raw_text,
    STATE(45), 1,
      sym_newline,
    STATE(196), 1,
      sym_property_key,
    STATE(33), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(178), 9,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1049] = 8,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      aux_sym_newline_token1,
    ACTIONS(192), 1,
      sym_value_name,
    ACTIONS(194), 1,
      sym_indented_raw_text,
    STATE(45), 1,
      sym_newline,
    STATE(196), 1,
      sym_property_key,
    STATE(35), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(190), 9,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1085] = 8,
    ACTIONS(188), 1,
      aux_sym_newline_token1,
    ACTIONS(192), 1,
      sym_value_name,
    ACTIONS(194), 1,
      sym_indented_raw_text,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_newline,
    STATE(196), 1,
      sym_property_key,
    STATE(33), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(198), 9,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1121] = 8,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    ACTIONS(204), 1,
      aux_sym_comment_line_token1,
    ACTIONS(208), 1,
      sym_value_name,
    STATE(51), 1,
      sym_newline,
    STATE(214), 1,
      sym_field_name,
    STATE(37), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(206), 8,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1156] = 8,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(215), 1,
      aux_sym_comment_line_token1,
    ACTIONS(220), 1,
      sym_value_name,
    STATE(51), 1,
      sym_newline,
    STATE(214), 1,
      sym_field_name,
    STATE(37), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(218), 8,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1191] = 6,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      sym_indented_raw_text,
    STATE(52), 1,
      sym_newline,
    STATE(38), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(104), 9,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1220] = 6,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      aux_sym_newline_token1,
    ACTIONS(231), 1,
      sym_indented_raw_text,
    STATE(52), 1,
      sym_newline,
    STATE(38), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(91), 9,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1249] = 6,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      aux_sym_newline_token1,
    ACTIONS(231), 1,
      sym_indented_raw_text,
    STATE(52), 1,
      sym_newline,
    STATE(39), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(97), 9,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1278] = 12,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(233), 1,
      sym_inline_comment,
    ACTIONS(237), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(239), 1,
      sym_inline_text,
    STATE(7), 1,
      sym_line_end,
    STATE(15), 1,
      sym_newline,
    STATE(19), 1,
      sym_block_value,
    STATE(138), 1,
      sym_fence_open,
    STATE(147), 1,
      sym_block_name,
    STATE(148), 1,
      sym_block_content_inline,
    ACTIONS(235), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(21), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [1319] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
  [1337] = 2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
  [1355] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
  [1373] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
  [1391] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
  [1409] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 12,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
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
  [1427] = 2,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(251), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1444] = 2,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(255), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1461] = 2,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(171), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1478] = 2,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(115), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1495] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 11,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1512] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 11,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1529] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 11,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1546] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 11,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1563] = 2,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(127), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1580] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 11,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1597] = 2,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(123), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1614] = 2,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(119), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1631] = 1,
    ACTIONS(257), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1645] = 1,
    ACTIONS(259), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1659] = 1,
    ACTIONS(261), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1673] = 1,
    ACTIONS(263), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1687] = 1,
    ACTIONS(265), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1701] = 1,
    ACTIONS(267), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1715] = 1,
    ACTIONS(269), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1729] = 1,
    ACTIONS(137), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1743] = 1,
    ACTIONS(117), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1757] = 1,
    ACTIONS(271), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1771] = 1,
    ACTIONS(121), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1785] = 1,
    ACTIONS(273), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1799] = 1,
    ACTIONS(275), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1813] = 1,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1827] = 1,
    ACTIONS(277), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1841] = 1,
    ACTIONS(279), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1855] = 1,
    ACTIONS(113), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1869] = 1,
    ACTIONS(281), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1883] = 1,
    ACTIONS(283), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1897] = 1,
    ACTIONS(153), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1911] = 1,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1925] = 1,
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1939] = 1,
    ACTIONS(285), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1953] = 1,
    ACTIONS(287), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1967] = 1,
    ACTIONS(289), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1981] = 1,
    ACTIONS(291), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1995] = 1,
    ACTIONS(293), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2009] = 1,
    ACTIONS(125), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2023] = 1,
    ACTIONS(295), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2037] = 1,
    ACTIONS(165), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2051] = 1,
    ACTIONS(297), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2065] = 1,
    ACTIONS(299), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2079] = 1,
    ACTIONS(301), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2093] = 5,
    ACTIONS(305), 1,
      sym_type_name,
    STATE(110), 1,
      sym_base_type,
    STATE(223), 1,
      sym_type,
    STATE(132), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(303), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2114] = 5,
    ACTIONS(305), 1,
      sym_type_name,
    STATE(110), 1,
      sym_base_type,
    STATE(251), 1,
      sym_type,
    STATE(132), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(303), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2135] = 5,
    ACTIONS(305), 1,
      sym_type_name,
    STATE(110), 1,
      sym_base_type,
    STATE(141), 1,
      sym_type,
    STATE(132), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(303), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2156] = 5,
    ACTIONS(305), 1,
      sym_type_name,
    STATE(110), 1,
      sym_base_type,
    STATE(258), 1,
      sym_type,
    STATE(132), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(303), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2177] = 5,
    ACTIONS(305), 1,
      sym_type_name,
    STATE(110), 1,
      sym_base_type,
    STATE(158), 1,
      sym_type,
    STATE(132), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(303), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2198] = 5,
    ACTIONS(305), 1,
      sym_type_name,
    STATE(110), 1,
      sym_base_type,
    STATE(203), 1,
      sym_type,
    STATE(132), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(303), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2219] = 7,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    ACTIONS(204), 1,
      aux_sym_comment_line_token1,
    ACTIONS(307), 1,
      sym_value_name,
    STATE(51), 1,
      sym_newline,
    STATE(84), 1,
      sym_struct_body,
    STATE(214), 1,
      sym_field_name,
    STATE(36), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [2244] = 8,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    ACTIONS(311), 1,
      sym_inline_comment,
    ACTIONS(313), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(40), 1,
      sym_line_end,
    STATE(54), 1,
      sym_newline,
    STATE(77), 1,
      sym_instruct_body,
    STATE(135), 1,
      sym_fence_open,
    STATE(85), 2,
      sym_block_indented,
      sym_block_fenced,
  [2270] = 8,
    ACTIONS(313), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    ACTIONS(317), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
    STATE(72), 1,
      sym_cap_body,
    STATE(137), 1,
      sym_fence_open,
    STATE(71), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2296] = 8,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(323), 1,
      sym_frontmatter_delimiter,
    ACTIONS(325), 1,
      sym_fenced_raw_text,
    STATE(78), 1,
      sym_fence_close,
    STATE(114), 1,
      sym_frontmatter,
    STATE(175), 1,
      sym_newline,
    STATE(116), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2322] = 8,
    ACTIONS(313), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    ACTIONS(317), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
    STATE(92), 1,
      sym_cap_body,
    STATE(137), 1,
      sym_fence_open,
    STATE(71), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2348] = 8,
    ACTIONS(313), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    ACTIONS(317), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
    STATE(74), 1,
      sym_cap_body,
    STATE(137), 1,
      sym_fence_open,
    STATE(71), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2374] = 8,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    ACTIONS(311), 1,
      sym_inline_comment,
    ACTIONS(313), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(40), 1,
      sym_line_end,
    STATE(54), 1,
      sym_newline,
    STATE(83), 1,
      sym_instruct_body,
    STATE(135), 1,
      sym_fence_open,
    STATE(85), 2,
      sym_block_indented,
      sym_block_fenced,
  [2400] = 8,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(323), 1,
      sym_frontmatter_delimiter,
    ACTIONS(325), 1,
      sym_fenced_raw_text,
    STATE(86), 1,
      sym_fence_close,
    STATE(124), 1,
      sym_frontmatter,
    STATE(175), 1,
      sym_newline,
    STATE(122), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2426] = 8,
    ACTIONS(313), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    ACTIONS(317), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
    STATE(69), 1,
      sym_cap_body,
    STATE(137), 1,
      sym_fence_open,
    STATE(71), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2452] = 4,
    ACTIONS(329), 1,
      sym_array_suffix,
    STATE(108), 1,
      aux_sym_type_repeat1,
    STATE(133), 1,
      sym_type_suffix,
    ACTIONS(327), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2469] = 4,
    ACTIONS(334), 1,
      sym_array_suffix,
    STATE(108), 1,
      aux_sym_type_repeat1,
    STATE(133), 1,
      sym_type_suffix,
    ACTIONS(332), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2486] = 4,
    ACTIONS(334), 1,
      sym_array_suffix,
    STATE(109), 1,
      aux_sym_type_repeat1,
    STATE(133), 1,
      sym_type_suffix,
    ACTIONS(336), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2503] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(338), 1,
      sym_fenced_raw_text,
    STATE(67), 1,
      sym_fence_close,
    STATE(167), 1,
      sym_newline,
    STATE(115), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2523] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(338), 1,
      sym_fenced_raw_text,
    STATE(79), 1,
      sym_fence_close,
    STATE(167), 1,
      sym_newline,
    STATE(118), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2543] = 5,
    ACTIONS(340), 1,
      aux_sym_comment_line_token1,
    ACTIONS(343), 1,
      sym_frontmatter_delimiter,
    ACTIONS(345), 1,
      sym_value_name,
    STATE(233), 1,
      sym_property_key,
    STATE(113), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [2561] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      sym_fenced_raw_text,
    STATE(60), 1,
      sym_fence_close,
    STATE(175), 1,
      sym_newline,
    STATE(117), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2581] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(338), 1,
      sym_fenced_raw_text,
    STATE(81), 1,
      sym_fence_close,
    STATE(167), 1,
      sym_newline,
    STATE(131), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2601] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      sym_fenced_raw_text,
    STATE(88), 1,
      sym_fence_close,
    STATE(175), 1,
      sym_newline,
    STATE(128), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2621] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      sym_fenced_raw_text,
    STATE(64), 1,
      sym_fence_close,
    STATE(175), 1,
      sym_newline,
    STATE(128), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2641] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(338), 1,
      sym_fenced_raw_text,
    STATE(89), 1,
      sym_fence_close,
    STATE(167), 1,
      sym_newline,
    STATE(131), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2661] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(338), 1,
      sym_fenced_raw_text,
    ACTIONS(348), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(27), 1,
      sym_fence_close,
    STATE(167), 1,
      sym_newline,
    STATE(131), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2681] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      sym_fenced_raw_text,
    STATE(65), 1,
      sym_fence_close,
    STATE(175), 1,
      sym_newline,
    STATE(128), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2701] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(338), 1,
      sym_fenced_raw_text,
    ACTIONS(348), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(20), 1,
      sym_fence_close,
    STATE(167), 1,
      sym_newline,
    STATE(127), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2721] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      sym_fenced_raw_text,
    STATE(63), 1,
      sym_fence_close,
    STATE(175), 1,
      sym_newline,
    STATE(128), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2741] = 5,
    ACTIONS(350), 1,
      aux_sym_comment_line_token1,
    ACTIONS(352), 1,
      sym_frontmatter_delimiter,
    ACTIONS(354), 1,
      sym_value_name,
    STATE(233), 1,
      sym_property_key,
    STATE(113), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [2759] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(321), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(325), 1,
      sym_fenced_raw_text,
    STATE(62), 1,
      sym_fence_close,
    STATE(175), 1,
      sym_newline,
    STATE(120), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2779] = 5,
    ACTIONS(350), 1,
      aux_sym_comment_line_token1,
    ACTIONS(354), 1,
      sym_value_name,
    ACTIONS(356), 1,
      sym_frontmatter_delimiter,
    STATE(233), 1,
      sym_property_key,
    STATE(123), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [2797] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(338), 1,
      sym_fenced_raw_text,
    ACTIONS(348), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(24), 1,
      sym_fence_close,
    STATE(167), 1,
      sym_newline,
    STATE(119), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2817] = 6,
    ACTIONS(319), 1,
      aux_sym_newline_token1,
    ACTIONS(338), 1,
      sym_fenced_raw_text,
    ACTIONS(348), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(26), 1,
      sym_fence_close,
    STATE(167), 1,
      sym_newline,
    STATE(131), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2837] = 5,
    ACTIONS(358), 1,
      aux_sym_newline_token1,
    ACTIONS(361), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(363), 1,
      sym_fenced_raw_text,
    STATE(175), 1,
      sym_newline,
    STATE(128), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2854] = 1,
    ACTIONS(366), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2863] = 1,
    ACTIONS(368), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2872] = 5,
    ACTIONS(370), 1,
      aux_sym_newline_token1,
    ACTIONS(373), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(375), 1,
      sym_fenced_raw_text,
    STATE(167), 1,
      sym_newline,
    STATE(131), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2889] = 1,
    ACTIONS(378), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2898] = 1,
    ACTIONS(380), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2907] = 1,
    ACTIONS(382), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2916] = 5,
    ACTIONS(384), 1,
      aux_sym_newline_token1,
    ACTIONS(386), 1,
      sym_inline_comment,
    ACTIONS(388), 1,
      sym_block_language,
    STATE(111), 1,
      sym_line_end,
    STATE(182), 1,
      sym_newline,
  [2932] = 2,
    STATE(184), 1,
      sym_cap_kind,
    ACTIONS(390), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [2942] = 5,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      sym_inline_comment,
    ACTIONS(396), 1,
      sym_block_language,
    STATE(102), 1,
      sym_line_end,
    STATE(139), 1,
      sym_newline,
  [2958] = 5,
    ACTIONS(384), 1,
      aux_sym_newline_token1,
    ACTIONS(386), 1,
      sym_inline_comment,
    ACTIONS(398), 1,
      sym_block_language,
    STATE(121), 1,
      sym_line_end,
    STATE(182), 1,
      sym_newline,
  [2974] = 1,
    ACTIONS(119), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [2981] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(400), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_end,
    STATE(31), 1,
      sym_newline,
  [2994] = 4,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    ACTIONS(402), 1,
      sym_inline_comment,
    STATE(49), 1,
      sym_line_end,
    STATE(59), 1,
      sym_newline,
  [3007] = 4,
    ACTIONS(384), 1,
      aux_sym_newline_token1,
    ACTIONS(386), 1,
      sym_inline_comment,
    STATE(112), 1,
      sym_line_end,
    STATE(182), 1,
      sym_newline,
  [3020] = 3,
    ACTIONS(406), 1,
      sym_comma,
    STATE(162), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(404), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3031] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(400), 1,
      sym_inline_comment,
    STATE(23), 1,
      sym_line_end,
    STATE(31), 1,
      sym_newline,
  [3044] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(408), 1,
      sym_inline_comment,
    STATE(68), 1,
      sym_newline,
    STATE(91), 1,
      sym_line_end,
  [3057] = 2,
    STATE(194), 1,
      sym_directive_op,
    ACTIONS(410), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3066] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(400), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_end,
    STATE(31), 1,
      sym_newline,
  [3079] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(400), 1,
      sym_inline_comment,
    STATE(22), 1,
      sym_line_end,
    STATE(31), 1,
      sym_newline,
  [3092] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(400), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(31), 1,
      sym_newline,
  [3105] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(400), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(31), 1,
      sym_newline,
  [3118] = 1,
    ACTIONS(123), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [3125] = 1,
    ACTIONS(127), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [3132] = 4,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    ACTIONS(317), 1,
      sym_inline_comment,
    STATE(42), 1,
      sym_line_end,
    STATE(46), 1,
      sym_newline,
  [3145] = 3,
    ACTIONS(414), 1,
      sym_comma,
    STATE(154), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(412), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3156] = 4,
    ACTIONS(417), 1,
      sym_rparen,
    ACTIONS(419), 1,
      sym_value_name,
    STATE(168), 1,
      sym_param,
    STATE(189), 1,
      sym_param_name,
  [3169] = 4,
    ACTIONS(421), 1,
      aux_sym_newline_token1,
    ACTIONS(423), 1,
      sym_inline_comment,
    STATE(99), 1,
      sym_line_end,
    STATE(176), 1,
      sym_newline,
  [3182] = 4,
    ACTIONS(425), 1,
      sym_arrow,
    ACTIONS(427), 1,
      sym_colon,
    ACTIONS(429), 1,
      sym_lparen,
    STATE(187), 1,
      sym_params,
  [3195] = 4,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    ACTIONS(402), 1,
      sym_inline_comment,
    STATE(48), 1,
      sym_line_end,
    STATE(59), 1,
      sym_newline,
  [3208] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(400), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(31), 1,
      sym_newline,
  [3221] = 1,
    ACTIONS(125), 4,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [3228] = 4,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      sym_inline_comment,
    STATE(106), 1,
      sym_line_end,
    STATE(139), 1,
      sym_newline,
  [3241] = 3,
    ACTIONS(406), 1,
      sym_comma,
    STATE(154), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(431), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3252] = 4,
    ACTIONS(384), 1,
      aux_sym_newline_token1,
    ACTIONS(386), 1,
      sym_inline_comment,
    STATE(126), 1,
      sym_line_end,
    STATE(182), 1,
      sym_newline,
  [3265] = 3,
    ACTIONS(433), 1,
      sym_rparen,
    ACTIONS(435), 1,
      sym_comma,
    STATE(164), 1,
      aux_sym_params_repeat1,
  [3275] = 3,
    ACTIONS(419), 1,
      sym_value_name,
    STATE(189), 1,
      sym_param_name,
    STATE(199), 1,
      sym_param,
  [3285] = 1,
    ACTIONS(438), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3291] = 1,
    ACTIONS(440), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3297] = 3,
    ACTIONS(442), 1,
      sym_rparen,
    ACTIONS(444), 1,
      sym_comma,
    STATE(174), 1,
      aux_sym_params_repeat1,
  [3307] = 1,
    ACTIONS(446), 3,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [3313] = 1,
    ACTIONS(412), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [3319] = 1,
    ACTIONS(448), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3325] = 1,
    ACTIONS(450), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3331] = 1,
    ACTIONS(452), 3,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [3337] = 3,
    ACTIONS(444), 1,
      sym_comma,
    ACTIONS(454), 1,
      sym_rparen,
    STATE(164), 1,
      aux_sym_params_repeat1,
  [3347] = 1,
    ACTIONS(456), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3353] = 1,
    ACTIONS(117), 3,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_value_name,
  [3359] = 1,
    ACTIONS(121), 3,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_value_name,
  [3365] = 3,
    ACTIONS(458), 1,
      sym_colon,
    ACTIONS(460), 1,
      sym_value_name,
    STATE(235), 1,
      sym_instruct_name,
  [3375] = 1,
    ACTIONS(462), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3381] = 1,
    ACTIONS(464), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [3387] = 1,
    ACTIONS(127), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3393] = 1,
    ACTIONS(119), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3399] = 1,
    ACTIONS(123), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3405] = 3,
    ACTIONS(466), 1,
      sym_cap_uri,
    ACTIONS(468), 1,
      sym_cap_shorthand,
    STATE(145), 1,
      sym_cap_ref,
  [3415] = 1,
    ACTIONS(470), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3421] = 1,
    ACTIONS(472), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [3427] = 2,
    ACTIONS(474), 1,
      sym_arrow,
    ACTIONS(476), 1,
      sym_colon,
  [3434] = 2,
    ACTIONS(384), 1,
      aux_sym_newline_token1,
    STATE(171), 1,
      sym_newline,
  [3441] = 2,
    ACTIONS(478), 1,
      sym_optional_marker,
    ACTIONS(480), 1,
      sym_colon,
  [3448] = 1,
    ACTIONS(482), 2,
      anon_sym_EQ,
      sym_colon,
  [3453] = 2,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    STATE(43), 1,
      sym_newline,
  [3460] = 2,
    ACTIONS(484), 1,
      sym_inline_text,
    STATE(195), 1,
      sym_property_value,
  [3467] = 2,
    ACTIONS(384), 1,
      aux_sym_newline_token1,
    STATE(172), 1,
      sym_newline,
  [3474] = 2,
    ACTIONS(486), 1,
      sym_bare_value,
    STATE(144), 1,
      sym_directive_csv,
  [3481] = 2,
    ACTIONS(421), 1,
      aux_sym_newline_token1,
    STATE(173), 1,
      sym_newline,
  [3488] = 2,
    ACTIONS(488), 1,
      anon_sym_EQ,
    STATE(206), 1,
      sym_assign_operator,
  [3495] = 1,
    ACTIONS(490), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3500] = 2,
    ACTIONS(492), 1,
      sym_value_name,
    STATE(157), 1,
      sym_thunk_name,
  [3507] = 1,
    ACTIONS(494), 2,
      sym_rparen,
      sym_comma,
  [3512] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(70), 1,
      sym_newline,
  [3519] = 1,
    ACTIONS(496), 2,
      sym_arrow,
      sym_colon,
  [3524] = 1,
    ACTIONS(498), 2,
      sym_colon,
      sym_value_name,
  [3529] = 1,
    ACTIONS(500), 2,
      sym_rparen,
      sym_comma,
  [3534] = 2,
    ACTIONS(502), 1,
      sym_type_name,
    STATE(242), 1,
      sym_struct_name,
  [3541] = 2,
    ACTIONS(504), 1,
      sym_value_name,
    STATE(243), 1,
      sym_cap_name,
  [3548] = 2,
    ACTIONS(484), 1,
      sym_inline_text,
    STATE(153), 1,
      sym_property_value,
  [3555] = 2,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    STATE(57), 1,
      sym_newline,
  [3562] = 2,
    ACTIONS(504), 1,
      sym_value_name,
    STATE(253), 1,
      sym_cap_name,
  [3569] = 2,
    ACTIONS(421), 1,
      aux_sym_newline_token1,
    STATE(125), 1,
      sym_newline,
  [3576] = 2,
    ACTIONS(384), 1,
      aux_sym_newline_token1,
    STATE(166), 1,
      sym_newline,
  [3583] = 2,
    ACTIONS(504), 1,
      sym_value_name,
    STATE(240), 1,
      sym_cap_name,
  [3590] = 1,
    ACTIONS(506), 2,
      sym_optional_marker,
      sym_colon,
  [3595] = 2,
    ACTIONS(309), 1,
      aux_sym_newline_token1,
    STATE(55), 1,
      sym_newline,
  [3602] = 2,
    ACTIONS(508), 1,
      sym_optional_marker,
    ACTIONS(510), 1,
      sym_colon,
  [3609] = 1,
    ACTIONS(512), 2,
      sym_arrow,
      sym_colon,
  [3614] = 2,
    ACTIONS(384), 1,
      aux_sym_newline_token1,
    STATE(179), 1,
      sym_newline,
  [3621] = 1,
    ACTIONS(514), 2,
      sym_optional_marker,
      sym_colon,
  [3626] = 2,
    ACTIONS(516), 1,
      sym_cap_uri,
    ACTIONS(518), 1,
      sym_cap_shorthand,
  [3633] = 1,
    ACTIONS(520), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3638] = 1,
    ACTIONS(522), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3643] = 2,
    ACTIONS(421), 1,
      aux_sym_newline_token1,
    STATE(177), 1,
      sym_newline,
  [3650] = 2,
    ACTIONS(524), 1,
      aux_sym_newline_token1,
    STATE(12), 1,
      sym_newline,
  [3657] = 1,
    ACTIONS(526), 2,
      sym_rparen,
      sym_comma,
  [3662] = 1,
    ACTIONS(528), 2,
      sym_arrow,
      sym_colon,
  [3667] = 2,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    STATE(32), 1,
      sym_newline,
  [3674] = 2,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    STATE(47), 1,
      sym_newline,
  [3681] = 2,
    ACTIONS(384), 1,
      aux_sym_newline_token1,
    STATE(183), 1,
      sym_newline,
  [3688] = 2,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    STATE(151), 1,
      sym_newline,
  [3695] = 2,
    ACTIONS(524), 1,
      aux_sym_newline_token1,
    STATE(16), 1,
      sym_newline,
  [3702] = 2,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    STATE(58), 1,
      sym_newline,
  [3709] = 1,
    ACTIONS(530), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3714] = 2,
    ACTIONS(504), 1,
      sym_value_name,
    STATE(244), 1,
      sym_cap_name,
  [3721] = 1,
    ACTIONS(532), 1,
      sym_colon,
  [3725] = 1,
    ACTIONS(534), 1,
      sym_bare_value,
  [3729] = 1,
    ACTIONS(536), 1,
      sym_colon,
  [3733] = 1,
    ACTIONS(538), 1,
      sym_colon,
  [3737] = 1,
    ACTIONS(540), 1,
      sym_colon,
  [3741] = 1,
    ACTIONS(542), 1,
      sym_colon,
  [3745] = 1,
    ACTIONS(544), 1,
      sym_colon,
  [3749] = 1,
    ACTIONS(546), 1,
      sym_colon,
  [3753] = 1,
    ACTIONS(548), 1,
      sym_bare_value,
  [3757] = 1,
    ACTIONS(550), 1,
      sym_colon,
  [3761] = 1,
    ACTIONS(552), 1,
      sym_colon,
  [3765] = 1,
    ACTIONS(554), 1,
      sym_colon,
  [3769] = 1,
    ACTIONS(556), 1,
      sym_colon,
  [3773] = 1,
    ACTIONS(558), 1,
      sym_colon,
  [3777] = 1,
    ACTIONS(560), 1,
      sym_value_name,
  [3781] = 1,
    ACTIONS(562), 1,
      aux_sym_newline_token1,
  [3785] = 1,
    ACTIONS(564), 1,
      sym_colon,
  [3789] = 1,
    ACTIONS(566), 1,
      sym_value_name,
  [3793] = 1,
    ACTIONS(568), 1,
      sym_colon,
  [3797] = 1,
    ACTIONS(570), 1,
      sym_inline_text,
  [3801] = 1,
    ACTIONS(572), 1,
      sym_colon,
  [3805] = 1,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
  [3809] = 1,
    ACTIONS(576), 1,
      aux_sym_newline_token1,
  [3813] = 1,
    ACTIONS(578), 1,
      sym_value_name,
  [3817] = 1,
    ACTIONS(580), 1,
      sym_value_name,
  [3821] = 1,
    ACTIONS(582), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 185,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 272,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 348,
  [SMALL_STATE(10)] = 388,
  [SMALL_STATE(11)] = 428,
  [SMALL_STATE(12)] = 468,
  [SMALL_STATE(13)] = 494,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 560,
  [SMALL_STATE(16)] = 586,
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 638,
  [SMALL_STATE(19)] = 663,
  [SMALL_STATE(20)] = 688,
  [SMALL_STATE(21)] = 713,
  [SMALL_STATE(22)] = 738,
  [SMALL_STATE(23)] = 763,
  [SMALL_STATE(24)] = 788,
  [SMALL_STATE(25)] = 813,
  [SMALL_STATE(26)] = 838,
  [SMALL_STATE(27)] = 863,
  [SMALL_STATE(28)] = 888,
  [SMALL_STATE(29)] = 913,
  [SMALL_STATE(30)] = 938,
  [SMALL_STATE(31)] = 963,
  [SMALL_STATE(32)] = 988,
  [SMALL_STATE(33)] = 1013,
  [SMALL_STATE(34)] = 1049,
  [SMALL_STATE(35)] = 1085,
  [SMALL_STATE(36)] = 1121,
  [SMALL_STATE(37)] = 1156,
  [SMALL_STATE(38)] = 1191,
  [SMALL_STATE(39)] = 1220,
  [SMALL_STATE(40)] = 1249,
  [SMALL_STATE(41)] = 1278,
  [SMALL_STATE(42)] = 1319,
  [SMALL_STATE(43)] = 1337,
  [SMALL_STATE(44)] = 1355,
  [SMALL_STATE(45)] = 1373,
  [SMALL_STATE(46)] = 1391,
  [SMALL_STATE(47)] = 1409,
  [SMALL_STATE(48)] = 1427,
  [SMALL_STATE(49)] = 1444,
  [SMALL_STATE(50)] = 1461,
  [SMALL_STATE(51)] = 1478,
  [SMALL_STATE(52)] = 1495,
  [SMALL_STATE(53)] = 1512,
  [SMALL_STATE(54)] = 1529,
  [SMALL_STATE(55)] = 1546,
  [SMALL_STATE(56)] = 1563,
  [SMALL_STATE(57)] = 1580,
  [SMALL_STATE(58)] = 1597,
  [SMALL_STATE(59)] = 1614,
  [SMALL_STATE(60)] = 1631,
  [SMALL_STATE(61)] = 1645,
  [SMALL_STATE(62)] = 1659,
  [SMALL_STATE(63)] = 1673,
  [SMALL_STATE(64)] = 1687,
  [SMALL_STATE(65)] = 1701,
  [SMALL_STATE(66)] = 1715,
  [SMALL_STATE(67)] = 1729,
  [SMALL_STATE(68)] = 1743,
  [SMALL_STATE(69)] = 1757,
  [SMALL_STATE(70)] = 1771,
  [SMALL_STATE(71)] = 1785,
  [SMALL_STATE(72)] = 1799,
  [SMALL_STATE(73)] = 1813,
  [SMALL_STATE(74)] = 1827,
  [SMALL_STATE(75)] = 1841,
  [SMALL_STATE(76)] = 1855,
  [SMALL_STATE(77)] = 1869,
  [SMALL_STATE(78)] = 1883,
  [SMALL_STATE(79)] = 1897,
  [SMALL_STATE(80)] = 1911,
  [SMALL_STATE(81)] = 1925,
  [SMALL_STATE(82)] = 1939,
  [SMALL_STATE(83)] = 1953,
  [SMALL_STATE(84)] = 1967,
  [SMALL_STATE(85)] = 1981,
  [SMALL_STATE(86)] = 1995,
  [SMALL_STATE(87)] = 2009,
  [SMALL_STATE(88)] = 2023,
  [SMALL_STATE(89)] = 2037,
  [SMALL_STATE(90)] = 2051,
  [SMALL_STATE(91)] = 2065,
  [SMALL_STATE(92)] = 2079,
  [SMALL_STATE(93)] = 2093,
  [SMALL_STATE(94)] = 2114,
  [SMALL_STATE(95)] = 2135,
  [SMALL_STATE(96)] = 2156,
  [SMALL_STATE(97)] = 2177,
  [SMALL_STATE(98)] = 2198,
  [SMALL_STATE(99)] = 2219,
  [SMALL_STATE(100)] = 2244,
  [SMALL_STATE(101)] = 2270,
  [SMALL_STATE(102)] = 2296,
  [SMALL_STATE(103)] = 2322,
  [SMALL_STATE(104)] = 2348,
  [SMALL_STATE(105)] = 2374,
  [SMALL_STATE(106)] = 2400,
  [SMALL_STATE(107)] = 2426,
  [SMALL_STATE(108)] = 2452,
  [SMALL_STATE(109)] = 2469,
  [SMALL_STATE(110)] = 2486,
  [SMALL_STATE(111)] = 2503,
  [SMALL_STATE(112)] = 2523,
  [SMALL_STATE(113)] = 2543,
  [SMALL_STATE(114)] = 2561,
  [SMALL_STATE(115)] = 2581,
  [SMALL_STATE(116)] = 2601,
  [SMALL_STATE(117)] = 2621,
  [SMALL_STATE(118)] = 2641,
  [SMALL_STATE(119)] = 2661,
  [SMALL_STATE(120)] = 2681,
  [SMALL_STATE(121)] = 2701,
  [SMALL_STATE(122)] = 2721,
  [SMALL_STATE(123)] = 2741,
  [SMALL_STATE(124)] = 2759,
  [SMALL_STATE(125)] = 2779,
  [SMALL_STATE(126)] = 2797,
  [SMALL_STATE(127)] = 2817,
  [SMALL_STATE(128)] = 2837,
  [SMALL_STATE(129)] = 2854,
  [SMALL_STATE(130)] = 2863,
  [SMALL_STATE(131)] = 2872,
  [SMALL_STATE(132)] = 2889,
  [SMALL_STATE(133)] = 2898,
  [SMALL_STATE(134)] = 2907,
  [SMALL_STATE(135)] = 2916,
  [SMALL_STATE(136)] = 2932,
  [SMALL_STATE(137)] = 2942,
  [SMALL_STATE(138)] = 2958,
  [SMALL_STATE(139)] = 2974,
  [SMALL_STATE(140)] = 2981,
  [SMALL_STATE(141)] = 2994,
  [SMALL_STATE(142)] = 3007,
  [SMALL_STATE(143)] = 3020,
  [SMALL_STATE(144)] = 3031,
  [SMALL_STATE(145)] = 3044,
  [SMALL_STATE(146)] = 3057,
  [SMALL_STATE(147)] = 3066,
  [SMALL_STATE(148)] = 3079,
  [SMALL_STATE(149)] = 3092,
  [SMALL_STATE(150)] = 3105,
  [SMALL_STATE(151)] = 3118,
  [SMALL_STATE(152)] = 3125,
  [SMALL_STATE(153)] = 3132,
  [SMALL_STATE(154)] = 3145,
  [SMALL_STATE(155)] = 3156,
  [SMALL_STATE(156)] = 3169,
  [SMALL_STATE(157)] = 3182,
  [SMALL_STATE(158)] = 3195,
  [SMALL_STATE(159)] = 3208,
  [SMALL_STATE(160)] = 3221,
  [SMALL_STATE(161)] = 3228,
  [SMALL_STATE(162)] = 3241,
  [SMALL_STATE(163)] = 3252,
  [SMALL_STATE(164)] = 3265,
  [SMALL_STATE(165)] = 3275,
  [SMALL_STATE(166)] = 3285,
  [SMALL_STATE(167)] = 3291,
  [SMALL_STATE(168)] = 3297,
  [SMALL_STATE(169)] = 3307,
  [SMALL_STATE(170)] = 3313,
  [SMALL_STATE(171)] = 3319,
  [SMALL_STATE(172)] = 3325,
  [SMALL_STATE(173)] = 3331,
  [SMALL_STATE(174)] = 3337,
  [SMALL_STATE(175)] = 3347,
  [SMALL_STATE(176)] = 3353,
  [SMALL_STATE(177)] = 3359,
  [SMALL_STATE(178)] = 3365,
  [SMALL_STATE(179)] = 3375,
  [SMALL_STATE(180)] = 3381,
  [SMALL_STATE(181)] = 3387,
  [SMALL_STATE(182)] = 3393,
  [SMALL_STATE(183)] = 3399,
  [SMALL_STATE(184)] = 3405,
  [SMALL_STATE(185)] = 3415,
  [SMALL_STATE(186)] = 3421,
  [SMALL_STATE(187)] = 3427,
  [SMALL_STATE(188)] = 3434,
  [SMALL_STATE(189)] = 3441,
  [SMALL_STATE(190)] = 3448,
  [SMALL_STATE(191)] = 3453,
  [SMALL_STATE(192)] = 3460,
  [SMALL_STATE(193)] = 3467,
  [SMALL_STATE(194)] = 3474,
  [SMALL_STATE(195)] = 3481,
  [SMALL_STATE(196)] = 3488,
  [SMALL_STATE(197)] = 3495,
  [SMALL_STATE(198)] = 3500,
  [SMALL_STATE(199)] = 3507,
  [SMALL_STATE(200)] = 3512,
  [SMALL_STATE(201)] = 3519,
  [SMALL_STATE(202)] = 3524,
  [SMALL_STATE(203)] = 3529,
  [SMALL_STATE(204)] = 3534,
  [SMALL_STATE(205)] = 3541,
  [SMALL_STATE(206)] = 3548,
  [SMALL_STATE(207)] = 3555,
  [SMALL_STATE(208)] = 3562,
  [SMALL_STATE(209)] = 3569,
  [SMALL_STATE(210)] = 3576,
  [SMALL_STATE(211)] = 3583,
  [SMALL_STATE(212)] = 3590,
  [SMALL_STATE(213)] = 3595,
  [SMALL_STATE(214)] = 3602,
  [SMALL_STATE(215)] = 3609,
  [SMALL_STATE(216)] = 3614,
  [SMALL_STATE(217)] = 3621,
  [SMALL_STATE(218)] = 3626,
  [SMALL_STATE(219)] = 3633,
  [SMALL_STATE(220)] = 3638,
  [SMALL_STATE(221)] = 3643,
  [SMALL_STATE(222)] = 3650,
  [SMALL_STATE(223)] = 3657,
  [SMALL_STATE(224)] = 3662,
  [SMALL_STATE(225)] = 3667,
  [SMALL_STATE(226)] = 3674,
  [SMALL_STATE(227)] = 3681,
  [SMALL_STATE(228)] = 3688,
  [SMALL_STATE(229)] = 3695,
  [SMALL_STATE(230)] = 3702,
  [SMALL_STATE(231)] = 3709,
  [SMALL_STATE(232)] = 3714,
  [SMALL_STATE(233)] = 3721,
  [SMALL_STATE(234)] = 3725,
  [SMALL_STATE(235)] = 3729,
  [SMALL_STATE(236)] = 3733,
  [SMALL_STATE(237)] = 3737,
  [SMALL_STATE(238)] = 3741,
  [SMALL_STATE(239)] = 3745,
  [SMALL_STATE(240)] = 3749,
  [SMALL_STATE(241)] = 3753,
  [SMALL_STATE(242)] = 3757,
  [SMALL_STATE(243)] = 3761,
  [SMALL_STATE(244)] = 3765,
  [SMALL_STATE(245)] = 3769,
  [SMALL_STATE(246)] = 3773,
  [SMALL_STATE(247)] = 3777,
  [SMALL_STATE(248)] = 3781,
  [SMALL_STATE(249)] = 3785,
  [SMALL_STATE(250)] = 3789,
  [SMALL_STATE(251)] = 3793,
  [SMALL_STATE(252)] = 3797,
  [SMALL_STATE(253)] = 3801,
  [SMALL_STATE(254)] = 3805,
  [SMALL_STATE(255)] = 3809,
  [SMALL_STATE(256)] = 3813,
  [SMALL_STATE(257)] = 3817,
  [SMALL_STATE(258)] = 3821,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 10),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 10),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 25),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 25),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 20),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 20),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 11),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 11),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 10),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 10),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 24),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 24),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 17),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 17),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 18),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 18),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 23),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 23),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_line, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 27),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 27),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 10),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 10),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 21),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 21),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 15),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 15),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 22),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 26),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 28),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 23),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 29),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 30),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 16),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 11),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 19),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 17),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 18),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 12),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 12), SHIFT_REPEAT(129),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 8),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 7),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 14),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 14), SHIFT_REPEAT(165),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 10),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter_comment, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 31),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 10),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 9),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 13),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 15),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 21),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 9),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_kind, 1, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [574] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
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
