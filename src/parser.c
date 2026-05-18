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
#define STATE_COUNT 272
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 36

enum ts_symbol_identifiers {
  aux_sym_newline_token1 = 1,
  sym_comment_line = 2,
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
  sym_line_end = 53,
  sym_use = 54,
  sym_type = 55,
  sym_base_type = 56,
  sym_builtin_type = 57,
  sym_user_type = 58,
  sym_type_suffix = 59,
  sym_struct = 60,
  sym_struct_name = 61,
  sym_struct_body = 62,
  sym_field = 63,
  sym_field_name = 64,
  sym_psyche = 65,
  sym_skill = 66,
  sym_service = 67,
  sym_prompt = 68,
  sym_cap_name = 69,
  sym_cap_ref = 70,
  sym_cap_body = 71,
  sym_cap_indented = 72,
  sym_cap_markdown = 73,
  sym_cap_indented_content_line = 74,
  sym_cap_fenced_content_line = 75,
  sym_frontmatter = 76,
  sym_property_eq = 77,
  sym_property_colon = 78,
  sym_property_key = 79,
  sym_property_value = 80,
  sym_instruct = 81,
  sym_instruct_name = 82,
  sym_instruct_body = 83,
  sym_block_indented = 84,
  sym_block_fenced = 85,
  sym_block_indented_content_line = 86,
  sym_block_fenced_content_line = 87,
  sym_thunk = 88,
  sym_thunk_name = 89,
  sym_thunk_body = 90,
  sym_params = 91,
  sym_param = 92,
  sym_param_name = 93,
  sym_directive = 94,
  sym_directive_key = 95,
  sym_directive_op = 96,
  sym_directive_csv = 97,
  sym_block = 98,
  sym_block_kind = 99,
  sym_block_value = 100,
  sym_block_inline = 101,
  sym_block_name = 102,
  sym_block_content_inline = 103,
  sym_psyche_keyword = 104,
  sym_skill_keyword = 105,
  sym_service_keyword = 106,
  sym_prompt_keyword = 107,
  sym_instruct_keyword = 108,
  sym_assign_operator = 109,
  sym_fence_open = 110,
  sym_fence_close = 111,
  sym_cap_kind = 112,
  aux_sym_source_file_repeat1 = 113,
  aux_sym_type_repeat1 = 114,
  aux_sym_struct_body_repeat1 = 115,
  aux_sym_cap_indented_repeat1 = 116,
  aux_sym_cap_markdown_repeat1 = 117,
  aux_sym_frontmatter_repeat1 = 118,
  aux_sym_block_indented_repeat1 = 119,
  aux_sym_block_fenced_repeat1 = 120,
  aux_sym_thunk_body_repeat1 = 121,
  aux_sym_params_repeat1 = 122,
  aux_sym_directive_csv_repeat1 = 123,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_newline_token1] = "newline_token1",
  [sym_comment_line] = "comment_line",
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
  [sym_comment_line] = sym_comment_line,
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 4},
  [9] = {.index = 18, .length = 4},
  [10] = {.index = 22, .length = 4},
  [11] = {.index = 26, .length = 2},
  [12] = {.index = 28, .length = 2},
  [13] = {.index = 30, .length = 2},
  [14] = {.index = 32, .length = 3},
  [15] = {.index = 35, .length = 4},
  [16] = {.index = 39, .length = 1},
  [17] = {.index = 40, .length = 1},
  [18] = {.index = 41, .length = 5},
  [19] = {.index = 46, .length = 3},
  [20] = {.index = 49, .length = 4},
  [21] = {.index = 53, .length = 5},
  [22] = {.index = 58, .length = 2},
  [23] = {.index = 60, .length = 1},
  [24] = {.index = 61, .length = 3},
  [25] = {.index = 64, .length = 1},
  [26] = {.index = 65, .length = 6},
  [27] = {.index = 71, .length = 6},
  [28] = {.index = 77, .length = 2},
  [29] = {.index = 79, .length = 2},
  [30] = {.index = 81, .length = 7},
  [31] = {.index = 88, .length = 3},
  [32] = {.index = 91, .length = 3},
  [33] = {.index = 94, .length = 2},
  [34] = {.index = 96, .length = 3},
  [35] = {.index = 99, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_base, 0},
  [1] =
    {field_body, 2},
    {field_colon, 1},
    {field_keyword, 0},
  [4] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [7] =
    {field_suffix, 0},
  [8] =
    {field_base, 0},
    {field_suffix, 1, .inherited = true},
  [10] =
    {field_body, 3},
    {field_colon, 1},
    {field_keyword, 0},
  [13] =
    {field_param, 1},
  [14] =
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
  [18] =
    {field_body, 3},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [22] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [26] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [28] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [30] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [32] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [35] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [39] =
    {field_content, 0},
  [40] =
    {field_close, 2},
  [41] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [46] =
    {field_colon, 1},
    {field_kind, 0},
    {field_value, 2},
  [49] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [53] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [58] =
    {field_close, 3},
    {field_language, 1},
  [60] =
    {field_close, 3},
  [61] =
    {field_key, 0},
    {field_operator, 1},
    {field_values, 2},
  [64] =
    {field_name, 0},
  [65] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [71] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [77] =
    {field_close, 3},
    {field_frontmatter, 2},
  [79] =
    {field_close, 4},
    {field_language, 1},
  [81] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [88] =
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [91] =
    {field_close, 4},
    {field_frontmatter, 3},
    {field_language, 1},
  [94] =
    {field_close, 4},
    {field_frontmatter, 2},
  [96] =
    {field_close, 5},
    {field_frontmatter, 3},
    {field_language, 1},
  [99] =
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
  [24] = 10,
  [25] = 11,
  [26] = 13,
  [27] = 12,
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
  [41] = 6,
  [42] = 42,
  [43] = 7,
  [44] = 8,
  [45] = 11,
  [46] = 46,
  [47] = 10,
  [48] = 13,
  [49] = 49,
  [50] = 12,
  [51] = 11,
  [52] = 13,
  [53] = 53,
  [54] = 54,
  [55] = 12,
  [56] = 13,
  [57] = 10,
  [58] = 11,
  [59] = 10,
  [60] = 9,
  [61] = 12,
  [62] = 62,
  [63] = 30,
  [64] = 64,
  [65] = 31,
  [66] = 32,
  [67] = 33,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 14,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 11,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 12,
  [90] = 13,
  [91] = 10,
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
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 121,
  [128] = 125,
  [129] = 119,
  [130] = 123,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 140,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 10,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 12,
  [163] = 13,
  [164] = 10,
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
  [175] = 172,
  [176] = 12,
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
  [190] = 13,
  [191] = 191,
  [192] = 10,
  [193] = 12,
  [194] = 13,
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
  [219] = 214,
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
  [232] = 214,
  [233] = 231,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 214,
  [238] = 214,
  [239] = 214,
  [240] = 214,
  [241] = 214,
  [242] = 214,
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
  [261] = 248,
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
        '-', 8,
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
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == '-') ADVANCE(9);
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
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(10);
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
      ACCEPT_TOKEN(sym_comment_line);
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
  [9] = {.lex_state = 111},
  [10] = {.lex_state = 111},
  [11] = {.lex_state = 111},
  [12] = {.lex_state = 111},
  [13] = {.lex_state = 111},
  [14] = {.lex_state = 114},
  [15] = {.lex_state = 114},
  [16] = {.lex_state = 114},
  [17] = {.lex_state = 114},
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
  [33] = {.lex_state = 114},
  [34] = {.lex_state = 114},
  [35] = {.lex_state = 114},
  [36] = {.lex_state = 112},
  [37] = {.lex_state = 112},
  [38] = {.lex_state = 112},
  [39] = {.lex_state = 116},
  [40] = {.lex_state = 116},
  [41] = {.lex_state = 113},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 113},
  [44] = {.lex_state = 113},
  [45] = {.lex_state = 112},
  [46] = {.lex_state = 112},
  [47] = {.lex_state = 112},
  [48] = {.lex_state = 112},
  [49] = {.lex_state = 112},
  [50] = {.lex_state = 112},
  [51] = {.lex_state = 116},
  [52] = {.lex_state = 116},
  [53] = {.lex_state = 116},
  [54] = {.lex_state = 116},
  [55] = {.lex_state = 113},
  [56] = {.lex_state = 113},
  [57] = {.lex_state = 113},
  [58] = {.lex_state = 113},
  [59] = {.lex_state = 116},
  [60] = {.lex_state = 113},
  [61] = {.lex_state = 116},
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
  [93] = {.lex_state = 115},
  [94] = {.lex_state = 115},
  [95] = {.lex_state = 115},
  [96] = {.lex_state = 115},
  [97] = {.lex_state = 115},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 115},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 107},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 108},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 107},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 108},
  [226] = {.lex_state = 115},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 109},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
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
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 109},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 108},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 109},
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
    [sym_source_file] = STATE(270),
    [sym_item] = STATE(2),
    [sym_newline] = STATE(82),
    [sym_blank_line] = STATE(2),
    [sym_use] = STATE(87),
    [sym_struct] = STATE(87),
    [sym_psyche] = STATE(87),
    [sym_skill] = STATE(87),
    [sym_service] = STATE(87),
    [sym_prompt] = STATE(87),
    [sym_instruct] = STATE(87),
    [sym_thunk] = STATE(87),
    [sym_psyche_keyword] = STATE(202),
    [sym_skill_keyword] = STATE(203),
    [sym_service_keyword] = STATE(205),
    [sym_prompt_keyword] = STATE(213),
    [sym_instruct_keyword] = STATE(188),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [sym_comment_line] = ACTIONS(7),
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
    ACTIONS(27), 1,
      sym_comment_line,
    STATE(82), 1,
      sym_newline,
    STATE(188), 1,
      sym_instruct_keyword,
    STATE(202), 1,
      sym_psyche_keyword,
    STATE(203), 1,
      sym_skill_keyword,
    STATE(205), 1,
      sym_service_keyword,
    STATE(213), 1,
      sym_prompt_keyword,
    STATE(3), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(87), 8,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_thunk,
  [67] = 19,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_newline_token1,
    ACTIONS(34), 1,
      sym_comment_line,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(40), 1,
      sym_use_keyword,
    ACTIONS(43), 1,
      sym_struct_keyword,
    ACTIONS(46), 1,
      anon_sym_psyche,
    ACTIONS(49), 1,
      anon_sym_skill,
    ACTIONS(52), 1,
      anon_sym_service,
    ACTIONS(55), 1,
      anon_sym_prompt,
    ACTIONS(58), 1,
      sym_thunk_keyword,
    STATE(82), 1,
      sym_newline,
    STATE(188), 1,
      sym_instruct_keyword,
    STATE(202), 1,
      sym_psyche_keyword,
    STATE(203), 1,
      sym_skill_keyword,
    STATE(205), 1,
      sym_service_keyword,
    STATE(213), 1,
      sym_prompt_keyword,
    STATE(3), 3,
      sym_item,
      sym_blank_line,
      aux_sym_source_file_repeat1,
    STATE(87), 8,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_thunk,
  [134] = 10,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(66), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(72), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
    ACTIONS(75), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(4), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(69), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [182] = 10,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(81), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(85), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
    ACTIONS(87), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(4), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(83), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [230] = 6,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_indented_raw_text,
    STATE(11), 1,
      sym_newline,
    STATE(8), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(93), 18,
      sym_comment_line,
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
  [268] = 6,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(95), 1,
      sym_indented_raw_text,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_newline,
    STATE(6), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(99), 18,
      sym_comment_line,
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
  [306] = 6,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_newline_token1,
    ACTIONS(108), 1,
      sym_indented_raw_text,
    STATE(11), 1,
      sym_newline,
    STATE(8), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(106), 18,
      sym_comment_line,
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
  [344] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 20,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [370] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 20,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [396] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 20,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [422] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 20,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [448] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 20,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [474] = 2,
    ACTIONS(133), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [499] = 9,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(135), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(88), 1,
      sym_thunk_body,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(85), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(5), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(83), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [538] = 2,
    ACTIONS(139), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [563] = 2,
    ACTIONS(143), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(141), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [588] = 2,
    ACTIONS(147), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(145), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [613] = 2,
    ACTIONS(151), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(149), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [638] = 9,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(135), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(68), 1,
      sym_thunk_body,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(85), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(5), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(83), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [677] = 9,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(135), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(70), 1,
      sym_thunk_body,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(85), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(5), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(83), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [716] = 2,
    ACTIONS(155), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(153), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [741] = 9,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(135), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(76), 1,
      sym_thunk_body,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(85), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(5), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(83), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [780] = 2,
    ACTIONS(117), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(115), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [805] = 2,
    ACTIONS(121), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(119), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [830] = 2,
    ACTIONS(129), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(127), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [855] = 2,
    ACTIONS(125), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(123), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [880] = 9,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(135), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(92), 1,
      sym_thunk_body,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(85), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(5), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(83), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [919] = 9,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(135), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(94), 1,
      sym_thunk_body,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(85), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(5), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(83), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [958] = 2,
    ACTIONS(159), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(157), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [983] = 2,
    ACTIONS(163), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(161), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1008] = 2,
    ACTIONS(167), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1033] = 2,
    ACTIONS(171), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1058] = 9,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(135), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(96), 1,
      sym_thunk_body,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(85), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(5), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(83), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [1097] = 9,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(135), 1,
      sym_comment_line,
    STATE(25), 1,
      sym_newline,
    STATE(81), 1,
      sym_thunk_body,
    STATE(158), 1,
      sym_directive_key,
    STATE(258), 1,
      sym_block_kind,
    ACTIONS(85), 3,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
    STATE(5), 4,
      sym_blank_line,
      sym_directive,
      sym_block,
      aux_sym_thunk_body_repeat1,
    ACTIONS(83), 7,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_handoffs,
      anon_sym_delegates,
  [1136] = 8,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      aux_sym_newline_token1,
    ACTIONS(179), 1,
      sym_value_name,
    ACTIONS(181), 1,
      sym_indented_raw_text,
    STATE(45), 1,
      sym_newline,
    STATE(200), 1,
      sym_property_key,
    STATE(37), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(177), 9,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1172] = 8,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      aux_sym_newline_token1,
    ACTIONS(190), 1,
      sym_value_name,
    ACTIONS(193), 1,
      sym_indented_raw_text,
    STATE(45), 1,
      sym_newline,
    STATE(200), 1,
      sym_property_key,
    STATE(37), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(188), 9,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1208] = 8,
    ACTIONS(175), 1,
      aux_sym_newline_token1,
    ACTIONS(179), 1,
      sym_value_name,
    ACTIONS(181), 1,
      sym_indented_raw_text,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_newline,
    STATE(200), 1,
      sym_property_key,
    STATE(36), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(198), 9,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1244] = 8,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    ACTIONS(205), 1,
      sym_comment_line,
    ACTIONS(210), 1,
      sym_value_name,
    STATE(51), 1,
      sym_newline,
    STATE(217), 1,
      sym_field_name,
    STATE(39), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(208), 8,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1278] = 8,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      aux_sym_newline_token1,
    ACTIONS(217), 1,
      sym_comment_line,
    ACTIONS(221), 1,
      sym_value_name,
    STATE(51), 1,
      sym_newline,
    STATE(217), 1,
      sym_field_name,
    STATE(39), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(219), 8,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1312] = 6,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym_newline_token1,
    ACTIONS(225), 1,
      sym_indented_raw_text,
    STATE(58), 1,
      sym_newline,
    STATE(44), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(93), 9,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1341] = 12,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(227), 1,
      sym_inline_comment,
    ACTIONS(231), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(233), 1,
      sym_inline_text,
    STATE(7), 1,
      sym_line_end,
    STATE(12), 1,
      sym_newline,
    STATE(19), 1,
      sym_block_value,
    STATE(140), 1,
      sym_fence_open,
    STATE(148), 1,
      sym_block_name,
    STATE(168), 1,
      sym_block_content_inline,
    ACTIONS(229), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(18), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [1382] = 6,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym_newline_token1,
    ACTIONS(225), 1,
      sym_indented_raw_text,
    STATE(58), 1,
      sym_newline,
    STATE(41), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(99), 9,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1411] = 6,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      aux_sym_newline_token1,
    ACTIONS(238), 1,
      sym_indented_raw_text,
    STATE(58), 1,
      sym_newline,
    STATE(44), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(106), 9,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1440] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 12,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1458] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 12,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1476] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 12,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1494] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 12,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1512] = 2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 12,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1530] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 12,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1548] = 2,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
    ACTIONS(121), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1565] = 2,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
    ACTIONS(129), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1582] = 2,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1599] = 2,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
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
  [1616] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 11,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1633] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 11,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1650] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 11,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1667] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 11,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1684] = 2,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
    ACTIONS(117), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1701] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 11,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_indented_raw_text,
  [1718] = 2,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
    ACTIONS(125), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1735] = 1,
    ACTIONS(257), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1749] = 1,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1763] = 1,
    ACTIONS(259), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1777] = 1,
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1791] = 1,
    ACTIONS(165), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1805] = 1,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1819] = 1,
    ACTIONS(261), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1833] = 1,
    ACTIONS(263), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1847] = 1,
    ACTIONS(265), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1861] = 1,
    ACTIONS(267), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1875] = 1,
    ACTIONS(269), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1889] = 1,
    ACTIONS(271), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1903] = 1,
    ACTIONS(131), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1917] = 1,
    ACTIONS(273), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1931] = 1,
    ACTIONS(275), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1945] = 1,
    ACTIONS(277), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1959] = 1,
    ACTIONS(279), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1973] = 1,
    ACTIONS(281), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1987] = 1,
    ACTIONS(283), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2001] = 1,
    ACTIONS(285), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2015] = 1,
    ACTIONS(119), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2029] = 1,
    ACTIONS(287), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2043] = 1,
    ACTIONS(289), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2057] = 1,
    ACTIONS(291), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2071] = 1,
    ACTIONS(293), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2085] = 1,
    ACTIONS(295), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2099] = 1,
    ACTIONS(297), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2113] = 1,
    ACTIONS(123), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2127] = 1,
    ACTIONS(127), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2141] = 1,
    ACTIONS(115), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2155] = 1,
    ACTIONS(299), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2169] = 1,
    ACTIONS(301), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2183] = 1,
    ACTIONS(303), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2197] = 1,
    ACTIONS(305), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2211] = 1,
    ACTIONS(307), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2225] = 1,
    ACTIONS(309), 11,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment_line,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2239] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(116), 1,
      sym_base_type,
    STATE(253), 1,
      sym_type,
    STATE(138), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2260] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(116), 1,
      sym_base_type,
    STATE(243), 1,
      sym_type,
    STATE(138), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2281] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(116), 1,
      sym_base_type,
    STATE(262), 1,
      sym_type,
    STATE(138), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2302] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(116), 1,
      sym_base_type,
    STATE(169), 1,
      sym_type,
    STATE(138), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2323] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(116), 1,
      sym_base_type,
    STATE(246), 1,
      sym_type,
    STATE(138), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2344] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(116), 1,
      sym_base_type,
    STATE(147), 1,
      sym_type,
    STATE(138), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2365] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(116), 1,
      sym_base_type,
    STATE(264), 1,
      sym_type,
    STATE(138), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2386] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(116), 1,
      sym_base_type,
    STATE(223), 1,
      sym_type,
    STATE(138), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2407] = 8,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    ACTIONS(317), 1,
      sym_inline_comment,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(43), 1,
      sym_line_end,
    STATE(55), 1,
      sym_newline,
    STATE(93), 1,
      sym_instruct_body,
    STATE(141), 1,
      sym_fence_open,
    STATE(95), 2,
      sym_block_indented,
      sym_block_fenced,
  [2433] = 8,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(321), 1,
      aux_sym_newline_token1,
    ACTIONS(323), 1,
      sym_inline_comment,
    STATE(38), 1,
      sym_line_end,
    STATE(50), 1,
      sym_newline,
    STATE(84), 1,
      sym_cap_body,
    STATE(142), 1,
      sym_fence_open,
    STATE(77), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2459] = 7,
    ACTIONS(215), 1,
      aux_sym_newline_token1,
    ACTIONS(325), 1,
      sym_comment_line,
    ACTIONS(327), 1,
      sym_value_name,
    STATE(51), 1,
      sym_newline,
    STATE(86), 1,
      sym_struct_body,
    STATE(217), 1,
      sym_field_name,
    STATE(40), 3,
      sym_blank_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [2483] = 8,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(321), 1,
      aux_sym_newline_token1,
    ACTIONS(323), 1,
      sym_inline_comment,
    STATE(38), 1,
      sym_line_end,
    STATE(50), 1,
      sym_newline,
    STATE(69), 1,
      sym_cap_body,
    STATE(142), 1,
      sym_fence_open,
    STATE(77), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2509] = 8,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(333), 1,
      sym_frontmatter_delimiter,
    ACTIONS(335), 1,
      sym_fenced_raw_text,
    STATE(64), 1,
      sym_fence_close,
    STATE(118), 1,
      sym_frontmatter,
    STATE(195), 1,
      sym_newline,
    STATE(122), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2535] = 8,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(321), 1,
      aux_sym_newline_token1,
    ACTIONS(323), 1,
      sym_inline_comment,
    STATE(38), 1,
      sym_line_end,
    STATE(50), 1,
      sym_newline,
    STATE(62), 1,
      sym_cap_body,
    STATE(142), 1,
      sym_fence_open,
    STATE(77), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2561] = 8,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    ACTIONS(317), 1,
      sym_inline_comment,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(43), 1,
      sym_line_end,
    STATE(55), 1,
      sym_newline,
    STATE(85), 1,
      sym_instruct_body,
    STATE(141), 1,
      sym_fence_open,
    STATE(95), 2,
      sym_block_indented,
      sym_block_fenced,
  [2587] = 8,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(321), 1,
      aux_sym_newline_token1,
    ACTIONS(323), 1,
      sym_inline_comment,
    STATE(38), 1,
      sym_line_end,
    STATE(50), 1,
      sym_newline,
    STATE(83), 1,
      sym_cap_body,
    STATE(142), 1,
      sym_fence_open,
    STATE(77), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2613] = 8,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(333), 1,
      sym_frontmatter_delimiter,
    ACTIONS(335), 1,
      sym_fenced_raw_text,
    STATE(71), 1,
      sym_fence_close,
    STATE(124), 1,
      sym_frontmatter,
    STATE(195), 1,
      sym_newline,
    STATE(126), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2639] = 4,
    ACTIONS(339), 1,
      sym_array_suffix,
    STATE(117), 1,
      aux_sym_type_repeat1,
    STATE(134), 1,
      sym_type_suffix,
    ACTIONS(337), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2656] = 4,
    ACTIONS(339), 1,
      sym_array_suffix,
    STATE(115), 1,
      aux_sym_type_repeat1,
    STATE(134), 1,
      sym_type_suffix,
    ACTIONS(341), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2673] = 4,
    ACTIONS(345), 1,
      sym_array_suffix,
    STATE(117), 1,
      aux_sym_type_repeat1,
    STATE(134), 1,
      sym_type_suffix,
    ACTIONS(343), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2690] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(335), 1,
      sym_fenced_raw_text,
    STATE(72), 1,
      sym_fence_close,
    STATE(195), 1,
      sym_newline,
    STATE(131), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2710] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(348), 1,
      sym_fenced_raw_text,
    STATE(67), 1,
      sym_fence_close,
    STATE(185), 1,
      sym_newline,
    STATE(136), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2730] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(335), 1,
      sym_fenced_raw_text,
    STATE(97), 1,
      sym_fence_close,
    STATE(195), 1,
      sym_newline,
    STATE(139), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2750] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(348), 1,
      sym_fenced_raw_text,
    STATE(63), 1,
      sym_fence_close,
    STATE(185), 1,
      sym_newline,
    STATE(119), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2770] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(335), 1,
      sym_fenced_raw_text,
    STATE(73), 1,
      sym_fence_close,
    STATE(195), 1,
      sym_newline,
    STATE(139), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2790] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(348), 1,
      sym_fenced_raw_text,
    STATE(74), 1,
      sym_fence_close,
    STATE(185), 1,
      sym_newline,
    STATE(136), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2810] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(335), 1,
      sym_fenced_raw_text,
    STATE(78), 1,
      sym_fence_close,
    STATE(195), 1,
      sym_newline,
    STATE(120), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2830] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(348), 1,
      sym_fenced_raw_text,
    STATE(65), 1,
      sym_fence_close,
    STATE(185), 1,
      sym_newline,
    STATE(123), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2850] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(335), 1,
      sym_fenced_raw_text,
    STATE(79), 1,
      sym_fence_close,
    STATE(195), 1,
      sym_newline,
    STATE(139), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2870] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(348), 1,
      sym_fenced_raw_text,
    ACTIONS(350), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(30), 1,
      sym_fence_close,
    STATE(185), 1,
      sym_newline,
    STATE(129), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2890] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(348), 1,
      sym_fenced_raw_text,
    ACTIONS(350), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(31), 1,
      sym_fence_close,
    STATE(185), 1,
      sym_newline,
    STATE(130), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2910] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(348), 1,
      sym_fenced_raw_text,
    ACTIONS(350), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(33), 1,
      sym_fence_close,
    STATE(185), 1,
      sym_newline,
    STATE(136), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2930] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(348), 1,
      sym_fenced_raw_text,
    ACTIONS(350), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(14), 1,
      sym_fence_close,
    STATE(185), 1,
      sym_newline,
    STATE(136), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2950] = 6,
    ACTIONS(329), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(335), 1,
      sym_fenced_raw_text,
    STATE(80), 1,
      sym_fence_close,
    STATE(195), 1,
      sym_newline,
    STATE(139), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2970] = 1,
    ACTIONS(352), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2979] = 1,
    ACTIONS(354), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2988] = 1,
    ACTIONS(356), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2997] = 6,
    ACTIONS(358), 1,
      sym_arrow,
    ACTIONS(360), 1,
      sym_colon,
    ACTIONS(362), 1,
      sym_lparen,
    ACTIONS(364), 1,
      sym_value_name,
    STATE(159), 1,
      sym_thunk_name,
    STATE(220), 1,
      sym_params,
  [3016] = 5,
    ACTIONS(366), 1,
      aux_sym_newline_token1,
    ACTIONS(369), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(371), 1,
      sym_fenced_raw_text,
    STATE(185), 1,
      sym_newline,
    STATE(136), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3033] = 1,
    ACTIONS(374), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3042] = 1,
    ACTIONS(376), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3051] = 5,
    ACTIONS(378), 1,
      aux_sym_newline_token1,
    ACTIONS(381), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(383), 1,
      sym_fenced_raw_text,
    STATE(195), 1,
      sym_newline,
    STATE(139), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3068] = 5,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    ACTIONS(388), 1,
      sym_inline_comment,
    ACTIONS(390), 1,
      sym_block_language,
    STATE(127), 1,
      sym_line_end,
    STATE(193), 1,
      sym_newline,
  [3084] = 5,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    ACTIONS(388), 1,
      sym_inline_comment,
    ACTIONS(392), 1,
      sym_block_language,
    STATE(121), 1,
      sym_line_end,
    STATE(193), 1,
      sym_newline,
  [3100] = 5,
    ACTIONS(394), 1,
      aux_sym_newline_token1,
    ACTIONS(396), 1,
      sym_inline_comment,
    ACTIONS(398), 1,
      sym_block_language,
    STATE(110), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [3116] = 4,
    ACTIONS(400), 1,
      sym_frontmatter_delimiter,
    ACTIONS(402), 1,
      sym_value_name,
    STATE(245), 1,
      sym_property_key,
    STATE(143), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [3130] = 4,
    ACTIONS(405), 1,
      sym_frontmatter_delimiter,
    ACTIONS(407), 1,
      sym_value_name,
    STATE(245), 1,
      sym_property_key,
    STATE(146), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [3144] = 2,
    STATE(189), 1,
      sym_cap_kind,
    ACTIONS(409), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [3154] = 4,
    ACTIONS(407), 1,
      sym_value_name,
    ACTIONS(411), 1,
      sym_frontmatter_delimiter,
    STATE(245), 1,
      sym_property_key,
    STATE(143), 2,
      sym_property_colon,
      aux_sym_frontmatter_repeat1,
  [3168] = 4,
    ACTIONS(215), 1,
      aux_sym_newline_token1,
    ACTIONS(413), 1,
      sym_inline_comment,
    STATE(53), 1,
      sym_line_end,
    STATE(61), 1,
      sym_newline,
  [3181] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_line_end,
    STATE(27), 1,
      sym_newline,
  [3194] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_end,
    STATE(27), 1,
      sym_newline,
  [3207] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_newline,
    STATE(29), 1,
      sym_line_end,
  [3220] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(21), 1,
      sym_line_end,
    STATE(27), 1,
      sym_newline,
  [3233] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_newline,
    STATE(28), 1,
      sym_line_end,
  [3246] = 1,
    ACTIONS(115), 4,
      aux_sym_newline_token1,
      sym_comment_line,
      sym_frontmatter_delimiter,
      sym_value_name,
  [3253] = 3,
    ACTIONS(419), 1,
      sym_comma,
    STATE(165), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(417), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3264] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(421), 1,
      sym_inline_comment,
    STATE(75), 1,
      sym_line_end,
    STATE(89), 1,
      sym_newline,
  [3277] = 4,
    ACTIONS(423), 1,
      sym_rparen,
    ACTIONS(425), 1,
      sym_value_name,
    STATE(191), 1,
      sym_param,
    STATE(227), 1,
      sym_param_name,
  [3290] = 4,
    ACTIONS(394), 1,
      aux_sym_newline_token1,
    ACTIONS(396), 1,
      sym_inline_comment,
    STATE(114), 1,
      sym_line_end,
    STATE(162), 1,
      sym_newline,
  [3303] = 2,
    STATE(235), 1,
      sym_directive_op,
    ACTIONS(427), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3312] = 4,
    ACTIONS(362), 1,
      sym_lparen,
    ACTIONS(429), 1,
      sym_arrow,
    ACTIONS(431), 1,
      sym_colon,
    STATE(230), 1,
      sym_params,
  [3325] = 4,
    ACTIONS(433), 1,
      aux_sym_newline_token1,
    ACTIONS(435), 1,
      sym_inline_comment,
    STATE(108), 1,
      sym_line_end,
    STATE(176), 1,
      sym_newline,
  [3338] = 4,
    ACTIONS(321), 1,
      aux_sym_newline_token1,
    ACTIONS(323), 1,
      sym_inline_comment,
    STATE(49), 1,
      sym_line_end,
    STATE(50), 1,
      sym_newline,
  [3351] = 1,
    ACTIONS(125), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [3358] = 1,
    ACTIONS(129), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [3365] = 1,
    ACTIONS(117), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [3372] = 3,
    ACTIONS(439), 1,
      sym_comma,
    STATE(165), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(437), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3383] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(23), 1,
      sym_line_end,
    STATE(27), 1,
      sym_newline,
  [3396] = 3,
    ACTIONS(419), 1,
      sym_comma,
    STATE(154), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(442), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3407] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(16), 1,
      sym_line_end,
    STATE(27), 1,
      sym_newline,
  [3420] = 4,
    ACTIONS(215), 1,
      aux_sym_newline_token1,
    ACTIONS(413), 1,
      sym_inline_comment,
    STATE(54), 1,
      sym_line_end,
    STATE(61), 1,
      sym_newline,
  [3433] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(22), 1,
      sym_line_end,
    STATE(27), 1,
      sym_newline,
  [3446] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(20), 1,
      sym_line_end,
    STATE(27), 1,
      sym_newline,
  [3459] = 4,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    ACTIONS(388), 1,
      sym_inline_comment,
    STATE(125), 1,
      sym_line_end,
    STATE(193), 1,
      sym_newline,
  [3472] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_newline,
    STATE(35), 1,
      sym_line_end,
  [3485] = 4,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    ACTIONS(415), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_newline,
    STATE(34), 1,
      sym_line_end,
  [3498] = 4,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    ACTIONS(388), 1,
      sym_inline_comment,
    STATE(128), 1,
      sym_line_end,
    STATE(193), 1,
      sym_newline,
  [3511] = 1,
    ACTIONS(123), 3,
      aux_sym_newline_token1,
      sym_comment_line,
      sym_value_name,
  [3517] = 1,
    ACTIONS(444), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [3523] = 1,
    ACTIONS(446), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [3529] = 3,
    ACTIONS(448), 1,
      sym_rparen,
    ACTIONS(450), 1,
      sym_comma,
    STATE(179), 1,
      aux_sym_params_repeat1,
  [3539] = 1,
    ACTIONS(453), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3545] = 1,
    ACTIONS(437), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [3551] = 1,
    ACTIONS(455), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3557] = 1,
    ACTIONS(457), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3563] = 1,
    ACTIONS(459), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3569] = 1,
    ACTIONS(461), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3575] = 3,
    ACTIONS(425), 1,
      sym_value_name,
    STATE(212), 1,
      sym_param,
    STATE(227), 1,
      sym_param_name,
  [3585] = 3,
    ACTIONS(463), 1,
      sym_rparen,
    ACTIONS(465), 1,
      sym_comma,
    STATE(179), 1,
      aux_sym_params_repeat1,
  [3595] = 3,
    ACTIONS(467), 1,
      sym_colon,
    ACTIONS(469), 1,
      sym_value_name,
    STATE(250), 1,
      sym_instruct_name,
  [3605] = 3,
    ACTIONS(471), 1,
      sym_cap_uri,
    ACTIONS(473), 1,
      sym_cap_shorthand,
    STATE(155), 1,
      sym_cap_ref,
  [3615] = 1,
    ACTIONS(127), 3,
      aux_sym_newline_token1,
      sym_comment_line,
      sym_value_name,
  [3621] = 3,
    ACTIONS(465), 1,
      sym_comma,
    ACTIONS(475), 1,
      sym_rparen,
    STATE(187), 1,
      aux_sym_params_repeat1,
  [3631] = 1,
    ACTIONS(117), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3637] = 1,
    ACTIONS(125), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3643] = 1,
    ACTIONS(129), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3649] = 1,
    ACTIONS(477), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3655] = 1,
    ACTIONS(479), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3661] = 1,
    ACTIONS(481), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3666] = 1,
    ACTIONS(483), 2,
      anon_sym_EQ,
      sym_colon,
  [3671] = 2,
    ACTIONS(321), 1,
      aux_sym_newline_token1,
    STATE(46), 1,
      sym_newline,
  [3678] = 2,
    ACTIONS(485), 1,
      anon_sym_EQ,
    STATE(225), 1,
      sym_assign_operator,
  [3685] = 1,
    ACTIONS(487), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3690] = 2,
    ACTIONS(489), 1,
      sym_value_name,
    STATE(257), 1,
      sym_cap_name,
  [3697] = 2,
    ACTIONS(489), 1,
      sym_value_name,
    STATE(265), 1,
      sym_cap_name,
  [3704] = 2,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    STATE(183), 1,
      sym_newline,
  [3711] = 2,
    ACTIONS(489), 1,
      sym_value_name,
    STATE(249), 1,
      sym_cap_name,
  [3718] = 1,
    ACTIONS(491), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3723] = 2,
    ACTIONS(493), 1,
      sym_inline_text,
    STATE(210), 1,
      sym_property_value,
  [3730] = 2,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    STATE(184), 1,
      sym_newline,
  [3737] = 2,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    STATE(196), 1,
      sym_newline,
  [3744] = 2,
    ACTIONS(433), 1,
      aux_sym_newline_token1,
    STATE(211), 1,
      sym_newline,
  [3751] = 1,
    ACTIONS(495), 2,
      sym_frontmatter_delimiter,
      sym_value_name,
  [3756] = 1,
    ACTIONS(497), 2,
      sym_rparen,
      sym_comma,
  [3761] = 2,
    ACTIONS(489), 1,
      sym_value_name,
    STATE(269), 1,
      sym_cap_name,
  [3768] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(90), 1,
      sym_newline,
  [3775] = 1,
    ACTIONS(499), 2,
      sym_arrow,
      sym_colon,
  [3780] = 1,
    ACTIONS(501), 2,
      sym_arrow,
      sym_colon,
  [3785] = 2,
    ACTIONS(503), 1,
      sym_optional_marker,
    ACTIONS(505), 1,
      sym_colon,
  [3792] = 1,
    ACTIONS(507), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3797] = 2,
    ACTIONS(79), 1,
      aux_sym_newline_token1,
    STATE(26), 1,
      sym_newline,
  [3804] = 2,
    ACTIONS(509), 1,
      sym_arrow,
    ACTIONS(511), 1,
      sym_colon,
  [3811] = 2,
    ACTIONS(513), 1,
      sym_cap_uri,
    ACTIONS(515), 1,
      sym_cap_shorthand,
  [3818] = 1,
    ACTIONS(517), 2,
      sym_arrow,
      sym_colon,
  [3823] = 1,
    ACTIONS(519), 2,
      sym_rparen,
      sym_comma,
  [3828] = 1,
    ACTIONS(521), 2,
      sym_optional_marker,
      sym_colon,
  [3833] = 2,
    ACTIONS(493), 1,
      sym_inline_text,
    STATE(161), 1,
      sym_property_value,
  [3840] = 2,
    ACTIONS(523), 1,
      sym_type_name,
    STATE(252), 1,
      sym_struct_name,
  [3847] = 2,
    ACTIONS(525), 1,
      sym_optional_marker,
    ACTIONS(527), 1,
      sym_colon,
  [3854] = 2,
    ACTIONS(433), 1,
      aux_sym_newline_token1,
    STATE(144), 1,
      sym_newline,
  [3861] = 2,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    STATE(180), 1,
      sym_newline,
  [3868] = 2,
    ACTIONS(529), 1,
      sym_arrow,
    ACTIONS(531), 1,
      sym_colon,
  [3875] = 2,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    STATE(60), 1,
      sym_newline,
  [3882] = 2,
    ACTIONS(315), 1,
      aux_sym_newline_token1,
    STATE(56), 1,
      sym_newline,
  [3889] = 2,
    ACTIONS(533), 1,
      aux_sym_newline_token1,
    STATE(9), 1,
      sym_newline,
  [3896] = 1,
    ACTIONS(535), 2,
      sym_colon,
      sym_value_name,
  [3901] = 2,
    ACTIONS(537), 1,
      sym_bare_value,
    STATE(170), 1,
      sym_directive_csv,
  [3908] = 1,
    ACTIONS(539), 2,
      sym_optional_marker,
      sym_colon,
  [3913] = 2,
    ACTIONS(433), 1,
      aux_sym_newline_token1,
    STATE(190), 1,
      sym_newline,
  [3920] = 2,
    ACTIONS(321), 1,
      aux_sym_newline_token1,
    STATE(48), 1,
      sym_newline,
  [3927] = 2,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    STATE(194), 1,
      sym_newline,
  [3934] = 2,
    ACTIONS(394), 1,
      aux_sym_newline_token1,
    STATE(163), 1,
      sym_newline,
  [3941] = 2,
    ACTIONS(533), 1,
      aux_sym_newline_token1,
    STATE(13), 1,
      sym_newline,
  [3948] = 2,
    ACTIONS(215), 1,
      aux_sym_newline_token1,
    STATE(52), 1,
      sym_newline,
  [3955] = 1,
    ACTIONS(541), 2,
      sym_rparen,
      sym_comma,
  [3960] = 1,
    ACTIONS(543), 1,
      sym_colon,
  [3964] = 1,
    ACTIONS(545), 1,
      sym_colon,
  [3968] = 1,
    ACTIONS(547), 1,
      sym_colon,
  [3972] = 1,
    ACTIONS(549), 1,
      sym_colon,
  [3976] = 1,
    ACTIONS(551), 1,
      aux_sym_newline_token1,
  [3980] = 1,
    ACTIONS(553), 1,
      sym_colon,
  [3984] = 1,
    ACTIONS(555), 1,
      sym_colon,
  [3988] = 1,
    ACTIONS(557), 1,
      sym_colon,
  [3992] = 1,
    ACTIONS(559), 1,
      sym_colon,
  [3996] = 1,
    ACTIONS(561), 1,
      sym_colon,
  [4000] = 1,
    ACTIONS(563), 1,
      sym_value_name,
  [4004] = 1,
    ACTIONS(565), 1,
      sym_value_name,
  [4008] = 1,
    ACTIONS(567), 1,
      sym_value_name,
  [4012] = 1,
    ACTIONS(569), 1,
      sym_colon,
  [4016] = 1,
    ACTIONS(571), 1,
      sym_colon,
  [4020] = 1,
    ACTIONS(573), 1,
      sym_value_name,
  [4024] = 1,
    ACTIONS(575), 1,
      sym_colon,
  [4028] = 1,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
  [4032] = 1,
    ACTIONS(579), 1,
      sym_colon,
  [4036] = 1,
    ACTIONS(581), 1,
      sym_bare_value,
  [4040] = 1,
    ACTIONS(583), 1,
      sym_colon,
  [4044] = 1,
    ACTIONS(585), 1,
      sym_colon,
  [4048] = 1,
    ACTIONS(587), 1,
      sym_colon,
  [4052] = 1,
    ACTIONS(589), 1,
      sym_inline_text,
  [4056] = 1,
    ACTIONS(591), 1,
      sym_colon,
  [4060] = 1,
    ACTIONS(593), 1,
      sym_colon,
  [4064] = 1,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
  [4068] = 1,
    ACTIONS(597), 1,
      sym_bare_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 182,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 268,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 344,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 448,
  [SMALL_STATE(14)] = 474,
  [SMALL_STATE(15)] = 499,
  [SMALL_STATE(16)] = 538,
  [SMALL_STATE(17)] = 563,
  [SMALL_STATE(18)] = 588,
  [SMALL_STATE(19)] = 613,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 677,
  [SMALL_STATE(22)] = 716,
  [SMALL_STATE(23)] = 741,
  [SMALL_STATE(24)] = 780,
  [SMALL_STATE(25)] = 805,
  [SMALL_STATE(26)] = 830,
  [SMALL_STATE(27)] = 855,
  [SMALL_STATE(28)] = 880,
  [SMALL_STATE(29)] = 919,
  [SMALL_STATE(30)] = 958,
  [SMALL_STATE(31)] = 983,
  [SMALL_STATE(32)] = 1008,
  [SMALL_STATE(33)] = 1033,
  [SMALL_STATE(34)] = 1058,
  [SMALL_STATE(35)] = 1097,
  [SMALL_STATE(36)] = 1136,
  [SMALL_STATE(37)] = 1172,
  [SMALL_STATE(38)] = 1208,
  [SMALL_STATE(39)] = 1244,
  [SMALL_STATE(40)] = 1278,
  [SMALL_STATE(41)] = 1312,
  [SMALL_STATE(42)] = 1341,
  [SMALL_STATE(43)] = 1382,
  [SMALL_STATE(44)] = 1411,
  [SMALL_STATE(45)] = 1440,
  [SMALL_STATE(46)] = 1458,
  [SMALL_STATE(47)] = 1476,
  [SMALL_STATE(48)] = 1494,
  [SMALL_STATE(49)] = 1512,
  [SMALL_STATE(50)] = 1530,
  [SMALL_STATE(51)] = 1548,
  [SMALL_STATE(52)] = 1565,
  [SMALL_STATE(53)] = 1582,
  [SMALL_STATE(54)] = 1599,
  [SMALL_STATE(55)] = 1616,
  [SMALL_STATE(56)] = 1633,
  [SMALL_STATE(57)] = 1650,
  [SMALL_STATE(58)] = 1667,
  [SMALL_STATE(59)] = 1684,
  [SMALL_STATE(60)] = 1701,
  [SMALL_STATE(61)] = 1718,
  [SMALL_STATE(62)] = 1735,
  [SMALL_STATE(63)] = 1749,
  [SMALL_STATE(64)] = 1763,
  [SMALL_STATE(65)] = 1777,
  [SMALL_STATE(66)] = 1791,
  [SMALL_STATE(67)] = 1805,
  [SMALL_STATE(68)] = 1819,
  [SMALL_STATE(69)] = 1833,
  [SMALL_STATE(70)] = 1847,
  [SMALL_STATE(71)] = 1861,
  [SMALL_STATE(72)] = 1875,
  [SMALL_STATE(73)] = 1889,
  [SMALL_STATE(74)] = 1903,
  [SMALL_STATE(75)] = 1917,
  [SMALL_STATE(76)] = 1931,
  [SMALL_STATE(77)] = 1945,
  [SMALL_STATE(78)] = 1959,
  [SMALL_STATE(79)] = 1973,
  [SMALL_STATE(80)] = 1987,
  [SMALL_STATE(81)] = 2001,
  [SMALL_STATE(82)] = 2015,
  [SMALL_STATE(83)] = 2029,
  [SMALL_STATE(84)] = 2043,
  [SMALL_STATE(85)] = 2057,
  [SMALL_STATE(86)] = 2071,
  [SMALL_STATE(87)] = 2085,
  [SMALL_STATE(88)] = 2099,
  [SMALL_STATE(89)] = 2113,
  [SMALL_STATE(90)] = 2127,
  [SMALL_STATE(91)] = 2141,
  [SMALL_STATE(92)] = 2155,
  [SMALL_STATE(93)] = 2169,
  [SMALL_STATE(94)] = 2183,
  [SMALL_STATE(95)] = 2197,
  [SMALL_STATE(96)] = 2211,
  [SMALL_STATE(97)] = 2225,
  [SMALL_STATE(98)] = 2239,
  [SMALL_STATE(99)] = 2260,
  [SMALL_STATE(100)] = 2281,
  [SMALL_STATE(101)] = 2302,
  [SMALL_STATE(102)] = 2323,
  [SMALL_STATE(103)] = 2344,
  [SMALL_STATE(104)] = 2365,
  [SMALL_STATE(105)] = 2386,
  [SMALL_STATE(106)] = 2407,
  [SMALL_STATE(107)] = 2433,
  [SMALL_STATE(108)] = 2459,
  [SMALL_STATE(109)] = 2483,
  [SMALL_STATE(110)] = 2509,
  [SMALL_STATE(111)] = 2535,
  [SMALL_STATE(112)] = 2561,
  [SMALL_STATE(113)] = 2587,
  [SMALL_STATE(114)] = 2613,
  [SMALL_STATE(115)] = 2639,
  [SMALL_STATE(116)] = 2656,
  [SMALL_STATE(117)] = 2673,
  [SMALL_STATE(118)] = 2690,
  [SMALL_STATE(119)] = 2710,
  [SMALL_STATE(120)] = 2730,
  [SMALL_STATE(121)] = 2750,
  [SMALL_STATE(122)] = 2770,
  [SMALL_STATE(123)] = 2790,
  [SMALL_STATE(124)] = 2810,
  [SMALL_STATE(125)] = 2830,
  [SMALL_STATE(126)] = 2850,
  [SMALL_STATE(127)] = 2870,
  [SMALL_STATE(128)] = 2890,
  [SMALL_STATE(129)] = 2910,
  [SMALL_STATE(130)] = 2930,
  [SMALL_STATE(131)] = 2950,
  [SMALL_STATE(132)] = 2970,
  [SMALL_STATE(133)] = 2979,
  [SMALL_STATE(134)] = 2988,
  [SMALL_STATE(135)] = 2997,
  [SMALL_STATE(136)] = 3016,
  [SMALL_STATE(137)] = 3033,
  [SMALL_STATE(138)] = 3042,
  [SMALL_STATE(139)] = 3051,
  [SMALL_STATE(140)] = 3068,
  [SMALL_STATE(141)] = 3084,
  [SMALL_STATE(142)] = 3100,
  [SMALL_STATE(143)] = 3116,
  [SMALL_STATE(144)] = 3130,
  [SMALL_STATE(145)] = 3144,
  [SMALL_STATE(146)] = 3154,
  [SMALL_STATE(147)] = 3168,
  [SMALL_STATE(148)] = 3181,
  [SMALL_STATE(149)] = 3194,
  [SMALL_STATE(150)] = 3207,
  [SMALL_STATE(151)] = 3220,
  [SMALL_STATE(152)] = 3233,
  [SMALL_STATE(153)] = 3246,
  [SMALL_STATE(154)] = 3253,
  [SMALL_STATE(155)] = 3264,
  [SMALL_STATE(156)] = 3277,
  [SMALL_STATE(157)] = 3290,
  [SMALL_STATE(158)] = 3303,
  [SMALL_STATE(159)] = 3312,
  [SMALL_STATE(160)] = 3325,
  [SMALL_STATE(161)] = 3338,
  [SMALL_STATE(162)] = 3351,
  [SMALL_STATE(163)] = 3358,
  [SMALL_STATE(164)] = 3365,
  [SMALL_STATE(165)] = 3372,
  [SMALL_STATE(166)] = 3383,
  [SMALL_STATE(167)] = 3396,
  [SMALL_STATE(168)] = 3407,
  [SMALL_STATE(169)] = 3420,
  [SMALL_STATE(170)] = 3433,
  [SMALL_STATE(171)] = 3446,
  [SMALL_STATE(172)] = 3459,
  [SMALL_STATE(173)] = 3472,
  [SMALL_STATE(174)] = 3485,
  [SMALL_STATE(175)] = 3498,
  [SMALL_STATE(176)] = 3511,
  [SMALL_STATE(177)] = 3517,
  [SMALL_STATE(178)] = 3523,
  [SMALL_STATE(179)] = 3529,
  [SMALL_STATE(180)] = 3539,
  [SMALL_STATE(181)] = 3545,
  [SMALL_STATE(182)] = 3551,
  [SMALL_STATE(183)] = 3557,
  [SMALL_STATE(184)] = 3563,
  [SMALL_STATE(185)] = 3569,
  [SMALL_STATE(186)] = 3575,
  [SMALL_STATE(187)] = 3585,
  [SMALL_STATE(188)] = 3595,
  [SMALL_STATE(189)] = 3605,
  [SMALL_STATE(190)] = 3615,
  [SMALL_STATE(191)] = 3621,
  [SMALL_STATE(192)] = 3631,
  [SMALL_STATE(193)] = 3637,
  [SMALL_STATE(194)] = 3643,
  [SMALL_STATE(195)] = 3649,
  [SMALL_STATE(196)] = 3655,
  [SMALL_STATE(197)] = 3661,
  [SMALL_STATE(198)] = 3666,
  [SMALL_STATE(199)] = 3671,
  [SMALL_STATE(200)] = 3678,
  [SMALL_STATE(201)] = 3685,
  [SMALL_STATE(202)] = 3690,
  [SMALL_STATE(203)] = 3697,
  [SMALL_STATE(204)] = 3704,
  [SMALL_STATE(205)] = 3711,
  [SMALL_STATE(206)] = 3718,
  [SMALL_STATE(207)] = 3723,
  [SMALL_STATE(208)] = 3730,
  [SMALL_STATE(209)] = 3737,
  [SMALL_STATE(210)] = 3744,
  [SMALL_STATE(211)] = 3751,
  [SMALL_STATE(212)] = 3756,
  [SMALL_STATE(213)] = 3761,
  [SMALL_STATE(214)] = 3768,
  [SMALL_STATE(215)] = 3775,
  [SMALL_STATE(216)] = 3780,
  [SMALL_STATE(217)] = 3785,
  [SMALL_STATE(218)] = 3792,
  [SMALL_STATE(219)] = 3797,
  [SMALL_STATE(220)] = 3804,
  [SMALL_STATE(221)] = 3811,
  [SMALL_STATE(222)] = 3818,
  [SMALL_STATE(223)] = 3823,
  [SMALL_STATE(224)] = 3828,
  [SMALL_STATE(225)] = 3833,
  [SMALL_STATE(226)] = 3840,
  [SMALL_STATE(227)] = 3847,
  [SMALL_STATE(228)] = 3854,
  [SMALL_STATE(229)] = 3861,
  [SMALL_STATE(230)] = 3868,
  [SMALL_STATE(231)] = 3875,
  [SMALL_STATE(232)] = 3882,
  [SMALL_STATE(233)] = 3889,
  [SMALL_STATE(234)] = 3896,
  [SMALL_STATE(235)] = 3901,
  [SMALL_STATE(236)] = 3908,
  [SMALL_STATE(237)] = 3913,
  [SMALL_STATE(238)] = 3920,
  [SMALL_STATE(239)] = 3927,
  [SMALL_STATE(240)] = 3934,
  [SMALL_STATE(241)] = 3941,
  [SMALL_STATE(242)] = 3948,
  [SMALL_STATE(243)] = 3955,
  [SMALL_STATE(244)] = 3960,
  [SMALL_STATE(245)] = 3964,
  [SMALL_STATE(246)] = 3968,
  [SMALL_STATE(247)] = 3972,
  [SMALL_STATE(248)] = 3976,
  [SMALL_STATE(249)] = 3980,
  [SMALL_STATE(250)] = 3984,
  [SMALL_STATE(251)] = 3988,
  [SMALL_STATE(252)] = 3992,
  [SMALL_STATE(253)] = 3996,
  [SMALL_STATE(254)] = 4000,
  [SMALL_STATE(255)] = 4004,
  [SMALL_STATE(256)] = 4008,
  [SMALL_STATE(257)] = 4012,
  [SMALL_STATE(258)] = 4016,
  [SMALL_STATE(259)] = 4020,
  [SMALL_STATE(260)] = 4024,
  [SMALL_STATE(261)] = 4028,
  [SMALL_STATE(262)] = 4032,
  [SMALL_STATE(263)] = 4036,
  [SMALL_STATE(264)] = 4040,
  [SMALL_STATE(265)] = 4044,
  [SMALL_STATE(266)] = 4048,
  [SMALL_STATE(267)] = 4052,
  [SMALL_STATE(268)] = 4056,
  [SMALL_STATE(269)] = 4060,
  [SMALL_STATE(270)] = 4064,
  [SMALL_STATE(271)] = 4068,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 16),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 16),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 29),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 29),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 16),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 16),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 25),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 25),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 19),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 19),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 24),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 24),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 17),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 17),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 22),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 22),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 23),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 23),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 16),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 16),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 31),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 31),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 14),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 14),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 20),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 20),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 8),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 17),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 26),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 8),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 27),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 22),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 28),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 23),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 30),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 32),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 29),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 33),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 18),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 8),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 8),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 9),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 10),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 21),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 10),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 15),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 6),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 34),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 11),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 11), SHIFT_REPEAT(133),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 13),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 13), SHIFT_REPEAT(186),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 16),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 16),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 35),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 7),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 7),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 12),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 14),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 20),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_kind, 1, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [595] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
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
