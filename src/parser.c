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
#define STATE_COUNT 298
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 48

enum ts_symbol_identifiers {
  aux_sym_newline_token1 = 1,
  sym_comment = 2,
  sym_array_suffix = 3,
  anon_sym_description = 4,
  anon_sym_transport = 5,
  anon_sym_target = 6,
  anon_sym_headers = 7,
  anon_sym_env = 8,
  anon_sym_params = 9,
  sym_inline_comment = 10,
  sym_use_keyword = 11,
  anon_sym_psyche = 12,
  anon_sym_service = 13,
  anon_sym_prompt = 14,
  sym_struct_keyword = 15,
  sym_thunk_keyword = 16,
  sym_markdown_language = 17,
  sym_assign_operator = 18,
  sym_add_assign_operator = 19,
  sym_remove_assign_operator = 20,
  sym_arrow = 21,
  sym_colon = 22,
  sym_lparen = 23,
  sym_rparen = 24,
  sym_comma = 25,
  sym_question = 26,
  sym_underscore = 27,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 28,
  sym_frontmatter_delimiter = 29,
  anon_sym_skill = 30,
  anon_sym_models = 31,
  anon_sym_psyches = 32,
  anon_sym_skills = 33,
  anon_sym_services = 34,
  anon_sym_tool = 35,
  anon_sym_tools = 36,
  anon_sym_system = 37,
  anon_sym_user = 38,
  anon_sym_assistant = 39,
  anon_sym_http = 40,
  anon_sym_stdio = 41,
  sym_identifier = 42,
  sym_named_identifier = 43,
  aux_sym_reference_token1 = 44,
  sym_message_text = 45,
  sym_indented_message_text = 46,
  sym_fence_text = 47,
  sym_non_frontmatter_fence_text = 48,
  sym_frontmatter_header_name = 49,
  sym_frontmatter_scalar = 50,
  sym_source_file = 51,
  sym_newline = 52,
  sym_blank_line = 53,
  sym_use_statement = 54,
  sym_psyche_declaration = 55,
  sym_service_declaration = 56,
  sym_prompt_declaration = 57,
  sym_psyche_header = 58,
  sym_service_header = 59,
  sym_prompt_header = 60,
  sym_struct_declaration = 61,
  sym_struct_header = 62,
  sym_struct_field_line = 63,
  sym_struct_body = 64,
  sym_struct_field = 65,
  sym_parameter_list = 66,
  sym__parameter_sequence = 67,
  sym__input_then_params = 68,
  sym__params = 69,
  sym__required_then_optional_params = 70,
  sym__optional_params = 71,
  sym_unnamed_parameter = 72,
  sym_required_named_parameter = 73,
  sym_optional_named_parameter = 74,
  sym_type_expression = 75,
  sym_thunk = 76,
  sym_thunk_signature = 77,
  sym_thunk_body = 78,
  sym__explicit_message = 79,
  sym__implicit_message = 80,
  sym_overlay_line = 81,
  sym_thunk_overlay = 82,
  sym_overlay_values = 83,
  sym_message_line = 84,
  sym_message_continuation_line = 85,
  sym_psyche_fence_body = 86,
  sym_service_fence_body = 87,
  sym_prompt_fence_body = 88,
  sym_service_frontmatter = 89,
  sym_prompt_frontmatter = 90,
  sym_service_description_line = 91,
  sym_service_transport_line = 92,
  sym_service_target_line = 93,
  sym_service_headers_block = 94,
  sym_header_map_entry_line = 95,
  sym_service_env_block = 96,
  sym_prompt_params_line = 97,
  sym_fence_content_line = 98,
  sym_non_frontmatter_fence_content_line = 99,
  sym_empty_fence_content_line = 100,
  sym_psyche_keyword = 101,
  sym_service_keyword = 102,
  sym_prompt_keyword = 103,
  sym_fence_open = 104,
  sym_fence_close = 105,
  sym_cap_kind = 106,
  sym_overlay_subject = 107,
  sym_message_kind = 108,
  sym_service_transport_value = 109,
  sym_reference = 110,
  sym_overlay_value = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_struct_body_repeat1 = 113,
  aux_sym__required_then_optional_params_repeat1 = 114,
  aux_sym__optional_params_repeat1 = 115,
  aux_sym_type_expression_repeat1 = 116,
  aux_sym_thunk_body_repeat1 = 117,
  aux_sym_thunk_body_repeat2 = 118,
  aux_sym_thunk_body_repeat3 = 119,
  aux_sym__explicit_message_repeat1 = 120,
  aux_sym__implicit_message_repeat1 = 121,
  aux_sym_overlay_values_repeat1 = 122,
  aux_sym_psyche_fence_body_repeat1 = 123,
  aux_sym_service_frontmatter_repeat1 = 124,
  aux_sym_service_headers_block_repeat1 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_newline_token1] = "newline_token1",
  [sym_comment] = "comment",
  [sym_array_suffix] = "array_suffix",
  [anon_sym_description] = "description",
  [anon_sym_transport] = "transport",
  [anon_sym_target] = "target",
  [anon_sym_headers] = "headers",
  [anon_sym_env] = "env",
  [anon_sym_params] = "params",
  [sym_inline_comment] = "inline_comment",
  [sym_use_keyword] = "use_keyword",
  [anon_sym_psyche] = "psyche",
  [anon_sym_service] = "service",
  [anon_sym_prompt] = "prompt",
  [sym_struct_keyword] = "struct_keyword",
  [sym_thunk_keyword] = "thunk_keyword",
  [sym_markdown_language] = "language",
  [sym_assign_operator] = "assign_operator",
  [sym_add_assign_operator] = "add_assign_operator",
  [sym_remove_assign_operator] = "remove_assign_operator",
  [sym_arrow] = "arrow",
  [sym_colon] = "colon",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_comma] = "comma",
  [sym_question] = "question",
  [sym_underscore] = "underscore",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_frontmatter_delimiter] = "frontmatter_delimiter",
  [anon_sym_skill] = "skill",
  [anon_sym_models] = "models",
  [anon_sym_psyches] = "psyches",
  [anon_sym_skills] = "skills",
  [anon_sym_services] = "services",
  [anon_sym_tool] = "tool",
  [anon_sym_tools] = "tools",
  [anon_sym_system] = "system",
  [anon_sym_user] = "user",
  [anon_sym_assistant] = "assistant",
  [anon_sym_http] = "http",
  [anon_sym_stdio] = "stdio",
  [sym_identifier] = "identifier",
  [sym_named_identifier] = "named_identifier",
  [aux_sym_reference_token1] = "reference_token1",
  [sym_message_text] = "message_text",
  [sym_indented_message_text] = "indented_message_text",
  [sym_fence_text] = "fence_text",
  [sym_non_frontmatter_fence_text] = "non_frontmatter_fence_text",
  [sym_frontmatter_header_name] = "frontmatter_header_name",
  [sym_frontmatter_scalar] = "frontmatter_scalar",
  [sym_source_file] = "source_file",
  [sym_newline] = "newline",
  [sym_blank_line] = "blank_line",
  [sym_use_statement] = "use_statement",
  [sym_psyche_declaration] = "fenced_declaration",
  [sym_service_declaration] = "fenced_declaration",
  [sym_prompt_declaration] = "fenced_declaration",
  [sym_psyche_header] = "declaration_header",
  [sym_service_header] = "declaration_header",
  [sym_prompt_header] = "declaration_header",
  [sym_struct_declaration] = "struct_declaration",
  [sym_struct_header] = "struct_header",
  [sym_struct_field_line] = "struct_field_line",
  [sym_struct_body] = "struct_body",
  [sym_struct_field] = "struct_field",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter_sequence] = "_parameter_sequence",
  [sym__input_then_params] = "_input_then_params",
  [sym__params] = "_params",
  [sym__required_then_optional_params] = "_required_then_optional_params",
  [sym__optional_params] = "_optional_params",
  [sym_unnamed_parameter] = "input",
  [sym_required_named_parameter] = "param",
  [sym_optional_named_parameter] = "param",
  [sym_type_expression] = "type_expression",
  [sym_thunk] = "thunk",
  [sym_thunk_signature] = "thunk_signature",
  [sym_thunk_body] = "thunk_body",
  [sym__explicit_message] = "message",
  [sym__implicit_message] = "message",
  [sym_overlay_line] = "overlay_line",
  [sym_thunk_overlay] = "thunk_overlay",
  [sym_overlay_values] = "overlay_values",
  [sym_message_line] = "message_line",
  [sym_message_continuation_line] = "message_continuation_line",
  [sym_psyche_fence_body] = "psyche_fence_body",
  [sym_service_fence_body] = "service_fence_body",
  [sym_prompt_fence_body] = "prompt_fence_body",
  [sym_service_frontmatter] = "service_frontmatter",
  [sym_prompt_frontmatter] = "prompt_frontmatter",
  [sym_service_description_line] = "service_description_line",
  [sym_service_transport_line] = "service_transport_line",
  [sym_service_target_line] = "service_target_line",
  [sym_service_headers_block] = "service_headers_block",
  [sym_header_map_entry_line] = "header_map_entry_line",
  [sym_service_env_block] = "service_env_block",
  [sym_prompt_params_line] = "prompt_params_line",
  [sym_fence_content_line] = "fence_content_line",
  [sym_non_frontmatter_fence_content_line] = "non_frontmatter_fence_content_line",
  [sym_empty_fence_content_line] = "empty_fence_content_line",
  [sym_psyche_keyword] = "decl_kind",
  [sym_service_keyword] = "decl_kind",
  [sym_prompt_keyword] = "decl_kind",
  [sym_fence_open] = "fence_open",
  [sym_fence_close] = "fence_close",
  [sym_cap_kind] = "cap_kind",
  [sym_overlay_subject] = "overlay_subject",
  [sym_message_kind] = "message_kind",
  [sym_service_transport_value] = "service_transport_value",
  [sym_reference] = "reference",
  [sym_overlay_value] = "overlay_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym__required_then_optional_params_repeat1] = "_required_then_optional_params_repeat1",
  [aux_sym__optional_params_repeat1] = "_optional_params_repeat1",
  [aux_sym_type_expression_repeat1] = "type_expression_repeat1",
  [aux_sym_thunk_body_repeat1] = "thunk_body_repeat1",
  [aux_sym_thunk_body_repeat2] = "thunk_body_repeat2",
  [aux_sym_thunk_body_repeat3] = "thunk_body_repeat3",
  [aux_sym__explicit_message_repeat1] = "_explicit_message_repeat1",
  [aux_sym__implicit_message_repeat1] = "_implicit_message_repeat1",
  [aux_sym_overlay_values_repeat1] = "overlay_values_repeat1",
  [aux_sym_psyche_fence_body_repeat1] = "psyche_fence_body_repeat1",
  [aux_sym_service_frontmatter_repeat1] = "service_frontmatter_repeat1",
  [aux_sym_service_headers_block_repeat1] = "service_headers_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_newline_token1] = aux_sym_newline_token1,
  [sym_comment] = sym_comment,
  [sym_array_suffix] = sym_array_suffix,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_transport] = anon_sym_transport,
  [anon_sym_target] = anon_sym_target,
  [anon_sym_headers] = anon_sym_headers,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_params] = anon_sym_params,
  [sym_inline_comment] = sym_inline_comment,
  [sym_use_keyword] = sym_use_keyword,
  [anon_sym_psyche] = anon_sym_psyche,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_prompt] = anon_sym_prompt,
  [sym_struct_keyword] = sym_struct_keyword,
  [sym_thunk_keyword] = sym_thunk_keyword,
  [sym_markdown_language] = sym_markdown_language,
  [sym_assign_operator] = sym_assign_operator,
  [sym_add_assign_operator] = sym_add_assign_operator,
  [sym_remove_assign_operator] = sym_remove_assign_operator,
  [sym_arrow] = sym_arrow,
  [sym_colon] = sym_colon,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_comma] = sym_comma,
  [sym_question] = sym_question,
  [sym_underscore] = sym_underscore,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_frontmatter_delimiter] = sym_frontmatter_delimiter,
  [anon_sym_skill] = anon_sym_skill,
  [anon_sym_models] = anon_sym_models,
  [anon_sym_psyches] = anon_sym_psyches,
  [anon_sym_skills] = anon_sym_skills,
  [anon_sym_services] = anon_sym_services,
  [anon_sym_tool] = anon_sym_tool,
  [anon_sym_tools] = anon_sym_tools,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_user] = anon_sym_user,
  [anon_sym_assistant] = anon_sym_assistant,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_stdio] = anon_sym_stdio,
  [sym_identifier] = sym_identifier,
  [sym_named_identifier] = sym_named_identifier,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [sym_message_text] = sym_message_text,
  [sym_indented_message_text] = sym_indented_message_text,
  [sym_fence_text] = sym_fence_text,
  [sym_non_frontmatter_fence_text] = sym_non_frontmatter_fence_text,
  [sym_frontmatter_header_name] = sym_frontmatter_header_name,
  [sym_frontmatter_scalar] = sym_frontmatter_scalar,
  [sym_source_file] = sym_source_file,
  [sym_newline] = sym_newline,
  [sym_blank_line] = sym_blank_line,
  [sym_use_statement] = sym_use_statement,
  [sym_psyche_declaration] = sym_psyche_declaration,
  [sym_service_declaration] = sym_psyche_declaration,
  [sym_prompt_declaration] = sym_psyche_declaration,
  [sym_psyche_header] = sym_psyche_header,
  [sym_service_header] = sym_psyche_header,
  [sym_prompt_header] = sym_psyche_header,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_struct_header] = sym_struct_header,
  [sym_struct_field_line] = sym_struct_field_line,
  [sym_struct_body] = sym_struct_body,
  [sym_struct_field] = sym_struct_field,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter_sequence] = sym__parameter_sequence,
  [sym__input_then_params] = sym__input_then_params,
  [sym__params] = sym__params,
  [sym__required_then_optional_params] = sym__required_then_optional_params,
  [sym__optional_params] = sym__optional_params,
  [sym_unnamed_parameter] = sym_unnamed_parameter,
  [sym_required_named_parameter] = sym_required_named_parameter,
  [sym_optional_named_parameter] = sym_required_named_parameter,
  [sym_type_expression] = sym_type_expression,
  [sym_thunk] = sym_thunk,
  [sym_thunk_signature] = sym_thunk_signature,
  [sym_thunk_body] = sym_thunk_body,
  [sym__explicit_message] = sym__explicit_message,
  [sym__implicit_message] = sym__explicit_message,
  [sym_overlay_line] = sym_overlay_line,
  [sym_thunk_overlay] = sym_thunk_overlay,
  [sym_overlay_values] = sym_overlay_values,
  [sym_message_line] = sym_message_line,
  [sym_message_continuation_line] = sym_message_continuation_line,
  [sym_psyche_fence_body] = sym_psyche_fence_body,
  [sym_service_fence_body] = sym_service_fence_body,
  [sym_prompt_fence_body] = sym_prompt_fence_body,
  [sym_service_frontmatter] = sym_service_frontmatter,
  [sym_prompt_frontmatter] = sym_prompt_frontmatter,
  [sym_service_description_line] = sym_service_description_line,
  [sym_service_transport_line] = sym_service_transport_line,
  [sym_service_target_line] = sym_service_target_line,
  [sym_service_headers_block] = sym_service_headers_block,
  [sym_header_map_entry_line] = sym_header_map_entry_line,
  [sym_service_env_block] = sym_service_env_block,
  [sym_prompt_params_line] = sym_prompt_params_line,
  [sym_fence_content_line] = sym_fence_content_line,
  [sym_non_frontmatter_fence_content_line] = sym_non_frontmatter_fence_content_line,
  [sym_empty_fence_content_line] = sym_empty_fence_content_line,
  [sym_psyche_keyword] = sym_psyche_keyword,
  [sym_service_keyword] = sym_psyche_keyword,
  [sym_prompt_keyword] = sym_psyche_keyword,
  [sym_fence_open] = sym_fence_open,
  [sym_fence_close] = sym_fence_close,
  [sym_cap_kind] = sym_cap_kind,
  [sym_overlay_subject] = sym_overlay_subject,
  [sym_message_kind] = sym_message_kind,
  [sym_service_transport_value] = sym_service_transport_value,
  [sym_reference] = sym_reference,
  [sym_overlay_value] = sym_overlay_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym__required_then_optional_params_repeat1] = aux_sym__required_then_optional_params_repeat1,
  [aux_sym__optional_params_repeat1] = aux_sym__optional_params_repeat1,
  [aux_sym_type_expression_repeat1] = aux_sym_type_expression_repeat1,
  [aux_sym_thunk_body_repeat1] = aux_sym_thunk_body_repeat1,
  [aux_sym_thunk_body_repeat2] = aux_sym_thunk_body_repeat2,
  [aux_sym_thunk_body_repeat3] = aux_sym_thunk_body_repeat3,
  [aux_sym__explicit_message_repeat1] = aux_sym__explicit_message_repeat1,
  [aux_sym__implicit_message_repeat1] = aux_sym__implicit_message_repeat1,
  [aux_sym_overlay_values_repeat1] = aux_sym_overlay_values_repeat1,
  [aux_sym_psyche_fence_body_repeat1] = aux_sym_psyche_fence_body_repeat1,
  [aux_sym_service_frontmatter_repeat1] = aux_sym_service_frontmatter_repeat1,
  [aux_sym_service_headers_block_repeat1] = aux_sym_service_headers_block_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_array_suffix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_params] = {
    .visible = true,
    .named = false,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_use_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_psyche] = {
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
  [sym_struct_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown_language] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_add_assign_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_remove_assign_operator] = {
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
  [sym_question] = {
    .visible = true,
    .named = true,
  },
  [sym_underscore] = {
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
  [anon_sym_skill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_models] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psyches] = {
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
  [anon_sym_tool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tools] = {
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
  [anon_sym_assistant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdio] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_named_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_message_text] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_message_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fence_text] = {
    .visible = true,
    .named = true,
  },
  [sym_non_frontmatter_fence_text] = {
    .visible = true,
    .named = true,
  },
  [sym_frontmatter_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_frontmatter_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_psyche_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_service_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_psyche_header] = {
    .visible = true,
    .named = true,
  },
  [sym_service_header] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_header] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_header] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_line] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_body] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__input_then_params] = {
    .visible = false,
    .named = true,
  },
  [sym__params] = {
    .visible = false,
    .named = true,
  },
  [sym__required_then_optional_params] = {
    .visible = false,
    .named = true,
  },
  [sym__optional_params] = {
    .visible = false,
    .named = true,
  },
  [sym_unnamed_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_required_named_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_named_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_body] = {
    .visible = true,
    .named = true,
  },
  [sym__explicit_message] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_message] = {
    .visible = true,
    .named = true,
  },
  [sym_overlay_line] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_overlay] = {
    .visible = true,
    .named = true,
  },
  [sym_overlay_values] = {
    .visible = true,
    .named = true,
  },
  [sym_message_line] = {
    .visible = true,
    .named = true,
  },
  [sym_message_continuation_line] = {
    .visible = true,
    .named = true,
  },
  [sym_psyche_fence_body] = {
    .visible = true,
    .named = true,
  },
  [sym_service_fence_body] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_fence_body] = {
    .visible = true,
    .named = true,
  },
  [sym_service_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_service_description_line] = {
    .visible = true,
    .named = true,
  },
  [sym_service_transport_line] = {
    .visible = true,
    .named = true,
  },
  [sym_service_target_line] = {
    .visible = true,
    .named = true,
  },
  [sym_service_headers_block] = {
    .visible = true,
    .named = true,
  },
  [sym_header_map_entry_line] = {
    .visible = true,
    .named = true,
  },
  [sym_service_env_block] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_params_line] = {
    .visible = true,
    .named = true,
  },
  [sym_fence_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_non_frontmatter_fence_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_fence_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_psyche_keyword] = {
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
  [sym_overlay_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_message_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_service_transport_value] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_overlay_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__required_then_optional_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__optional_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_expression_repeat1] = {
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
  [aux_sym_thunk_body_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__explicit_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__implicit_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_overlay_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_psyche_fence_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_frontmatter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_headers_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_array = 1,
  field_arrow = 2,
  field_body = 3,
  field_close = 4,
  field_colon = 5,
  field_field = 6,
  field_frontmatter = 7,
  field_header = 8,
  field_inline = 9,
  field_input = 10,
  field_keyword = 11,
  field_kind = 12,
  field_language = 13,
  field_name = 14,
  field_open = 15,
  field_operator = 16,
  field_optional = 17,
  field_output = 18,
  field_overlay = 19,
  field_param = 20,
  field_params = 21,
  field_reference = 22,
  field_signature = 23,
  field_subject = 24,
  field_text = 25,
  field_type = 26,
  field_value = 27,
  field_values = 28,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_arrow] = "arrow",
  [field_body] = "body",
  [field_close] = "close",
  [field_colon] = "colon",
  [field_field] = "field",
  [field_frontmatter] = "frontmatter",
  [field_header] = "header",
  [field_inline] = "inline",
  [field_input] = "input",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_language] = "language",
  [field_name] = "name",
  [field_open] = "open",
  [field_operator] = "operator",
  [field_optional] = "optional",
  [field_output] = "output",
  [field_overlay] = "overlay",
  [field_param] = "param",
  [field_params] = "params",
  [field_reference] = "reference",
  [field_signature] = "signature",
  [field_subject] = "subject",
  [field_text] = "text",
  [field_type] = "type",
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 3},
  [17] = {.index = 27, .length = 3},
  [18] = {.index = 30, .length = 1},
  [19] = {.index = 31, .length = 2},
  [20] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 3},
  [24] = {.index = 42, .length = 3},
  [25] = {.index = 45, .length = 3},
  [26] = {.index = 48, .length = 1},
  [27] = {.index = 49, .length = 2},
  [28] = {.index = 51, .length = 3},
  [29] = {.index = 54, .length = 2},
  [30] = {.index = 56, .length = 4},
  [31] = {.index = 60, .length = 2},
  [32] = {.index = 62, .length = 2},
  [33] = {.index = 64, .length = 1},
  [34] = {.index = 65, .length = 2},
  [35] = {.index = 67, .length = 4},
  [36] = {.index = 71, .length = 2},
  [37] = {.index = 73, .length = 3},
  [38] = {.index = 76, .length = 4},
  [39] = {.index = 80, .length = 3},
  [40] = {.index = 83, .length = 5},
  [41] = {.index = 88, .length = 5},
  [42] = {.index = 93, .length = 1},
  [43] = {.index = 94, .length = 2},
  [44] = {.index = 96, .length = 5},
  [45] = {.index = 101, .length = 6},
  [46] = {.index = 107, .length = 1},
  [47] = {.index = 108, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_frontmatter, 0},
  [1] =
    {field_body, 1},
    {field_header, 0},
  [3] =
    {field_body, 1},
    {field_signature, 0},
  [5] =
    {field_colon, 0, .inherited = true},
    {field_inline, 0, .inherited = true},
    {field_kind, 0, .inherited = true},
  [8] =
    {field_name, 0},
  [9] =
    {field_colon, 1},
    {field_keyword, 0},
  [11] =
    {field_input, 0, .inherited = true},
    {field_param, 0, .inherited = true},
  [13] =
    {field_param, 0, .inherited = true},
  [14] =
    {field_input, 0},
  [15] =
    {field_param, 0},
  [16] =
    {field_text, 0},
  [17] =
    {field_body, 1},
    {field_close, 2},
    {field_header, 0},
  [20] =
    {field_field, 0},
  [21] =
    {field_overlay, 0},
  [22] =
    {field_operator, 1},
    {field_subject, 0},
  [24] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [27] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [30] =
    {field_array, 0},
  [31] =
    {field_name, 0},
    {field_optional, 1},
  [33] =
    {field_array, 1, .inherited = true},
    {field_name, 0},
  [35] =
    {field_input, 1, .inherited = true},
    {field_param, 1, .inherited = true},
  [37] =
    {field_param, 0},
    {field_param, 1, .inherited = true},
  [39] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [42] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [45] =
    {field_operator, 1},
    {field_subject, 0},
    {field_values, 2},
  [48] =
    {field_value, 0},
  [49] =
    {field_colon, 1},
    {field_kind, 0},
  [51] =
    {field_array, 1, .inherited = true},
    {field_name, 0},
    {field_optional, 2},
  [54] =
    {field_array, 0, .inherited = true},
    {field_array, 1, .inherited = true},
  [56] =
    {field_arrow, 1},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [60] =
    {field_input, 0},
    {field_param, 2, .inherited = true},
  [62] =
    {field_param, 0},
    {field_param, 2, .inherited = true},
  [64] =
    {field_param, 1},
  [65] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [67] =
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [71] =
    {field_value, 0},
    {field_value, 1, .inherited = true},
  [73] =
    {field_colon, 1},
    {field_inline, 2},
    {field_kind, 0},
  [76] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [80] =
    {field_param, 0},
    {field_param, 1, .inherited = true},
    {field_param, 3, .inherited = true},
  [83] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [88] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_output, 3},
    {field_params, 1},
  [93] =
    {field_value, 1},
  [94] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [96] =
    {field_colon, 2},
    {field_kind, 0},
    {field_language, 4},
    {field_name, 1},
    {field_open, 3},
  [101] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 4},
    {field_params, 2},
  [107] =
    {field_value, 2},
  [108] =
    {field_name, 0},
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
  [27] = 15,
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
  [50] = 15,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 15,
  [61] = 61,
  [62] = 62,
  [63] = 51,
  [64] = 64,
  [65] = 15,
  [66] = 51,
  [67] = 15,
  [68] = 68,
  [69] = 51,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 53,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
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
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 51,
  [104] = 104,
  [105] = 15,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 53,
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
  [123] = 15,
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
  [154] = 15,
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
  [167] = 15,
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
  [213] = 213,
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
  [236] = 51,
  [237] = 15,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 15,
  [242] = 15,
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
  [293] = 293,
  [294] = 294,
  [295] = 15,
  [296] = 296,
  [297] = 297,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(139);
      ADVANCE_MAP(
        '\n', 140,
        '\r', 1,
        '#', 151,
        '(', 173,
        ')', 174,
        '+', 22,
        ',', 175,
        '-', 14,
        ':', 172,
        '=', 168,
        '?', 176,
        '[', 24,
        '_', 177,
        '`', 26,
        'a', 114,
        'd', 55,
        'e', 83,
        'h', 46,
        'm', 41,
        'p', 27,
        's', 52,
        't', 31,
        'u', 111,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(140);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(350);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(350);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 140,
        '\r', 1,
        'a', 283,
        'm', 265,
        'p', 278,
        's', 242,
        't', 268,
        'u', 279,
        '\t', 228,
        '\f', 228,
        ' ', 228,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 140,
        '\r', 1,
        'a', 283,
        's', 295,
        't', 269,
        'u', 279,
        '\t', 229,
        '\f', 229,
        ' ', 229,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '>') ADVANCE(171);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'h') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(171);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(142);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(179);
      END_STATE();
    case 26:
      if (lookahead == '`') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'k') ADVANCE(64);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'k') ADVANCE(69);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(165);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 128:
      if (lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 129:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 130:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 131:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 132:
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 133:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 134:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(363);
      END_STATE();
    case 135:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\f') SKIP(135);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 136:
      if (eof) ADVANCE(139);
      ADVANCE_MAP(
        '\n', 140,
        '\r', 1,
        '#', 11,
        '-', 13,
        'a', 114,
        'd', 55,
        'e', 83,
        'h', 45,
        'p', 28,
        's', 58,
        't', 32,
        'u', 111,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(136);
      END_STATE();
    case 137:
      if (eof) ADVANCE(139);
      ADVANCE_MAP(
        '\n', 140,
        '\r', 1,
        '#', 11,
        'p', 275,
        's', 247,
        't', 248,
        'u', 284,
        '\t', 227,
        '\f', 227,
        ' ', 227,
      );
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 138:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_transport);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_target);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_headers);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_markdown_language);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_add_assign_operator);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_remove_assign_operator);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_question);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_underscore);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(342);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      if (lookahead == '-') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_stdio);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_named_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_message_text);
      ADVANCE_MAP(
        '\n', 140,
        '\r', 1,
        '#', 11,
        'p', 275,
        's', 247,
        't', 248,
        'u', 284,
        '\t', 227,
        '\f', 227,
        ' ', 227,
      );
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_message_text);
      ADVANCE_MAP(
        '\n', 140,
        '\r', 1,
        'a', 283,
        'm', 265,
        'p', 278,
        's', 242,
        't', 268,
        'u', 279,
        '\t', 228,
        '\f', 228,
        ' ', 228,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_message_text);
      ADVANCE_MAP(
        '\n', 140,
        '\r', 1,
        'a', 283,
        's', 295,
        't', 269,
        'u', 279,
        '\t', 229,
        '\f', 229,
        ' ', 229,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'k') ADVANCE(251);
      if (lookahead == 'y') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'h') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'p') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'v') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'v') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'y') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'y') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'y') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_indented_message_text);
      ADVANCE_MAP(
        '\n', 140,
        '\f', 298,
        '\r', 1,
        '#', 11,
        'a', 328,
        'p', 321,
        's', 306,
        't', 308,
        'u', 324,
        '\t', 298,
        ' ', 298,
      );
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == 'y') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'h') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'm') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'u') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'u') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'v') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'y') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(342);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(342);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == '-') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == 'd') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == 'v') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_frontmatter_scalar);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_frontmatter_scalar);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(363);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 136},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 136},
  [4] = {.lex_state = 136},
  [5] = {.lex_state = 135},
  [6] = {.lex_state = 135},
  [7] = {.lex_state = 135},
  [8] = {.lex_state = 135},
  [9] = {.lex_state = 135},
  [10] = {.lex_state = 135},
  [11] = {.lex_state = 135},
  [12] = {.lex_state = 135},
  [13] = {.lex_state = 135},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 136},
  [16] = {.lex_state = 136},
  [17] = {.lex_state = 136},
  [18] = {.lex_state = 136},
  [19] = {.lex_state = 137},
  [20] = {.lex_state = 137},
  [21] = {.lex_state = 137},
  [22] = {.lex_state = 138},
  [23] = {.lex_state = 138},
  [24] = {.lex_state = 137},
  [25] = {.lex_state = 137},
  [26] = {.lex_state = 137},
  [27] = {.lex_state = 135},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 137},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 137},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 135},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 135},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 135},
  [52] = {.lex_state = 136},
  [53] = {.lex_state = 137},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 137},
  [56] = {.lex_state = 138},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 138},
  [60] = {.lex_state = 137},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 137},
  [63] = {.lex_state = 138},
  [64] = {.lex_state = 137},
  [65] = {.lex_state = 138},
  [66] = {.lex_state = 137},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 136},
  [69] = {.lex_state = 136},
  [70] = {.lex_state = 136},
  [71] = {.lex_state = 136},
  [72] = {.lex_state = 136},
  [73] = {.lex_state = 136},
  [74] = {.lex_state = 136},
  [75] = {.lex_state = 136},
  [76] = {.lex_state = 136},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 136},
  [79] = {.lex_state = 136},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 136},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 133},
  [148] = {.lex_state = 133},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 6},
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
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 134},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 134},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 134},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 134},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 133},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_newline_token1] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_transport] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_params] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [anon_sym_psyche] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [sym_struct_keyword] = ACTIONS(1),
    [sym_thunk_keyword] = ACTIONS(1),
    [sym_markdown_language] = ACTIONS(1),
    [sym_assign_operator] = ACTIONS(1),
    [sym_add_assign_operator] = ACTIONS(1),
    [sym_remove_assign_operator] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_question] = ACTIONS(1),
    [sym_underscore] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_frontmatter_delimiter] = ACTIONS(1),
    [anon_sym_skill] = ACTIONS(1),
    [anon_sym_models] = ACTIONS(1),
    [anon_sym_psyches] = ACTIONS(1),
    [anon_sym_skills] = ACTIONS(1),
    [anon_sym_services] = ACTIONS(1),
    [anon_sym_tool] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_user] = ACTIONS(1),
    [anon_sym_assistant] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_stdio] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(274),
    [sym_newline] = STATE(69),
    [sym_blank_line] = STATE(4),
    [sym_use_statement] = STATE(4),
    [sym_psyche_declaration] = STATE(4),
    [sym_service_declaration] = STATE(4),
    [sym_prompt_declaration] = STATE(4),
    [sym_psyche_header] = STATE(96),
    [sym_service_header] = STATE(136),
    [sym_prompt_header] = STATE(83),
    [sym_struct_declaration] = STATE(4),
    [sym_struct_header] = STATE(80),
    [sym_thunk] = STATE(4),
    [sym_thunk_signature] = STATE(2),
    [sym_psyche_keyword] = STATE(286),
    [sym_service_keyword] = STATE(251),
    [sym_prompt_keyword] = STATE(267),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_use_keyword] = ACTIONS(9),
    [anon_sym_psyche] = ACTIONS(11),
    [anon_sym_service] = ACTIONS(13),
    [anon_sym_prompt] = ACTIONS(15),
    [sym_struct_keyword] = ACTIONS(17),
    [sym_thunk_keyword] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(21), 1,
      aux_sym_newline_token1,
    ACTIONS(25), 1,
      anon_sym_tool,
    ACTIONS(29), 1,
      sym_message_text,
    STATE(16), 1,
      aux_sym_thunk_body_repeat3,
    STATE(25), 1,
      sym_message_line,
    STATE(52), 1,
      sym__explicit_message,
    STATE(74), 1,
      sym_thunk_body,
    STATE(78), 1,
      sym__implicit_message,
    STATE(132), 1,
      sym_thunk_overlay,
    STATE(137), 1,
      sym_overlay_subject,
    STATE(236), 1,
      sym_newline,
    STATE(287), 1,
      sym_message_kind,
    STATE(14), 2,
      sym_overlay_line,
      aux_sym_thunk_body_repeat1,
    STATE(104), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(27), 3,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
    ACTIONS(23), 8,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [60] = 19,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_use_keyword,
    ACTIONS(42), 1,
      anon_sym_psyche,
    ACTIONS(45), 1,
      anon_sym_service,
    ACTIONS(48), 1,
      anon_sym_prompt,
    ACTIONS(51), 1,
      sym_struct_keyword,
    ACTIONS(54), 1,
      sym_thunk_keyword,
    STATE(2), 1,
      sym_thunk_signature,
    STATE(69), 1,
      sym_newline,
    STATE(80), 1,
      sym_struct_header,
    STATE(83), 1,
      sym_prompt_header,
    STATE(96), 1,
      sym_psyche_header,
    STATE(136), 1,
      sym_service_header,
    STATE(251), 1,
      sym_service_keyword,
    STATE(267), 1,
      sym_prompt_keyword,
    STATE(286), 1,
      sym_psyche_keyword,
    STATE(3), 8,
      sym_blank_line,
      sym_use_statement,
      sym_psyche_declaration,
      sym_service_declaration,
      sym_prompt_declaration,
      sym_struct_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [125] = 19,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(9), 1,
      sym_use_keyword,
    ACTIONS(11), 1,
      anon_sym_psyche,
    ACTIONS(13), 1,
      anon_sym_service,
    ACTIONS(15), 1,
      anon_sym_prompt,
    ACTIONS(17), 1,
      sym_struct_keyword,
    ACTIONS(19), 1,
      sym_thunk_keyword,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_comment,
    STATE(2), 1,
      sym_thunk_signature,
    STATE(69), 1,
      sym_newline,
    STATE(80), 1,
      sym_struct_header,
    STATE(83), 1,
      sym_prompt_header,
    STATE(96), 1,
      sym_psyche_header,
    STATE(136), 1,
      sym_service_header,
    STATE(251), 1,
      sym_service_keyword,
    STATE(267), 1,
      sym_prompt_keyword,
    STATE(286), 1,
      sym_psyche_keyword,
    STATE(3), 8,
      sym_blank_line,
      sym_use_statement,
      sym_psyche_declaration,
      sym_service_declaration,
      sym_prompt_declaration,
      sym_struct_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [190] = 6,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(67), 1,
      sym_indented_message_text,
    STATE(51), 1,
      sym_newline,
    STATE(13), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(65), 11,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [221] = 6,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(67), 1,
      sym_indented_message_text,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_newline,
    STATE(10), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(71), 11,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [252] = 6,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(67), 1,
      sym_indented_message_text,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_newline,
    STATE(13), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(75), 11,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [283] = 6,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(67), 1,
      sym_indented_message_text,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_newline,
    STATE(7), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(79), 11,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [314] = 6,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(67), 1,
      sym_indented_message_text,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_newline,
    STATE(12), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(83), 11,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [345] = 6,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(67), 1,
      sym_indented_message_text,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_newline,
    STATE(13), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(79), 11,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [376] = 6,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(67), 1,
      sym_indented_message_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_newline,
    STATE(5), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(87), 11,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [407] = 6,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(67), 1,
      sym_indented_message_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_newline,
    STATE(13), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(87), 11,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [438] = 6,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(96), 1,
      sym_indented_message_text,
    STATE(51), 1,
      sym_newline,
    STATE(13), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(94), 11,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [469] = 8,
    ACTIONS(99), 1,
      aux_sym_newline_token1,
    STATE(103), 1,
      sym_newline,
    STATE(132), 1,
      sym_thunk_overlay,
    STATE(137), 1,
      sym_overlay_subject,
    STATE(32), 2,
      sym_overlay_line,
      aux_sym_thunk_body_repeat1,
    STATE(37), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(23), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(101), 5,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [503] = 1,
    ACTIONS(103), 16,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_description,
      anon_sym_transport,
      anon_sym_target,
      anon_sym_headers,
      anon_sym_env,
      anon_sym_params,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_frontmatter_delimiter,
  [522] = 6,
    ACTIONS(107), 1,
      sym_use_keyword,
    STATE(18), 1,
      aux_sym_thunk_body_repeat3,
    STATE(52), 1,
      sym__explicit_message,
    STATE(287), 1,
      sym_message_kind,
    ACTIONS(109), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [551] = 6,
    ACTIONS(113), 1,
      sym_use_keyword,
    STATE(18), 1,
      aux_sym_thunk_body_repeat3,
    STATE(52), 1,
      sym__explicit_message,
    STATE(287), 1,
      sym_message_kind,
    ACTIONS(109), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [580] = 6,
    ACTIONS(117), 1,
      sym_use_keyword,
    STATE(18), 1,
      aux_sym_thunk_body_repeat3,
    STATE(52), 1,
      sym__explicit_message,
    STATE(287), 1,
      sym_message_kind,
    ACTIONS(119), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [609] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym_newline_token1,
    STATE(66), 1,
      sym_newline,
    STATE(24), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(31), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(126), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [639] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym_newline_token1,
    STATE(66), 1,
      sym_newline,
    STATE(21), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(31), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(126), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [669] = 7,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      aux_sym_newline_token1,
    ACTIONS(135), 1,
      sym_message_text,
    STATE(236), 1,
      sym_newline,
    STATE(21), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(92), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(133), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [699] = 7,
    ACTIONS(140), 1,
      aux_sym_newline_token1,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(63), 1,
      sym_newline,
    STATE(150), 1,
      sym_struct_field,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(23), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(142), 6,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [729] = 7,
    ACTIONS(148), 1,
      aux_sym_newline_token1,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(63), 1,
      sym_newline,
    STATE(150), 1,
      sym_struct_field,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(23), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(151), 6,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [759] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(124), 1,
      aux_sym_newline_token1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_newline,
    STATE(21), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(38), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(158), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [789] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(124), 1,
      aux_sym_newline_token1,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_newline,
    STATE(20), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(26), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(162), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [819] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym_newline_token1,
    STATE(62), 1,
      sym_message_line,
    STATE(66), 1,
      sym_newline,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(126), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [848] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 13,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_indented_message_text,
  [867] = 1,
    ACTIONS(166), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [884] = 1,
    ACTIONS(168), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [901] = 1,
    ACTIONS(170), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [918] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(124), 1,
      aux_sym_newline_token1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_message_line,
    STATE(66), 1,
      sym_newline,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(158), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [947] = 6,
    ACTIONS(172), 1,
      aux_sym_newline_token1,
    STATE(132), 1,
      sym_thunk_overlay,
    STATE(137), 1,
      sym_overlay_subject,
    STATE(32), 2,
      sym_overlay_line,
      aux_sym_thunk_body_repeat1,
    ACTIONS(174), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(177), 5,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [974] = 1,
    ACTIONS(180), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [991] = 1,
    ACTIONS(182), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1008] = 1,
    ACTIONS(184), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1025] = 1,
    ACTIONS(186), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1042] = 10,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(188), 1,
      aux_sym_newline_token1,
    STATE(17), 1,
      aux_sym_thunk_body_repeat3,
    STATE(25), 1,
      sym_message_line,
    STATE(52), 1,
      sym__explicit_message,
    STATE(68), 1,
      sym__implicit_message,
    STATE(103), 1,
      sym_newline,
    STATE(287), 1,
      sym_message_kind,
    STATE(58), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(27), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [1077] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(124), 1,
      aux_sym_newline_token1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_message_line,
    STATE(66), 1,
      sym_newline,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(192), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1106] = 1,
    ACTIONS(194), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1123] = 1,
    ACTIONS(196), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1140] = 1,
    ACTIONS(198), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1157] = 1,
    ACTIONS(200), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1174] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 13,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_indented_message_text,
  [1193] = 1,
    ACTIONS(206), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1210] = 1,
    ACTIONS(208), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1227] = 1,
    ACTIONS(210), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1244] = 1,
    ACTIONS(212), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1261] = 2,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 13,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_indented_message_text,
  [1280] = 1,
    ACTIONS(218), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1297] = 1,
    ACTIONS(164), 14,
      aux_sym_newline_token1,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tool,
      anon_sym_tools,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1314] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 13,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_indented_message_text,
  [1333] = 2,
    ACTIONS(226), 1,
      sym_use_keyword,
    ACTIONS(224), 12,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [1351] = 5,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      aux_sym_newline_token1,
    STATE(66), 1,
      sym_newline,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(233), 8,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_message_text,
  [1375] = 11,
    ACTIONS(235), 1,
      sym_rparen,
    ACTIONS(237), 1,
      sym_underscore,
    ACTIONS(239), 1,
      sym_named_identifier,
    STATE(145), 1,
      sym_required_named_parameter,
    STATE(168), 1,
      sym_optional_named_parameter,
    STATE(204), 1,
      sym_unnamed_parameter,
    STATE(250), 1,
      sym__input_then_params,
    STATE(255), 1,
      sym__params,
    STATE(262), 1,
      sym__required_then_optional_params,
    STATE(263), 1,
      sym__optional_params,
    STATE(296), 1,
      sym__parameter_sequence,
  [1409] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_message_text,
  [1424] = 2,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(247), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [1439] = 2,
    ACTIONS(251), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(249), 6,
      aux_sym_newline_token1,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [1454] = 6,
    ACTIONS(253), 1,
      aux_sym_newline_token1,
    ACTIONS(256), 1,
      sym_message_text,
    STATE(19), 1,
      sym_message_line,
    STATE(103), 1,
      sym_newline,
    STATE(77), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(233), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [1477] = 2,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(261), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [1492] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_message_text,
  [1507] = 2,
    ACTIONS(265), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(263), 6,
      aux_sym_newline_token1,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [1522] = 2,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_message_text,
  [1537] = 2,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(222), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [1552] = 2,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_message_text,
  [1567] = 2,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(164), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [1582] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_message_text,
  [1597] = 2,
    ACTIONS(164), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(103), 6,
      aux_sym_newline_token1,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [1612] = 1,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1624] = 1,
    ACTIONS(220), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1636] = 1,
    ACTIONS(271), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1648] = 1,
    ACTIONS(273), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1660] = 1,
    ACTIONS(275), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1672] = 1,
    ACTIONS(277), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1684] = 1,
    ACTIONS(279), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1696] = 1,
    ACTIONS(281), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1708] = 1,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1720] = 4,
    ACTIONS(253), 1,
      aux_sym_newline_token1,
    STATE(103), 1,
      sym_newline,
    STATE(77), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(233), 5,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [1738] = 1,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1750] = 1,
    ACTIONS(285), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1762] = 6,
    ACTIONS(140), 1,
      aux_sym_newline_token1,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(63), 1,
      sym_newline,
    STATE(73), 1,
      sym_struct_body,
    STATE(150), 1,
      sym_struct_field,
    STATE(22), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
  [1783] = 4,
    ACTIONS(291), 1,
      sym_array_suffix,
    ACTIONS(293), 1,
      sym_question,
    STATE(84), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(289), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1800] = 3,
    ACTIONS(297), 1,
      sym_array_suffix,
    STATE(82), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(295), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [1815] = 7,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(302), 1,
      sym_frontmatter_delimiter,
    ACTIONS(304), 1,
      sym_non_frontmatter_fence_text,
    STATE(86), 1,
      sym_prompt_frontmatter,
    STATE(164), 1,
      sym_newline,
    STATE(182), 1,
      sym_prompt_fence_body,
    STATE(88), 2,
      sym_non_frontmatter_fence_content_line,
      sym_empty_fence_content_line,
  [1838] = 4,
    ACTIONS(291), 1,
      sym_array_suffix,
    ACTIONS(308), 1,
      sym_question,
    STATE(82), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(306), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1855] = 1,
    ACTIONS(310), 7,
      aux_sym_newline_token1,
      sym_array_suffix,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [1865] = 5,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(312), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(314), 1,
      sym_fence_text,
    STATE(141), 1,
      sym_newline,
    STATE(91), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1882] = 5,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(314), 1,
      sym_fence_text,
    ACTIONS(316), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(141), 1,
      sym_newline,
    STATE(89), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1899] = 5,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(314), 1,
      sym_fence_text,
    ACTIONS(318), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(141), 1,
      sym_newline,
    STATE(93), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1916] = 5,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(314), 1,
      sym_fence_text,
    ACTIONS(320), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(141), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1933] = 5,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(314), 1,
      sym_fence_text,
    ACTIONS(322), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(141), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1950] = 5,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(314), 1,
      sym_fence_text,
    ACTIONS(324), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(141), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1967] = 5,
    ACTIONS(21), 1,
      aux_sym_newline_token1,
    ACTIONS(29), 1,
      sym_message_text,
    STATE(62), 1,
      sym_message_line,
    STATE(236), 1,
      sym_newline,
    STATE(112), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
  [1984] = 5,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(314), 1,
      sym_fence_text,
    ACTIONS(326), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(141), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2001] = 5,
    ACTIONS(328), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(333), 1,
      sym_fence_text,
    STATE(141), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2018] = 4,
    ACTIONS(336), 1,
      anon_sym_headers,
    ACTIONS(338), 1,
      anon_sym_env,
    ACTIONS(340), 1,
      sym_frontmatter_delimiter,
    STATE(97), 3,
      sym_service_headers_block,
      sym_service_env_block,
      aux_sym_service_frontmatter_repeat1,
  [2033] = 5,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(342), 1,
      sym_non_frontmatter_fence_text,
    STATE(164), 1,
      sym_newline,
    STATE(239), 1,
      sym_psyche_fence_body,
    STATE(106), 2,
      sym_non_frontmatter_fence_content_line,
      sym_empty_fence_content_line,
  [2050] = 4,
    ACTIONS(336), 1,
      anon_sym_headers,
    ACTIONS(338), 1,
      anon_sym_env,
    ACTIONS(344), 1,
      sym_frontmatter_delimiter,
    STATE(98), 3,
      sym_service_headers_block,
      sym_service_env_block,
      aux_sym_service_frontmatter_repeat1,
  [2065] = 4,
    ACTIONS(346), 1,
      anon_sym_headers,
    ACTIONS(349), 1,
      anon_sym_env,
    ACTIONS(352), 1,
      sym_frontmatter_delimiter,
    STATE(98), 3,
      sym_service_headers_block,
      sym_service_env_block,
      aux_sym_service_frontmatter_repeat1,
  [2080] = 3,
    ACTIONS(356), 1,
      sym_frontmatter_header_name,
    STATE(101), 2,
      sym_header_map_entry_line,
      aux_sym_service_headers_block_repeat1,
    ACTIONS(354), 3,
      anon_sym_headers,
      anon_sym_env,
      sym_frontmatter_delimiter,
  [2093] = 3,
    ACTIONS(356), 1,
      sym_frontmatter_header_name,
    STATE(101), 2,
      sym_header_map_entry_line,
      aux_sym_service_headers_block_repeat1,
    ACTIONS(358), 3,
      anon_sym_headers,
      anon_sym_env,
      sym_frontmatter_delimiter,
  [2106] = 3,
    ACTIONS(362), 1,
      sym_frontmatter_header_name,
    STATE(101), 2,
      sym_header_map_entry_line,
      aux_sym_service_headers_block_repeat1,
    ACTIONS(360), 3,
      anon_sym_headers,
      anon_sym_env,
      sym_frontmatter_delimiter,
  [2119] = 6,
    ACTIONS(239), 1,
      sym_named_identifier,
    STATE(145), 1,
      sym_required_named_parameter,
    STATE(168), 1,
      sym_optional_named_parameter,
    STATE(260), 1,
      sym__params,
    STATE(262), 1,
      sym__required_then_optional_params,
    STATE(263), 1,
      sym__optional_params,
  [2138] = 1,
    ACTIONS(222), 6,
      aux_sym_newline_token1,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [2147] = 5,
    ACTIONS(21), 1,
      aux_sym_newline_token1,
    ACTIONS(29), 1,
      sym_message_text,
    STATE(19), 1,
      sym_message_line,
    STATE(236), 1,
      sym_newline,
    STATE(112), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
  [2164] = 1,
    ACTIONS(164), 6,
      aux_sym_newline_token1,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [2173] = 5,
    ACTIONS(300), 1,
      aux_sym_newline_token1,
    ACTIONS(314), 1,
      sym_fence_text,
    ACTIONS(365), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(141), 1,
      sym_newline,
    STATE(90), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2190] = 4,
    ACTIONS(369), 1,
      aux_sym_reference_token1,
    STATE(113), 1,
      sym_overlay_value,
    STATE(233), 1,
      sym_overlay_values,
    ACTIONS(367), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2204] = 2,
    STATE(206), 1,
      sym_cap_kind,
    ACTIONS(371), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_skill,
  [2214] = 1,
    ACTIONS(373), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2222] = 5,
    ACTIONS(375), 1,
      sym_arrow,
    ACTIONS(377), 1,
      sym_colon,
    ACTIONS(379), 1,
      sym_lparen,
    ACTIONS(381), 1,
      sym_identifier,
    STATE(231), 1,
      sym_parameter_list,
  [2238] = 1,
    ACTIONS(383), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2246] = 4,
    ACTIONS(233), 1,
      sym_message_text,
    ACTIONS(385), 1,
      aux_sym_newline_token1,
    STATE(236), 1,
      sym_newline,
    STATE(112), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
  [2260] = 3,
    ACTIONS(390), 1,
      sym_comma,
    STATE(122), 1,
      aux_sym_overlay_values_repeat1,
    ACTIONS(388), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2271] = 3,
    ACTIONS(392), 1,
      sym_colon,
    ACTIONS(396), 1,
      sym_question,
    ACTIONS(394), 2,
      sym_rparen,
      sym_comma,
  [2282] = 2,
    ACTIONS(400), 1,
      sym_colon,
    ACTIONS(398), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [2291] = 1,
    ACTIONS(402), 4,
      anon_sym_headers,
      anon_sym_env,
      sym_frontmatter_delimiter,
      sym_frontmatter_header_name,
  [2298] = 4,
    ACTIONS(379), 1,
      sym_lparen,
    ACTIONS(404), 1,
      sym_arrow,
    ACTIONS(406), 1,
      sym_colon,
    STATE(220), 1,
      sym_parameter_list,
  [2311] = 3,
    ACTIONS(410), 1,
      sym_comma,
    STATE(118), 1,
      aux_sym_overlay_values_repeat1,
    ACTIONS(408), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2322] = 4,
    ACTIONS(239), 1,
      sym_named_identifier,
    STATE(168), 1,
      sym_optional_named_parameter,
    STATE(176), 1,
      sym_required_named_parameter,
    STATE(278), 1,
      sym__optional_params,
  [2335] = 4,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
    ACTIONS(413), 1,
      sym_inline_comment,
    ACTIONS(415), 1,
      sym_message_text,
    STATE(6), 1,
      sym_newline,
  [2348] = 4,
    ACTIONS(239), 1,
      sym_named_identifier,
    STATE(168), 1,
      sym_optional_named_parameter,
    STATE(176), 1,
      sym_required_named_parameter,
    STATE(280), 1,
      sym__optional_params,
  [2361] = 3,
    ACTIONS(390), 1,
      sym_comma,
    STATE(118), 1,
      aux_sym_overlay_values_repeat1,
    ACTIONS(417), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2372] = 1,
    ACTIONS(164), 4,
      anon_sym_headers,
      anon_sym_env,
      sym_frontmatter_delimiter,
      sym_frontmatter_header_name,
  [2379] = 3,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    ACTIONS(421), 1,
      sym_inline_comment,
    STATE(44), 1,
      sym_newline,
  [2389] = 3,
    ACTIONS(423), 1,
      sym_rparen,
    ACTIONS(425), 1,
      sym_comma,
    STATE(125), 1,
      aux_sym__required_then_optional_params_repeat1,
  [2399] = 1,
    ACTIONS(428), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2405] = 1,
    ACTIONS(430), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [2411] = 3,
    ACTIONS(432), 1,
      sym_rparen,
    ACTIONS(434), 1,
      sym_comma,
    STATE(128), 1,
      aux_sym__optional_params_repeat1,
  [2421] = 3,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    ACTIONS(437), 1,
      sym_inline_comment,
    STATE(40), 1,
      sym_newline,
  [2431] = 3,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    ACTIONS(439), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_newline,
  [2441] = 1,
    ACTIONS(441), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2447] = 3,
    ACTIONS(443), 1,
      aux_sym_newline_token1,
    ACTIONS(445), 1,
      sym_inline_comment,
    STATE(57), 1,
      sym_newline,
  [2457] = 3,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    ACTIONS(447), 1,
      sym_inline_comment,
    STATE(30), 1,
      sym_newline,
  [2467] = 1,
    ACTIONS(449), 3,
      aux_sym_newline_token1,
      sym_frontmatter_delimiter,
      sym_non_frontmatter_fence_text,
  [2473] = 2,
    ACTIONS(392), 1,
      sym_colon,
    ACTIONS(394), 2,
      sym_rparen,
      sym_comma,
  [2481] = 3,
    ACTIONS(451), 1,
      sym_frontmatter_delimiter,
    STATE(87), 1,
      sym_service_frontmatter,
    STATE(172), 1,
      sym_service_fence_body,
  [2491] = 1,
    ACTIONS(453), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [2497] = 3,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    ACTIONS(455), 1,
      sym_inline_comment,
    STATE(42), 1,
      sym_newline,
  [2507] = 1,
    ACTIONS(457), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2513] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(459), 1,
      sym_inline_comment,
    STATE(79), 1,
      sym_newline,
  [2523] = 1,
    ACTIONS(461), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2529] = 1,
    ACTIONS(463), 3,
      aux_sym_newline_token1,
      sym_frontmatter_delimiter,
      sym_non_frontmatter_fence_text,
  [2535] = 3,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    ACTIONS(465), 1,
      sym_inline_comment,
    STATE(33), 1,
      sym_newline,
  [2545] = 2,
    STATE(217), 1,
      sym_service_transport_value,
    ACTIONS(467), 2,
      anon_sym_http,
      anon_sym_stdio,
  [2553] = 3,
    ACTIONS(469), 1,
      sym_rparen,
    ACTIONS(471), 1,
      sym_comma,
    STATE(159), 1,
      aux_sym__required_then_optional_params_repeat1,
  [2563] = 1,
    ACTIONS(473), 3,
      anon_sym_headers,
      anon_sym_env,
      sym_frontmatter_delimiter,
  [2569] = 2,
    ACTIONS(475), 1,
      sym_frontmatter_header_name,
    STATE(99), 2,
      sym_header_map_entry_line,
      aux_sym_service_headers_block_repeat1,
  [2577] = 2,
    ACTIONS(475), 1,
      sym_frontmatter_header_name,
    STATE(100), 2,
      sym_header_map_entry_line,
      aux_sym_service_headers_block_repeat1,
  [2585] = 1,
    ACTIONS(477), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2591] = 3,
    ACTIONS(140), 1,
      aux_sym_newline_token1,
    ACTIONS(479), 1,
      sym_inline_comment,
    STATE(56), 1,
      sym_newline,
  [2601] = 3,
    ACTIONS(481), 1,
      aux_sym_newline_token1,
    ACTIONS(483), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_newline,
  [2611] = 1,
    ACTIONS(485), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [2617] = 1,
    ACTIONS(398), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [2623] = 1,
    ACTIONS(164), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2629] = 3,
    ACTIONS(487), 1,
      aux_sym_newline_token1,
    ACTIONS(489), 1,
      sym_inline_comment,
    STATE(244), 1,
      sym_newline,
  [2639] = 2,
    ACTIONS(491), 1,
      sym_colon,
    ACTIONS(493), 2,
      sym_rparen,
      sym_comma,
  [2647] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(495), 1,
      sym_inline_comment,
    STATE(281), 1,
      sym_newline,
  [2657] = 3,
    ACTIONS(497), 1,
      aux_sym_newline_token1,
    ACTIONS(499), 1,
      sym_inline_comment,
    STATE(134), 1,
      sym_newline,
  [2667] = 3,
    ACTIONS(501), 1,
      sym_rparen,
    ACTIONS(503), 1,
      sym_comma,
    STATE(125), 1,
      aux_sym__required_then_optional_params_repeat1,
  [2677] = 3,
    ACTIONS(505), 1,
      sym_rparen,
    ACTIONS(507), 1,
      sym_comma,
    STATE(128), 1,
      aux_sym__optional_params_repeat1,
  [2687] = 3,
    ACTIONS(509), 1,
      aux_sym_newline_token1,
    ACTIONS(511), 1,
      sym_inline_comment,
    STATE(193), 1,
      sym_newline,
  [2697] = 3,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    ACTIONS(515), 1,
      sym_inline_comment,
    STATE(55), 1,
      sym_newline,
  [2707] = 3,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    ACTIONS(517), 1,
      sym_inline_comment,
    STATE(35), 1,
      sym_newline,
  [2717] = 1,
    ACTIONS(519), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2723] = 3,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    ACTIONS(521), 1,
      sym_inline_comment,
    STATE(46), 1,
      sym_newline,
  [2733] = 3,
    ACTIONS(481), 1,
      aux_sym_newline_token1,
    ACTIONS(523), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_newline,
  [2743] = 1,
    ACTIONS(164), 3,
      aux_sym_newline_token1,
      sym_frontmatter_delimiter,
      sym_non_frontmatter_fence_text,
  [2749] = 3,
    ACTIONS(507), 1,
      sym_comma,
    ACTIONS(525), 1,
      sym_rparen,
    STATE(160), 1,
      aux_sym__optional_params_repeat1,
  [2759] = 1,
    ACTIONS(527), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2765] = 1,
    ACTIONS(529), 2,
      sym_rparen,
      sym_comma,
  [2770] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(232), 1,
      sym_newline,
  [2777] = 2,
    ACTIONS(531), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(75), 1,
      sym_fence_close,
  [2784] = 2,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    STATE(39), 1,
      sym_newline,
  [2791] = 2,
    ACTIONS(513), 1,
      aux_sym_newline_token1,
    STATE(64), 1,
      sym_newline,
  [2798] = 2,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(195), 1,
      sym_type_expression,
  [2805] = 1,
    ACTIONS(535), 2,
      sym_rparen,
      sym_comma,
  [2810] = 2,
    ACTIONS(443), 1,
      aux_sym_newline_token1,
    STATE(61), 1,
      sym_newline,
  [2817] = 1,
    ACTIONS(537), 2,
      sym_rparen,
      sym_comma,
  [2822] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(238), 1,
      sym_newline,
  [2829] = 2,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    STATE(41), 1,
      sym_newline,
  [2836] = 1,
    ACTIONS(539), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2841] = 2,
    ACTIONS(531), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(70), 1,
      sym_fence_close,
  [2848] = 2,
    ACTIONS(541), 1,
      anon_sym_target,
    STATE(95), 1,
      sym_service_target_line,
  [2855] = 2,
    ACTIONS(543), 1,
      aux_sym_newline_token1,
    STATE(126), 1,
      sym_newline,
  [2862] = 2,
    ACTIONS(369), 1,
      aux_sym_reference_token1,
    STATE(127), 1,
      sym_overlay_value,
  [2869] = 2,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    STATE(28), 1,
      sym_newline,
  [2876] = 2,
    ACTIONS(481), 1,
      aux_sym_newline_token1,
    STATE(11), 1,
      sym_newline,
  [2883] = 2,
    ACTIONS(545), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(290), 1,
      sym_fence_open,
  [2890] = 2,
    ACTIONS(545), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(292), 1,
      sym_fence_open,
  [2897] = 2,
    ACTIONS(545), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(294), 1,
      sym_fence_open,
  [2904] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(72), 1,
      sym_newline,
  [2911] = 2,
    ACTIONS(509), 1,
      aux_sym_newline_token1,
    STATE(210), 1,
      sym_newline,
  [2918] = 1,
    ACTIONS(547), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [2923] = 1,
    ACTIONS(549), 2,
      sym_arrow,
      sym_colon,
  [2928] = 1,
    ACTIONS(551), 2,
      sym_rparen,
      sym_comma,
  [2933] = 2,
    ACTIONS(553), 1,
      sym_named_identifier,
    STATE(176), 1,
      sym_required_named_parameter,
  [2940] = 2,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    STATE(45), 1,
      sym_newline,
  [2947] = 1,
    ACTIONS(555), 2,
      sym_rparen,
      sym_comma,
  [2952] = 2,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    STATE(47), 1,
      sym_newline,
  [2959] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(268), 1,
      sym_newline,
  [2966] = 2,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(170), 1,
      sym_type_expression,
  [2973] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(252), 1,
      sym_newline,
  [2980] = 1,
    ACTIONS(557), 2,
      sym_arrow,
      sym_colon,
  [2985] = 2,
    ACTIONS(559), 1,
      sym_rparen,
    ACTIONS(561), 1,
      sym_comma,
  [2992] = 2,
    ACTIONS(563), 1,
      sym_named_identifier,
    STATE(178), 1,
      sym_optional_named_parameter,
  [2999] = 2,
    ACTIONS(565), 1,
      aux_sym_reference_token1,
    STATE(140), 1,
      sym_reference,
  [3006] = 2,
    ACTIONS(481), 1,
      aux_sym_newline_token1,
    STATE(48), 1,
      sym_newline,
  [3013] = 2,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    STATE(34), 1,
      sym_newline,
  [3020] = 2,
    ACTIONS(487), 1,
      aux_sym_newline_token1,
    STATE(222), 1,
      sym_newline,
  [3027] = 1,
    ACTIONS(567), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [3032] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(256), 1,
      sym_newline,
  [3039] = 2,
    ACTIONS(497), 1,
      aux_sym_newline_token1,
    STATE(142), 1,
      sym_newline,
  [3046] = 2,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(253), 1,
      sym_type_expression,
  [3053] = 2,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(276), 1,
      sym_type_expression,
  [3060] = 2,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    STATE(49), 1,
      sym_newline,
  [3067] = 2,
    ACTIONS(419), 1,
      aux_sym_newline_token1,
    STATE(36), 1,
      sym_newline,
  [3074] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(259), 1,
      sym_newline,
  [3081] = 2,
    ACTIONS(543), 1,
      aux_sym_newline_token1,
    STATE(169), 1,
      sym_newline,
  [3088] = 2,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(246), 1,
      sym_type_expression,
  [3095] = 2,
    ACTIONS(569), 1,
      sym_arrow,
    ACTIONS(571), 1,
      sym_colon,
  [3102] = 2,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(293), 1,
      sym_type_expression,
  [3109] = 2,
    ACTIONS(573), 1,
      aux_sym_newline_token1,
    ACTIONS(575), 1,
      sym_non_frontmatter_fence_text,
  [3116] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(146), 1,
      sym_newline,
  [3123] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(147), 1,
      sym_newline,
  [3130] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(148), 1,
      sym_newline,
  [3137] = 2,
    ACTIONS(579), 1,
      anon_sym_transport,
    STATE(183), 1,
      sym_service_transport_line,
  [3144] = 2,
    ACTIONS(543), 1,
      aux_sym_newline_token1,
    STATE(149), 1,
      sym_newline,
  [3151] = 1,
    ACTIONS(581), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3156] = 2,
    ACTIONS(543), 1,
      aux_sym_newline_token1,
    STATE(131), 1,
      sym_newline,
  [3163] = 2,
    ACTIONS(583), 1,
      aux_sym_newline_token1,
    STATE(116), 1,
      sym_newline,
  [3170] = 2,
    ACTIONS(585), 1,
      sym_arrow,
    ACTIONS(587), 1,
      sym_colon,
  [3177] = 2,
    ACTIONS(589), 1,
      anon_sym_description,
    STATE(226), 1,
      sym_service_description_line,
  [3184] = 1,
    ACTIONS(591), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3189] = 2,
    ACTIONS(543), 1,
      aux_sym_newline_token1,
    STATE(139), 1,
      sym_newline,
  [3196] = 2,
    ACTIONS(481), 1,
      aux_sym_newline_token1,
    STATE(8), 1,
      sym_newline,
  [3203] = 1,
    ACTIONS(222), 2,
      aux_sym_newline_token1,
      sym_message_text,
  [3208] = 1,
    ACTIONS(164), 2,
      aux_sym_newline_token1,
      sym_message_text,
  [3213] = 2,
    ACTIONS(593), 1,
      anon_sym_params,
    STATE(266), 1,
      sym_prompt_params_line,
  [3220] = 2,
    ACTIONS(531), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(76), 1,
      sym_fence_close,
  [3227] = 2,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(228), 1,
      sym_type_expression,
  [3234] = 1,
    ACTIONS(103), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [3239] = 2,
    ACTIONS(103), 1,
      sym_non_frontmatter_fence_text,
    ACTIONS(164), 1,
      aux_sym_newline_token1,
  [3246] = 2,
    ACTIONS(140), 1,
      aux_sym_newline_token1,
    STATE(59), 1,
      sym_newline,
  [3253] = 2,
    ACTIONS(595), 1,
      aux_sym_newline_token1,
    ACTIONS(597), 1,
      sym_non_frontmatter_fence_text,
  [3260] = 1,
    ACTIONS(400), 1,
      sym_colon,
  [3264] = 1,
    ACTIONS(599), 1,
      sym_colon,
  [3268] = 1,
    ACTIONS(601), 1,
      sym_frontmatter_scalar,
  [3272] = 1,
    ACTIONS(603), 1,
      sym_colon,
  [3276] = 1,
    ACTIONS(605), 1,
      sym_colon,
  [3280] = 1,
    ACTIONS(607), 1,
      sym_rparen,
  [3284] = 1,
    ACTIONS(609), 1,
      sym_identifier,
  [3288] = 1,
    ACTIONS(611), 1,
      sym_frontmatter_delimiter,
  [3292] = 1,
    ACTIONS(613), 1,
      sym_colon,
  [3296] = 1,
    ACTIONS(615), 1,
      sym_colon,
  [3300] = 1,
    ACTIONS(617), 1,
      sym_rparen,
  [3304] = 1,
    ACTIONS(619), 1,
      sym_frontmatter_delimiter,
  [3308] = 1,
    ACTIONS(621), 1,
      sym_identifier,
  [3312] = 1,
    ACTIONS(623), 1,
      sym_colon,
  [3316] = 1,
    ACTIONS(625), 1,
      anon_sym_target,
  [3320] = 1,
    ACTIONS(627), 1,
      sym_rparen,
  [3324] = 1,
    ACTIONS(629), 1,
      sym_colon,
  [3328] = 1,
    ACTIONS(631), 1,
      sym_rparen,
  [3332] = 1,
    ACTIONS(631), 1,
      sym_rparen,
  [3336] = 1,
    ACTIONS(396), 1,
      sym_question,
  [3340] = 1,
    ACTIONS(633), 1,
      sym_colon,
  [3344] = 1,
    ACTIONS(635), 1,
      sym_frontmatter_delimiter,
  [3348] = 1,
    ACTIONS(637), 1,
      sym_identifier,
  [3352] = 1,
    ACTIONS(639), 1,
      anon_sym_transport,
  [3356] = 1,
    ACTIONS(641), 1,
      aux_sym_newline_token1,
  [3360] = 1,
    ACTIONS(643), 1,
      sym_colon,
  [3364] = 1,
    ACTIONS(645), 1,
      sym_identifier,
  [3368] = 1,
    ACTIONS(647), 1,
      sym_colon,
  [3372] = 1,
    ACTIONS(649), 1,
      sym_frontmatter_scalar,
  [3376] = 1,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
  [3380] = 1,
    ACTIONS(653), 1,
      sym_frontmatter_scalar,
  [3384] = 1,
    ACTIONS(655), 1,
      sym_colon,
  [3388] = 1,
    ACTIONS(657), 1,
      sym_colon,
  [3392] = 1,
    ACTIONS(659), 1,
      sym_rparen,
  [3396] = 1,
    ACTIONS(661), 1,
      sym_frontmatter_scalar,
  [3400] = 1,
    ACTIONS(663), 1,
      sym_rparen,
  [3404] = 1,
    ACTIONS(665), 1,
      sym_frontmatter_delimiter,
  [3408] = 1,
    ACTIONS(667), 1,
      sym_identifier,
  [3412] = 1,
    ACTIONS(669), 1,
      sym_colon,
  [3416] = 1,
    ACTIONS(671), 1,
      sym_colon,
  [3420] = 1,
    ACTIONS(673), 1,
      sym_identifier,
  [3424] = 1,
    ACTIONS(675), 1,
      sym_identifier,
  [3428] = 1,
    ACTIONS(677), 1,
      sym_colon,
  [3432] = 1,
    ACTIONS(679), 1,
      sym_colon,
  [3436] = 1,
    ACTIONS(681), 1,
      sym_markdown_language,
  [3440] = 1,
    ACTIONS(683), 1,
      sym_markdown_language,
  [3444] = 1,
    ACTIONS(685), 1,
      aux_sym_reference_token1,
  [3448] = 1,
    ACTIONS(687), 1,
      sym_markdown_language,
  [3452] = 1,
    ACTIONS(689), 1,
      sym_colon,
  [3456] = 1,
    ACTIONS(691), 1,
      sym_markdown_language,
  [3460] = 1,
    ACTIONS(103), 1,
      sym_frontmatter_header_name,
  [3464] = 1,
    ACTIONS(693), 1,
      sym_rparen,
  [3468] = 1,
    ACTIONS(695), 1,
      aux_sym_newline_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 125,
  [SMALL_STATE(5)] = 190,
  [SMALL_STATE(6)] = 221,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 283,
  [SMALL_STATE(9)] = 314,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 376,
  [SMALL_STATE(12)] = 407,
  [SMALL_STATE(13)] = 438,
  [SMALL_STATE(14)] = 469,
  [SMALL_STATE(15)] = 503,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 551,
  [SMALL_STATE(18)] = 580,
  [SMALL_STATE(19)] = 609,
  [SMALL_STATE(20)] = 639,
  [SMALL_STATE(21)] = 669,
  [SMALL_STATE(22)] = 699,
  [SMALL_STATE(23)] = 729,
  [SMALL_STATE(24)] = 759,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 819,
  [SMALL_STATE(27)] = 848,
  [SMALL_STATE(28)] = 867,
  [SMALL_STATE(29)] = 884,
  [SMALL_STATE(30)] = 901,
  [SMALL_STATE(31)] = 918,
  [SMALL_STATE(32)] = 947,
  [SMALL_STATE(33)] = 974,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1008,
  [SMALL_STATE(36)] = 1025,
  [SMALL_STATE(37)] = 1042,
  [SMALL_STATE(38)] = 1077,
  [SMALL_STATE(39)] = 1106,
  [SMALL_STATE(40)] = 1123,
  [SMALL_STATE(41)] = 1140,
  [SMALL_STATE(42)] = 1157,
  [SMALL_STATE(43)] = 1174,
  [SMALL_STATE(44)] = 1193,
  [SMALL_STATE(45)] = 1210,
  [SMALL_STATE(46)] = 1227,
  [SMALL_STATE(47)] = 1244,
  [SMALL_STATE(48)] = 1261,
  [SMALL_STATE(49)] = 1280,
  [SMALL_STATE(50)] = 1297,
  [SMALL_STATE(51)] = 1314,
  [SMALL_STATE(52)] = 1333,
  [SMALL_STATE(53)] = 1351,
  [SMALL_STATE(54)] = 1375,
  [SMALL_STATE(55)] = 1409,
  [SMALL_STATE(56)] = 1424,
  [SMALL_STATE(57)] = 1439,
  [SMALL_STATE(58)] = 1454,
  [SMALL_STATE(59)] = 1477,
  [SMALL_STATE(60)] = 1492,
  [SMALL_STATE(61)] = 1507,
  [SMALL_STATE(62)] = 1522,
  [SMALL_STATE(63)] = 1537,
  [SMALL_STATE(64)] = 1552,
  [SMALL_STATE(65)] = 1567,
  [SMALL_STATE(66)] = 1582,
  [SMALL_STATE(67)] = 1597,
  [SMALL_STATE(68)] = 1612,
  [SMALL_STATE(69)] = 1624,
  [SMALL_STATE(70)] = 1636,
  [SMALL_STATE(71)] = 1648,
  [SMALL_STATE(72)] = 1660,
  [SMALL_STATE(73)] = 1672,
  [SMALL_STATE(74)] = 1684,
  [SMALL_STATE(75)] = 1696,
  [SMALL_STATE(76)] = 1708,
  [SMALL_STATE(77)] = 1720,
  [SMALL_STATE(78)] = 1738,
  [SMALL_STATE(79)] = 1750,
  [SMALL_STATE(80)] = 1762,
  [SMALL_STATE(81)] = 1783,
  [SMALL_STATE(82)] = 1800,
  [SMALL_STATE(83)] = 1815,
  [SMALL_STATE(84)] = 1838,
  [SMALL_STATE(85)] = 1855,
  [SMALL_STATE(86)] = 1865,
  [SMALL_STATE(87)] = 1882,
  [SMALL_STATE(88)] = 1899,
  [SMALL_STATE(89)] = 1916,
  [SMALL_STATE(90)] = 1933,
  [SMALL_STATE(91)] = 1950,
  [SMALL_STATE(92)] = 1967,
  [SMALL_STATE(93)] = 1984,
  [SMALL_STATE(94)] = 2001,
  [SMALL_STATE(95)] = 2018,
  [SMALL_STATE(96)] = 2033,
  [SMALL_STATE(97)] = 2050,
  [SMALL_STATE(98)] = 2065,
  [SMALL_STATE(99)] = 2080,
  [SMALL_STATE(100)] = 2093,
  [SMALL_STATE(101)] = 2106,
  [SMALL_STATE(102)] = 2119,
  [SMALL_STATE(103)] = 2138,
  [SMALL_STATE(104)] = 2147,
  [SMALL_STATE(105)] = 2164,
  [SMALL_STATE(106)] = 2173,
  [SMALL_STATE(107)] = 2190,
  [SMALL_STATE(108)] = 2204,
  [SMALL_STATE(109)] = 2214,
  [SMALL_STATE(110)] = 2222,
  [SMALL_STATE(111)] = 2238,
  [SMALL_STATE(112)] = 2246,
  [SMALL_STATE(113)] = 2260,
  [SMALL_STATE(114)] = 2271,
  [SMALL_STATE(115)] = 2282,
  [SMALL_STATE(116)] = 2291,
  [SMALL_STATE(117)] = 2298,
  [SMALL_STATE(118)] = 2311,
  [SMALL_STATE(119)] = 2322,
  [SMALL_STATE(120)] = 2335,
  [SMALL_STATE(121)] = 2348,
  [SMALL_STATE(122)] = 2361,
  [SMALL_STATE(123)] = 2372,
  [SMALL_STATE(124)] = 2379,
  [SMALL_STATE(125)] = 2389,
  [SMALL_STATE(126)] = 2399,
  [SMALL_STATE(127)] = 2405,
  [SMALL_STATE(128)] = 2411,
  [SMALL_STATE(129)] = 2421,
  [SMALL_STATE(130)] = 2431,
  [SMALL_STATE(131)] = 2441,
  [SMALL_STATE(132)] = 2447,
  [SMALL_STATE(133)] = 2457,
  [SMALL_STATE(134)] = 2467,
  [SMALL_STATE(135)] = 2473,
  [SMALL_STATE(136)] = 2481,
  [SMALL_STATE(137)] = 2491,
  [SMALL_STATE(138)] = 2497,
  [SMALL_STATE(139)] = 2507,
  [SMALL_STATE(140)] = 2513,
  [SMALL_STATE(141)] = 2523,
  [SMALL_STATE(142)] = 2529,
  [SMALL_STATE(143)] = 2535,
  [SMALL_STATE(144)] = 2545,
  [SMALL_STATE(145)] = 2553,
  [SMALL_STATE(146)] = 2563,
  [SMALL_STATE(147)] = 2569,
  [SMALL_STATE(148)] = 2577,
  [SMALL_STATE(149)] = 2585,
  [SMALL_STATE(150)] = 2591,
  [SMALL_STATE(151)] = 2601,
  [SMALL_STATE(152)] = 2611,
  [SMALL_STATE(153)] = 2617,
  [SMALL_STATE(154)] = 2623,
  [SMALL_STATE(155)] = 2629,
  [SMALL_STATE(156)] = 2639,
  [SMALL_STATE(157)] = 2647,
  [SMALL_STATE(158)] = 2657,
  [SMALL_STATE(159)] = 2667,
  [SMALL_STATE(160)] = 2677,
  [SMALL_STATE(161)] = 2687,
  [SMALL_STATE(162)] = 2697,
  [SMALL_STATE(163)] = 2707,
  [SMALL_STATE(164)] = 2717,
  [SMALL_STATE(165)] = 2723,
  [SMALL_STATE(166)] = 2733,
  [SMALL_STATE(167)] = 2743,
  [SMALL_STATE(168)] = 2749,
  [SMALL_STATE(169)] = 2759,
  [SMALL_STATE(170)] = 2765,
  [SMALL_STATE(171)] = 2770,
  [SMALL_STATE(172)] = 2777,
  [SMALL_STATE(173)] = 2784,
  [SMALL_STATE(174)] = 2791,
  [SMALL_STATE(175)] = 2798,
  [SMALL_STATE(176)] = 2805,
  [SMALL_STATE(177)] = 2810,
  [SMALL_STATE(178)] = 2817,
  [SMALL_STATE(179)] = 2822,
  [SMALL_STATE(180)] = 2829,
  [SMALL_STATE(181)] = 2836,
  [SMALL_STATE(182)] = 2841,
  [SMALL_STATE(183)] = 2848,
  [SMALL_STATE(184)] = 2855,
  [SMALL_STATE(185)] = 2862,
  [SMALL_STATE(186)] = 2869,
  [SMALL_STATE(187)] = 2876,
  [SMALL_STATE(188)] = 2883,
  [SMALL_STATE(189)] = 2890,
  [SMALL_STATE(190)] = 2897,
  [SMALL_STATE(191)] = 2904,
  [SMALL_STATE(192)] = 2911,
  [SMALL_STATE(193)] = 2918,
  [SMALL_STATE(194)] = 2923,
  [SMALL_STATE(195)] = 2928,
  [SMALL_STATE(196)] = 2933,
  [SMALL_STATE(197)] = 2940,
  [SMALL_STATE(198)] = 2947,
  [SMALL_STATE(199)] = 2952,
  [SMALL_STATE(200)] = 2959,
  [SMALL_STATE(201)] = 2966,
  [SMALL_STATE(202)] = 2973,
  [SMALL_STATE(203)] = 2980,
  [SMALL_STATE(204)] = 2985,
  [SMALL_STATE(205)] = 2992,
  [SMALL_STATE(206)] = 2999,
  [SMALL_STATE(207)] = 3006,
  [SMALL_STATE(208)] = 3013,
  [SMALL_STATE(209)] = 3020,
  [SMALL_STATE(210)] = 3027,
  [SMALL_STATE(211)] = 3032,
  [SMALL_STATE(212)] = 3039,
  [SMALL_STATE(213)] = 3046,
  [SMALL_STATE(214)] = 3053,
  [SMALL_STATE(215)] = 3060,
  [SMALL_STATE(216)] = 3067,
  [SMALL_STATE(217)] = 3074,
  [SMALL_STATE(218)] = 3081,
  [SMALL_STATE(219)] = 3088,
  [SMALL_STATE(220)] = 3095,
  [SMALL_STATE(221)] = 3102,
  [SMALL_STATE(222)] = 3109,
  [SMALL_STATE(223)] = 3116,
  [SMALL_STATE(224)] = 3123,
  [SMALL_STATE(225)] = 3130,
  [SMALL_STATE(226)] = 3137,
  [SMALL_STATE(227)] = 3144,
  [SMALL_STATE(228)] = 3151,
  [SMALL_STATE(229)] = 3156,
  [SMALL_STATE(230)] = 3163,
  [SMALL_STATE(231)] = 3170,
  [SMALL_STATE(232)] = 3177,
  [SMALL_STATE(233)] = 3184,
  [SMALL_STATE(234)] = 3189,
  [SMALL_STATE(235)] = 3196,
  [SMALL_STATE(236)] = 3203,
  [SMALL_STATE(237)] = 3208,
  [SMALL_STATE(238)] = 3213,
  [SMALL_STATE(239)] = 3220,
  [SMALL_STATE(240)] = 3227,
  [SMALL_STATE(241)] = 3234,
  [SMALL_STATE(242)] = 3239,
  [SMALL_STATE(243)] = 3246,
  [SMALL_STATE(244)] = 3253,
  [SMALL_STATE(245)] = 3260,
  [SMALL_STATE(246)] = 3264,
  [SMALL_STATE(247)] = 3268,
  [SMALL_STATE(248)] = 3272,
  [SMALL_STATE(249)] = 3276,
  [SMALL_STATE(250)] = 3280,
  [SMALL_STATE(251)] = 3284,
  [SMALL_STATE(252)] = 3288,
  [SMALL_STATE(253)] = 3292,
  [SMALL_STATE(254)] = 3296,
  [SMALL_STATE(255)] = 3300,
  [SMALL_STATE(256)] = 3304,
  [SMALL_STATE(257)] = 3308,
  [SMALL_STATE(258)] = 3312,
  [SMALL_STATE(259)] = 3316,
  [SMALL_STATE(260)] = 3320,
  [SMALL_STATE(261)] = 3324,
  [SMALL_STATE(262)] = 3328,
  [SMALL_STATE(263)] = 3332,
  [SMALL_STATE(264)] = 3336,
  [SMALL_STATE(265)] = 3340,
  [SMALL_STATE(266)] = 3344,
  [SMALL_STATE(267)] = 3348,
  [SMALL_STATE(268)] = 3352,
  [SMALL_STATE(269)] = 3356,
  [SMALL_STATE(270)] = 3360,
  [SMALL_STATE(271)] = 3364,
  [SMALL_STATE(272)] = 3368,
  [SMALL_STATE(273)] = 3372,
  [SMALL_STATE(274)] = 3376,
  [SMALL_STATE(275)] = 3380,
  [SMALL_STATE(276)] = 3384,
  [SMALL_STATE(277)] = 3388,
  [SMALL_STATE(278)] = 3392,
  [SMALL_STATE(279)] = 3396,
  [SMALL_STATE(280)] = 3400,
  [SMALL_STATE(281)] = 3404,
  [SMALL_STATE(282)] = 3408,
  [SMALL_STATE(283)] = 3412,
  [SMALL_STATE(284)] = 3416,
  [SMALL_STATE(285)] = 3420,
  [SMALL_STATE(286)] = 3424,
  [SMALL_STATE(287)] = 3428,
  [SMALL_STATE(288)] = 3432,
  [SMALL_STATE(289)] = 3436,
  [SMALL_STATE(290)] = 3440,
  [SMALL_STATE(291)] = 3444,
  [SMALL_STATE(292)] = 3448,
  [SMALL_STATE(293)] = 3452,
  [SMALL_STATE(294)] = 3456,
  [SMALL_STATE(295)] = 3460,
  [SMALL_STATE(296)] = 3464,
  [SMALL_STATE(297)] = 3468,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 6, 0, 37),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 6, 0, 37),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 3, 0, 27),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 3, 0, 27),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 5, 0, 27),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 5, 0, 27),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 4, 0, 27),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 4, 0, 27),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 4, 0, 37),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 4, 0, 37),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 5, 0, 37),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 5, 0, 37),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__explicit_message_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__explicit_message_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__explicit_message_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__explicit_message_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0), SHIFT_REPEAT(245),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_message, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_message, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__implicit_message_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_message_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__implicit_message_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_message_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_message, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_message, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_message, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_message, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 4, 0, 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 4, 0, 17),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 4, 0, 23),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 5, 0, 30),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 5, 0, 17),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 5, 0, 35),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 5, 0, 23),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_message, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_message, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 6, 0, 30),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 6, 0, 40),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 6, 0, 35),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 6, 0, 41),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_continuation_line, 2, 0, 11),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_continuation_line, 2, 0, 11),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 3, 0, 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 7, 0, 40),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 7, 0, 45),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 7, 0, 41),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_continuation_line, 3, 0, 11),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_continuation_line, 3, 0, 11),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 8, 0, 45),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(60),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_line, 2, 0, 11),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_line, 2, 0, 11),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 2, 0, 13),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 2, 0, 13),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_line, 2, 0, 14),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_overlay_line, 2, 0, 14),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT(162),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 3, 0, 13),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 3, 0, 13),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_line, 3, 0, 14),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_overlay_line, 3, 0, 14),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_line, 3, 0, 11),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_line, 3, 0, 11),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_declaration, 3, 0, 12),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, 0, 16),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 2, 0, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 2, 0, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_declaration, 3, 0, 12),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_declaration, 3, 0, 12),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 16),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1, 0, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 29),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 29), SHIFT_REPEAT(85),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 20),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 1, 0, 18),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 1, 0, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_fence_body, 1, 0, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_fence_body, 2, 0, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_fence_body, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 2, 0, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_psyche_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_psyche_fence_body_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_psyche_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_frontmatter_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_headers_block, 4, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_env_block, 4, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_service_headers_block_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_service_headers_block_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_fence_body, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_overlay, 2, 0, 15),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 19),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, 0, 28),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(237),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_values, 1, 0, 26),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_named_parameter, 1, 0, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_subject, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_kind, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_map_entry_line, 4, 0, 47),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_values_repeat1, 2, 0, 43),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_overlay_values_repeat1, 2, 0, 43), SHIFT_REPEAT(185),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_values, 2, 0, 36),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__required_then_optional_params_repeat1, 2, 0, 34),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__required_then_optional_params_repeat1, 2, 0, 34), SHIFT_REPEAT(196),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_frontmatter, 5, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_values_repeat1, 2, 0, 42),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__optional_params_repeat1, 2, 0, 34),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__optional_params_repeat1, 2, 0, 34), SHIFT_REPEAT(205),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 2, 0, 11),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_header, 6, 0, 44),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_frontmatter_fence_content_line, 2, 0, 11),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_header, 7, 0, 44),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_params, 1, 0, 10),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_target_line, 4, 0, 46),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_frontmatter, 8, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_value, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_named_parameter, 2, 0, 19),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_params, 2, 0, 22),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_params, 2, 0, 22),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_fence_content_line, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_params, 1, 0, 10),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_frontmatter, 7, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_named_parameter, 3, 0, 24),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__required_then_optional_params_repeat1, 2, 0, 33),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__optional_params_repeat1, 2, 0, 33),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 4, 0, 17),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_named_parameter, 4, 0, 38),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_parameter, 1, 0, 5),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 21),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_then_params, 1, 0, 9),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 5, 0, 17),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_header, 7, 0, 44),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_header, 7, 0, 44),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, 0, 24),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_overlay, 3, 0, 25),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_header, 6, 0, 44),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_header, 6, 0, 44),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_sequence, 1, 0, 7),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_params_line, 4, 0, 46),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_sequence, 1, 0, 8),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_header, 7, 0, 44),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_transport_line, 4, 0, 46),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_then_params, 3, 0, 31),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__params, 1, 0, 8),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_description_line, 4, 0, 46),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_transport_value, 1, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [651] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_params, 3, 0, 32),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_params, 4, 0, 39),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_header, 6, 0, 44),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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
