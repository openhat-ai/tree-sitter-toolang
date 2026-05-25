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
#define STATE_COUNT 276
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 36

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
  anon_sym_hands = 16,
  anon_sym_handoffs = 17,
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
  [anon_sym_hands] = "hands",
  [anon_sym_handoffs] = "handoffs",
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
  [anon_sym_hands] = anon_sym_hands,
  [anon_sym_handoffs] = anon_sym_handoffs,
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
  [anon_sym_hands] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_handoffs] = {
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
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 13,
  [29] = 19,
  [30] = 30,
  [31] = 31,
  [32] = 16,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 7,
  [43] = 43,
  [44] = 8,
  [45] = 6,
  [46] = 46,
  [47] = 47,
  [48] = 13,
  [49] = 21,
  [50] = 19,
  [51] = 16,
  [52] = 21,
  [53] = 53,
  [54] = 20,
  [55] = 55,
  [56] = 16,
  [57] = 36,
  [58] = 19,
  [59] = 19,
  [60] = 13,
  [61] = 21,
  [62] = 13,
  [63] = 16,
  [64] = 13,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 30,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 31,
  [73] = 35,
  [74] = 33,
  [75] = 19,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 34,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 16,
  [96] = 21,
  [97] = 97,
  [98] = 98,
  [99] = 36,
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
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 127,
  [135] = 125,
  [136] = 131,
  [137] = 124,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 148,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 13,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 16,
  [166] = 21,
  [167] = 13,
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
  [178] = 159,
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
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 16,
  [196] = 21,
  [197] = 13,
  [198] = 16,
  [199] = 21,
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
  [213] = 202,
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
  [236] = 202,
  [237] = 231,
  [238] = 238,
  [239] = 239,
  [240] = 202,
  [241] = 202,
  [242] = 202,
  [243] = 202,
  [244] = 202,
  [245] = 202,
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
  [270] = 265,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '\n', 110,
        '\r', 1,
        '#', 112,
        '(', 159,
        ')', 160,
        '+', 14,
        ',', 161,
        '-', 8,
        ':', 158,
        '=', 127,
        '?', 156,
        'B', 187,
        'J', 190,
        'M', 178,
        'N', 193,
        'T', 175,
        '[', 15,
        '`', 17,
        'd', 29,
        'h', 18,
        'i', 63,
        'm', 26,
        'n', 70,
        'p', 73,
        's', 30,
        't', 45,
        'u', 82,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(110);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 110,
        '\r', 1,
        '#', 112,
        '`', 243,
        'd', 205,
        'n', 221,
        '\t', 241,
        '\f', 241,
        ' ', 241,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(102);
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
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(118);
      END_STATE();
    case 16:
      if (lookahead == '`') ADVANCE(162);
      END_STATE();
    case 17:
      if (lookahead == '`') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'k') ADVANCE(48);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'k') ADVANCE(50);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(154);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 96:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 97:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 98:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 99:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 100:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(100);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 101:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(245);
      END_STATE();
    case 102:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(165);
      END_STATE();
    case 103:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\f') SKIP(103);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 104:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\f') SKIP(104);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 105:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\f') SKIP(105);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 106:
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '\n', 110,
        '\r', 1,
        '#', 7,
        'h', 18,
        'i', 63,
        'm', 66,
        'p', 73,
        's', 30,
        't', 45,
        'u', 82,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(106);
      END_STATE();
    case 107:
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '\n', 110,
        '\r', 1,
        '#', 7,
        'i', 63,
        'p', 74,
        's', 40,
        't', 44,
        'u', 84,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 108:
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '\n', 110,
        '\r', 1,
        '#', 7,
        'i', 218,
        'p', 223,
        's', 201,
        't', 208,
        'u', 227,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_comment_line_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_Message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(169);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(170);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(167);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(165);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'g') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'k') ADVANCE(210);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_inline_text);
      ADVANCE_MAP(
        '\n', 110,
        '\r', 1,
        '#', 112,
        '`', 243,
        'd', 205,
        'n', 221,
        '\t', 241,
        '\f', 241,
        ' ', 241,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '`') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '`') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 110,
        '\f', 246,
        '\r', 1,
        '#', 249,
        'h', 250,
        'i', 289,
        'm', 291,
        'p', 297,
        's', 265,
        't', 271,
        'u', 305,
        '\t', 246,
        ' ', 246,
      );
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 110,
        '\f', 247,
        '\r', 1,
        '#', 249,
        'i', 218,
        'p', 223,
        's', 201,
        't', 208,
        'u', 227,
        '\t', 247,
        ' ', 247,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 110,
        '\f', 248,
        '\r', 1,
        '#', 249,
        'i', 289,
        'p', 298,
        's', 268,
        't', 272,
        'u', 308,
        '\t', 248,
        ' ', 248,
      );
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'k') ADVANCE(275);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == 'y') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'k') ADVANCE(277);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(328);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(328);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(328);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(328);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 107},
  [2] = {.lex_state = 107},
  [3] = {.lex_state = 107},
  [4] = {.lex_state = 106},
  [5] = {.lex_state = 106},
  [6] = {.lex_state = 103},
  [7] = {.lex_state = 103},
  [8] = {.lex_state = 103},
  [9] = {.lex_state = 106},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 103},
  [17] = {.lex_state = 106},
  [18] = {.lex_state = 106},
  [19] = {.lex_state = 103},
  [20] = {.lex_state = 103},
  [21] = {.lex_state = 103},
  [22] = {.lex_state = 106},
  [23] = {.lex_state = 106},
  [24] = {.lex_state = 106},
  [25] = {.lex_state = 106},
  [26] = {.lex_state = 106},
  [27] = {.lex_state = 106},
  [28] = {.lex_state = 106},
  [29] = {.lex_state = 106},
  [30] = {.lex_state = 106},
  [31] = {.lex_state = 106},
  [32] = {.lex_state = 106},
  [33] = {.lex_state = 106},
  [34] = {.lex_state = 106},
  [35] = {.lex_state = 106},
  [36] = {.lex_state = 106},
  [37] = {.lex_state = 104},
  [38] = {.lex_state = 104},
  [39] = {.lex_state = 104},
  [40] = {.lex_state = 108},
  [41] = {.lex_state = 108},
  [42] = {.lex_state = 105},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 105},
  [45] = {.lex_state = 105},
  [46] = {.lex_state = 104},
  [47] = {.lex_state = 104},
  [48] = {.lex_state = 104},
  [49] = {.lex_state = 104},
  [50] = {.lex_state = 104},
  [51] = {.lex_state = 104},
  [52] = {.lex_state = 108},
  [53] = {.lex_state = 108},
  [54] = {.lex_state = 105},
  [55] = {.lex_state = 108},
  [56] = {.lex_state = 105},
  [57] = {.lex_state = 108},
  [58] = {.lex_state = 105},
  [59] = {.lex_state = 108},
  [60] = {.lex_state = 105},
  [61] = {.lex_state = 105},
  [62] = {.lex_state = 108},
  [63] = {.lex_state = 108},
  [64] = {.lex_state = 107},
  [65] = {.lex_state = 107},
  [66] = {.lex_state = 107},
  [67] = {.lex_state = 107},
  [68] = {.lex_state = 107},
  [69] = {.lex_state = 107},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 107},
  [72] = {.lex_state = 107},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 107},
  [75] = {.lex_state = 107},
  [76] = {.lex_state = 107},
  [77] = {.lex_state = 107},
  [78] = {.lex_state = 107},
  [79] = {.lex_state = 107},
  [80] = {.lex_state = 107},
  [81] = {.lex_state = 107},
  [82] = {.lex_state = 107},
  [83] = {.lex_state = 107},
  [84] = {.lex_state = 107},
  [85] = {.lex_state = 107},
  [86] = {.lex_state = 107},
  [87] = {.lex_state = 107},
  [88] = {.lex_state = 107},
  [89] = {.lex_state = 107},
  [90] = {.lex_state = 107},
  [91] = {.lex_state = 107},
  [92] = {.lex_state = 107},
  [93] = {.lex_state = 107},
  [94] = {.lex_state = 107},
  [95] = {.lex_state = 107},
  [96] = {.lex_state = 107},
  [97] = {.lex_state = 107},
  [98] = {.lex_state = 107},
  [99] = {.lex_state = 107},
  [100] = {.lex_state = 107},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 107},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 99},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 100},
  [209] = {.lex_state = 101},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 99},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 101},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 107},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 0},
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
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 100},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 100},
  [268] = {.lex_state = 101},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
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
    [anon_sym_hands] = ACTIONS(1),
    [anon_sym_handoffs] = ACTIONS(1),
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
    [sym_source_file] = STATE(257),
    [sym_item] = STATE(2),
    [sym_newline] = STATE(75),
    [sym_blank_line] = STATE(2),
    [sym_comment_line] = STATE(2),
    [sym_use] = STATE(77),
    [sym_struct] = STATE(77),
    [sym_psyche] = STATE(77),
    [sym_skill] = STATE(77),
    [sym_service] = STATE(77),
    [sym_prompt] = STATE(77),
    [sym_instruct] = STATE(77),
    [sym_thunk] = STATE(77),
    [sym_psyche_keyword] = STATE(247),
    [sym_skill_keyword] = STATE(223),
    [sym_service_keyword] = STATE(234),
    [sym_prompt_keyword] = STATE(246),
    [sym_instruct_keyword] = STATE(186),
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
    STATE(75), 1,
      sym_newline,
    STATE(186), 1,
      sym_instruct_keyword,
    STATE(223), 1,
      sym_skill_keyword,
    STATE(234), 1,
      sym_service_keyword,
    STATE(246), 1,
      sym_prompt_keyword,
    STATE(247), 1,
      sym_psyche_keyword,
    STATE(3), 4,
      sym_item,
      sym_blank_line,
      sym_comment_line,
      aux_sym_source_file_repeat1,
    STATE(77), 8,
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
    STATE(75), 1,
      sym_newline,
    STATE(186), 1,
      sym_instruct_keyword,
    STATE(223), 1,
      sym_skill_keyword,
    STATE(234), 1,
      sym_service_keyword,
    STATE(246), 1,
      sym_prompt_keyword,
    STATE(247), 1,
      sym_psyche_keyword,
    STATE(3), 4,
      sym_item,
      sym_blank_line,
      sym_comment_line,
      aux_sym_source_file_repeat1,
    STATE(77), 8,
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
    STATE(29), 1,
      sym_newline,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [185] = 10,
    ACTIONS(73), 1,
      aux_sym_newline_token1,
    ACTIONS(76), 1,
      aux_sym_comment_line_token1,
    STATE(29), 1,
      sym_newline,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [234] = 6,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(93), 1,
      sym_indented_raw_text,
    STATE(19), 1,
      sym_newline,
    STATE(7), 3,
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
      anon_sym_hands,
      anon_sym_handoffs,
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
    STATE(19), 1,
      sym_newline,
    STATE(8), 3,
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
      anon_sym_hands,
      anon_sym_handoffs,
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
    STATE(19), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
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
    STATE(29), 1,
      sym_newline,
    STATE(78), 1,
      sym_thunk_body,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [388] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(29), 1,
      sym_newline,
    STATE(69), 1,
      sym_thunk_body,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [428] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(29), 1,
      sym_newline,
    STATE(100), 1,
      sym_thunk_body,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [468] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(29), 1,
      sym_newline,
    STATE(70), 1,
      sym_thunk_body,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [508] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
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
  [534] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(29), 1,
      sym_newline,
    STATE(83), 1,
      sym_thunk_body,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [574] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(29), 1,
      sym_newline,
    STATE(76), 1,
      sym_thunk_body,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [614] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
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
  [640] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(29), 1,
      sym_newline,
    STATE(66), 1,
      sym_thunk_body,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [680] = 9,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(63), 1,
      aux_sym_comment_line_token1,
    STATE(29), 1,
      sym_newline,
    STATE(67), 1,
      sym_thunk_body,
    STATE(160), 1,
      sym_directive_key,
    STATE(261), 1,
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
      anon_sym_hands,
      anon_sym_handoffs,
  [720] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
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
  [746] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
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
  [772] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
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
  [798] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [823] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [848] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [873] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [898] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [923] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [948] = 2,
    ACTIONS(111), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(109), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [973] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [998] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1023] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1048] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1073] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1098] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1123] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1148] = 2,
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
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_instruct,
      anon_sym_system,
      anon_sym_user,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1173] = 8,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      aux_sym_newline_token1,
    ACTIONS(180), 1,
      sym_value_name,
    ACTIONS(183), 1,
      sym_indented_raw_text,
    STATE(50), 1,
      sym_newline,
    STATE(229), 1,
      sym_property_key,
    STATE(37), 4,
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
  [1209] = 8,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      aux_sym_newline_token1,
    ACTIONS(192), 1,
      sym_value_name,
    ACTIONS(194), 1,
      sym_indented_raw_text,
    STATE(50), 1,
      sym_newline,
    STATE(229), 1,
      sym_property_key,
    STATE(37), 4,
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
  [1245] = 8,
    ACTIONS(188), 1,
      aux_sym_newline_token1,
    ACTIONS(192), 1,
      sym_value_name,
    ACTIONS(194), 1,
      sym_indented_raw_text,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_newline,
    STATE(229), 1,
      sym_property_key,
    STATE(38), 4,
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
  [1281] = 8,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    ACTIONS(204), 1,
      aux_sym_comment_line_token1,
    ACTIONS(208), 1,
      sym_value_name,
    STATE(59), 1,
      sym_newline,
    STATE(239), 1,
      sym_field_name,
    STATE(41), 4,
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
  [1316] = 8,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(215), 1,
      aux_sym_comment_line_token1,
    ACTIONS(220), 1,
      sym_value_name,
    STATE(59), 1,
      sym_newline,
    STATE(239), 1,
      sym_field_name,
    STATE(41), 4,
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
  [1351] = 6,
    ACTIONS(95), 1,
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
  [1380] = 12,
    ACTIONS(89), 1,
      aux_sym_newline_token1,
    ACTIONS(227), 1,
      sym_inline_comment,
    ACTIONS(231), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(233), 1,
      sym_inline_text,
    STATE(6), 1,
      sym_line_end,
    STATE(16), 1,
      sym_newline,
    STATE(27), 1,
      sym_block_value,
    STATE(149), 1,
      sym_fence_open,
    STATE(162), 1,
      sym_block_name,
    STATE(164), 1,
      sym_block_content_inline,
    ACTIONS(229), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(22), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [1421] = 6,
    ACTIONS(99), 1,
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
  [1450] = 6,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym_newline_token1,
    ACTIONS(225), 1,
      sym_indented_raw_text,
    STATE(58), 1,
      sym_newline,
    STATE(42), 3,
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
  [1479] = 2,
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
  [1497] = 2,
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
  [1515] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 12,
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
  [1533] = 2,
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
  [1551] = 2,
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
  [1569] = 2,
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
  [1587] = 2,
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
  [1604] = 2,
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
  [1621] = 2,
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
  [1638] = 2,
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
  [1655] = 2,
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
  [1672] = 2,
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
  [1689] = 2,
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
  [1706] = 2,
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
  [1723] = 2,
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
  [1740] = 2,
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
  [1757] = 2,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(111), 9,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
      sym_value_name,
  [1774] = 2,
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
  [1791] = 1,
    ACTIONS(109), 11,
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
  [1805] = 1,
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
  [1819] = 1,
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
  [1833] = 1,
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
  [1847] = 1,
    ACTIONS(149), 11,
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
  [1861] = 1,
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
  [1875] = 1,
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
  [1889] = 1,
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
  [1903] = 1,
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
  [1917] = 1,
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
  [1931] = 1,
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
  [1945] = 1,
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
  [1959] = 1,
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
  [1973] = 1,
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
  [1987] = 1,
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
  [2001] = 1,
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
  [2015] = 1,
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
  [2029] = 1,
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
  [2043] = 1,
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
  [2057] = 1,
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
  [2071] = 1,
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
  [2085] = 1,
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
  [2099] = 1,
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
  [2113] = 1,
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
  [2127] = 1,
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
  [2141] = 1,
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
  [2155] = 1,
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
  [2169] = 1,
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
  [2183] = 1,
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
  [2197] = 1,
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
  [2211] = 1,
    ACTIONS(303), 11,
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
  [2225] = 1,
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
  [2239] = 1,
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
  [2253] = 1,
    ACTIONS(305), 11,
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
  [2267] = 1,
    ACTIONS(307), 11,
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
  [2281] = 1,
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
  [2295] = 1,
    ACTIONS(309), 11,
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
  [2309] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(118), 1,
      sym_base_type,
    STATE(256), 1,
      sym_type,
    STATE(139), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2330] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(118), 1,
      sym_base_type,
    STATE(253), 1,
      sym_type,
    STATE(139), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2351] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(118), 1,
      sym_base_type,
    STATE(212), 1,
      sym_type,
    STATE(139), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2372] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(118), 1,
      sym_base_type,
    STATE(260), 1,
      sym_type,
    STATE(139), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2393] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(118), 1,
      sym_base_type,
    STATE(174), 1,
      sym_type,
    STATE(139), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2414] = 7,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    ACTIONS(204), 1,
      aux_sym_comment_line_token1,
    ACTIONS(315), 1,
      sym_value_name,
    STATE(59), 1,
      sym_newline,
    STATE(98), 1,
      sym_struct_body,
    STATE(239), 1,
      sym_field_name,
    STATE(40), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [2439] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(118), 1,
      sym_base_type,
    STATE(172), 1,
      sym_type,
    STATE(139), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2460] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(118), 1,
      sym_base_type,
    STATE(269), 1,
      sym_type,
    STATE(139), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2481] = 5,
    ACTIONS(313), 1,
      sym_type_name,
    STATE(118), 1,
      sym_base_type,
    STATE(218), 1,
      sym_type,
    STATE(139), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(311), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [2502] = 8,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(321), 1,
      sym_frontmatter_delimiter,
    ACTIONS(323), 1,
      sym_fenced_raw_text,
    STATE(79), 1,
      sym_fence_close,
    STATE(129), 1,
      sym_frontmatter,
    STATE(200), 1,
      sym_newline,
    STATE(132), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2528] = 8,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_inline_comment,
    ACTIONS(329), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(45), 1,
      sym_line_end,
    STATE(56), 1,
      sym_newline,
    STATE(90), 1,
      sym_instruct_body,
    STATE(148), 1,
      sym_fence_open,
    STATE(91), 2,
      sym_block_indented,
      sym_block_fenced,
  [2554] = 8,
    ACTIONS(329), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(331), 1,
      aux_sym_newline_token1,
    ACTIONS(333), 1,
      sym_inline_comment,
    STATE(39), 1,
      sym_line_end,
    STATE(51), 1,
      sym_newline,
    STATE(88), 1,
      sym_cap_body,
    STATE(147), 1,
      sym_fence_open,
    STATE(89), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2580] = 8,
    ACTIONS(329), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(331), 1,
      aux_sym_newline_token1,
    ACTIONS(333), 1,
      sym_inline_comment,
    STATE(39), 1,
      sym_line_end,
    STATE(51), 1,
      sym_newline,
    STATE(92), 1,
      sym_cap_body,
    STATE(147), 1,
      sym_fence_open,
    STATE(89), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2606] = 8,
    ACTIONS(329), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(331), 1,
      aux_sym_newline_token1,
    ACTIONS(333), 1,
      sym_inline_comment,
    STATE(39), 1,
      sym_line_end,
    STATE(51), 1,
      sym_newline,
    STATE(93), 1,
      sym_cap_body,
    STATE(147), 1,
      sym_fence_open,
    STATE(89), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2632] = 8,
    ACTIONS(329), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(331), 1,
      aux_sym_newline_token1,
    ACTIONS(333), 1,
      sym_inline_comment,
    STATE(39), 1,
      sym_line_end,
    STATE(51), 1,
      sym_newline,
    STATE(94), 1,
      sym_cap_body,
    STATE(147), 1,
      sym_fence_open,
    STATE(89), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [2658] = 8,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(321), 1,
      sym_frontmatter_delimiter,
    ACTIONS(323), 1,
      sym_fenced_raw_text,
    STATE(71), 1,
      sym_fence_close,
    STATE(130), 1,
      sym_frontmatter,
    STATE(200), 1,
      sym_newline,
    STATE(122), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2684] = 8,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_inline_comment,
    ACTIONS(329), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(45), 1,
      sym_line_end,
    STATE(56), 1,
      sym_newline,
    STATE(97), 1,
      sym_instruct_body,
    STATE(148), 1,
      sym_fence_open,
    STATE(91), 2,
      sym_block_indented,
      sym_block_fenced,
  [2710] = 4,
    ACTIONS(337), 1,
      sym_array_suffix,
    STATE(119), 1,
      aux_sym_type_repeat1,
    STATE(140), 1,
      sym_type_suffix,
    ACTIONS(335), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2727] = 4,
    ACTIONS(337), 1,
      sym_array_suffix,
    STATE(120), 1,
      aux_sym_type_repeat1,
    STATE(140), 1,
      sym_type_suffix,
    ACTIONS(339), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2744] = 4,
    ACTIONS(343), 1,
      sym_array_suffix,
    STATE(120), 1,
      aux_sym_type_repeat1,
    STATE(140), 1,
      sym_type_suffix,
    ACTIONS(341), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2761] = 5,
    ACTIONS(346), 1,
      aux_sym_comment_line_token1,
    ACTIONS(348), 1,
      sym_frontmatter_delimiter,
    ACTIONS(350), 1,
      sym_value_name,
    STATE(251), 1,
      sym_property_key,
    STATE(123), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [2779] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(323), 1,
      sym_fenced_raw_text,
    STATE(81), 1,
      sym_fence_close,
    STATE(200), 1,
      sym_newline,
    STATE(142), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2799] = 5,
    ACTIONS(346), 1,
      aux_sym_comment_line_token1,
    ACTIONS(350), 1,
      sym_value_name,
    ACTIONS(352), 1,
      sym_frontmatter_delimiter,
    STATE(251), 1,
      sym_property_key,
    STATE(126), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [2817] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(354), 1,
      sym_fenced_raw_text,
    STATE(82), 1,
      sym_fence_close,
    STATE(188), 1,
      sym_newline,
    STATE(138), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2837] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(354), 1,
      sym_fenced_raw_text,
    STATE(72), 1,
      sym_fence_close,
    STATE(188), 1,
      sym_newline,
    STATE(124), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2857] = 5,
    ACTIONS(356), 1,
      aux_sym_comment_line_token1,
    ACTIONS(359), 1,
      sym_frontmatter_delimiter,
    ACTIONS(361), 1,
      sym_value_name,
    STATE(251), 1,
      sym_property_key,
    STATE(126), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [2875] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(354), 1,
      sym_fenced_raw_text,
    STATE(68), 1,
      sym_fence_close,
    STATE(188), 1,
      sym_newline,
    STATE(131), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2895] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(323), 1,
      sym_fenced_raw_text,
    STATE(86), 1,
      sym_fence_close,
    STATE(200), 1,
      sym_newline,
    STATE(142), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2915] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(323), 1,
      sym_fenced_raw_text,
    STATE(84), 1,
      sym_fence_close,
    STATE(200), 1,
      sym_newline,
    STATE(133), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2935] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(323), 1,
      sym_fenced_raw_text,
    STATE(80), 1,
      sym_fence_close,
    STATE(200), 1,
      sym_newline,
    STATE(128), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2955] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(354), 1,
      sym_fenced_raw_text,
    STATE(74), 1,
      sym_fence_close,
    STATE(188), 1,
      sym_newline,
    STATE(138), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [2975] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(323), 1,
      sym_fenced_raw_text,
    STATE(85), 1,
      sym_fence_close,
    STATE(200), 1,
      sym_newline,
    STATE(142), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [2995] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(323), 1,
      sym_fenced_raw_text,
    STATE(87), 1,
      sym_fence_close,
    STATE(200), 1,
      sym_newline,
    STATE(142), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3015] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(354), 1,
      sym_fenced_raw_text,
    ACTIONS(364), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(30), 1,
      sym_fence_close,
    STATE(188), 1,
      sym_newline,
    STATE(136), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3035] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(354), 1,
      sym_fenced_raw_text,
    ACTIONS(364), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(31), 1,
      sym_fence_close,
    STATE(188), 1,
      sym_newline,
    STATE(137), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3055] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(354), 1,
      sym_fenced_raw_text,
    ACTIONS(364), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(33), 1,
      sym_fence_close,
    STATE(188), 1,
      sym_newline,
    STATE(138), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3075] = 6,
    ACTIONS(317), 1,
      aux_sym_newline_token1,
    ACTIONS(354), 1,
      sym_fenced_raw_text,
    ACTIONS(364), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(34), 1,
      sym_fence_close,
    STATE(188), 1,
      sym_newline,
    STATE(138), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3095] = 5,
    ACTIONS(366), 1,
      aux_sym_newline_token1,
    ACTIONS(369), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(371), 1,
      sym_fenced_raw_text,
    STATE(188), 1,
      sym_newline,
    STATE(138), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3112] = 1,
    ACTIONS(374), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3121] = 1,
    ACTIONS(376), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3130] = 6,
    ACTIONS(378), 1,
      sym_arrow,
    ACTIONS(380), 1,
      sym_colon,
    ACTIONS(382), 1,
      sym_lparen,
    ACTIONS(384), 1,
      sym_value_name,
    STATE(154), 1,
      sym_thunk_name,
    STATE(235), 1,
      sym_params,
  [3149] = 5,
    ACTIONS(386), 1,
      aux_sym_newline_token1,
    ACTIONS(389), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(391), 1,
      sym_fenced_raw_text,
    STATE(200), 1,
      sym_newline,
    STATE(142), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3166] = 1,
    ACTIONS(394), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3175] = 1,
    ACTIONS(396), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3184] = 1,
    ACTIONS(398), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3193] = 2,
    STATE(193), 1,
      sym_cap_kind,
    ACTIONS(400), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [3203] = 5,
    ACTIONS(402), 1,
      aux_sym_newline_token1,
    ACTIONS(404), 1,
      sym_inline_comment,
    ACTIONS(406), 1,
      sym_block_language,
    STATE(116), 1,
      sym_line_end,
    STATE(165), 1,
      sym_newline,
  [3219] = 5,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    ACTIONS(410), 1,
      sym_inline_comment,
    ACTIONS(412), 1,
      sym_block_language,
    STATE(127), 1,
      sym_line_end,
    STATE(198), 1,
      sym_newline,
  [3235] = 5,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    ACTIONS(410), 1,
      sym_inline_comment,
    ACTIONS(414), 1,
      sym_block_language,
    STATE(134), 1,
      sym_line_end,
    STATE(198), 1,
      sym_newline,
  [3251] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3264] = 4,
    ACTIONS(418), 1,
      sym_rparen,
    ACTIONS(420), 1,
      sym_value_name,
    STATE(194), 1,
      sym_param,
    STATE(221), 1,
      sym_param_name,
  [3277] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3290] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3303] = 4,
    ACTIONS(382), 1,
      sym_lparen,
    ACTIONS(422), 1,
      sym_arrow,
    ACTIONS(424), 1,
      sym_colon,
    STATE(230), 1,
      sym_params,
  [3316] = 3,
    ACTIONS(428), 1,
      sym_comma,
    STATE(173), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(426), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3327] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(24), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3340] = 1,
    ACTIONS(109), 4,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [3347] = 4,
    ACTIONS(331), 1,
      aux_sym_newline_token1,
    ACTIONS(333), 1,
      sym_inline_comment,
    STATE(47), 1,
      sym_line_end,
    STATE(51), 1,
      sym_newline,
  [3360] = 4,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    ACTIONS(410), 1,
      sym_inline_comment,
    STATE(125), 1,
      sym_line_end,
    STATE(198), 1,
      sym_newline,
  [3373] = 2,
    STATE(208), 1,
      sym_directive_op,
    ACTIONS(430), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3382] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(432), 1,
      sym_inline_comment,
    STATE(65), 1,
      sym_line_end,
    STATE(95), 1,
      sym_newline,
  [3395] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(25), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3408] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3421] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(26), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3434] = 1,
    ACTIONS(115), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [3441] = 1,
    ACTIONS(127), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [3448] = 1,
    ACTIONS(111), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [3455] = 4,
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    ACTIONS(436), 1,
      sym_inline_comment,
    STATE(106), 1,
      sym_line_end,
    STATE(195), 1,
      sym_newline,
  [3468] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3481] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3494] = 4,
    ACTIONS(402), 1,
      aux_sym_newline_token1,
    ACTIONS(404), 1,
      sym_inline_comment,
    STATE(110), 1,
      sym_line_end,
    STATE(165), 1,
      sym_newline,
  [3507] = 4,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    ACTIONS(438), 1,
      sym_inline_comment,
    STATE(53), 1,
      sym_line_end,
    STATE(63), 1,
      sym_newline,
  [3520] = 3,
    ACTIONS(428), 1,
      sym_comma,
    STATE(176), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(440), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3531] = 4,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    ACTIONS(438), 1,
      sym_inline_comment,
    STATE(55), 1,
      sym_line_end,
    STATE(63), 1,
      sym_newline,
  [3544] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3557] = 3,
    ACTIONS(444), 1,
      sym_comma,
    STATE(176), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(442), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3568] = 4,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    ACTIONS(416), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_end,
    STATE(32), 1,
      sym_newline,
  [3581] = 4,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    ACTIONS(410), 1,
      sym_inline_comment,
    STATE(135), 1,
      sym_line_end,
    STATE(198), 1,
      sym_newline,
  [3594] = 1,
    ACTIONS(447), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [3600] = 1,
    ACTIONS(449), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [3606] = 3,
    ACTIONS(451), 1,
      sym_rparen,
    ACTIONS(453), 1,
      sym_comma,
    STATE(181), 1,
      aux_sym_params_repeat1,
  [3616] = 1,
    ACTIONS(456), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3622] = 1,
    ACTIONS(442), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [3628] = 1,
    ACTIONS(458), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3634] = 1,
    ACTIONS(460), 3,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [3640] = 3,
    ACTIONS(462), 1,
      sym_colon,
    ACTIONS(464), 1,
      sym_value_name,
    STATE(274), 1,
      sym_instruct_name,
  [3650] = 1,
    ACTIONS(466), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3656] = 1,
    ACTIONS(468), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3662] = 1,
    ACTIONS(470), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3668] = 1,
    ACTIONS(472), 3,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [3674] = 3,
    ACTIONS(420), 1,
      sym_value_name,
    STATE(204), 1,
      sym_param,
    STATE(221), 1,
      sym_param_name,
  [3684] = 3,
    ACTIONS(474), 1,
      sym_rparen,
    ACTIONS(476), 1,
      sym_comma,
    STATE(181), 1,
      aux_sym_params_repeat1,
  [3694] = 3,
    ACTIONS(478), 1,
      sym_cap_uri,
    ACTIONS(480), 1,
      sym_cap_shorthand,
    STATE(161), 1,
      sym_cap_ref,
  [3704] = 3,
    ACTIONS(476), 1,
      sym_comma,
    ACTIONS(482), 1,
      sym_rparen,
    STATE(192), 1,
      aux_sym_params_repeat1,
  [3714] = 1,
    ACTIONS(113), 3,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_value_name,
  [3720] = 1,
    ACTIONS(125), 3,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_value_name,
  [3726] = 1,
    ACTIONS(111), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3732] = 1,
    ACTIONS(115), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3738] = 1,
    ACTIONS(127), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3744] = 1,
    ACTIONS(484), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3750] = 1,
    ACTIONS(486), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [3756] = 2,
    ACTIONS(61), 1,
      aux_sym_newline_token1,
    STATE(23), 1,
      sym_newline,
  [3763] = 1,
    ACTIONS(488), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3768] = 1,
    ACTIONS(490), 2,
      sym_rparen,
      sym_comma,
  [3773] = 2,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    STATE(187), 1,
      sym_newline,
  [3780] = 1,
    ACTIONS(492), 2,
      sym_arrow,
      sym_colon,
  [3785] = 2,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    STATE(201), 1,
      sym_newline,
  [3792] = 2,
    ACTIONS(494), 1,
      sym_bare_value,
    STATE(156), 1,
      sym_directive_csv,
  [3799] = 2,
    ACTIONS(496), 1,
      sym_inline_text,
    STATE(211), 1,
      sym_property_value,
  [3806] = 2,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    STATE(189), 1,
      sym_newline,
  [3813] = 2,
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    STATE(190), 1,
      sym_newline,
  [3820] = 1,
    ACTIONS(498), 2,
      sym_rparen,
      sym_comma,
  [3825] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(96), 1,
      sym_newline,
  [3832] = 1,
    ACTIONS(500), 2,
      sym_arrow,
      sym_colon,
  [3837] = 2,
    ACTIONS(502), 1,
      sym_cap_uri,
    ACTIONS(504), 1,
      sym_cap_shorthand,
  [3844] = 1,
    ACTIONS(506), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3849] = 1,
    ACTIONS(508), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3854] = 1,
    ACTIONS(510), 2,
      sym_rparen,
      sym_comma,
  [3859] = 1,
    ACTIONS(512), 2,
      sym_arrow,
      sym_colon,
  [3864] = 1,
    ACTIONS(514), 2,
      sym_optional_marker,
      sym_colon,
  [3869] = 2,
    ACTIONS(516), 1,
      sym_optional_marker,
    ACTIONS(518), 1,
      sym_colon,
  [3876] = 1,
    ACTIONS(520), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3881] = 2,
    ACTIONS(522), 1,
      sym_value_name,
    STATE(255), 1,
      sym_cap_name,
  [3888] = 2,
    ACTIONS(496), 1,
      sym_inline_text,
    STATE(158), 1,
      sym_property_value,
  [3895] = 2,
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    STATE(121), 1,
      sym_newline,
  [3902] = 1,
    ACTIONS(524), 2,
      anon_sym_EQ,
      sym_colon,
  [3907] = 2,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    STATE(182), 1,
      sym_newline,
  [3914] = 2,
    ACTIONS(331), 1,
      aux_sym_newline_token1,
    STATE(46), 1,
      sym_newline,
  [3921] = 2,
    ACTIONS(526), 1,
      anon_sym_EQ,
    STATE(224), 1,
      sym_assign_operator,
  [3928] = 2,
    ACTIONS(528), 1,
      sym_arrow,
    ACTIONS(530), 1,
      sym_colon,
  [3935] = 2,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    STATE(54), 1,
      sym_newline,
  [3942] = 1,
    ACTIONS(532), 2,
      sym_colon,
      sym_value_name,
  [3947] = 2,
    ACTIONS(534), 1,
      sym_type_name,
    STATE(272), 1,
      sym_struct_name,
  [3954] = 2,
    ACTIONS(522), 1,
      sym_value_name,
    STATE(259), 1,
      sym_cap_name,
  [3961] = 2,
    ACTIONS(536), 1,
      sym_arrow,
    ACTIONS(538), 1,
      sym_colon,
  [3968] = 2,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    STATE(61), 1,
      sym_newline,
  [3975] = 2,
    ACTIONS(540), 1,
      aux_sym_newline_token1,
    STATE(20), 1,
      sym_newline,
  [3982] = 1,
    ACTIONS(542), 2,
      sym_optional_marker,
      sym_colon,
  [3987] = 2,
    ACTIONS(544), 1,
      sym_optional_marker,
    ACTIONS(546), 1,
      sym_colon,
  [3994] = 2,
    ACTIONS(434), 1,
      aux_sym_newline_token1,
    STATE(196), 1,
      sym_newline,
  [4001] = 2,
    ACTIONS(331), 1,
      aux_sym_newline_token1,
    STATE(49), 1,
      sym_newline,
  [4008] = 2,
    ACTIONS(408), 1,
      aux_sym_newline_token1,
    STATE(199), 1,
      sym_newline,
  [4015] = 2,
    ACTIONS(402), 1,
      aux_sym_newline_token1,
    STATE(166), 1,
      sym_newline,
  [4022] = 2,
    ACTIONS(540), 1,
      aux_sym_newline_token1,
    STATE(21), 1,
      sym_newline,
  [4029] = 2,
    ACTIONS(202), 1,
      aux_sym_newline_token1,
    STATE(52), 1,
      sym_newline,
  [4036] = 2,
    ACTIONS(522), 1,
      sym_value_name,
    STATE(250), 1,
      sym_cap_name,
  [4043] = 2,
    ACTIONS(522), 1,
      sym_value_name,
    STATE(275), 1,
      sym_cap_name,
  [4050] = 1,
    ACTIONS(548), 1,
      sym_colon,
  [4054] = 1,
    ACTIONS(550), 1,
      sym_value_name,
  [4058] = 1,
    ACTIONS(552), 1,
      sym_colon,
  [4062] = 1,
    ACTIONS(554), 1,
      sym_colon,
  [4066] = 1,
    ACTIONS(556), 1,
      sym_colon,
  [4070] = 1,
    ACTIONS(558), 1,
      sym_colon,
  [4074] = 1,
    ACTIONS(560), 1,
      sym_value_name,
  [4078] = 1,
    ACTIONS(562), 1,
      sym_colon,
  [4082] = 1,
    ACTIONS(564), 1,
      sym_colon,
  [4086] = 1,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
  [4090] = 1,
    ACTIONS(568), 1,
      sym_colon,
  [4094] = 1,
    ACTIONS(570), 1,
      sym_colon,
  [4098] = 1,
    ACTIONS(572), 1,
      sym_colon,
  [4102] = 1,
    ACTIONS(574), 1,
      sym_colon,
  [4106] = 1,
    ACTIONS(576), 1,
      sym_value_name,
  [4110] = 1,
    ACTIONS(578), 1,
      sym_bare_value,
  [4114] = 1,
    ACTIONS(580), 1,
      sym_colon,
  [4118] = 1,
    ACTIONS(582), 1,
      aux_sym_newline_token1,
  [4122] = 1,
    ACTIONS(584), 1,
      sym_colon,
  [4126] = 1,
    ACTIONS(586), 1,
      sym_bare_value,
  [4130] = 1,
    ACTIONS(588), 1,
      sym_inline_text,
  [4134] = 1,
    ACTIONS(590), 1,
      sym_colon,
  [4138] = 1,
    ACTIONS(592), 1,
      aux_sym_newline_token1,
  [4142] = 1,
    ACTIONS(594), 1,
      sym_colon,
  [4146] = 1,
    ACTIONS(596), 1,
      sym_colon,
  [4150] = 1,
    ACTIONS(598), 1,
      sym_value_name,
  [4154] = 1,
    ACTIONS(600), 1,
      sym_colon,
  [4158] = 1,
    ACTIONS(602), 1,
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
  [SMALL_STATE(13)] = 508,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 574,
  [SMALL_STATE(16)] = 614,
  [SMALL_STATE(17)] = 640,
  [SMALL_STATE(18)] = 680,
  [SMALL_STATE(19)] = 720,
  [SMALL_STATE(20)] = 746,
  [SMALL_STATE(21)] = 772,
  [SMALL_STATE(22)] = 798,
  [SMALL_STATE(23)] = 823,
  [SMALL_STATE(24)] = 848,
  [SMALL_STATE(25)] = 873,
  [SMALL_STATE(26)] = 898,
  [SMALL_STATE(27)] = 923,
  [SMALL_STATE(28)] = 948,
  [SMALL_STATE(29)] = 973,
  [SMALL_STATE(30)] = 998,
  [SMALL_STATE(31)] = 1023,
  [SMALL_STATE(32)] = 1048,
  [SMALL_STATE(33)] = 1073,
  [SMALL_STATE(34)] = 1098,
  [SMALL_STATE(35)] = 1123,
  [SMALL_STATE(36)] = 1148,
  [SMALL_STATE(37)] = 1173,
  [SMALL_STATE(38)] = 1209,
  [SMALL_STATE(39)] = 1245,
  [SMALL_STATE(40)] = 1281,
  [SMALL_STATE(41)] = 1316,
  [SMALL_STATE(42)] = 1351,
  [SMALL_STATE(43)] = 1380,
  [SMALL_STATE(44)] = 1421,
  [SMALL_STATE(45)] = 1450,
  [SMALL_STATE(46)] = 1479,
  [SMALL_STATE(47)] = 1497,
  [SMALL_STATE(48)] = 1515,
  [SMALL_STATE(49)] = 1533,
  [SMALL_STATE(50)] = 1551,
  [SMALL_STATE(51)] = 1569,
  [SMALL_STATE(52)] = 1587,
  [SMALL_STATE(53)] = 1604,
  [SMALL_STATE(54)] = 1621,
  [SMALL_STATE(55)] = 1638,
  [SMALL_STATE(56)] = 1655,
  [SMALL_STATE(57)] = 1672,
  [SMALL_STATE(58)] = 1689,
  [SMALL_STATE(59)] = 1706,
  [SMALL_STATE(60)] = 1723,
  [SMALL_STATE(61)] = 1740,
  [SMALL_STATE(62)] = 1757,
  [SMALL_STATE(63)] = 1774,
  [SMALL_STATE(64)] = 1791,
  [SMALL_STATE(65)] = 1805,
  [SMALL_STATE(66)] = 1819,
  [SMALL_STATE(67)] = 1833,
  [SMALL_STATE(68)] = 1847,
  [SMALL_STATE(69)] = 1861,
  [SMALL_STATE(70)] = 1875,
  [SMALL_STATE(71)] = 1889,
  [SMALL_STATE(72)] = 1903,
  [SMALL_STATE(73)] = 1917,
  [SMALL_STATE(74)] = 1931,
  [SMALL_STATE(75)] = 1945,
  [SMALL_STATE(76)] = 1959,
  [SMALL_STATE(77)] = 1973,
  [SMALL_STATE(78)] = 1987,
  [SMALL_STATE(79)] = 2001,
  [SMALL_STATE(80)] = 2015,
  [SMALL_STATE(81)] = 2029,
  [SMALL_STATE(82)] = 2043,
  [SMALL_STATE(83)] = 2057,
  [SMALL_STATE(84)] = 2071,
  [SMALL_STATE(85)] = 2085,
  [SMALL_STATE(86)] = 2099,
  [SMALL_STATE(87)] = 2113,
  [SMALL_STATE(88)] = 2127,
  [SMALL_STATE(89)] = 2141,
  [SMALL_STATE(90)] = 2155,
  [SMALL_STATE(91)] = 2169,
  [SMALL_STATE(92)] = 2183,
  [SMALL_STATE(93)] = 2197,
  [SMALL_STATE(94)] = 2211,
  [SMALL_STATE(95)] = 2225,
  [SMALL_STATE(96)] = 2239,
  [SMALL_STATE(97)] = 2253,
  [SMALL_STATE(98)] = 2267,
  [SMALL_STATE(99)] = 2281,
  [SMALL_STATE(100)] = 2295,
  [SMALL_STATE(101)] = 2309,
  [SMALL_STATE(102)] = 2330,
  [SMALL_STATE(103)] = 2351,
  [SMALL_STATE(104)] = 2372,
  [SMALL_STATE(105)] = 2393,
  [SMALL_STATE(106)] = 2414,
  [SMALL_STATE(107)] = 2439,
  [SMALL_STATE(108)] = 2460,
  [SMALL_STATE(109)] = 2481,
  [SMALL_STATE(110)] = 2502,
  [SMALL_STATE(111)] = 2528,
  [SMALL_STATE(112)] = 2554,
  [SMALL_STATE(113)] = 2580,
  [SMALL_STATE(114)] = 2606,
  [SMALL_STATE(115)] = 2632,
  [SMALL_STATE(116)] = 2658,
  [SMALL_STATE(117)] = 2684,
  [SMALL_STATE(118)] = 2710,
  [SMALL_STATE(119)] = 2727,
  [SMALL_STATE(120)] = 2744,
  [SMALL_STATE(121)] = 2761,
  [SMALL_STATE(122)] = 2779,
  [SMALL_STATE(123)] = 2799,
  [SMALL_STATE(124)] = 2817,
  [SMALL_STATE(125)] = 2837,
  [SMALL_STATE(126)] = 2857,
  [SMALL_STATE(127)] = 2875,
  [SMALL_STATE(128)] = 2895,
  [SMALL_STATE(129)] = 2915,
  [SMALL_STATE(130)] = 2935,
  [SMALL_STATE(131)] = 2955,
  [SMALL_STATE(132)] = 2975,
  [SMALL_STATE(133)] = 2995,
  [SMALL_STATE(134)] = 3015,
  [SMALL_STATE(135)] = 3035,
  [SMALL_STATE(136)] = 3055,
  [SMALL_STATE(137)] = 3075,
  [SMALL_STATE(138)] = 3095,
  [SMALL_STATE(139)] = 3112,
  [SMALL_STATE(140)] = 3121,
  [SMALL_STATE(141)] = 3130,
  [SMALL_STATE(142)] = 3149,
  [SMALL_STATE(143)] = 3166,
  [SMALL_STATE(144)] = 3175,
  [SMALL_STATE(145)] = 3184,
  [SMALL_STATE(146)] = 3193,
  [SMALL_STATE(147)] = 3203,
  [SMALL_STATE(148)] = 3219,
  [SMALL_STATE(149)] = 3235,
  [SMALL_STATE(150)] = 3251,
  [SMALL_STATE(151)] = 3264,
  [SMALL_STATE(152)] = 3277,
  [SMALL_STATE(153)] = 3290,
  [SMALL_STATE(154)] = 3303,
  [SMALL_STATE(155)] = 3316,
  [SMALL_STATE(156)] = 3327,
  [SMALL_STATE(157)] = 3340,
  [SMALL_STATE(158)] = 3347,
  [SMALL_STATE(159)] = 3360,
  [SMALL_STATE(160)] = 3373,
  [SMALL_STATE(161)] = 3382,
  [SMALL_STATE(162)] = 3395,
  [SMALL_STATE(163)] = 3408,
  [SMALL_STATE(164)] = 3421,
  [SMALL_STATE(165)] = 3434,
  [SMALL_STATE(166)] = 3441,
  [SMALL_STATE(167)] = 3448,
  [SMALL_STATE(168)] = 3455,
  [SMALL_STATE(169)] = 3468,
  [SMALL_STATE(170)] = 3481,
  [SMALL_STATE(171)] = 3494,
  [SMALL_STATE(172)] = 3507,
  [SMALL_STATE(173)] = 3520,
  [SMALL_STATE(174)] = 3531,
  [SMALL_STATE(175)] = 3544,
  [SMALL_STATE(176)] = 3557,
  [SMALL_STATE(177)] = 3568,
  [SMALL_STATE(178)] = 3581,
  [SMALL_STATE(179)] = 3594,
  [SMALL_STATE(180)] = 3600,
  [SMALL_STATE(181)] = 3606,
  [SMALL_STATE(182)] = 3616,
  [SMALL_STATE(183)] = 3622,
  [SMALL_STATE(184)] = 3628,
  [SMALL_STATE(185)] = 3634,
  [SMALL_STATE(186)] = 3640,
  [SMALL_STATE(187)] = 3650,
  [SMALL_STATE(188)] = 3656,
  [SMALL_STATE(189)] = 3662,
  [SMALL_STATE(190)] = 3668,
  [SMALL_STATE(191)] = 3674,
  [SMALL_STATE(192)] = 3684,
  [SMALL_STATE(193)] = 3694,
  [SMALL_STATE(194)] = 3704,
  [SMALL_STATE(195)] = 3714,
  [SMALL_STATE(196)] = 3720,
  [SMALL_STATE(197)] = 3726,
  [SMALL_STATE(198)] = 3732,
  [SMALL_STATE(199)] = 3738,
  [SMALL_STATE(200)] = 3744,
  [SMALL_STATE(201)] = 3750,
  [SMALL_STATE(202)] = 3756,
  [SMALL_STATE(203)] = 3763,
  [SMALL_STATE(204)] = 3768,
  [SMALL_STATE(205)] = 3773,
  [SMALL_STATE(206)] = 3780,
  [SMALL_STATE(207)] = 3785,
  [SMALL_STATE(208)] = 3792,
  [SMALL_STATE(209)] = 3799,
  [SMALL_STATE(210)] = 3806,
  [SMALL_STATE(211)] = 3813,
  [SMALL_STATE(212)] = 3820,
  [SMALL_STATE(213)] = 3825,
  [SMALL_STATE(214)] = 3832,
  [SMALL_STATE(215)] = 3837,
  [SMALL_STATE(216)] = 3844,
  [SMALL_STATE(217)] = 3849,
  [SMALL_STATE(218)] = 3854,
  [SMALL_STATE(219)] = 3859,
  [SMALL_STATE(220)] = 3864,
  [SMALL_STATE(221)] = 3869,
  [SMALL_STATE(222)] = 3876,
  [SMALL_STATE(223)] = 3881,
  [SMALL_STATE(224)] = 3888,
  [SMALL_STATE(225)] = 3895,
  [SMALL_STATE(226)] = 3902,
  [SMALL_STATE(227)] = 3907,
  [SMALL_STATE(228)] = 3914,
  [SMALL_STATE(229)] = 3921,
  [SMALL_STATE(230)] = 3928,
  [SMALL_STATE(231)] = 3935,
  [SMALL_STATE(232)] = 3942,
  [SMALL_STATE(233)] = 3947,
  [SMALL_STATE(234)] = 3954,
  [SMALL_STATE(235)] = 3961,
  [SMALL_STATE(236)] = 3968,
  [SMALL_STATE(237)] = 3975,
  [SMALL_STATE(238)] = 3982,
  [SMALL_STATE(239)] = 3987,
  [SMALL_STATE(240)] = 3994,
  [SMALL_STATE(241)] = 4001,
  [SMALL_STATE(242)] = 4008,
  [SMALL_STATE(243)] = 4015,
  [SMALL_STATE(244)] = 4022,
  [SMALL_STATE(245)] = 4029,
  [SMALL_STATE(246)] = 4036,
  [SMALL_STATE(247)] = 4043,
  [SMALL_STATE(248)] = 4050,
  [SMALL_STATE(249)] = 4054,
  [SMALL_STATE(250)] = 4058,
  [SMALL_STATE(251)] = 4062,
  [SMALL_STATE(252)] = 4066,
  [SMALL_STATE(253)] = 4070,
  [SMALL_STATE(254)] = 4074,
  [SMALL_STATE(255)] = 4078,
  [SMALL_STATE(256)] = 4082,
  [SMALL_STATE(257)] = 4086,
  [SMALL_STATE(258)] = 4090,
  [SMALL_STATE(259)] = 4094,
  [SMALL_STATE(260)] = 4098,
  [SMALL_STATE(261)] = 4102,
  [SMALL_STATE(262)] = 4106,
  [SMALL_STATE(263)] = 4110,
  [SMALL_STATE(264)] = 4114,
  [SMALL_STATE(265)] = 4118,
  [SMALL_STATE(266)] = 4122,
  [SMALL_STATE(267)] = 4126,
  [SMALL_STATE(268)] = 4130,
  [SMALL_STATE(269)] = 4134,
  [SMALL_STATE(270)] = 4138,
  [SMALL_STATE(271)] = 4142,
  [SMALL_STATE(272)] = 4146,
  [SMALL_STATE(273)] = 4150,
  [SMALL_STATE(274)] = 4154,
  [SMALL_STATE(275)] = 4158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 16),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 16),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 24),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 24),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 25),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 25),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 16),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 16),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 19),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 19),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 17),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 17),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 22),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 22),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 23),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 23),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 29),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 29),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_line, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 16),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 16),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 31),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 31),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 14),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 14),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 20),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 20),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 10),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 15),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 18),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 21),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 17),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 26),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 27),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 22),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 28),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 23),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 30),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 32),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 29),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 33),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 34),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 8),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 8),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 8),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 9),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 10),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 6),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 11),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 11), SHIFT_REPEAT(144),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 13),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 13), SHIFT_REPEAT(191),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 16),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter_comment, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 35),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 16),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 7),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 12),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 14),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 7),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 20),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_kind, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [566] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
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
