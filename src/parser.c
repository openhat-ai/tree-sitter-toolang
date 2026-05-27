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
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  sym_optional_marker = 36,
  sym_arrow = 37,
  sym_colon = 38,
  sym_lparen = 39,
  sym_rparen = 40,
  sym_comma = 41,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 42,
  sym_frontmatter_delimiter = 43,
  sym_cap_uri = 44,
  sym_cap_shorthand = 45,
  sym_bare_value = 46,
  sym_type_name = 47,
  sym_value_name = 48,
  sym_inline_text = 49,
  sym_indented_raw_text = 50,
  sym_fenced_raw_text = 51,
  sym_source_file = 52,
  sym_item = 53,
  sym_newline = 54,
  sym_blank_line = 55,
  sym_comment_line = 56,
  sym_line_end = 57,
  sym_use = 58,
  sym_type = 59,
  sym_base_type = 60,
  sym_builtin_type = 61,
  sym_user_type = 62,
  sym_type_suffix = 63,
  sym_struct = 64,
  sym_struct_name = 65,
  sym_struct_body = 66,
  sym_field = 67,
  sym_field_name = 68,
  sym_psyche = 69,
  sym_skill = 70,
  sym_service = 71,
  sym_prompt = 72,
  sym_cap_name = 73,
  sym_cap_ref = 74,
  sym_cap_body = 75,
  sym_cap_indented = 76,
  sym_cap_markdown = 77,
  sym_cap_indented_content_line = 78,
  sym_cap_fenced_content_line = 79,
  sym_frontmatter = 80,
  sym_property_eq = 81,
  sym_property_colon = 82,
  sym_frontmatter_comment = 83,
  sym_property_key = 84,
  sym_property_value = 85,
  sym_instruct = 86,
  sym_instruct_name = 87,
  sym_instruct_body = 88,
  sym_context = 89,
  sym_context_name = 90,
  sym_context_body = 91,
  sym_block_indented = 92,
  sym_block_fenced = 93,
  sym_block_indented_content_line = 94,
  sym_block_fenced_content_line = 95,
  sym_thunk = 96,
  sym_thunk_name = 97,
  sym_thunk_body = 98,
  sym_params = 99,
  sym_param = 100,
  sym_param_name = 101,
  sym_directive = 102,
  sym_directive_key = 103,
  sym_directive_op = 104,
  sym_directive_csv = 105,
  sym__template_block_section = 106,
  sym__message_block = 107,
  sym_context_block = 108,
  sym_instruct_block = 109,
  sym_message_block = 110,
  sym_context_block_kind = 111,
  sym_instruct_block_kind = 112,
  sym_message_block_kind = 113,
  sym_block_value = 114,
  sym_block_inline = 115,
  sym_block_name = 116,
  sym_block_content_inline = 117,
  sym_psyche_keyword = 118,
  sym_skill_keyword = 119,
  sym_service_keyword = 120,
  sym_prompt_keyword = 121,
  sym_context_keyword = 122,
  sym_instruct_keyword = 123,
  sym_assign_operator = 124,
  sym_fence_open = 125,
  sym_fence_close = 126,
  sym_cap_kind = 127,
  aux_sym_source_file_repeat1 = 128,
  aux_sym_type_repeat1 = 129,
  aux_sym_struct_body_repeat1 = 130,
  aux_sym_cap_indented_repeat1 = 131,
  aux_sym_cap_markdown_repeat1 = 132,
  aux_sym_frontmatter_repeat1 = 133,
  aux_sym_block_indented_repeat1 = 134,
  aux_sym_block_fenced_repeat1 = 135,
  aux_sym_thunk_body_repeat1 = 136,
  aux_sym_thunk_body_repeat2 = 137,
  aux_sym_params_repeat1 = 138,
  aux_sym_directive_csv_repeat1 = 139,
  aux_sym__template_block_section_repeat1 = 140,
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
  [sym__template_block_section] = "_template_block_section",
  [sym__message_block] = "_message_block",
  [sym_context_block] = "block",
  [sym_instruct_block] = "block",
  [sym_message_block] = "block",
  [sym_context_block_kind] = "context_block_kind",
  [sym_instruct_block_kind] = "instruct_block_kind",
  [sym_message_block_kind] = "message_block_kind",
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
  [aux_sym__template_block_section_repeat1] = "_template_block_section_repeat1",
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
  [sym__template_block_section] = sym__template_block_section,
  [sym__message_block] = sym__message_block,
  [sym_context_block] = sym_context_block,
  [sym_instruct_block] = sym_context_block,
  [sym_message_block] = sym_context_block,
  [sym_context_block_kind] = sym_context_block_kind,
  [sym_instruct_block_kind] = sym_instruct_block_kind,
  [sym_message_block_kind] = sym_message_block_kind,
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
  [aux_sym__template_block_section_repeat1] = aux_sym__template_block_section_repeat1,
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
  [sym__template_block_section] = {
    .visible = false,
    .named = true,
  },
  [sym__message_block] = {
    .visible = false,
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
  [sym_message_block] = {
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
  [sym_message_block_kind] = {
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
  [aux_sym__template_block_section_repeat1] = {
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
  [38] = 29,
  [39] = 34,
  [40] = 33,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 17,
  [46] = 19,
  [47] = 15,
  [48] = 14,
  [49] = 14,
  [50] = 17,
  [51] = 19,
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
  [62] = 16,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 15,
  [67] = 67,
  [68] = 68,
  [69] = 17,
  [70] = 19,
  [71] = 15,
  [72] = 14,
  [73] = 19,
  [74] = 17,
  [75] = 16,
  [76] = 19,
  [77] = 77,
  [78] = 14,
  [79] = 44,
  [80] = 80,
  [81] = 15,
  [82] = 14,
  [83] = 17,
  [84] = 15,
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
  [127] = 127,
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
  [184] = 17,
  [185] = 185,
  [186] = 15,
  [187] = 14,
  [188] = 17,
  [189] = 14,
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
  [203] = 15,
  [204] = 204,
  [205] = 205,
  [206] = 17,
  [207] = 15,
  [208] = 14,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 213,
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
  [237] = 213,
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
  [249] = 213,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 213,
  [254] = 215,
  [255] = 213,
  [256] = 213,
  [257] = 213,
  [258] = 213,
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
  [290] = 290,
  [291] = 291,
  [292] = 292,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 127,
        '\r', 1,
        '#', 129,
        '(', 181,
        ')', 182,
        '+', 14,
        ',', 183,
        '-', 8,
        ':', 180,
        '=', 145,
        '?', 178,
        'B', 209,
        'J', 212,
        'M', 200,
        'N', 215,
        'T', 197,
        '[', 15,
        '`', 17,
        'a', 94,
        'c', 78,
        'd', 32,
        'h', 18,
        'i', 73,
        'm', 29,
        'n', 81,
        'p', 85,
        'r', 33,
        's', 34,
        't', 49,
        'u', 95,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(127);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 127,
        '\r', 1,
        '#', 129,
        '`', 271,
        'd', 228,
        'n', 246,
        '\t', 269,
        '\f', 269,
        ' ', 269,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '>') ADVANCE(179);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '>') ADVANCE(179);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(119);
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
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(135);
      END_STATE();
    case 16:
      if (lookahead == '`') ADVANCE(184);
      END_STATE();
    case 17:
      if (lookahead == '`') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(53);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(57);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 111:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 113:
      if (lookahead == 'x') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 116:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(117);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(273);
      END_STATE();
    case 119:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 120:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\f') SKIP(120);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 121:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\f') SKIP(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 122:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\f') SKIP(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 123:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 127,
        '\r', 1,
        '#', 7,
        'a', 94,
        'c', 78,
        'h', 18,
        'i', 73,
        'm', 76,
        'p', 85,
        'r', 33,
        's', 34,
        't', 49,
        'u', 95,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(123);
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 127,
        '\r', 1,
        '#', 7,
        'a', 94,
        'c', 78,
        'i', 73,
        'p', 86,
        's', 44,
        't', 50,
        'u', 95,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 127,
        '\r', 1,
        '#', 7,
        'c', 245,
        'i', 242,
        'p', 249,
        's', 223,
        't', 231,
        'u', 252,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_comment_line_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_block_language);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_recall);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_instruct);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_instruct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_cap_uri);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_cap_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '/' ||
          lookahead == '@' ||
          lookahead == '_') ADVANCE(191);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(192);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (lookahead == '/') ADVANCE(189);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_cap_shorthand);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_bare_value);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'g') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'k') ADVANCE(233);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'k') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'v') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'x') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == 'y') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_value_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_inline_text);
      ADVANCE_MAP(
        '\n', 127,
        '\r', 1,
        '#', 129,
        '`', 271,
        'd', 228,
        'n', 246,
        '\t', 269,
        '\f', 269,
        ' ', 269,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '`') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(273);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 127,
        '\f', 274,
        '\r', 1,
        '#', 277,
        'a', 315,
        'c', 305,
        'i', 302,
        'p', 309,
        's', 286,
        't', 289,
        'u', 312,
        '\t', 274,
        ' ', 274,
      );
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 127,
        '\f', 275,
        '\r', 1,
        '#', 277,
        'c', 245,
        'i', 242,
        'p', 249,
        's', 223,
        't', 231,
        'u', 252,
        '\t', 275,
        ' ', 275,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_indented_raw_text);
      ADVANCE_MAP(
        '\n', 127,
        '\f', 276,
        '\r', 1,
        '#', 277,
        'c', 305,
        'i', 302,
        'p', 309,
        's', 286,
        't', 290,
        'u', 317,
        '\t', 276,
        ' ', 276,
      );
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'k') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'u') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'v') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'x') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead == 'y') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_indented_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_fenced_raw_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(339);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 124},
  [2] = {.lex_state = 123},
  [3] = {.lex_state = 124},
  [4] = {.lex_state = 124},
  [5] = {.lex_state = 123},
  [6] = {.lex_state = 123},
  [7] = {.lex_state = 123},
  [8] = {.lex_state = 123},
  [9] = {.lex_state = 123},
  [10] = {.lex_state = 123},
  [11] = {.lex_state = 123},
  [12] = {.lex_state = 123},
  [13] = {.lex_state = 123},
  [14] = {.lex_state = 123},
  [15] = {.lex_state = 123},
  [16] = {.lex_state = 123},
  [17] = {.lex_state = 123},
  [18] = {.lex_state = 123},
  [19] = {.lex_state = 123},
  [20] = {.lex_state = 124},
  [21] = {.lex_state = 124},
  [22] = {.lex_state = 124},
  [23] = {.lex_state = 124},
  [24] = {.lex_state = 124},
  [25] = {.lex_state = 124},
  [26] = {.lex_state = 124},
  [27] = {.lex_state = 124},
  [28] = {.lex_state = 124},
  [29] = {.lex_state = 120},
  [30] = {.lex_state = 121},
  [31] = {.lex_state = 121},
  [32] = {.lex_state = 121},
  [33] = {.lex_state = 120},
  [34] = {.lex_state = 120},
  [35] = {.lex_state = 124},
  [36] = {.lex_state = 125},
  [37] = {.lex_state = 125},
  [38] = {.lex_state = 122},
  [39] = {.lex_state = 122},
  [40] = {.lex_state = 122},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 120},
  [45] = {.lex_state = 120},
  [46] = {.lex_state = 120},
  [47] = {.lex_state = 120},
  [48] = {.lex_state = 120},
  [49] = {.lex_state = 124},
  [50] = {.lex_state = 124},
  [51] = {.lex_state = 124},
  [52] = {.lex_state = 124},
  [53] = {.lex_state = 124},
  [54] = {.lex_state = 124},
  [55] = {.lex_state = 124},
  [56] = {.lex_state = 124},
  [57] = {.lex_state = 124},
  [58] = {.lex_state = 124},
  [59] = {.lex_state = 124},
  [60] = {.lex_state = 124},
  [61] = {.lex_state = 124},
  [62] = {.lex_state = 124},
  [63] = {.lex_state = 124},
  [64] = {.lex_state = 124},
  [65] = {.lex_state = 124},
  [66] = {.lex_state = 124},
  [67] = {.lex_state = 121},
  [68] = {.lex_state = 121},
  [69] = {.lex_state = 121},
  [70] = {.lex_state = 121},
  [71] = {.lex_state = 121},
  [72] = {.lex_state = 121},
  [73] = {.lex_state = 125},
  [74] = {.lex_state = 122},
  [75] = {.lex_state = 125},
  [76] = {.lex_state = 122},
  [77] = {.lex_state = 125},
  [78] = {.lex_state = 125},
  [79] = {.lex_state = 122},
  [80] = {.lex_state = 125},
  [81] = {.lex_state = 122},
  [82] = {.lex_state = 122},
  [83] = {.lex_state = 125},
  [84] = {.lex_state = 125},
  [85] = {.lex_state = 124},
  [86] = {.lex_state = 124},
  [87] = {.lex_state = 124},
  [88] = {.lex_state = 124},
  [89] = {.lex_state = 124},
  [90] = {.lex_state = 124},
  [91] = {.lex_state = 124},
  [92] = {.lex_state = 124},
  [93] = {.lex_state = 124},
  [94] = {.lex_state = 124},
  [95] = {.lex_state = 124},
  [96] = {.lex_state = 124},
  [97] = {.lex_state = 124},
  [98] = {.lex_state = 124},
  [99] = {.lex_state = 124},
  [100] = {.lex_state = 124},
  [101] = {.lex_state = 124},
  [102] = {.lex_state = 124},
  [103] = {.lex_state = 124},
  [104] = {.lex_state = 124},
  [105] = {.lex_state = 124},
  [106] = {.lex_state = 124},
  [107] = {.lex_state = 124},
  [108] = {.lex_state = 124},
  [109] = {.lex_state = 124},
  [110] = {.lex_state = 124},
  [111] = {.lex_state = 124},
  [112] = {.lex_state = 124},
  [113] = {.lex_state = 124},
  [114] = {.lex_state = 124},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 124},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
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
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 116},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 117},
  [227] = {.lex_state = 118},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 116},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 118},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 3},
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
  [247] = {.lex_state = 124},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 117},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 118},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 117},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 3},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
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
    [sym_source_file] = STATE(266),
    [sym_item] = STATE(3),
    [sym_newline] = STATE(51),
    [sym_blank_line] = STATE(3),
    [sym_comment_line] = STATE(3),
    [sym_use] = STATE(98),
    [sym_struct] = STATE(98),
    [sym_psyche] = STATE(98),
    [sym_skill] = STATE(98),
    [sym_service] = STATE(98),
    [sym_prompt] = STATE(98),
    [sym_instruct] = STATE(98),
    [sym_context] = STATE(98),
    [sym_thunk] = STATE(98),
    [sym_psyche_keyword] = STATE(248),
    [sym_skill_keyword] = STATE(250),
    [sym_service_keyword] = STATE(216),
    [sym_prompt_keyword] = STATE(223),
    [sym_context_keyword] = STATE(209),
    [sym_instruct_keyword] = STATE(212),
    [aux_sym_source_file_repeat1] = STATE(3),
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
  [0] = 18,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(41), 1,
      anon_sym_tool,
    STATE(19), 1,
      sym_newline,
    STATE(25), 1,
      sym_instruct_block,
    STATE(26), 1,
      sym_context_block,
    STATE(165), 1,
      sym_directive_key,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(270), 1,
      sym_message_block_kind,
    STATE(290), 1,
      sym_context_block_kind,
    ACTIONS(39), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(23), 3,
      sym__template_block_section,
      sym__message_block,
      sym_message_block,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
    ACTIONS(43), 4,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    STATE(13), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [74] = 21,
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
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_newline,
    STATE(209), 1,
      sym_context_keyword,
    STATE(212), 1,
      sym_instruct_keyword,
    STATE(216), 1,
      sym_service_keyword,
    STATE(223), 1,
      sym_prompt_keyword,
    STATE(248), 1,
      sym_psyche_keyword,
    STATE(250), 1,
      sym_skill_keyword,
    STATE(4), 4,
      sym_item,
      sym_blank_line,
      sym_comment_line,
      aux_sym_source_file_repeat1,
    STATE(98), 9,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_context,
      sym_thunk,
  [149] = 21,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_newline_token1,
    ACTIONS(52), 1,
      aux_sym_comment_line_token1,
    ACTIONS(55), 1,
      anon_sym_context,
    ACTIONS(58), 1,
      anon_sym_instruct,
    ACTIONS(61), 1,
      sym_use_keyword,
    ACTIONS(64), 1,
      sym_struct_keyword,
    ACTIONS(67), 1,
      anon_sym_psyche,
    ACTIONS(70), 1,
      anon_sym_skill,
    ACTIONS(73), 1,
      anon_sym_service,
    ACTIONS(76), 1,
      anon_sym_prompt,
    ACTIONS(79), 1,
      sym_thunk_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(209), 1,
      sym_context_keyword,
    STATE(212), 1,
      sym_instruct_keyword,
    STATE(216), 1,
      sym_service_keyword,
    STATE(223), 1,
      sym_prompt_keyword,
    STATE(248), 1,
      sym_psyche_keyword,
    STATE(250), 1,
      sym_skill_keyword,
    STATE(4), 4,
      sym_item,
      sym_blank_line,
      sym_comment_line,
      aux_sym_source_file_repeat1,
    STATE(98), 9,
      sym_use,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_instruct,
      sym_context,
      sym_thunk,
  [224] = 17,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(41), 1,
      anon_sym_tool,
    STATE(19), 1,
      sym_newline,
    STATE(25), 1,
      sym_instruct_block,
    STATE(26), 1,
      sym_context_block,
    STATE(107), 1,
      sym_thunk_body,
    STATE(165), 1,
      sym_directive_key,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(270), 1,
      sym_message_block_kind,
    STATE(290), 1,
      sym_context_block_kind,
    ACTIONS(39), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(21), 3,
      sym__template_block_section,
      sym__message_block,
      sym_message_block,
    STATE(2), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [289] = 17,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(41), 1,
      anon_sym_tool,
    STATE(19), 1,
      sym_newline,
    STATE(25), 1,
      sym_instruct_block,
    STATE(26), 1,
      sym_context_block,
    STATE(93), 1,
      sym_thunk_body,
    STATE(165), 1,
      sym_directive_key,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(270), 1,
      sym_message_block_kind,
    STATE(290), 1,
      sym_context_block_kind,
    ACTIONS(39), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(21), 3,
      sym__template_block_section,
      sym__message_block,
      sym_message_block,
    STATE(2), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [354] = 17,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(41), 1,
      anon_sym_tool,
    STATE(19), 1,
      sym_newline,
    STATE(25), 1,
      sym_instruct_block,
    STATE(26), 1,
      sym_context_block,
    STATE(114), 1,
      sym_thunk_body,
    STATE(165), 1,
      sym_directive_key,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(270), 1,
      sym_message_block_kind,
    STATE(290), 1,
      sym_context_block_kind,
    ACTIONS(39), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(21), 3,
      sym__template_block_section,
      sym__message_block,
      sym_message_block,
    STATE(2), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [419] = 17,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(41), 1,
      anon_sym_tool,
    STATE(19), 1,
      sym_newline,
    STATE(25), 1,
      sym_instruct_block,
    STATE(26), 1,
      sym_context_block,
    STATE(108), 1,
      sym_thunk_body,
    STATE(165), 1,
      sym_directive_key,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(270), 1,
      sym_message_block_kind,
    STATE(290), 1,
      sym_context_block_kind,
    ACTIONS(39), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(21), 3,
      sym__template_block_section,
      sym__message_block,
      sym_message_block,
    STATE(2), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [484] = 17,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(41), 1,
      anon_sym_tool,
    STATE(19), 1,
      sym_newline,
    STATE(25), 1,
      sym_instruct_block,
    STATE(26), 1,
      sym_context_block,
    STATE(90), 1,
      sym_thunk_body,
    STATE(165), 1,
      sym_directive_key,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(270), 1,
      sym_message_block_kind,
    STATE(290), 1,
      sym_context_block_kind,
    ACTIONS(39), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(21), 3,
      sym__template_block_section,
      sym__message_block,
      sym_message_block,
    STATE(2), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [549] = 17,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(41), 1,
      anon_sym_tool,
    STATE(19), 1,
      sym_newline,
    STATE(25), 1,
      sym_instruct_block,
    STATE(26), 1,
      sym_context_block,
    STATE(100), 1,
      sym_thunk_body,
    STATE(165), 1,
      sym_directive_key,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(270), 1,
      sym_message_block_kind,
    STATE(290), 1,
      sym_context_block_kind,
    ACTIONS(39), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(21), 3,
      sym__template_block_section,
      sym__message_block,
      sym_message_block,
    STATE(2), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [614] = 17,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(41), 1,
      anon_sym_tool,
    STATE(19), 1,
      sym_newline,
    STATE(25), 1,
      sym_instruct_block,
    STATE(26), 1,
      sym_context_block,
    STATE(94), 1,
      sym_thunk_body,
    STATE(165), 1,
      sym_directive_key,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(270), 1,
      sym_message_block_kind,
    STATE(290), 1,
      sym_context_block_kind,
    ACTIONS(39), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(21), 3,
      sym__template_block_section,
      sym__message_block,
      sym_message_block,
    STATE(2), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [679] = 17,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(31), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(41), 1,
      anon_sym_tool,
    STATE(19), 1,
      sym_newline,
    STATE(25), 1,
      sym_instruct_block,
    STATE(26), 1,
      sym_context_block,
    STATE(92), 1,
      sym_thunk_body,
    STATE(165), 1,
      sym_directive_key,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(270), 1,
      sym_message_block_kind,
    STATE(290), 1,
      sym_context_block_kind,
    ACTIONS(39), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(21), 3,
      sym__template_block_section,
      sym__message_block,
      sym_message_block,
    STATE(2), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(33), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [744] = 8,
    ACTIONS(84), 1,
      aux_sym_newline_token1,
    ACTIONS(87), 1,
      aux_sym_comment_line_token1,
    STATE(19), 1,
      sym_newline,
    STATE(165), 1,
      sym_directive_key,
    STATE(13), 4,
      sym_blank_line,
      sym_comment_line,
      sym_directive,
      aux_sym_thunk_body_repeat1,
    ACTIONS(93), 5,
      anon_sym_tool,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(82), 8,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
    ACTIONS(90), 8,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_hands,
      anon_sym_handoffs,
      anon_sym_recall,
  [790] = 2,
    ACTIONS(97), 5,
      anon_sym_tool,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(95), 18,
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
      anon_sym_recall,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [818] = 2,
    ACTIONS(101), 5,
      anon_sym_tool,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(99), 18,
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
      anon_sym_recall,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [846] = 2,
    ACTIONS(105), 5,
      anon_sym_tool,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(103), 18,
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
      anon_sym_recall,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [874] = 2,
    ACTIONS(109), 5,
      anon_sym_tool,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(107), 18,
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
      anon_sym_recall,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [902] = 2,
    ACTIONS(113), 5,
      anon_sym_tool,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(111), 18,
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
      anon_sym_recall,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [930] = 2,
    ACTIONS(117), 5,
      anon_sym_tool,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
    ACTIONS(115), 18,
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
      anon_sym_recall,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      sym_struct_keyword,
      anon_sym_prompt,
      sym_thunk_keyword,
  [958] = 8,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(121), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(270), 1,
      sym_message_block_kind,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(24), 5,
      sym_blank_line,
      sym_comment_line,
      sym__message_block,
      sym_message_block,
      aux_sym_thunk_body_repeat2,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [997] = 8,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(43), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(270), 1,
      sym_message_block_kind,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(20), 5,
      sym_blank_line,
      sym_comment_line,
      sym__message_block,
      sym_message_block,
      aux_sym_thunk_body_repeat2,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1036] = 8,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(125), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(270), 1,
      sym_message_block_kind,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(24), 5,
      sym_blank_line,
      sym_comment_line,
      sym__message_block,
      sym_message_block,
      aux_sym_thunk_body_repeat2,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1075] = 8,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(121), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(270), 1,
      sym_message_block_kind,
    ACTIONS(39), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(22), 5,
      sym_blank_line,
      sym_comment_line,
      sym__message_block,
      sym_message_block,
      aux_sym_thunk_body_repeat2,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1114] = 8,
    ACTIONS(129), 1,
      aux_sym_newline_token1,
    ACTIONS(132), 1,
      aux_sym_comment_line_token1,
    ACTIONS(138), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(270), 1,
      sym_message_block_kind,
    ACTIONS(135), 3,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
    STATE(24), 5,
      sym_blank_line,
      sym_comment_line,
      sym__message_block,
      sym_message_block,
      aux_sym_thunk_body_repeat2,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1153] = 9,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(142), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(52), 1,
      sym_context_block,
    STATE(290), 1,
      sym_context_block_kind,
    STATE(28), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym__template_block_section_repeat1,
    ACTIONS(140), 11,
      ts_builtin_sym_end,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1193] = 9,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(142), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(52), 1,
      sym_instruct_block,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(27), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym__template_block_section_repeat1,
    ACTIONS(140), 11,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1233] = 9,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(37), 1,
      anon_sym_instruct,
    ACTIONS(146), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(54), 1,
      sym_instruct_block,
    STATE(268), 1,
      sym_instruct_block_kind,
    STATE(35), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym__template_block_section_repeat1,
    ACTIONS(144), 11,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1273] = 9,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(7), 1,
      aux_sym_comment_line_token1,
    ACTIONS(35), 1,
      anon_sym_context,
    ACTIONS(146), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(54), 1,
      sym_context_block,
    STATE(290), 1,
      sym_context_block_kind,
    STATE(35), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym__template_block_section_repeat1,
    ACTIONS(144), 11,
      ts_builtin_sym_end,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1313] = 6,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    ACTIONS(154), 1,
      sym_indented_raw_text,
    STATE(46), 1,
      sym_newline,
    STATE(33), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(152), 13,
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
  [1346] = 8,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      aux_sym_newline_token1,
    ACTIONS(163), 1,
      sym_value_name,
    ACTIONS(166), 1,
      sym_indented_raw_text,
    STATE(70), 1,
      sym_newline,
    STATE(244), 1,
      sym_property_key,
    STATE(30), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(161), 10,
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
  [1383] = 8,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      aux_sym_newline_token1,
    ACTIONS(175), 1,
      sym_value_name,
    ACTIONS(177), 1,
      sym_indented_raw_text,
    STATE(70), 1,
      sym_newline,
    STATE(244), 1,
      sym_property_key,
    STATE(32), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(173), 10,
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
  [1420] = 8,
    ACTIONS(171), 1,
      aux_sym_newline_token1,
    ACTIONS(175), 1,
      sym_value_name,
    ACTIONS(177), 1,
      sym_indented_raw_text,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_newline,
    STATE(244), 1,
      sym_property_key,
    STATE(30), 4,
      sym_blank_line,
      sym_cap_indented_content_line,
      sym_property_eq,
      aux_sym_cap_indented_repeat1,
    ACTIONS(181), 10,
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
  [1457] = 6,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      aux_sym_newline_token1,
    ACTIONS(190), 1,
      sym_indented_raw_text,
    STATE(46), 1,
      sym_newline,
    STATE(33), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(188), 13,
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
  [1490] = 6,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    ACTIONS(154), 1,
      sym_indented_raw_text,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_newline,
    STATE(29), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(195), 13,
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
  [1523] = 6,
    ACTIONS(199), 1,
      aux_sym_newline_token1,
    ACTIONS(202), 1,
      aux_sym_comment_line_token1,
    ACTIONS(205), 1,
      sym_use_keyword,
    STATE(51), 1,
      sym_newline,
    STATE(35), 3,
      sym_blank_line,
      sym_comment_line,
      aux_sym__template_block_section_repeat1,
    ACTIONS(197), 12,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1555] = 8,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      aux_sym_comment_line_token1,
    ACTIONS(215), 1,
      sym_value_name,
    STATE(73), 1,
      sym_newline,
    STATE(222), 1,
      sym_field_name,
    STATE(37), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(213), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1591] = 8,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      aux_sym_newline_token1,
    ACTIONS(222), 1,
      aux_sym_comment_line_token1,
    ACTIONS(227), 1,
      sym_value_name,
    STATE(73), 1,
      sym_newline,
    STATE(222), 1,
      sym_field_name,
    STATE(37), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
    ACTIONS(225), 9,
      anon_sym_context,
      anon_sym_instruct,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1627] = 6,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      aux_sym_newline_token1,
    ACTIONS(232), 1,
      sym_indented_raw_text,
    STATE(76), 1,
      sym_newline,
    STATE(40), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(152), 10,
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
  [1657] = 6,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      aux_sym_newline_token1,
    ACTIONS(232), 1,
      sym_indented_raw_text,
    STATE(76), 1,
      sym_newline,
    STATE(38), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(195), 10,
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
  [1687] = 6,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      aux_sym_newline_token1,
    ACTIONS(237), 1,
      sym_indented_raw_text,
    STATE(76), 1,
      sym_newline,
    STATE(40), 3,
      sym_blank_line,
      sym_block_indented_content_line,
      aux_sym_block_indented_repeat1,
    ACTIONS(188), 10,
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
  [1717] = 12,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    ACTIONS(240), 1,
      sym_inline_comment,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      sym_inline_text,
    STATE(34), 1,
      sym_line_end,
    STATE(47), 1,
      sym_newline,
    STATE(57), 1,
      sym_block_value,
    STATE(158), 1,
      sym_fence_open,
    STATE(166), 1,
      sym_block_name,
    STATE(167), 1,
      sym_block_content_inline,
    ACTIONS(242), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(55), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [1758] = 12,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    ACTIONS(240), 1,
      sym_inline_comment,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      sym_inline_text,
    STATE(34), 1,
      sym_line_end,
    STATE(47), 1,
      sym_newline,
    STATE(56), 1,
      sym_block_value,
    STATE(158), 1,
      sym_fence_open,
    STATE(166), 1,
      sym_block_name,
    STATE(167), 1,
      sym_block_content_inline,
    ACTIONS(242), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(55), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [1799] = 12,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    ACTIONS(240), 1,
      sym_inline_comment,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      sym_inline_text,
    STATE(34), 1,
      sym_line_end,
    STATE(47), 1,
      sym_newline,
    STATE(58), 1,
      sym_block_value,
    STATE(158), 1,
      sym_fence_open,
    STATE(166), 1,
      sym_block_name,
    STATE(167), 1,
      sym_block_content_inline,
    ACTIONS(242), 3,
      anon_sym_default,
      anon_sym_none,
      sym_value_name,
    STATE(55), 3,
      sym_block_indented,
      sym_block_fenced,
      sym_block_inline,
  [1840] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 15,
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
  [1861] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 15,
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
  [1882] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 15,
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
  [1903] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 15,
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
  [1924] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 15,
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
  [1945] = 2,
    ACTIONS(97), 1,
      sym_use_keyword,
    ACTIONS(95), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1965] = 2,
    ACTIONS(109), 1,
      sym_use_keyword,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [1985] = 2,
    ACTIONS(117), 1,
      sym_use_keyword,
    ACTIONS(115), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2005] = 2,
    ACTIONS(146), 1,
      sym_use_keyword,
    ACTIONS(144), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2025] = 2,
    ACTIONS(254), 1,
      sym_use_keyword,
    ACTIONS(252), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2045] = 2,
    ACTIONS(258), 1,
      sym_use_keyword,
    ACTIONS(256), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2065] = 2,
    ACTIONS(262), 1,
      sym_use_keyword,
    ACTIONS(260), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2085] = 2,
    ACTIONS(266), 1,
      sym_use_keyword,
    ACTIONS(264), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2105] = 2,
    ACTIONS(270), 1,
      sym_use_keyword,
    ACTIONS(268), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2125] = 2,
    ACTIONS(274), 1,
      sym_use_keyword,
    ACTIONS(272), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2145] = 2,
    ACTIONS(278), 1,
      sym_use_keyword,
    ACTIONS(276), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2165] = 2,
    ACTIONS(282), 1,
      sym_use_keyword,
    ACTIONS(280), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2185] = 2,
    ACTIONS(286), 1,
      sym_use_keyword,
    ACTIONS(284), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2205] = 2,
    ACTIONS(105), 1,
      sym_use_keyword,
    ACTIONS(103), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2225] = 2,
    ACTIONS(290), 1,
      sym_use_keyword,
    ACTIONS(288), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2245] = 2,
    ACTIONS(294), 1,
      sym_use_keyword,
    ACTIONS(292), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2265] = 2,
    ACTIONS(298), 1,
      sym_use_keyword,
    ACTIONS(296), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2285] = 2,
    ACTIONS(101), 1,
      sym_use_keyword,
    ACTIONS(99), 14,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      anon_sym_context,
      anon_sym_instruct,
      anon_sym_user,
      anon_sym_assistant,
      anon_sym_tool,
      sym_struct_keyword,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      sym_thunk_keyword,
  [2305] = 2,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 13,
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
  [2324] = 2,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 13,
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
  [2343] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 13,
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
  [2362] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 13,
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
  [2381] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 13,
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
  [2400] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 13,
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
  [2419] = 2,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(117), 10,
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
  [2437] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 12,
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
  [2455] = 2,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(105), 10,
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
  [2473] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 12,
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
  [2491] = 2,
    ACTIONS(308), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(310), 10,
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
  [2509] = 2,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(97), 10,
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
  [2527] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 12,
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
  [2545] = 2,
    ACTIONS(312), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(314), 10,
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
  [2563] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 12,
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
  [2581] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 12,
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
  [2599] = 2,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(109), 10,
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
  [2617] = 2,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
    ACTIONS(101), 10,
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
  [2635] = 1,
    ACTIONS(316), 12,
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
  [2650] = 1,
    ACTIONS(318), 12,
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
  [2665] = 1,
    ACTIONS(320), 12,
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
  [2680] = 1,
    ACTIONS(322), 12,
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
  [2695] = 1,
    ACTIONS(324), 12,
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
  [2710] = 1,
    ACTIONS(326), 12,
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
  [2725] = 1,
    ACTIONS(328), 12,
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
  [2740] = 1,
    ACTIONS(330), 12,
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
  [2755] = 1,
    ACTIONS(332), 12,
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
  [2770] = 1,
    ACTIONS(334), 12,
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
  [2785] = 1,
    ACTIONS(336), 12,
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
  [2800] = 1,
    ACTIONS(338), 12,
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
  [2815] = 1,
    ACTIONS(340), 12,
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
  [2830] = 1,
    ACTIONS(342), 12,
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
  [2845] = 1,
    ACTIONS(344), 12,
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
  [2860] = 1,
    ACTIONS(346), 12,
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
  [2875] = 1,
    ACTIONS(348), 12,
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
  [2890] = 1,
    ACTIONS(350), 12,
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
  [2905] = 1,
    ACTIONS(352), 12,
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
  [2920] = 1,
    ACTIONS(354), 12,
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
  [2935] = 1,
    ACTIONS(356), 12,
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
  [2950] = 1,
    ACTIONS(358), 12,
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
  [2965] = 1,
    ACTIONS(360), 12,
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
  [2980] = 1,
    ACTIONS(362), 12,
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
  [2995] = 1,
    ACTIONS(364), 12,
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
  [3010] = 1,
    ACTIONS(366), 12,
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
  [3025] = 1,
    ACTIONS(368), 12,
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
  [3040] = 1,
    ACTIONS(370), 12,
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
  [3055] = 1,
    ACTIONS(372), 12,
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
  [3070] = 1,
    ACTIONS(374), 12,
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
  [3085] = 5,
    ACTIONS(378), 1,
      sym_type_name,
    STATE(135), 1,
      sym_base_type,
    STATE(218), 1,
      sym_type,
    STATE(151), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(376), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [3106] = 7,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      aux_sym_comment_line_token1,
    ACTIONS(380), 1,
      sym_value_name,
    STATE(73), 1,
      sym_newline,
    STATE(88), 1,
      sym_struct_body,
    STATE(222), 1,
      sym_field_name,
    STATE(36), 4,
      sym_blank_line,
      sym_comment_line,
      sym_field,
      aux_sym_struct_body_repeat1,
  [3131] = 5,
    ACTIONS(378), 1,
      sym_type_name,
    STATE(135), 1,
      sym_base_type,
    STATE(286), 1,
      sym_type,
    STATE(151), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(376), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [3152] = 5,
    ACTIONS(378), 1,
      sym_type_name,
    STATE(135), 1,
      sym_base_type,
    STATE(263), 1,
      sym_type,
    STATE(151), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(376), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [3173] = 5,
    ACTIONS(378), 1,
      sym_type_name,
    STATE(135), 1,
      sym_base_type,
    STATE(275), 1,
      sym_type,
    STATE(151), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(376), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [3194] = 5,
    ACTIONS(378), 1,
      sym_type_name,
    STATE(135), 1,
      sym_base_type,
    STATE(176), 1,
      sym_type,
    STATE(151), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(376), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [3215] = 5,
    ACTIONS(378), 1,
      sym_type_name,
    STATE(135), 1,
      sym_base_type,
    STATE(239), 1,
      sym_type,
    STATE(151), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(376), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [3236] = 5,
    ACTIONS(378), 1,
      sym_type_name,
    STATE(135), 1,
      sym_base_type,
    STATE(292), 1,
      sym_type,
    STATE(151), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(376), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [3257] = 5,
    ACTIONS(378), 1,
      sym_type_name,
    STATE(135), 1,
      sym_base_type,
    STATE(172), 1,
      sym_type,
    STATE(151), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(376), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Message,
  [3278] = 8,
    ACTIONS(382), 1,
      aux_sym_newline_token1,
    ACTIONS(384), 1,
      sym_inline_comment,
    ACTIONS(386), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(39), 1,
      sym_line_end,
    STATE(81), 1,
      sym_newline,
    STATE(99), 1,
      sym_context_body,
    STATE(158), 1,
      sym_fence_open,
    STATE(105), 2,
      sym_block_indented,
      sym_block_fenced,
  [3304] = 8,
    ACTIONS(382), 1,
      aux_sym_newline_token1,
    ACTIONS(384), 1,
      sym_inline_comment,
    ACTIONS(386), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(39), 1,
      sym_line_end,
    STATE(81), 1,
      sym_newline,
    STATE(85), 1,
      sym_instruct_body,
    STATE(158), 1,
      sym_fence_open,
    STATE(111), 2,
      sym_block_indented,
      sym_block_fenced,
  [3330] = 8,
    ACTIONS(386), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    ACTIONS(390), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
    STATE(71), 1,
      sym_newline,
    STATE(112), 1,
      sym_cap_body,
    STATE(160), 1,
      sym_fence_open,
    STATE(113), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [3356] = 8,
    ACTIONS(382), 1,
      aux_sym_newline_token1,
    ACTIONS(384), 1,
      sym_inline_comment,
    ACTIONS(386), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(39), 1,
      sym_line_end,
    STATE(81), 1,
      sym_newline,
    STATE(109), 1,
      sym_instruct_body,
    STATE(158), 1,
      sym_fence_open,
    STATE(111), 2,
      sym_block_indented,
      sym_block_fenced,
  [3382] = 8,
    ACTIONS(386), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    ACTIONS(390), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
    STATE(71), 1,
      sym_newline,
    STATE(86), 1,
      sym_cap_body,
    STATE(160), 1,
      sym_fence_open,
    STATE(113), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [3408] = 8,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(396), 1,
      sym_frontmatter_delimiter,
    ACTIONS(398), 1,
      sym_fenced_raw_text,
    STATE(95), 1,
      sym_fence_close,
    STATE(148), 1,
      sym_frontmatter,
    STATE(211), 1,
      sym_newline,
    STATE(137), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3434] = 8,
    ACTIONS(386), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    ACTIONS(390), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
    STATE(71), 1,
      sym_newline,
    STATE(101), 1,
      sym_cap_body,
    STATE(160), 1,
      sym_fence_open,
    STATE(113), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [3460] = 8,
    ACTIONS(382), 1,
      aux_sym_newline_token1,
    ACTIONS(384), 1,
      sym_inline_comment,
    ACTIONS(386), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(39), 1,
      sym_line_end,
    STATE(81), 1,
      sym_newline,
    STATE(110), 1,
      sym_context_body,
    STATE(158), 1,
      sym_fence_open,
    STATE(105), 2,
      sym_block_indented,
      sym_block_fenced,
  [3486] = 8,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(396), 1,
      sym_frontmatter_delimiter,
    ACTIONS(398), 1,
      sym_fenced_raw_text,
    STATE(91), 1,
      sym_fence_close,
    STATE(146), 1,
      sym_frontmatter,
    STATE(211), 1,
      sym_newline,
    STATE(138), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3512] = 8,
    ACTIONS(386), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    ACTIONS(390), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_line_end,
    STATE(71), 1,
      sym_newline,
    STATE(89), 1,
      sym_cap_body,
    STATE(160), 1,
      sym_fence_open,
    STATE(113), 2,
      sym_cap_indented,
      sym_cap_markdown,
  [3538] = 4,
    ACTIONS(402), 1,
      sym_array_suffix,
    STATE(136), 1,
      aux_sym_type_repeat1,
    STATE(155), 1,
      sym_type_suffix,
    ACTIONS(400), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3555] = 4,
    ACTIONS(402), 1,
      sym_array_suffix,
    STATE(134), 1,
      aux_sym_type_repeat1,
    STATE(155), 1,
      sym_type_suffix,
    ACTIONS(404), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3572] = 4,
    ACTIONS(408), 1,
      sym_array_suffix,
    STATE(136), 1,
      aux_sym_type_repeat1,
    STATE(155), 1,
      sym_type_suffix,
    ACTIONS(406), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3589] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(398), 1,
      sym_fenced_raw_text,
    STATE(103), 1,
      sym_fence_close,
    STATE(211), 1,
      sym_newline,
    STATE(150), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3609] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(398), 1,
      sym_fenced_raw_text,
    STATE(97), 1,
      sym_fence_close,
    STATE(211), 1,
      sym_newline,
    STATE(150), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3629] = 5,
    ACTIONS(411), 1,
      aux_sym_comment_line_token1,
    ACTIONS(413), 1,
      sym_frontmatter_delimiter,
    ACTIONS(415), 1,
      sym_value_name,
    STATE(278), 1,
      sym_property_key,
    STATE(140), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [3647] = 5,
    ACTIONS(411), 1,
      aux_sym_comment_line_token1,
    ACTIONS(415), 1,
      sym_value_name,
    ACTIONS(417), 1,
      sym_frontmatter_delimiter,
    STATE(278), 1,
      sym_property_key,
    STATE(142), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [3665] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(419), 1,
      sym_fenced_raw_text,
    STATE(53), 1,
      sym_fence_close,
    STATE(204), 1,
      sym_newline,
    STATE(145), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3685] = 5,
    ACTIONS(421), 1,
      aux_sym_comment_line_token1,
    ACTIONS(424), 1,
      sym_frontmatter_delimiter,
    ACTIONS(426), 1,
      sym_value_name,
    STATE(278), 1,
      sym_property_key,
    STATE(142), 3,
      sym_property_colon,
      sym_frontmatter_comment,
      aux_sym_frontmatter_repeat1,
  [3703] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(419), 1,
      sym_fenced_raw_text,
    STATE(59), 1,
      sym_fence_close,
    STATE(204), 1,
      sym_newline,
    STATE(149), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3723] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(398), 1,
      sym_fenced_raw_text,
    STATE(104), 1,
      sym_fence_close,
    STATE(211), 1,
      sym_newline,
    STATE(150), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3743] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(419), 1,
      sym_fenced_raw_text,
    STATE(61), 1,
      sym_fence_close,
    STATE(204), 1,
      sym_newline,
    STATE(153), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3763] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(398), 1,
      sym_fenced_raw_text,
    STATE(96), 1,
      sym_fence_close,
    STATE(211), 1,
      sym_newline,
    STATE(144), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3783] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(398), 1,
      sym_fenced_raw_text,
    STATE(106), 1,
      sym_fence_close,
    STATE(211), 1,
      sym_newline,
    STATE(150), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3803] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(398), 1,
      sym_fenced_raw_text,
    STATE(102), 1,
      sym_fence_close,
    STATE(211), 1,
      sym_newline,
    STATE(147), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3823] = 6,
    ACTIONS(392), 1,
      aux_sym_newline_token1,
    ACTIONS(394), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(419), 1,
      sym_fenced_raw_text,
    STATE(65), 1,
      sym_fence_close,
    STATE(204), 1,
      sym_newline,
    STATE(153), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3843] = 5,
    ACTIONS(429), 1,
      aux_sym_newline_token1,
    ACTIONS(432), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(434), 1,
      sym_fenced_raw_text,
    STATE(211), 1,
      sym_newline,
    STATE(150), 2,
      sym_cap_fenced_content_line,
      aux_sym_cap_markdown_repeat1,
  [3860] = 1,
    ACTIONS(437), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3869] = 1,
    ACTIONS(439), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3878] = 5,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    ACTIONS(444), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(446), 1,
      sym_fenced_raw_text,
    STATE(204), 1,
      sym_newline,
    STATE(153), 2,
      sym_block_fenced_content_line,
      aux_sym_block_fenced_repeat1,
  [3895] = 1,
    ACTIONS(449), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3904] = 1,
    ACTIONS(451), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3913] = 1,
    ACTIONS(453), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3922] = 6,
    ACTIONS(455), 1,
      sym_arrow,
    ACTIONS(457), 1,
      sym_colon,
    ACTIONS(459), 1,
      sym_lparen,
    ACTIONS(461), 1,
      sym_value_name,
    STATE(183), 1,
      sym_thunk_name,
    STATE(245), 1,
      sym_params,
  [3941] = 5,
    ACTIONS(463), 1,
      aux_sym_newline_token1,
    ACTIONS(465), 1,
      sym_inline_comment,
    ACTIONS(467), 1,
      sym_block_language,
    STATE(141), 1,
      sym_line_end,
    STATE(207), 1,
      sym_newline,
  [3957] = 2,
    STATE(192), 1,
      sym_cap_kind,
    ACTIONS(469), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
  [3967] = 5,
    ACTIONS(471), 1,
      aux_sym_newline_token1,
    ACTIONS(473), 1,
      sym_inline_comment,
    ACTIONS(475), 1,
      sym_block_language,
    STATE(132), 1,
      sym_line_end,
    STATE(186), 1,
      sym_newline,
  [3983] = 4,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(477), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_end,
    STATE(15), 1,
      sym_newline,
  [3996] = 4,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(477), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_line_end,
    STATE(15), 1,
      sym_newline,
  [4009] = 3,
    ACTIONS(481), 1,
      sym_comma,
    STATE(173), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(479), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [4020] = 4,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(477), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_newline,
    STATE(18), 1,
      sym_line_end,
  [4033] = 2,
    STATE(226), 1,
      sym_directive_op,
    ACTIONS(483), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [4042] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(485), 1,
      sym_inline_comment,
    STATE(63), 1,
      sym_line_end,
    STATE(66), 1,
      sym_newline,
  [4055] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(485), 1,
      sym_inline_comment,
    STATE(64), 1,
      sym_line_end,
    STATE(66), 1,
      sym_newline,
  [4068] = 4,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(477), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_line_end,
    STATE(15), 1,
      sym_newline,
  [4081] = 4,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(485), 1,
      sym_inline_comment,
    STATE(66), 1,
      sym_newline,
    STATE(87), 1,
      sym_line_end,
  [4094] = 4,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(477), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_line_end,
    STATE(15), 1,
      sym_newline,
  [4107] = 4,
    ACTIONS(487), 1,
      aux_sym_newline_token1,
    ACTIONS(489), 1,
      sym_inline_comment,
    STATE(116), 1,
      sym_line_end,
    STATE(203), 1,
      sym_newline,
  [4120] = 4,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(491), 1,
      sym_inline_comment,
    STATE(77), 1,
      sym_line_end,
    STATE(84), 1,
      sym_newline,
  [4133] = 3,
    ACTIONS(481), 1,
      sym_comma,
    STATE(177), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(493), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [4144] = 4,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    ACTIONS(390), 1,
      sym_inline_comment,
    STATE(68), 1,
      sym_line_end,
    STATE(71), 1,
      sym_newline,
  [4157] = 4,
    ACTIONS(463), 1,
      aux_sym_newline_token1,
    ACTIONS(465), 1,
      sym_inline_comment,
    STATE(143), 1,
      sym_line_end,
    STATE(207), 1,
      sym_newline,
  [4170] = 4,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    ACTIONS(491), 1,
      sym_inline_comment,
    STATE(80), 1,
      sym_line_end,
    STATE(84), 1,
      sym_newline,
  [4183] = 3,
    ACTIONS(497), 1,
      sym_comma,
    STATE(177), 1,
      aux_sym_directive_csv_repeat1,
    ACTIONS(495), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [4194] = 4,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(477), 1,
      sym_inline_comment,
    STATE(5), 1,
      sym_line_end,
    STATE(15), 1,
      sym_newline,
  [4207] = 4,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(477), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_line_end,
    STATE(15), 1,
      sym_newline,
  [4220] = 4,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(477), 1,
      sym_inline_comment,
    STATE(6), 1,
      sym_line_end,
    STATE(15), 1,
      sym_newline,
  [4233] = 4,
    ACTIONS(500), 1,
      sym_rparen,
    ACTIONS(502), 1,
      sym_value_name,
    STATE(198), 1,
      sym_param,
    STATE(221), 1,
      sym_param_name,
  [4246] = 4,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    ACTIONS(477), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_line_end,
    STATE(15), 1,
      sym_newline,
  [4259] = 4,
    ACTIONS(459), 1,
      sym_lparen,
    ACTIONS(504), 1,
      sym_arrow,
    ACTIONS(506), 1,
      sym_colon,
    STATE(225), 1,
      sym_params,
  [4272] = 1,
    ACTIONS(107), 4,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [4279] = 4,
    ACTIONS(471), 1,
      aux_sym_newline_token1,
    ACTIONS(473), 1,
      sym_inline_comment,
    STATE(129), 1,
      sym_line_end,
    STATE(186), 1,
      sym_newline,
  [4292] = 1,
    ACTIONS(101), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [4299] = 1,
    ACTIONS(97), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [4306] = 1,
    ACTIONS(109), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_frontmatter_delimiter,
      sym_fenced_raw_text,
  [4313] = 1,
    ACTIONS(95), 3,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_value_name,
  [4319] = 1,
    ACTIONS(508), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [4325] = 1,
    ACTIONS(510), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [4331] = 3,
    ACTIONS(512), 1,
      sym_cap_uri,
    ACTIONS(514), 1,
      sym_cap_shorthand,
    STATE(169), 1,
      sym_cap_ref,
  [4341] = 1,
    ACTIONS(516), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [4347] = 1,
    ACTIONS(518), 3,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [4353] = 1,
    ACTIONS(520), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_block_language,
  [4359] = 3,
    ACTIONS(522), 1,
      sym_rparen,
    ACTIONS(524), 1,
      sym_comma,
    STATE(196), 1,
      aux_sym_params_repeat1,
  [4369] = 1,
    ACTIONS(527), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [4375] = 3,
    ACTIONS(529), 1,
      sym_rparen,
    ACTIONS(531), 1,
      sym_comma,
    STATE(202), 1,
      aux_sym_params_repeat1,
  [4385] = 1,
    ACTIONS(533), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [4391] = 3,
    ACTIONS(502), 1,
      sym_value_name,
    STATE(221), 1,
      sym_param_name,
    STATE(238), 1,
      sym_param,
  [4401] = 1,
    ACTIONS(495), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [4407] = 3,
    ACTIONS(531), 1,
      sym_comma,
    ACTIONS(535), 1,
      sym_rparen,
    STATE(196), 1,
      aux_sym_params_repeat1,
  [4417] = 1,
    ACTIONS(99), 3,
      aux_sym_newline_token1,
      aux_sym_comment_line_token1,
      sym_value_name,
  [4423] = 1,
    ACTIONS(537), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [4429] = 1,
    ACTIONS(539), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [4435] = 1,
    ACTIONS(109), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [4441] = 1,
    ACTIONS(101), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [4447] = 1,
    ACTIONS(97), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [4453] = 3,
    ACTIONS(541), 1,
      sym_colon,
    ACTIONS(543), 1,
      sym_value_name,
    STATE(262), 1,
      sym_context_name,
  [4463] = 1,
    ACTIONS(545), 3,
      aux_sym_comment_line_token1,
      sym_frontmatter_delimiter,
      sym_value_name,
  [4469] = 1,
    ACTIONS(547), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fenced_raw_text,
  [4475] = 3,
    ACTIONS(549), 1,
      sym_colon,
    ACTIONS(551), 1,
      sym_value_name,
    STATE(274), 1,
      sym_instruct_name,
  [4485] = 2,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    STATE(72), 1,
      sym_newline,
  [4492] = 2,
    ACTIONS(209), 1,
      aux_sym_newline_token1,
    STATE(78), 1,
      sym_newline,
  [4499] = 2,
    ACTIONS(382), 1,
      aux_sym_newline_token1,
    STATE(79), 1,
      sym_newline,
  [4506] = 2,
    ACTIONS(553), 1,
      sym_value_name,
    STATE(288), 1,
      sym_cap_name,
  [4513] = 1,
    ACTIONS(555), 2,
      sym_arrow,
      sym_colon,
  [4518] = 1,
    ACTIONS(557), 2,
      sym_rparen,
      sym_comma,
  [4523] = 1,
    ACTIONS(559), 2,
      sym_optional_marker,
      sym_colon,
  [4528] = 1,
    ACTIONS(561), 2,
      sym_optional_marker,
      sym_colon,
  [4533] = 2,
    ACTIONS(563), 1,
      sym_optional_marker,
    ACTIONS(565), 1,
      sym_colon,
  [4540] = 2,
    ACTIONS(567), 1,
      sym_optional_marker,
    ACTIONS(569), 1,
      sym_colon,
  [4547] = 2,
    ACTIONS(553), 1,
      sym_value_name,
    STATE(285), 1,
      sym_cap_name,
  [4554] = 1,
    ACTIONS(571), 2,
      sym_arrow,
      sym_colon,
  [4559] = 2,
    ACTIONS(573), 1,
      sym_arrow,
    ACTIONS(575), 1,
      sym_colon,
  [4566] = 2,
    ACTIONS(577), 1,
      sym_bare_value,
    STATE(164), 1,
      sym_directive_csv,
  [4573] = 2,
    ACTIONS(579), 1,
      sym_inline_text,
    STATE(174), 1,
      sym_property_value,
  [4580] = 2,
    ACTIONS(463), 1,
      aux_sym_newline_token1,
    STATE(191), 1,
      sym_newline,
  [4587] = 2,
    ACTIONS(581), 1,
      sym_cap_uri,
    ACTIONS(583), 1,
      sym_cap_shorthand,
  [4594] = 2,
    ACTIONS(487), 1,
      aux_sym_newline_token1,
    STATE(139), 1,
      sym_newline,
  [4601] = 2,
    ACTIONS(579), 1,
      sym_inline_text,
    STATE(234), 1,
      sym_property_value,
  [4608] = 2,
    ACTIONS(463), 1,
      aux_sym_newline_token1,
    STATE(193), 1,
      sym_newline,
  [4615] = 2,
    ACTIONS(463), 1,
      aux_sym_newline_token1,
    STATE(197), 1,
      sym_newline,
  [4622] = 2,
    ACTIONS(487), 1,
      aux_sym_newline_token1,
    STATE(194), 1,
      sym_newline,
  [4629] = 1,
    ACTIONS(585), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [4634] = 1,
    ACTIONS(587), 2,
      sym_colon,
      sym_value_name,
  [4639] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(49), 1,
      sym_newline,
  [4646] = 1,
    ACTIONS(589), 2,
      sym_rparen,
      sym_comma,
  [4651] = 1,
    ACTIONS(591), 2,
      sym_rparen,
      sym_comma,
  [4656] = 1,
    ACTIONS(593), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [4661] = 1,
    ACTIONS(595), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [4666] = 1,
    ACTIONS(597), 2,
      anon_sym_EQ,
      sym_colon,
  [4671] = 2,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    STATE(67), 1,
      sym_newline,
  [4678] = 2,
    ACTIONS(599), 1,
      anon_sym_EQ,
    STATE(227), 1,
      sym_assign_operator,
  [4685] = 2,
    ACTIONS(601), 1,
      sym_arrow,
    ACTIONS(603), 1,
      sym_colon,
  [4692] = 1,
    ACTIONS(605), 2,
      sym_colon,
      sym_value_name,
  [4697] = 2,
    ACTIONS(607), 1,
      sym_type_name,
    STATE(280), 1,
      sym_struct_name,
  [4704] = 2,
    ACTIONS(553), 1,
      sym_value_name,
    STATE(260), 1,
      sym_cap_name,
  [4711] = 2,
    ACTIONS(29), 1,
      aux_sym_newline_token1,
    STATE(14), 1,
      sym_newline,
  [4718] = 2,
    ACTIONS(553), 1,
      sym_value_name,
    STATE(281), 1,
      sym_cap_name,
  [4725] = 2,
    ACTIONS(463), 1,
      aux_sym_newline_token1,
    STATE(205), 1,
      sym_newline,
  [4732] = 1,
    ACTIONS(609), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [4737] = 2,
    ACTIONS(382), 1,
      aux_sym_newline_token1,
    STATE(82), 1,
      sym_newline,
  [4744] = 2,
    ACTIONS(611), 1,
      aux_sym_newline_token1,
    STATE(44), 1,
      sym_newline,
  [4751] = 2,
    ACTIONS(487), 1,
      aux_sym_newline_token1,
    STATE(189), 1,
      sym_newline,
  [4758] = 2,
    ACTIONS(463), 1,
      aux_sym_newline_token1,
    STATE(208), 1,
      sym_newline,
  [4765] = 2,
    ACTIONS(471), 1,
      aux_sym_newline_token1,
    STATE(187), 1,
      sym_newline,
  [4772] = 2,
    ACTIONS(611), 1,
      aux_sym_newline_token1,
    STATE(48), 1,
      sym_newline,
  [4779] = 1,
    ACTIONS(613), 2,
      sym_arrow,
      sym_colon,
  [4784] = 1,
    ACTIONS(615), 1,
      sym_colon,
  [4788] = 1,
    ACTIONS(617), 1,
      sym_colon,
  [4792] = 1,
    ACTIONS(619), 1,
      sym_colon,
  [4796] = 1,
    ACTIONS(621), 1,
      sym_colon,
  [4800] = 1,
    ACTIONS(623), 1,
      sym_value_name,
  [4804] = 1,
    ACTIONS(625), 1,
      sym_bare_value,
  [4808] = 1,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
  [4812] = 1,
    ACTIONS(629), 1,
      sym_colon,
  [4816] = 1,
    ACTIONS(631), 1,
      sym_colon,
  [4820] = 1,
    ACTIONS(633), 1,
      sym_inline_text,
  [4824] = 1,
    ACTIONS(635), 1,
      sym_colon,
  [4828] = 1,
    ACTIONS(637), 1,
      sym_bare_value,
  [4832] = 1,
    ACTIONS(639), 1,
      sym_value_name,
  [4836] = 1,
    ACTIONS(641), 1,
      sym_colon,
  [4840] = 1,
    ACTIONS(643), 1,
      sym_colon,
  [4844] = 1,
    ACTIONS(645), 1,
      sym_colon,
  [4848] = 1,
    ACTIONS(647), 1,
      sym_colon,
  [4852] = 1,
    ACTIONS(649), 1,
      sym_colon,
  [4856] = 1,
    ACTIONS(651), 1,
      sym_colon,
  [4860] = 1,
    ACTIONS(653), 1,
      sym_colon,
  [4864] = 1,
    ACTIONS(655), 1,
      sym_colon,
  [4868] = 1,
    ACTIONS(657), 1,
      sym_colon,
  [4872] = 1,
    ACTIONS(659), 1,
      aux_sym_newline_token1,
  [4876] = 1,
    ACTIONS(661), 1,
      sym_colon,
  [4880] = 1,
    ACTIONS(663), 1,
      sym_colon,
  [4884] = 1,
    ACTIONS(665), 1,
      sym_colon,
  [4888] = 1,
    ACTIONS(667), 1,
      sym_colon,
  [4892] = 1,
    ACTIONS(669), 1,
      sym_value_name,
  [4896] = 1,
    ACTIONS(671), 1,
      sym_colon,
  [4900] = 1,
    ACTIONS(673), 1,
      sym_value_name,
  [4904] = 1,
    ACTIONS(675), 1,
      sym_colon,
  [4908] = 1,
    ACTIONS(677), 1,
      sym_colon,
  [4912] = 1,
    ACTIONS(679), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 149,
  [SMALL_STATE(5)] = 224,
  [SMALL_STATE(6)] = 289,
  [SMALL_STATE(7)] = 354,
  [SMALL_STATE(8)] = 419,
  [SMALL_STATE(9)] = 484,
  [SMALL_STATE(10)] = 549,
  [SMALL_STATE(11)] = 614,
  [SMALL_STATE(12)] = 679,
  [SMALL_STATE(13)] = 744,
  [SMALL_STATE(14)] = 790,
  [SMALL_STATE(15)] = 818,
  [SMALL_STATE(16)] = 846,
  [SMALL_STATE(17)] = 874,
  [SMALL_STATE(18)] = 902,
  [SMALL_STATE(19)] = 930,
  [SMALL_STATE(20)] = 958,
  [SMALL_STATE(21)] = 997,
  [SMALL_STATE(22)] = 1036,
  [SMALL_STATE(23)] = 1075,
  [SMALL_STATE(24)] = 1114,
  [SMALL_STATE(25)] = 1153,
  [SMALL_STATE(26)] = 1193,
  [SMALL_STATE(27)] = 1233,
  [SMALL_STATE(28)] = 1273,
  [SMALL_STATE(29)] = 1313,
  [SMALL_STATE(30)] = 1346,
  [SMALL_STATE(31)] = 1383,
  [SMALL_STATE(32)] = 1420,
  [SMALL_STATE(33)] = 1457,
  [SMALL_STATE(34)] = 1490,
  [SMALL_STATE(35)] = 1523,
  [SMALL_STATE(36)] = 1555,
  [SMALL_STATE(37)] = 1591,
  [SMALL_STATE(38)] = 1627,
  [SMALL_STATE(39)] = 1657,
  [SMALL_STATE(40)] = 1687,
  [SMALL_STATE(41)] = 1717,
  [SMALL_STATE(42)] = 1758,
  [SMALL_STATE(43)] = 1799,
  [SMALL_STATE(44)] = 1840,
  [SMALL_STATE(45)] = 1861,
  [SMALL_STATE(46)] = 1882,
  [SMALL_STATE(47)] = 1903,
  [SMALL_STATE(48)] = 1924,
  [SMALL_STATE(49)] = 1945,
  [SMALL_STATE(50)] = 1965,
  [SMALL_STATE(51)] = 1985,
  [SMALL_STATE(52)] = 2005,
  [SMALL_STATE(53)] = 2025,
  [SMALL_STATE(54)] = 2045,
  [SMALL_STATE(55)] = 2065,
  [SMALL_STATE(56)] = 2085,
  [SMALL_STATE(57)] = 2105,
  [SMALL_STATE(58)] = 2125,
  [SMALL_STATE(59)] = 2145,
  [SMALL_STATE(60)] = 2165,
  [SMALL_STATE(61)] = 2185,
  [SMALL_STATE(62)] = 2205,
  [SMALL_STATE(63)] = 2225,
  [SMALL_STATE(64)] = 2245,
  [SMALL_STATE(65)] = 2265,
  [SMALL_STATE(66)] = 2285,
  [SMALL_STATE(67)] = 2305,
  [SMALL_STATE(68)] = 2324,
  [SMALL_STATE(69)] = 2343,
  [SMALL_STATE(70)] = 2362,
  [SMALL_STATE(71)] = 2381,
  [SMALL_STATE(72)] = 2400,
  [SMALL_STATE(73)] = 2419,
  [SMALL_STATE(74)] = 2437,
  [SMALL_STATE(75)] = 2455,
  [SMALL_STATE(76)] = 2473,
  [SMALL_STATE(77)] = 2491,
  [SMALL_STATE(78)] = 2509,
  [SMALL_STATE(79)] = 2527,
  [SMALL_STATE(80)] = 2545,
  [SMALL_STATE(81)] = 2563,
  [SMALL_STATE(82)] = 2581,
  [SMALL_STATE(83)] = 2599,
  [SMALL_STATE(84)] = 2617,
  [SMALL_STATE(85)] = 2635,
  [SMALL_STATE(86)] = 2650,
  [SMALL_STATE(87)] = 2665,
  [SMALL_STATE(88)] = 2680,
  [SMALL_STATE(89)] = 2695,
  [SMALL_STATE(90)] = 2710,
  [SMALL_STATE(91)] = 2725,
  [SMALL_STATE(92)] = 2740,
  [SMALL_STATE(93)] = 2755,
  [SMALL_STATE(94)] = 2770,
  [SMALL_STATE(95)] = 2785,
  [SMALL_STATE(96)] = 2800,
  [SMALL_STATE(97)] = 2815,
  [SMALL_STATE(98)] = 2830,
  [SMALL_STATE(99)] = 2845,
  [SMALL_STATE(100)] = 2860,
  [SMALL_STATE(101)] = 2875,
  [SMALL_STATE(102)] = 2890,
  [SMALL_STATE(103)] = 2905,
  [SMALL_STATE(104)] = 2920,
  [SMALL_STATE(105)] = 2935,
  [SMALL_STATE(106)] = 2950,
  [SMALL_STATE(107)] = 2965,
  [SMALL_STATE(108)] = 2980,
  [SMALL_STATE(109)] = 2995,
  [SMALL_STATE(110)] = 3010,
  [SMALL_STATE(111)] = 3025,
  [SMALL_STATE(112)] = 3040,
  [SMALL_STATE(113)] = 3055,
  [SMALL_STATE(114)] = 3070,
  [SMALL_STATE(115)] = 3085,
  [SMALL_STATE(116)] = 3106,
  [SMALL_STATE(117)] = 3131,
  [SMALL_STATE(118)] = 3152,
  [SMALL_STATE(119)] = 3173,
  [SMALL_STATE(120)] = 3194,
  [SMALL_STATE(121)] = 3215,
  [SMALL_STATE(122)] = 3236,
  [SMALL_STATE(123)] = 3257,
  [SMALL_STATE(124)] = 3278,
  [SMALL_STATE(125)] = 3304,
  [SMALL_STATE(126)] = 3330,
  [SMALL_STATE(127)] = 3356,
  [SMALL_STATE(128)] = 3382,
  [SMALL_STATE(129)] = 3408,
  [SMALL_STATE(130)] = 3434,
  [SMALL_STATE(131)] = 3460,
  [SMALL_STATE(132)] = 3486,
  [SMALL_STATE(133)] = 3512,
  [SMALL_STATE(134)] = 3538,
  [SMALL_STATE(135)] = 3555,
  [SMALL_STATE(136)] = 3572,
  [SMALL_STATE(137)] = 3589,
  [SMALL_STATE(138)] = 3609,
  [SMALL_STATE(139)] = 3629,
  [SMALL_STATE(140)] = 3647,
  [SMALL_STATE(141)] = 3665,
  [SMALL_STATE(142)] = 3685,
  [SMALL_STATE(143)] = 3703,
  [SMALL_STATE(144)] = 3723,
  [SMALL_STATE(145)] = 3743,
  [SMALL_STATE(146)] = 3763,
  [SMALL_STATE(147)] = 3783,
  [SMALL_STATE(148)] = 3803,
  [SMALL_STATE(149)] = 3823,
  [SMALL_STATE(150)] = 3843,
  [SMALL_STATE(151)] = 3860,
  [SMALL_STATE(152)] = 3869,
  [SMALL_STATE(153)] = 3878,
  [SMALL_STATE(154)] = 3895,
  [SMALL_STATE(155)] = 3904,
  [SMALL_STATE(156)] = 3913,
  [SMALL_STATE(157)] = 3922,
  [SMALL_STATE(158)] = 3941,
  [SMALL_STATE(159)] = 3957,
  [SMALL_STATE(160)] = 3967,
  [SMALL_STATE(161)] = 3983,
  [SMALL_STATE(162)] = 3996,
  [SMALL_STATE(163)] = 4009,
  [SMALL_STATE(164)] = 4020,
  [SMALL_STATE(165)] = 4033,
  [SMALL_STATE(166)] = 4042,
  [SMALL_STATE(167)] = 4055,
  [SMALL_STATE(168)] = 4068,
  [SMALL_STATE(169)] = 4081,
  [SMALL_STATE(170)] = 4094,
  [SMALL_STATE(171)] = 4107,
  [SMALL_STATE(172)] = 4120,
  [SMALL_STATE(173)] = 4133,
  [SMALL_STATE(174)] = 4144,
  [SMALL_STATE(175)] = 4157,
  [SMALL_STATE(176)] = 4170,
  [SMALL_STATE(177)] = 4183,
  [SMALL_STATE(178)] = 4194,
  [SMALL_STATE(179)] = 4207,
  [SMALL_STATE(180)] = 4220,
  [SMALL_STATE(181)] = 4233,
  [SMALL_STATE(182)] = 4246,
  [SMALL_STATE(183)] = 4259,
  [SMALL_STATE(184)] = 4272,
  [SMALL_STATE(185)] = 4279,
  [SMALL_STATE(186)] = 4292,
  [SMALL_STATE(187)] = 4299,
  [SMALL_STATE(188)] = 4306,
  [SMALL_STATE(189)] = 4313,
  [SMALL_STATE(190)] = 4319,
  [SMALL_STATE(191)] = 4325,
  [SMALL_STATE(192)] = 4331,
  [SMALL_STATE(193)] = 4341,
  [SMALL_STATE(194)] = 4347,
  [SMALL_STATE(195)] = 4353,
  [SMALL_STATE(196)] = 4359,
  [SMALL_STATE(197)] = 4369,
  [SMALL_STATE(198)] = 4375,
  [SMALL_STATE(199)] = 4385,
  [SMALL_STATE(200)] = 4391,
  [SMALL_STATE(201)] = 4401,
  [SMALL_STATE(202)] = 4407,
  [SMALL_STATE(203)] = 4417,
  [SMALL_STATE(204)] = 4423,
  [SMALL_STATE(205)] = 4429,
  [SMALL_STATE(206)] = 4435,
  [SMALL_STATE(207)] = 4441,
  [SMALL_STATE(208)] = 4447,
  [SMALL_STATE(209)] = 4453,
  [SMALL_STATE(210)] = 4463,
  [SMALL_STATE(211)] = 4469,
  [SMALL_STATE(212)] = 4475,
  [SMALL_STATE(213)] = 4485,
  [SMALL_STATE(214)] = 4492,
  [SMALL_STATE(215)] = 4499,
  [SMALL_STATE(216)] = 4506,
  [SMALL_STATE(217)] = 4513,
  [SMALL_STATE(218)] = 4518,
  [SMALL_STATE(219)] = 4523,
  [SMALL_STATE(220)] = 4528,
  [SMALL_STATE(221)] = 4533,
  [SMALL_STATE(222)] = 4540,
  [SMALL_STATE(223)] = 4547,
  [SMALL_STATE(224)] = 4554,
  [SMALL_STATE(225)] = 4559,
  [SMALL_STATE(226)] = 4566,
  [SMALL_STATE(227)] = 4573,
  [SMALL_STATE(228)] = 4580,
  [SMALL_STATE(229)] = 4587,
  [SMALL_STATE(230)] = 4594,
  [SMALL_STATE(231)] = 4601,
  [SMALL_STATE(232)] = 4608,
  [SMALL_STATE(233)] = 4615,
  [SMALL_STATE(234)] = 4622,
  [SMALL_STATE(235)] = 4629,
  [SMALL_STATE(236)] = 4634,
  [SMALL_STATE(237)] = 4639,
  [SMALL_STATE(238)] = 4646,
  [SMALL_STATE(239)] = 4651,
  [SMALL_STATE(240)] = 4656,
  [SMALL_STATE(241)] = 4661,
  [SMALL_STATE(242)] = 4666,
  [SMALL_STATE(243)] = 4671,
  [SMALL_STATE(244)] = 4678,
  [SMALL_STATE(245)] = 4685,
  [SMALL_STATE(246)] = 4692,
  [SMALL_STATE(247)] = 4697,
  [SMALL_STATE(248)] = 4704,
  [SMALL_STATE(249)] = 4711,
  [SMALL_STATE(250)] = 4718,
  [SMALL_STATE(251)] = 4725,
  [SMALL_STATE(252)] = 4732,
  [SMALL_STATE(253)] = 4737,
  [SMALL_STATE(254)] = 4744,
  [SMALL_STATE(255)] = 4751,
  [SMALL_STATE(256)] = 4758,
  [SMALL_STATE(257)] = 4765,
  [SMALL_STATE(258)] = 4772,
  [SMALL_STATE(259)] = 4779,
  [SMALL_STATE(260)] = 4784,
  [SMALL_STATE(261)] = 4788,
  [SMALL_STATE(262)] = 4792,
  [SMALL_STATE(263)] = 4796,
  [SMALL_STATE(264)] = 4800,
  [SMALL_STATE(265)] = 4804,
  [SMALL_STATE(266)] = 4808,
  [SMALL_STATE(267)] = 4812,
  [SMALL_STATE(268)] = 4816,
  [SMALL_STATE(269)] = 4820,
  [SMALL_STATE(270)] = 4824,
  [SMALL_STATE(271)] = 4828,
  [SMALL_STATE(272)] = 4832,
  [SMALL_STATE(273)] = 4836,
  [SMALL_STATE(274)] = 4840,
  [SMALL_STATE(275)] = 4844,
  [SMALL_STATE(276)] = 4848,
  [SMALL_STATE(277)] = 4852,
  [SMALL_STATE(278)] = 4856,
  [SMALL_STATE(279)] = 4860,
  [SMALL_STATE(280)] = 4864,
  [SMALL_STATE(281)] = 4868,
  [SMALL_STATE(282)] = 4872,
  [SMALL_STATE(283)] = 4876,
  [SMALL_STATE(284)] = 4880,
  [SMALL_STATE(285)] = 4884,
  [SMALL_STATE(286)] = 4888,
  [SMALL_STATE(287)] = 4892,
  [SMALL_STATE(288)] = 4896,
  [SMALL_STATE(289)] = 4900,
  [SMALL_STATE(290)] = 4904,
  [SMALL_STATE(291)] = 4908,
  [SMALL_STATE(292)] = 4912,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_end, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_line, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 24),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 24),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(50),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(62),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(283),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_block_section, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_block_section, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_block_section, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_block_section, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_block_section_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_block_section_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_block_section_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__template_block_section_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_indented_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_indented_content_line, 2, 0, 16),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_indented_content_line, 2, 0, 16),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 3, 0, 17),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 3, 0, 17),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_block_section, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_block_section, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_value, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block, 3, 0, 19),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context_block, 3, 0, 19),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block, 3, 0, 19),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruct_block, 3, 0, 19),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_block, 3, 0, 19),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_block, 3, 0, 19),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 22),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 22),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_close, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 4, 0, 23),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 4, 0, 23),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 25),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 25),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_inline, 2, 0, 16),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_inline, 2, 0, 16),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_fenced, 5, 0, 29),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced, 5, 0, 29),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_indented_content_line, 2, 0, 16),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_indented_content_line, 2, 0, 16),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_eq, 4, 0, 31),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_eq, 4, 0, 31),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 14),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 14),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 20),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 20),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 9),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 8),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, 0, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 10),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 8),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 21),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 3, 0, 17),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 26),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 4, 0, 6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 7, 0, 27),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 22),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 28),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 4, 0, 23),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 8, 0, 30),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 8),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 32),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 29),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 5, 0, 33),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_markdown, 6, 0, 34),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 10),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 5, 0, 15),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 9),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 8),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 6, 0, 18),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 5),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 11),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 11), SHIFT_REPEAT(156),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cap_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_fenced_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_csv, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_csv_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_colon, 4, 0, 35),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 13),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 13), SHIFT_REPEAT(200),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 2, 0, 16),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_name, 1, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_fenced_content_line, 2, 0, 16),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter_comment, 1, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_fenced_content_line, 1, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 20),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 7),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_keyword, 1, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 7),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 14),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content_inline, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_keyword, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 12),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_block_kind, 1, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_block_kind, 1, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill_keyword, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_block_kind, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
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
