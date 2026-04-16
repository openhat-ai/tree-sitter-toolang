#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 281
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 40

enum ts_symbol_identifiers {
  aux_sym_newline_token1 = 1,
  sym_comment = 2,
  sym_array_suffix = 3,
  anon_sym_transport = 4,
  anon_sym_url = 5,
  anon_sym_headers = 6,
  anon_sym_command = 7,
  anon_sym_args = 8,
  anon_sym_DASH = 9,
  anon_sym_env = 10,
  anon_sym_cwd = 11,
  anon_sym_params = 12,
  sym_inline_comment = 13,
  sym_use_keyword = 14,
  anon_sym_psyche = 15,
  anon_sym_service = 16,
  anon_sym_prompt = 17,
  sym_struct_keyword = 18,
  sym_thunk_keyword = 19,
  sym_markdown_language = 20,
  sym_assign_operator = 21,
  sym_add_assign_operator = 22,
  sym_remove_assign_operator = 23,
  sym_arrow = 24,
  sym_colon = 25,
  sym_lparen = 26,
  sym_rparen = 27,
  sym_comma = 28,
  sym_question = 29,
  sym_underscore = 30,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 31,
  sym_frontmatter_delimiter = 32,
  anon_sym_skill = 33,
  anon_sym_psyches = 34,
  anon_sym_skills = 35,
  anon_sym_services = 36,
  anon_sym_tools = 37,
  sym_model_subject = 38,
  sym_http_transport_value = 39,
  sym_stdio_transport_value = 40,
  sym_identifier = 41,
  sym_named_identifier = 42,
  aux_sym_reference_token1 = 43,
  sym_body_text = 44,
  sym_fence_text = 45,
  sym_non_frontmatter_fence_text = 46,
  sym_frontmatter_header_name = 47,
  sym_frontmatter_scalar = 48,
  sym_source_file = 49,
  sym_newline = 50,
  sym_blank_line = 51,
  sym_use_statement = 52,
  sym_psyche_declaration = 53,
  sym_service_declaration = 54,
  sym_prompt_declaration = 55,
  sym_psyche_header = 56,
  sym_service_header = 57,
  sym_prompt_header = 58,
  sym_struct_declaration = 59,
  sym_struct_header = 60,
  sym_struct_field_line = 61,
  sym_struct_body = 62,
  sym_struct_field = 63,
  sym_parameter_list = 64,
  sym__parameter_sequence = 65,
  sym__unnamed_then_named_parameters = 66,
  sym__named_parameters = 67,
  sym__required_then_optional_named_parameters = 68,
  sym__optional_named_parameters = 69,
  sym_unnamed_parameter = 70,
  sym_required_named_parameter = 71,
  sym_optional_named_parameter = 72,
  sym_type_expression = 73,
  sym_thunk = 74,
  sym_thunk_header = 75,
  sym_thunk_body = 76,
  sym_directive_line = 77,
  sym_collection_directive = 78,
  sym_model_directive = 79,
  sym_directive_values = 80,
  sym_body_line = 81,
  sym_psyche_fence_body = 82,
  sym_service_fence_body = 83,
  sym_prompt_fence_body = 84,
  sym_service_frontmatter = 85,
  sym_http_service_frontmatter = 86,
  sym_stdio_service_frontmatter = 87,
  sym_prompt_frontmatter = 88,
  sym_http_transport_line = 89,
  sym_stdio_transport_line = 90,
  sym_http_url_line = 91,
  sym_http_headers_block = 92,
  sym_header_map_entry_line = 93,
  sym_stdio_command_line = 94,
  sym_stdio_args_block = 95,
  sym_frontmatter_list_item_line = 96,
  sym_stdio_env_line = 97,
  sym_stdio_cwd_line = 98,
  sym_prompt_params_line = 99,
  sym_fence_content_line = 100,
  sym_non_frontmatter_fence_content_line = 101,
  sym_empty_fence_content_line = 102,
  sym_psyche_keyword = 103,
  sym_service_keyword = 104,
  sym_prompt_keyword = 105,
  sym_fence_open = 106,
  sym_fence_close = 107,
  sym_cap_kind = 108,
  sym_collection_subject = 109,
  sym_reference = 110,
  sym_directive_value = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_struct_body_repeat1 = 113,
  aux_sym__required_then_optional_named_parameters_repeat1 = 114,
  aux_sym__optional_named_parameters_repeat1 = 115,
  aux_sym_type_expression_repeat1 = 116,
  aux_sym_thunk_body_repeat1 = 117,
  aux_sym_thunk_body_repeat2 = 118,
  aux_sym_thunk_body_repeat3 = 119,
  aux_sym_directive_values_repeat1 = 120,
  aux_sym_psyche_fence_body_repeat1 = 121,
  aux_sym_stdio_service_frontmatter_repeat1 = 122,
  aux_sym_http_headers_block_repeat1 = 123,
  aux_sym_stdio_args_block_repeat1 = 124,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_newline_token1] = "newline_token1",
  [sym_comment] = "comment",
  [sym_array_suffix] = "array_suffix",
  [anon_sym_transport] = "transport",
  [anon_sym_url] = "url",
  [anon_sym_headers] = "headers",
  [anon_sym_command] = "command",
  [anon_sym_args] = "args",
  [anon_sym_DASH] = "-",
  [anon_sym_env] = "env",
  [anon_sym_cwd] = "cwd",
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
  [anon_sym_psyches] = "psyches",
  [anon_sym_skills] = "skills",
  [anon_sym_services] = "services",
  [anon_sym_tools] = "tools",
  [sym_model_subject] = "model_subject",
  [sym_http_transport_value] = "http_transport_value",
  [sym_stdio_transport_value] = "stdio_transport_value",
  [sym_identifier] = "identifier",
  [sym_named_identifier] = "named_identifier",
  [aux_sym_reference_token1] = "reference_token1",
  [sym_body_text] = "body_text",
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
  [sym__unnamed_then_named_parameters] = "_unnamed_then_named_parameters",
  [sym__named_parameters] = "_named_parameters",
  [sym__required_then_optional_named_parameters] = "_required_then_optional_named_parameters",
  [sym__optional_named_parameters] = "_optional_named_parameters",
  [sym_unnamed_parameter] = "parameter",
  [sym_required_named_parameter] = "parameter",
  [sym_optional_named_parameter] = "parameter",
  [sym_type_expression] = "type_expression",
  [sym_thunk] = "thunk",
  [sym_thunk_header] = "thunk_header",
  [sym_thunk_body] = "thunk_body",
  [sym_directive_line] = "directive_line",
  [sym_collection_directive] = "collection_directive",
  [sym_model_directive] = "model_directive",
  [sym_directive_values] = "directive_values",
  [sym_body_line] = "body_line",
  [sym_psyche_fence_body] = "psyche_fence_body",
  [sym_service_fence_body] = "service_fence_body",
  [sym_prompt_fence_body] = "prompt_fence_body",
  [sym_service_frontmatter] = "service_frontmatter",
  [sym_http_service_frontmatter] = "http_service_frontmatter",
  [sym_stdio_service_frontmatter] = "stdio_service_frontmatter",
  [sym_prompt_frontmatter] = "prompt_frontmatter",
  [sym_http_transport_line] = "http_transport_line",
  [sym_stdio_transport_line] = "stdio_transport_line",
  [sym_http_url_line] = "http_url_line",
  [sym_http_headers_block] = "http_headers_block",
  [sym_header_map_entry_line] = "header_map_entry_line",
  [sym_stdio_command_line] = "stdio_command_line",
  [sym_stdio_args_block] = "stdio_args_block",
  [sym_frontmatter_list_item_line] = "frontmatter_list_item_line",
  [sym_stdio_env_line] = "stdio_env_line",
  [sym_stdio_cwd_line] = "stdio_cwd_line",
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
  [sym_collection_subject] = "collection_subject",
  [sym_reference] = "reference",
  [sym_directive_value] = "directive_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym__required_then_optional_named_parameters_repeat1] = "_required_then_optional_named_parameters_repeat1",
  [aux_sym__optional_named_parameters_repeat1] = "_optional_named_parameters_repeat1",
  [aux_sym_type_expression_repeat1] = "type_expression_repeat1",
  [aux_sym_thunk_body_repeat1] = "thunk_body_repeat1",
  [aux_sym_thunk_body_repeat2] = "thunk_body_repeat2",
  [aux_sym_thunk_body_repeat3] = "thunk_body_repeat3",
  [aux_sym_directive_values_repeat1] = "directive_values_repeat1",
  [aux_sym_psyche_fence_body_repeat1] = "psyche_fence_body_repeat1",
  [aux_sym_stdio_service_frontmatter_repeat1] = "stdio_service_frontmatter_repeat1",
  [aux_sym_http_headers_block_repeat1] = "http_headers_block_repeat1",
  [aux_sym_stdio_args_block_repeat1] = "stdio_args_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_newline_token1] = aux_sym_newline_token1,
  [sym_comment] = sym_comment,
  [sym_array_suffix] = sym_array_suffix,
  [anon_sym_transport] = anon_sym_transport,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_headers] = anon_sym_headers,
  [anon_sym_command] = anon_sym_command,
  [anon_sym_args] = anon_sym_args,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_cwd] = anon_sym_cwd,
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
  [anon_sym_psyches] = anon_sym_psyches,
  [anon_sym_skills] = anon_sym_skills,
  [anon_sym_services] = anon_sym_services,
  [anon_sym_tools] = anon_sym_tools,
  [sym_model_subject] = sym_model_subject,
  [sym_http_transport_value] = sym_http_transport_value,
  [sym_stdio_transport_value] = sym_stdio_transport_value,
  [sym_identifier] = sym_identifier,
  [sym_named_identifier] = sym_named_identifier,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [sym_body_text] = sym_body_text,
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
  [sym__unnamed_then_named_parameters] = sym__unnamed_then_named_parameters,
  [sym__named_parameters] = sym__named_parameters,
  [sym__required_then_optional_named_parameters] = sym__required_then_optional_named_parameters,
  [sym__optional_named_parameters] = sym__optional_named_parameters,
  [sym_unnamed_parameter] = sym_unnamed_parameter,
  [sym_required_named_parameter] = sym_unnamed_parameter,
  [sym_optional_named_parameter] = sym_unnamed_parameter,
  [sym_type_expression] = sym_type_expression,
  [sym_thunk] = sym_thunk,
  [sym_thunk_header] = sym_thunk_header,
  [sym_thunk_body] = sym_thunk_body,
  [sym_directive_line] = sym_directive_line,
  [sym_collection_directive] = sym_collection_directive,
  [sym_model_directive] = sym_model_directive,
  [sym_directive_values] = sym_directive_values,
  [sym_body_line] = sym_body_line,
  [sym_psyche_fence_body] = sym_psyche_fence_body,
  [sym_service_fence_body] = sym_service_fence_body,
  [sym_prompt_fence_body] = sym_prompt_fence_body,
  [sym_service_frontmatter] = sym_service_frontmatter,
  [sym_http_service_frontmatter] = sym_http_service_frontmatter,
  [sym_stdio_service_frontmatter] = sym_stdio_service_frontmatter,
  [sym_prompt_frontmatter] = sym_prompt_frontmatter,
  [sym_http_transport_line] = sym_http_transport_line,
  [sym_stdio_transport_line] = sym_stdio_transport_line,
  [sym_http_url_line] = sym_http_url_line,
  [sym_http_headers_block] = sym_http_headers_block,
  [sym_header_map_entry_line] = sym_header_map_entry_line,
  [sym_stdio_command_line] = sym_stdio_command_line,
  [sym_stdio_args_block] = sym_stdio_args_block,
  [sym_frontmatter_list_item_line] = sym_frontmatter_list_item_line,
  [sym_stdio_env_line] = sym_stdio_env_line,
  [sym_stdio_cwd_line] = sym_stdio_cwd_line,
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
  [sym_collection_subject] = sym_collection_subject,
  [sym_reference] = sym_reference,
  [sym_directive_value] = sym_directive_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym__required_then_optional_named_parameters_repeat1] = aux_sym__required_then_optional_named_parameters_repeat1,
  [aux_sym__optional_named_parameters_repeat1] = aux_sym__optional_named_parameters_repeat1,
  [aux_sym_type_expression_repeat1] = aux_sym_type_expression_repeat1,
  [aux_sym_thunk_body_repeat1] = aux_sym_thunk_body_repeat1,
  [aux_sym_thunk_body_repeat2] = aux_sym_thunk_body_repeat2,
  [aux_sym_thunk_body_repeat3] = aux_sym_thunk_body_repeat3,
  [aux_sym_directive_values_repeat1] = aux_sym_directive_values_repeat1,
  [aux_sym_psyche_fence_body_repeat1] = aux_sym_psyche_fence_body_repeat1,
  [aux_sym_stdio_service_frontmatter_repeat1] = aux_sym_stdio_service_frontmatter_repeat1,
  [aux_sym_http_headers_block_repeat1] = aux_sym_http_headers_block_repeat1,
  [aux_sym_stdio_args_block_repeat1] = aux_sym_stdio_args_block_repeat1,
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
  [anon_sym_transport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cwd] = {
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
  [anon_sym_tools] = {
    .visible = true,
    .named = false,
  },
  [sym_model_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_http_transport_value] = {
    .visible = true,
    .named = true,
  },
  [sym_stdio_transport_value] = {
    .visible = true,
    .named = true,
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
  [sym_body_text] = {
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
  [sym__unnamed_then_named_parameters] = {
    .visible = false,
    .named = true,
  },
  [sym__named_parameters] = {
    .visible = false,
    .named = true,
  },
  [sym__required_then_optional_named_parameters] = {
    .visible = false,
    .named = true,
  },
  [sym__optional_named_parameters] = {
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
  [sym_thunk_header] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_body] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_line] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_model_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_values] = {
    .visible = true,
    .named = true,
  },
  [sym_body_line] = {
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
  [sym_http_service_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_stdio_service_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_http_transport_line] = {
    .visible = true,
    .named = true,
  },
  [sym_stdio_transport_line] = {
    .visible = true,
    .named = true,
  },
  [sym_http_url_line] = {
    .visible = true,
    .named = true,
  },
  [sym_http_headers_block] = {
    .visible = true,
    .named = true,
  },
  [sym_header_map_entry_line] = {
    .visible = true,
    .named = true,
  },
  [sym_stdio_command_line] = {
    .visible = true,
    .named = true,
  },
  [sym_stdio_args_block] = {
    .visible = true,
    .named = true,
  },
  [sym_frontmatter_list_item_line] = {
    .visible = true,
    .named = true,
  },
  [sym_stdio_env_line] = {
    .visible = true,
    .named = true,
  },
  [sym_stdio_cwd_line] = {
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
  [sym_collection_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_value] = {
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
  [aux_sym__required_then_optional_named_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__optional_named_parameters_repeat1] = {
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
  [aux_sym_directive_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_psyche_fence_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stdio_service_frontmatter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_http_headers_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stdio_args_block_repeat1] = {
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
  field_keyword = 9,
  field_kind = 10,
  field_language = 11,
  field_name = 12,
  field_open = 13,
  field_operator = 14,
  field_optional = 15,
  field_parameter = 16,
  field_parameters = 17,
  field_reference = 18,
  field_returns = 19,
  field_subject = 20,
  field_text = 21,
  field_type = 22,
  field_value = 23,
  field_values = 24,
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
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_language] = "language",
  [field_name] = "name",
  [field_open] = "open",
  [field_operator] = "operator",
  [field_optional] = "optional",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_reference] = "reference",
  [field_returns] = "returns",
  [field_subject] = "subject",
  [field_text] = "text",
  [field_type] = "type",
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 3},
  [19] = {.index = 32, .length = 3},
  [20] = {.index = 35, .length = 3},
  [21] = {.index = 38, .length = 1},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 2},
  [24] = {.index = 44, .length = 4},
  [25] = {.index = 48, .length = 2},
  [26] = {.index = 50, .length = 1},
  [27] = {.index = 51, .length = 2},
  [28] = {.index = 53, .length = 4},
  [29] = {.index = 57, .length = 2},
  [30] = {.index = 59, .length = 4},
  [31] = {.index = 63, .length = 3},
  [32] = {.index = 66, .length = 5},
  [33] = {.index = 71, .length = 5},
  [34] = {.index = 76, .length = 1},
  [35] = {.index = 77, .length = 2},
  [36] = {.index = 79, .length = 5},
  [37] = {.index = 84, .length = 6},
  [38] = {.index = 90, .length = 1},
  [39] = {.index = 91, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_frontmatter, 0},
  [1] =
    {field_body, 1},
    {field_header, 0},
  [3] =
    {field_name, 0},
  [4] =
    {field_colon, 1},
    {field_keyword, 0},
  [6] =
    {field_parameter, 0, .inherited = true},
  [7] =
    {field_parameter, 0},
  [8] =
    {field_text, 0},
  [9] =
    {field_body, 1},
    {field_close, 2},
    {field_header, 0},
  [12] =
    {field_field, 0},
  [13] =
    {field_operator, 1},
    {field_subject, 0},
  [15] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [18] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [21] =
    {field_array, 0},
  [22] =
    {field_name, 0},
    {field_optional, 1},
  [24] =
    {field_array, 1, .inherited = true},
    {field_name, 0},
  [26] =
    {field_parameter, 1, .inherited = true},
  [27] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [29] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_parameters, 1},
  [32] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [35] =
    {field_operator, 1},
    {field_subject, 0},
    {field_values, 2},
  [38] =
    {field_value, 0},
  [39] =
    {field_array, 1, .inherited = true},
    {field_name, 0},
    {field_optional, 2},
  [42] =
    {field_array, 0, .inherited = true},
    {field_array, 1, .inherited = true},
  [44] =
    {field_arrow, 1},
    {field_colon, 3},
    {field_keyword, 0},
    {field_returns, 2},
  [48] =
    {field_parameter, 0},
    {field_parameter, 2, .inherited = true},
  [50] =
    {field_parameter, 1},
  [51] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [53] =
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_parameters, 2},
  [57] =
    {field_value, 0},
    {field_value, 1, .inherited = true},
  [59] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [63] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
    {field_parameter, 3, .inherited = true},
  [66] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_returns, 3},
  [71] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_parameters, 1},
    {field_returns, 3},
  [76] =
    {field_value, 1},
  [77] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [79] =
    {field_colon, 2},
    {field_kind, 0},
    {field_language, 4},
    {field_name, 1},
    {field_open, 3},
  [84] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_parameters, 2},
    {field_returns, 4},
  [90] =
    {field_value, 2},
  [91] =
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
  [14] = 4,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 4,
  [23] = 20,
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
  [41] = 4,
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
  [62] = 4,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
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
  [116] = 4,
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
  [139] = 4,
  [140] = 140,
  [141] = 141,
  [142] = 20,
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
  [218] = 4,
  [219] = 4,
  [220] = 4,
  [221] = 221,
  [222] = 4,
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
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 4,
  [279] = 279,
  [280] = 280,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(122);
      ADVANCE_MAP(
        '\n', 123,
        '\r', 1,
        '#', 136,
        '(', 155,
        ')', 156,
        '+', 19,
        ',', 157,
        '-', 132,
        ':', 154,
        '=', 150,
        '?', 158,
        '[', 22,
        '_', 159,
        '`', 24,
        'a', 89,
        'c', 79,
        'e', 75,
        'h', 42,
        'm', 35,
        'p', 25,
        's', 46,
        't', 54,
        'u', 90,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(123);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 123,
        '\r', 1,
        '(', 155,
        '+', 19,
        '-', 20,
        ':', 154,
        '=', 150,
        'm', 81,
        'p', 105,
        's', 52,
        't', 82,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(267);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(267);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 123,
        '\r', 1,
        'm', 232,
        'p', 242,
        's', 214,
        't', 235,
        '\t', 203,
        '\f', 203,
        ' ', 203,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(151);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(125);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(161);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'k') ADVANCE(58);
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'k') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(147);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 114:
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 116:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(272);
      END_STATE();
    case 119:
      if (eof) ADVANCE(122);
      ADVANCE_MAP(
        '\n', 123,
        '\r', 1,
        '#', 10,
        '-', 132,
        'a', 89,
        'c', 79,
        'e', 75,
        'h', 41,
        'p', 25,
        's', 47,
        't', 55,
        'u', 90,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(119);
      END_STATE();
    case 120:
      if (eof) ADVANCE(122);
      ADVANCE_MAP(
        '\n', 123,
        '\r', 1,
        '#', 10,
        '-', 131,
        'p', 189,
        's', 177,
        't', 181,
        'u', 192,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      ADVANCE_MAP(
        '\n', 123,
        '\r', 1,
        '#', 10,
        'p', 239,
        's', 218,
        't', 219,
        'u', 246,
        '\t', 202,
        '\f', 202,
        ' ', 202,
      );
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_transport);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_cwd);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_markdown_language);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_add_assign_operator);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_remove_assign_operator);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_question);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_underscore);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(259);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_model_subject);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_http_transport_value);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_stdio_transport_value);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_named_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_body_text);
      ADVANCE_MAP(
        '\n', 123,
        '\r', 1,
        '#', 10,
        'p', 239,
        's', 218,
        't', 219,
        'u', 246,
        '\t', 202,
        '\f', 202,
        ' ', 202,
      );
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_body_text);
      ADVANCE_MAP(
        '\n', 123,
        '\r', 1,
        'm', 232,
        'p', 242,
        's', 214,
        't', 235,
        '\t', 203,
        '\f', 203,
        ' ', 203,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'k') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'v') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'y') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'y') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == '-') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_frontmatter_scalar);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_frontmatter_scalar);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(272);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 119},
  [2] = {.lex_state = 119},
  [3] = {.lex_state = 119},
  [4] = {.lex_state = 119},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 120},
  [7] = {.lex_state = 120},
  [8] = {.lex_state = 121},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 121},
  [11] = {.lex_state = 121},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 120},
  [15] = {.lex_state = 121},
  [16] = {.lex_state = 120},
  [17] = {.lex_state = 120},
  [18] = {.lex_state = 121},
  [19] = {.lex_state = 121},
  [20] = {.lex_state = 120},
  [21] = {.lex_state = 121},
  [22] = {.lex_state = 121},
  [23] = {.lex_state = 119},
  [24] = {.lex_state = 119},
  [25] = {.lex_state = 119},
  [26] = {.lex_state = 119},
  [27] = {.lex_state = 119},
  [28] = {.lex_state = 119},
  [29] = {.lex_state = 119},
  [30] = {.lex_state = 119},
  [31] = {.lex_state = 119},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 117},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 120},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 118},
  [236] = {.lex_state = 118},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 118},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 118},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 118},
  [259] = {.lex_state = 118},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 118},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 117},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_newline_token1] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [anon_sym_transport] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_cwd] = ACTIONS(1),
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
    [sym_colon] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_question] = ACTIONS(1),
    [sym_underscore] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_frontmatter_delimiter] = ACTIONS(1),
    [anon_sym_skill] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [sym_model_subject] = ACTIONS(1),
    [sym_http_transport_value] = ACTIONS(1),
    [sym_stdio_transport_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(262),
    [sym_newline] = STATE(23),
    [sym_blank_line] = STATE(2),
    [sym_use_statement] = STATE(2),
    [sym_psyche_declaration] = STATE(2),
    [sym_service_declaration] = STATE(2),
    [sym_prompt_declaration] = STATE(2),
    [sym_psyche_header] = STATE(65),
    [sym_service_header] = STATE(83),
    [sym_prompt_header] = STATE(37),
    [sym_struct_declaration] = STATE(2),
    [sym_struct_header] = STATE(33),
    [sym_thunk] = STATE(2),
    [sym_thunk_header] = STATE(5),
    [sym_psyche_keyword] = STATE(229),
    [sym_service_keyword] = STATE(238),
    [sym_prompt_keyword] = STATE(279),
    [aux_sym_source_file_repeat1] = STATE(2),
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
  [0] = 19,
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
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_comment,
    STATE(5), 1,
      sym_thunk_header,
    STATE(23), 1,
      sym_newline,
    STATE(33), 1,
      sym_struct_header,
    STATE(37), 1,
      sym_prompt_header,
    STATE(65), 1,
      sym_psyche_header,
    STATE(83), 1,
      sym_service_header,
    STATE(229), 1,
      sym_psyche_keyword,
    STATE(238), 1,
      sym_service_keyword,
    STATE(279), 1,
      sym_prompt_keyword,
    STATE(3), 8,
      sym_blank_line,
      sym_use_statement,
      sym_psyche_declaration,
      sym_service_declaration,
      sym_prompt_declaration,
      sym_struct_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [65] = 19,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_newline_token1,
    ACTIONS(30), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_use_keyword,
    ACTIONS(36), 1,
      anon_sym_psyche,
    ACTIONS(39), 1,
      anon_sym_service,
    ACTIONS(42), 1,
      anon_sym_prompt,
    ACTIONS(45), 1,
      sym_struct_keyword,
    ACTIONS(48), 1,
      sym_thunk_keyword,
    STATE(5), 1,
      sym_thunk_header,
    STATE(23), 1,
      sym_newline,
    STATE(33), 1,
      sym_struct_header,
    STATE(37), 1,
      sym_prompt_header,
    STATE(65), 1,
      sym_psyche_header,
    STATE(83), 1,
      sym_service_header,
    STATE(229), 1,
      sym_psyche_keyword,
    STATE(238), 1,
      sym_service_keyword,
    STATE(279), 1,
      sym_prompt_keyword,
    STATE(3), 8,
      sym_blank_line,
      sym_use_statement,
      sym_psyche_declaration,
      sym_service_declaration,
      sym_prompt_declaration,
      sym_struct_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [130] = 2,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(51), 18,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_transport,
      anon_sym_url,
      anon_sym_headers,
      anon_sym_command,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      anon_sym_params,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_frontmatter_delimiter,
  [154] = 10,
    ACTIONS(55), 1,
      aux_sym_newline_token1,
    ACTIONS(59), 1,
      sym_model_subject,
    ACTIONS(61), 1,
      sym_body_text,
    STATE(21), 1,
      sym_newline,
    STATE(28), 1,
      sym_thunk_body,
    STATE(103), 1,
      sym_collection_subject,
    STATE(9), 2,
      sym_directive_line,
      aux_sym_thunk_body_repeat1,
    STATE(102), 2,
      sym_collection_directive,
      sym_model_directive,
    STATE(8), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
    ACTIONS(57), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [192] = 7,
    ACTIONS(65), 1,
      aux_sym_newline_token1,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(20), 1,
      sym_newline,
    STATE(97), 1,
      sym_struct_field,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(6), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(68), 6,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [222] = 7,
    ACTIONS(75), 1,
      aux_sym_newline_token1,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(20), 1,
      sym_newline,
    STATE(97), 1,
      sym_struct_field,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(6), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(77), 6,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [252] = 6,
    ACTIONS(55), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_body_text,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_newline,
    STATE(10), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
    ACTIONS(83), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [279] = 8,
    ACTIONS(85), 1,
      aux_sym_newline_token1,
    ACTIONS(89), 1,
      sym_model_subject,
    STATE(103), 1,
      sym_collection_subject,
    STATE(142), 1,
      sym_newline,
    STATE(13), 2,
      sym_directive_line,
      aux_sym_thunk_body_repeat1,
    STATE(60), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(102), 2,
      sym_collection_directive,
      sym_model_directive,
    ACTIONS(87), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [310] = 6,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      aux_sym_newline_token1,
    ACTIONS(98), 1,
      sym_body_text,
    STATE(21), 1,
      sym_newline,
    STATE(10), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
    ACTIONS(96), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [337] = 6,
    ACTIONS(55), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_body_text,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_newline,
    STATE(10), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
    ACTIONS(103), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [364] = 11,
    ACTIONS(105), 1,
      sym_rparen,
    ACTIONS(107), 1,
      sym_underscore,
    ACTIONS(109), 1,
      sym_named_identifier,
    STATE(119), 1,
      sym_required_named_parameter,
    STATE(120), 1,
      sym_optional_named_parameter,
    STATE(162), 1,
      sym_unnamed_parameter,
    STATE(232), 1,
      sym__parameter_sequence,
    STATE(241), 1,
      sym__unnamed_then_named_parameters,
    STATE(249), 1,
      sym__named_parameters,
    STATE(264), 1,
      sym__required_then_optional_named_parameters,
    STATE(271), 1,
      sym__optional_named_parameters,
  [398] = 6,
    ACTIONS(111), 1,
      aux_sym_newline_token1,
    ACTIONS(116), 1,
      sym_model_subject,
    STATE(103), 1,
      sym_collection_subject,
    STATE(13), 2,
      sym_directive_line,
      aux_sym_thunk_body_repeat1,
    STATE(102), 2,
      sym_collection_directive,
      sym_model_directive,
    ACTIONS(113), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [422] = 2,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_DASH,
    ACTIONS(53), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [438] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_body_text,
  [453] = 2,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(125), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [468] = 2,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(129), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [483] = 2,
    ACTIONS(131), 1,
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
      sym_body_text,
  [498] = 3,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 2,
      aux_sym_newline_token1,
      sym_body_text,
    ACTIONS(140), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [515] = 2,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(144), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [530] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_body_text,
  [545] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_body_text,
  [560] = 1,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [572] = 1,
    ACTIONS(146), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [584] = 1,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [596] = 1,
    ACTIONS(150), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [608] = 1,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [620] = 1,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [632] = 1,
    ACTIONS(156), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [644] = 1,
    ACTIONS(158), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [656] = 1,
    ACTIONS(160), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [668] = 3,
    ACTIONS(164), 1,
      sym_array_suffix,
    STATE(32), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(162), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [683] = 6,
    ACTIONS(75), 1,
      aux_sym_newline_token1,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(20), 1,
      sym_newline,
    STATE(27), 1,
      sym_struct_body,
    STATE(97), 1,
      sym_struct_field,
    STATE(7), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
  [704] = 5,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_env,
    ACTIONS(173), 1,
      anon_sym_cwd,
    ACTIONS(175), 1,
      sym_frontmatter_delimiter,
    STATE(35), 4,
      sym_stdio_args_block,
      sym_stdio_env_line,
      sym_stdio_cwd_line,
      aux_sym_stdio_service_frontmatter_repeat1,
  [723] = 5,
    ACTIONS(169), 1,
      anon_sym_args,
    ACTIONS(171), 1,
      anon_sym_env,
    ACTIONS(173), 1,
      anon_sym_cwd,
    ACTIONS(177), 1,
      sym_frontmatter_delimiter,
    STATE(36), 4,
      sym_stdio_args_block,
      sym_stdio_env_line,
      sym_stdio_cwd_line,
      aux_sym_stdio_service_frontmatter_repeat1,
  [742] = 5,
    ACTIONS(179), 1,
      anon_sym_args,
    ACTIONS(182), 1,
      anon_sym_env,
    ACTIONS(185), 1,
      anon_sym_cwd,
    ACTIONS(188), 1,
      sym_frontmatter_delimiter,
    STATE(36), 4,
      sym_stdio_args_block,
      sym_stdio_env_line,
      sym_stdio_cwd_line,
      aux_sym_stdio_service_frontmatter_repeat1,
  [761] = 7,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(192), 1,
      sym_frontmatter_delimiter,
    ACTIONS(194), 1,
      sym_non_frontmatter_fence_text,
    STATE(67), 1,
      sym_prompt_frontmatter,
    STATE(138), 1,
      sym_newline,
    STATE(184), 1,
      sym_prompt_fence_body,
    STATE(74), 2,
      sym_non_frontmatter_fence_content_line,
      sym_empty_fence_content_line,
  [784] = 4,
    ACTIONS(198), 1,
      sym_array_suffix,
    ACTIONS(200), 1,
      sym_question,
    STATE(39), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(196), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [801] = 4,
    ACTIONS(198), 1,
      sym_array_suffix,
    ACTIONS(204), 1,
      sym_question,
    STATE(32), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(202), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [818] = 3,
    ACTIONS(208), 1,
      anon_sym_DASH,
    STATE(40), 2,
      sym_frontmatter_list_item_line,
      aux_sym_stdio_args_block_repeat1,
    ACTIONS(206), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [832] = 1,
    ACTIONS(53), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [842] = 1,
    ACTIONS(211), 7,
      aux_sym_newline_token1,
      sym_array_suffix,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [852] = 1,
    ACTIONS(213), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [862] = 1,
    ACTIONS(215), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [872] = 1,
    ACTIONS(217), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [882] = 1,
    ACTIONS(219), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [892] = 1,
    ACTIONS(221), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [902] = 1,
    ACTIONS(223), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [912] = 1,
    ACTIONS(225), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [922] = 1,
    ACTIONS(227), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [932] = 1,
    ACTIONS(229), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [942] = 1,
    ACTIONS(231), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [952] = 1,
    ACTIONS(233), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [962] = 1,
    ACTIONS(235), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [972] = 1,
    ACTIONS(237), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [982] = 1,
    ACTIONS(239), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [992] = 1,
    ACTIONS(241), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [1002] = 1,
    ACTIONS(243), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [1012] = 3,
    ACTIONS(247), 1,
      anon_sym_DASH,
    STATE(40), 2,
      sym_frontmatter_list_item_line,
      aux_sym_stdio_args_block_repeat1,
    ACTIONS(245), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [1026] = 6,
    ACTIONS(55), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_body_text,
    STATE(19), 1,
      sym_blank_line,
    STATE(21), 1,
      sym_newline,
    STATE(76), 1,
      aux_sym_thunk_body_repeat2,
    STATE(11), 2,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
  [1046] = 5,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      sym_fence_text,
    STATE(134), 1,
      sym_newline,
    STATE(68), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1063] = 1,
    ACTIONS(51), 6,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
  [1072] = 5,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(251), 1,
      sym_fence_text,
    ACTIONS(253), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(134), 1,
      sym_newline,
    STATE(66), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1089] = 6,
    ACTIONS(109), 1,
      sym_named_identifier,
    STATE(119), 1,
      sym_required_named_parameter,
    STATE(120), 1,
      sym_optional_named_parameter,
    STATE(251), 1,
      sym__named_parameters,
    STATE(264), 1,
      sym__required_then_optional_named_parameters,
    STATE(271), 1,
      sym__optional_named_parameters,
  [1108] = 5,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(255), 1,
      sym_non_frontmatter_fence_text,
    STATE(138), 1,
      sym_newline,
    STATE(206), 1,
      sym_psyche_fence_body,
    STATE(61), 2,
      sym_non_frontmatter_fence_content_line,
      sym_empty_fence_content_line,
  [1125] = 5,
    ACTIONS(257), 1,
      aux_sym_newline_token1,
    ACTIONS(260), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(262), 1,
      sym_fence_text,
    STATE(134), 1,
      sym_newline,
    STATE(66), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1142] = 5,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(251), 1,
      sym_fence_text,
    ACTIONS(265), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(134), 1,
      sym_newline,
    STATE(73), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1159] = 5,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(251), 1,
      sym_fence_text,
    ACTIONS(267), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(134), 1,
      sym_newline,
    STATE(66), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1176] = 1,
    ACTIONS(269), 6,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
  [1185] = 5,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(251), 1,
      sym_fence_text,
    ACTIONS(271), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(134), 1,
      sym_newline,
    STATE(71), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1202] = 5,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(251), 1,
      sym_fence_text,
    ACTIONS(273), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(134), 1,
      sym_newline,
    STATE(66), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1219] = 1,
    ACTIONS(275), 6,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
  [1228] = 5,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(251), 1,
      sym_fence_text,
    ACTIONS(277), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(134), 1,
      sym_newline,
    STATE(66), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1245] = 5,
    ACTIONS(190), 1,
      aux_sym_newline_token1,
    ACTIONS(251), 1,
      sym_fence_text,
    ACTIONS(279), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(134), 1,
      sym_newline,
    STATE(63), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1262] = 4,
    ACTIONS(283), 1,
      aux_sym_reference_token1,
    STATE(93), 1,
      sym_directive_value,
    STATE(143), 1,
      sym_directive_values,
    ACTIONS(281), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1276] = 4,
    ACTIONS(285), 1,
      aux_sym_newline_token1,
    ACTIONS(288), 1,
      sym_body_text,
    STATE(142), 1,
      sym_newline,
    STATE(76), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
  [1290] = 2,
    STATE(186), 1,
      sym_cap_kind,
    ACTIONS(290), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_skill,
  [1300] = 5,
    ACTIONS(292), 1,
      sym_arrow,
    ACTIONS(294), 1,
      sym_colon,
    ACTIONS(296), 1,
      sym_lparen,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(197), 1,
      sym_parameter_list,
  [1316] = 1,
    ACTIONS(300), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1324] = 2,
    ACTIONS(304), 1,
      anon_sym_DASH,
    ACTIONS(302), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [1334] = 4,
    ACTIONS(283), 1,
      aux_sym_reference_token1,
    STATE(93), 1,
      sym_directive_value,
    STATE(147), 1,
      sym_directive_values,
    ACTIONS(306), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1348] = 1,
    ACTIONS(308), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1356] = 4,
    ACTIONS(310), 1,
      sym_frontmatter_delimiter,
    STATE(70), 1,
      sym_service_frontmatter,
    STATE(213), 1,
      sym_service_fence_body,
    STATE(140), 2,
      sym_http_service_frontmatter,
      sym_stdio_service_frontmatter,
  [1370] = 4,
    ACTIONS(109), 1,
      sym_named_identifier,
    STATE(120), 1,
      sym_optional_named_parameter,
    STATE(155), 1,
      sym_required_named_parameter,
    STATE(252), 1,
      sym__optional_named_parameters,
  [1383] = 4,
    ACTIONS(109), 1,
      sym_named_identifier,
    STATE(120), 1,
      sym_optional_named_parameter,
    STATE(155), 1,
      sym_required_named_parameter,
    STATE(231), 1,
      sym__optional_named_parameters,
  [1396] = 3,
    ACTIONS(314), 1,
      sym_comma,
    STATE(86), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(312), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1407] = 3,
    ACTIONS(319), 1,
      sym_comma,
    STATE(86), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(317), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1418] = 3,
    ACTIONS(321), 1,
      sym_colon,
    ACTIONS(325), 1,
      sym_question,
    ACTIONS(323), 2,
      sym_rparen,
      sym_comma,
  [1429] = 1,
    ACTIONS(327), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [1436] = 3,
    ACTIONS(329), 1,
      sym_frontmatter_delimiter,
    ACTIONS(331), 1,
      sym_frontmatter_header_name,
    STATE(92), 2,
      sym_header_map_entry_line,
      aux_sym_http_headers_block_repeat1,
  [1447] = 1,
    ACTIONS(333), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [1454] = 3,
    ACTIONS(335), 1,
      sym_frontmatter_delimiter,
    ACTIONS(337), 1,
      sym_frontmatter_header_name,
    STATE(92), 2,
      sym_header_map_entry_line,
      aux_sym_http_headers_block_repeat1,
  [1465] = 3,
    ACTIONS(319), 1,
      sym_comma,
    STATE(87), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(340), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1476] = 4,
    ACTIONS(296), 1,
      sym_lparen,
    ACTIONS(342), 1,
      sym_arrow,
    ACTIONS(344), 1,
      sym_colon,
    STATE(178), 1,
      sym_parameter_list,
  [1489] = 1,
    ACTIONS(346), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [1496] = 3,
    ACTIONS(348), 1,
      sym_rparen,
    ACTIONS(350), 1,
      sym_comma,
    STATE(96), 1,
      aux_sym__required_then_optional_named_parameters_repeat1,
  [1506] = 3,
    ACTIONS(75), 1,
      aux_sym_newline_token1,
    ACTIONS(353), 1,
      sym_inline_comment,
    STATE(16), 1,
      sym_newline,
  [1516] = 1,
    ACTIONS(355), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [1522] = 3,
    ACTIONS(357), 1,
      aux_sym_newline_token1,
    ACTIONS(359), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_newline,
  [1532] = 3,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    ACTIONS(363), 1,
      sym_inline_comment,
    STATE(47), 1,
      sym_newline,
  [1542] = 2,
    ACTIONS(365), 1,
      sym_colon,
    ACTIONS(367), 2,
      sym_rparen,
      sym_comma,
  [1550] = 3,
    ACTIONS(369), 1,
      aux_sym_newline_token1,
    ACTIONS(371), 1,
      sym_inline_comment,
    STATE(72), 1,
      sym_newline,
  [1560] = 1,
    ACTIONS(373), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [1566] = 3,
    ACTIONS(375), 1,
      sym_rparen,
    ACTIONS(377), 1,
      sym_comma,
    STATE(96), 1,
      aux_sym__required_then_optional_named_parameters_repeat1,
  [1576] = 3,
    ACTIONS(379), 1,
      sym_rparen,
    ACTIONS(381), 1,
      sym_comma,
    STATE(112), 1,
      aux_sym__optional_named_parameters_repeat1,
  [1586] = 3,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    ACTIONS(383), 1,
      sym_inline_comment,
    STATE(49), 1,
      sym_newline,
  [1596] = 1,
    ACTIONS(385), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1602] = 1,
    ACTIONS(387), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [1608] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(389), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_newline,
  [1618] = 3,
    ACTIONS(391), 1,
      aux_sym_newline_token1,
    ACTIONS(393), 1,
      sym_inline_comment,
    STATE(146), 1,
      sym_newline,
  [1628] = 3,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    ACTIONS(395), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_newline,
  [1638] = 3,
    ACTIONS(397), 1,
      sym_rparen,
    ACTIONS(399), 1,
      sym_comma,
    STATE(112), 1,
      aux_sym__optional_named_parameters_repeat1,
  [1648] = 3,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    ACTIONS(402), 1,
      sym_inline_comment,
    STATE(52), 1,
      sym_newline,
  [1658] = 3,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    ACTIONS(404), 1,
      sym_inline_comment,
    STATE(54), 1,
      sym_newline,
  [1668] = 3,
    ACTIONS(406), 1,
      anon_sym_headers,
    ACTIONS(408), 1,
      sym_frontmatter_delimiter,
    STATE(254), 1,
      sym_http_headers_block,
  [1678] = 1,
    ACTIONS(53), 3,
      aux_sym_newline_token1,
      sym_frontmatter_delimiter,
      sym_non_frontmatter_fence_text,
  [1684] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(410), 1,
      sym_inline_comment,
    STATE(275), 1,
      sym_newline,
  [1694] = 3,
    ACTIONS(412), 1,
      aux_sym_newline_token1,
    ACTIONS(414), 1,
      sym_inline_comment,
    STATE(125), 1,
      sym_newline,
  [1704] = 3,
    ACTIONS(416), 1,
      sym_rparen,
    ACTIONS(418), 1,
      sym_comma,
    STATE(104), 1,
      aux_sym__required_then_optional_named_parameters_repeat1,
  [1714] = 3,
    ACTIONS(381), 1,
      sym_comma,
    ACTIONS(420), 1,
      sym_rparen,
    STATE(105), 1,
      aux_sym__optional_named_parameters_repeat1,
  [1724] = 3,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    ACTIONS(422), 1,
      sym_inline_comment,
    STATE(56), 1,
      sym_newline,
  [1734] = 3,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    ACTIONS(424), 1,
      sym_inline_comment,
    STATE(45), 1,
      sym_newline,
  [1744] = 1,
    ACTIONS(426), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1750] = 1,
    ACTIONS(428), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [1756] = 1,
    ACTIONS(430), 3,
      aux_sym_newline_token1,
      sym_frontmatter_delimiter,
      sym_non_frontmatter_fence_text,
  [1762] = 2,
    ACTIONS(321), 1,
      sym_colon,
    ACTIONS(323), 2,
      sym_rparen,
      sym_comma,
  [1770] = 3,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    ACTIONS(432), 1,
      sym_inline_comment,
    STATE(46), 1,
      sym_newline,
  [1780] = 1,
    ACTIONS(434), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1786] = 1,
    ACTIONS(436), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1792] = 1,
    ACTIONS(438), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1798] = 1,
    ACTIONS(440), 3,
      aux_sym_newline_token1,
      sym_frontmatter_delimiter,
      sym_non_frontmatter_fence_text,
  [1804] = 2,
    ACTIONS(442), 1,
      sym_frontmatter_header_name,
    STATE(90), 2,
      sym_header_map_entry_line,
      aux_sym_http_headers_block_repeat1,
  [1812] = 1,
    ACTIONS(444), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1818] = 1,
    ACTIONS(446), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1824] = 2,
    ACTIONS(448), 1,
      anon_sym_DASH,
    STATE(59), 2,
      sym_frontmatter_list_item_line,
      aux_sym_stdio_args_block_repeat1,
  [1832] = 1,
    ACTIONS(450), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1838] = 3,
    ACTIONS(452), 1,
      anon_sym_transport,
    STATE(201), 1,
      sym_http_transport_line,
    STATE(204), 1,
      sym_stdio_transport_line,
  [1848] = 1,
    ACTIONS(454), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1854] = 1,
    ACTIONS(53), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1860] = 1,
    ACTIONS(456), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1866] = 3,
    ACTIONS(458), 1,
      aux_sym_newline_token1,
    ACTIONS(460), 1,
      sym_inline_comment,
    STATE(183), 1,
      sym_newline,
  [1876] = 1,
    ACTIONS(144), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [1881] = 1,
    ACTIONS(462), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1886] = 2,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(265), 1,
      sym_type_expression,
  [1893] = 1,
    ACTIONS(466), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1898] = 1,
    ACTIONS(468), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [1903] = 1,
    ACTIONS(470), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1908] = 2,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    STATE(44), 1,
      sym_newline,
  [1915] = 1,
    ACTIONS(472), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [1920] = 1,
    ACTIONS(474), 2,
      sym_arrow,
      sym_colon,
  [1925] = 2,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    STATE(51), 1,
      sym_newline,
  [1932] = 1,
    ACTIONS(476), 2,
      sym_rparen,
      sym_comma,
  [1937] = 1,
    ACTIONS(478), 2,
      sym_rparen,
      sym_comma,
  [1942] = 2,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(166), 1,
      sym_type_expression,
  [1949] = 1,
    ACTIONS(480), 2,
      sym_rparen,
      sym_comma,
  [1954] = 1,
    ACTIONS(482), 2,
      sym_rparen,
      sym_comma,
  [1959] = 2,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    STATE(53), 1,
      sym_newline,
  [1966] = 2,
    ACTIONS(484), 1,
      sym_http_transport_value,
    ACTIONS(486), 1,
      sym_stdio_transport_value,
  [1973] = 2,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(153), 1,
      sym_type_expression,
  [1980] = 2,
    ACTIONS(488), 1,
      aux_sym_newline_token1,
    STATE(123), 1,
      sym_newline,
  [1987] = 2,
    ACTIONS(283), 1,
      aux_sym_reference_token1,
    STATE(124), 1,
      sym_directive_value,
  [1994] = 2,
    ACTIONS(490), 1,
      sym_rparen,
    ACTIONS(492), 1,
      sym_comma,
  [2001] = 1,
    ACTIONS(494), 2,
      sym_arrow,
      sym_colon,
  [2006] = 2,
    ACTIONS(369), 1,
      aux_sym_newline_token1,
    STATE(69), 1,
      sym_newline,
  [2013] = 2,
    ACTIONS(496), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(274), 1,
      sym_fence_open,
  [2020] = 1,
    ACTIONS(498), 2,
      sym_rparen,
      sym_comma,
  [2025] = 2,
    ACTIONS(500), 1,
      sym_named_identifier,
    STATE(155), 1,
      sym_required_named_parameter,
  [2032] = 2,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    STATE(55), 1,
      sym_newline,
  [2039] = 2,
    ACTIONS(496), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(276), 1,
      sym_fence_open,
  [2046] = 2,
    ACTIONS(502), 1,
      sym_named_identifier,
    STATE(156), 1,
      sym_optional_named_parameter,
  [2053] = 2,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(267), 1,
      sym_type_expression,
  [2060] = 2,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    STATE(57), 1,
      sym_newline,
  [2067] = 2,
    ACTIONS(496), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(277), 1,
      sym_fence_open,
  [2074] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(227), 1,
      sym_newline,
  [2081] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(228), 1,
      sym_newline,
  [2088] = 2,
    ACTIONS(488), 1,
      aux_sym_newline_token1,
    STATE(129), 1,
      sym_newline,
  [2095] = 2,
    ACTIONS(488), 1,
      aux_sym_newline_token1,
    STATE(130), 1,
      sym_newline,
  [2102] = 2,
    ACTIONS(504), 1,
      sym_arrow,
    ACTIONS(506), 1,
      sym_colon,
  [2109] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(240), 1,
      sym_newline,
  [2116] = 2,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    STATE(48), 1,
      sym_newline,
  [2123] = 2,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(225), 1,
      sym_type_expression,
  [2130] = 2,
    ACTIONS(458), 1,
      aux_sym_newline_token1,
    STATE(198), 1,
      sym_newline,
  [2137] = 2,
    ACTIONS(508), 1,
      aux_sym_newline_token1,
    ACTIONS(510), 1,
      sym_non_frontmatter_fence_text,
  [2144] = 2,
    ACTIONS(512), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(26), 1,
      sym_fence_close,
  [2151] = 2,
    ACTIONS(412), 1,
      aux_sym_newline_token1,
    STATE(131), 1,
      sym_newline,
  [2158] = 2,
    ACTIONS(514), 1,
      aux_sym_reference_token1,
    STATE(109), 1,
      sym_reference,
  [2165] = 2,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(244), 1,
      sym_type_expression,
  [2172] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(29), 1,
      sym_newline,
  [2179] = 2,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    STATE(58), 1,
      sym_newline,
  [2186] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(200), 1,
      sym_newline,
  [2193] = 2,
    ACTIONS(516), 1,
      aux_sym_newline_token1,
    STATE(132), 1,
      sym_newline,
  [2200] = 2,
    ACTIONS(361), 1,
      aux_sym_newline_token1,
    STATE(50), 1,
      sym_newline,
  [2207] = 2,
    ACTIONS(488), 1,
      aux_sym_newline_token1,
    STATE(133), 1,
      sym_newline,
  [2214] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(89), 1,
      sym_newline,
  [2221] = 2,
    ACTIONS(75), 1,
      aux_sym_newline_token1,
    STATE(135), 1,
      sym_newline,
  [2228] = 2,
    ACTIONS(488), 1,
      aux_sym_newline_token1,
    STATE(136), 1,
      sym_newline,
  [2235] = 2,
    ACTIONS(518), 1,
      sym_arrow,
    ACTIONS(520), 1,
      sym_colon,
  [2242] = 2,
    ACTIONS(522), 1,
      aux_sym_newline_token1,
    ACTIONS(524), 1,
      sym_non_frontmatter_fence_text,
  [2249] = 2,
    ACTIONS(488), 1,
      aux_sym_newline_token1,
    STATE(107), 1,
      sym_newline,
  [2256] = 1,
    ACTIONS(526), 2,
      anon_sym_headers,
      sym_frontmatter_delimiter,
  [2261] = 2,
    ACTIONS(528), 1,
      anon_sym_url,
    STATE(115), 1,
      sym_http_url_line,
  [2268] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(95), 1,
      sym_newline,
  [2275] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(91), 1,
      sym_newline,
  [2282] = 2,
    ACTIONS(530), 1,
      anon_sym_command,
    STATE(34), 1,
      sym_stdio_command_line,
  [2289] = 2,
    ACTIONS(488), 1,
      aux_sym_newline_token1,
    STATE(128), 1,
      sym_newline,
  [2296] = 2,
    ACTIONS(512), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(30), 1,
      sym_fence_close,
  [2303] = 2,
    ACTIONS(532), 1,
      anon_sym_params,
    STATE(257), 1,
      sym_prompt_params_line,
  [2310] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(80), 1,
      sym_newline,
  [2317] = 2,
    ACTIONS(534), 1,
      aux_sym_newline_token1,
    STATE(211), 1,
      sym_newline,
  [2324] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(137), 1,
      sym_newline,
  [2331] = 1,
    ACTIONS(536), 2,
      sym_frontmatter_delimiter,
      sym_frontmatter_header_name,
  [2336] = 1,
    ACTIONS(538), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2341] = 2,
    ACTIONS(512), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(25), 1,
      sym_fence_close,
  [2348] = 2,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(212), 1,
      sym_type_expression,
  [2355] = 2,
    ACTIONS(75), 1,
      aux_sym_newline_token1,
    STATE(17), 1,
      sym_newline,
  [2362] = 2,
    ACTIONS(357), 1,
      aux_sym_newline_token1,
    STATE(18), 1,
      sym_newline,
  [2369] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(207), 1,
      sym_newline,
  [2376] = 1,
    ACTIONS(53), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [2381] = 1,
    ACTIONS(51), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [2386] = 2,
    ACTIONS(51), 1,
      sym_non_frontmatter_fence_text,
    ACTIONS(53), 1,
      aux_sym_newline_token1,
  [2393] = 2,
    ACTIONS(391), 1,
      aux_sym_newline_token1,
    STATE(149), 1,
      sym_newline,
  [2400] = 1,
    ACTIONS(53), 2,
      sym_frontmatter_delimiter,
      sym_frontmatter_header_name,
  [2405] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(242), 1,
      sym_newline,
  [2412] = 1,
    ACTIONS(540), 1,
      sym_colon,
  [2416] = 1,
    ACTIONS(542), 1,
      sym_colon,
  [2420] = 1,
    ACTIONS(544), 1,
      aux_sym_newline_token1,
  [2424] = 1,
    ACTIONS(546), 1,
      anon_sym_url,
  [2428] = 1,
    ACTIONS(548), 1,
      anon_sym_command,
  [2432] = 1,
    ACTIONS(550), 1,
      sym_identifier,
  [2436] = 1,
    ACTIONS(552), 1,
      sym_identifier,
  [2440] = 1,
    ACTIONS(554), 1,
      sym_rparen,
  [2444] = 1,
    ACTIONS(556), 1,
      sym_rparen,
  [2448] = 1,
    ACTIONS(325), 1,
      sym_question,
  [2452] = 1,
    ACTIONS(558), 1,
      sym_assign_operator,
  [2456] = 1,
    ACTIONS(560), 1,
      sym_frontmatter_scalar,
  [2460] = 1,
    ACTIONS(562), 1,
      sym_frontmatter_scalar,
  [2464] = 1,
    ACTIONS(564), 1,
      sym_colon,
  [2468] = 1,
    ACTIONS(566), 1,
      sym_identifier,
  [2472] = 1,
    ACTIONS(568), 1,
      sym_colon,
  [2476] = 1,
    ACTIONS(570), 1,
      sym_frontmatter_delimiter,
  [2480] = 1,
    ACTIONS(572), 1,
      sym_rparen,
  [2484] = 1,
    ACTIONS(574), 1,
      sym_frontmatter_delimiter,
  [2488] = 1,
    ACTIONS(576), 1,
      sym_colon,
  [2492] = 1,
    ACTIONS(578), 1,
      sym_colon,
  [2496] = 1,
    ACTIONS(580), 1,
      sym_identifier,
  [2500] = 1,
    ACTIONS(582), 1,
      sym_identifier,
  [2504] = 1,
    ACTIONS(584), 1,
      sym_colon,
  [2508] = 1,
    ACTIONS(586), 1,
      sym_colon,
  [2512] = 1,
    ACTIONS(572), 1,
      sym_rparen,
  [2516] = 1,
    ACTIONS(588), 1,
      sym_frontmatter_scalar,
  [2520] = 1,
    ACTIONS(590), 1,
      sym_rparen,
  [2524] = 1,
    ACTIONS(592), 1,
      sym_rparen,
  [2528] = 1,
    ACTIONS(594), 1,
      sym_colon,
  [2532] = 1,
    ACTIONS(596), 1,
      sym_frontmatter_delimiter,
  [2536] = 1,
    ACTIONS(598), 1,
      sym_frontmatter_scalar,
  [2540] = 1,
    ACTIONS(600), 1,
      sym_colon,
  [2544] = 1,
    ACTIONS(602), 1,
      sym_frontmatter_delimiter,
  [2548] = 1,
    ACTIONS(604), 1,
      sym_frontmatter_scalar,
  [2552] = 1,
    ACTIONS(606), 1,
      sym_frontmatter_scalar,
  [2556] = 1,
    ACTIONS(608), 1,
      sym_colon,
  [2560] = 1,
    ACTIONS(610), 1,
      sym_colon,
  [2564] = 1,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
  [2568] = 1,
    ACTIONS(614), 1,
      sym_colon,
  [2572] = 1,
    ACTIONS(616), 1,
      sym_rparen,
  [2576] = 1,
    ACTIONS(618), 1,
      sym_colon,
  [2580] = 1,
    ACTIONS(620), 1,
      sym_colon,
  [2584] = 1,
    ACTIONS(622), 1,
      sym_colon,
  [2588] = 1,
    ACTIONS(624), 1,
      sym_markdown_language,
  [2592] = 1,
    ACTIONS(626), 1,
      sym_colon,
  [2596] = 1,
    ACTIONS(628), 1,
      sym_identifier,
  [2600] = 1,
    ACTIONS(616), 1,
      sym_rparen,
  [2604] = 1,
    ACTIONS(630), 1,
      sym_colon,
  [2608] = 1,
    ACTIONS(632), 1,
      sym_frontmatter_scalar,
  [2612] = 1,
    ACTIONS(634), 1,
      sym_markdown_language,
  [2616] = 1,
    ACTIONS(636), 1,
      sym_frontmatter_delimiter,
  [2620] = 1,
    ACTIONS(638), 1,
      sym_markdown_language,
  [2624] = 1,
    ACTIONS(640), 1,
      sym_markdown_language,
  [2628] = 1,
    ACTIONS(51), 1,
      sym_frontmatter_header_name,
  [2632] = 1,
    ACTIONS(642), 1,
      sym_identifier,
  [2636] = 1,
    ACTIONS(644), 1,
      aux_sym_reference_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 222,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 279,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 364,
  [SMALL_STATE(13)] = 398,
  [SMALL_STATE(14)] = 422,
  [SMALL_STATE(15)] = 438,
  [SMALL_STATE(16)] = 453,
  [SMALL_STATE(17)] = 468,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 498,
  [SMALL_STATE(20)] = 515,
  [SMALL_STATE(21)] = 530,
  [SMALL_STATE(22)] = 545,
  [SMALL_STATE(23)] = 560,
  [SMALL_STATE(24)] = 572,
  [SMALL_STATE(25)] = 584,
  [SMALL_STATE(26)] = 596,
  [SMALL_STATE(27)] = 608,
  [SMALL_STATE(28)] = 620,
  [SMALL_STATE(29)] = 632,
  [SMALL_STATE(30)] = 644,
  [SMALL_STATE(31)] = 656,
  [SMALL_STATE(32)] = 668,
  [SMALL_STATE(33)] = 683,
  [SMALL_STATE(34)] = 704,
  [SMALL_STATE(35)] = 723,
  [SMALL_STATE(36)] = 742,
  [SMALL_STATE(37)] = 761,
  [SMALL_STATE(38)] = 784,
  [SMALL_STATE(39)] = 801,
  [SMALL_STATE(40)] = 818,
  [SMALL_STATE(41)] = 832,
  [SMALL_STATE(42)] = 842,
  [SMALL_STATE(43)] = 852,
  [SMALL_STATE(44)] = 862,
  [SMALL_STATE(45)] = 872,
  [SMALL_STATE(46)] = 882,
  [SMALL_STATE(47)] = 892,
  [SMALL_STATE(48)] = 902,
  [SMALL_STATE(49)] = 912,
  [SMALL_STATE(50)] = 922,
  [SMALL_STATE(51)] = 932,
  [SMALL_STATE(52)] = 942,
  [SMALL_STATE(53)] = 952,
  [SMALL_STATE(54)] = 962,
  [SMALL_STATE(55)] = 972,
  [SMALL_STATE(56)] = 982,
  [SMALL_STATE(57)] = 992,
  [SMALL_STATE(58)] = 1002,
  [SMALL_STATE(59)] = 1012,
  [SMALL_STATE(60)] = 1026,
  [SMALL_STATE(61)] = 1046,
  [SMALL_STATE(62)] = 1063,
  [SMALL_STATE(63)] = 1072,
  [SMALL_STATE(64)] = 1089,
  [SMALL_STATE(65)] = 1108,
  [SMALL_STATE(66)] = 1125,
  [SMALL_STATE(67)] = 1142,
  [SMALL_STATE(68)] = 1159,
  [SMALL_STATE(69)] = 1176,
  [SMALL_STATE(70)] = 1185,
  [SMALL_STATE(71)] = 1202,
  [SMALL_STATE(72)] = 1219,
  [SMALL_STATE(73)] = 1228,
  [SMALL_STATE(74)] = 1245,
  [SMALL_STATE(75)] = 1262,
  [SMALL_STATE(76)] = 1276,
  [SMALL_STATE(77)] = 1290,
  [SMALL_STATE(78)] = 1300,
  [SMALL_STATE(79)] = 1316,
  [SMALL_STATE(80)] = 1324,
  [SMALL_STATE(81)] = 1334,
  [SMALL_STATE(82)] = 1348,
  [SMALL_STATE(83)] = 1356,
  [SMALL_STATE(84)] = 1370,
  [SMALL_STATE(85)] = 1383,
  [SMALL_STATE(86)] = 1396,
  [SMALL_STATE(87)] = 1407,
  [SMALL_STATE(88)] = 1418,
  [SMALL_STATE(89)] = 1429,
  [SMALL_STATE(90)] = 1436,
  [SMALL_STATE(91)] = 1447,
  [SMALL_STATE(92)] = 1454,
  [SMALL_STATE(93)] = 1465,
  [SMALL_STATE(94)] = 1476,
  [SMALL_STATE(95)] = 1489,
  [SMALL_STATE(96)] = 1496,
  [SMALL_STATE(97)] = 1506,
  [SMALL_STATE(98)] = 1516,
  [SMALL_STATE(99)] = 1522,
  [SMALL_STATE(100)] = 1532,
  [SMALL_STATE(101)] = 1542,
  [SMALL_STATE(102)] = 1550,
  [SMALL_STATE(103)] = 1560,
  [SMALL_STATE(104)] = 1566,
  [SMALL_STATE(105)] = 1576,
  [SMALL_STATE(106)] = 1586,
  [SMALL_STATE(107)] = 1596,
  [SMALL_STATE(108)] = 1602,
  [SMALL_STATE(109)] = 1608,
  [SMALL_STATE(110)] = 1618,
  [SMALL_STATE(111)] = 1628,
  [SMALL_STATE(112)] = 1638,
  [SMALL_STATE(113)] = 1648,
  [SMALL_STATE(114)] = 1658,
  [SMALL_STATE(115)] = 1668,
  [SMALL_STATE(116)] = 1678,
  [SMALL_STATE(117)] = 1684,
  [SMALL_STATE(118)] = 1694,
  [SMALL_STATE(119)] = 1704,
  [SMALL_STATE(120)] = 1714,
  [SMALL_STATE(121)] = 1724,
  [SMALL_STATE(122)] = 1734,
  [SMALL_STATE(123)] = 1744,
  [SMALL_STATE(124)] = 1750,
  [SMALL_STATE(125)] = 1756,
  [SMALL_STATE(126)] = 1762,
  [SMALL_STATE(127)] = 1770,
  [SMALL_STATE(128)] = 1780,
  [SMALL_STATE(129)] = 1786,
  [SMALL_STATE(130)] = 1792,
  [SMALL_STATE(131)] = 1798,
  [SMALL_STATE(132)] = 1804,
  [SMALL_STATE(133)] = 1812,
  [SMALL_STATE(134)] = 1818,
  [SMALL_STATE(135)] = 1824,
  [SMALL_STATE(136)] = 1832,
  [SMALL_STATE(137)] = 1838,
  [SMALL_STATE(138)] = 1848,
  [SMALL_STATE(139)] = 1854,
  [SMALL_STATE(140)] = 1860,
  [SMALL_STATE(141)] = 1866,
  [SMALL_STATE(142)] = 1876,
  [SMALL_STATE(143)] = 1881,
  [SMALL_STATE(144)] = 1886,
  [SMALL_STATE(145)] = 1893,
  [SMALL_STATE(146)] = 1898,
  [SMALL_STATE(147)] = 1903,
  [SMALL_STATE(148)] = 1908,
  [SMALL_STATE(149)] = 1915,
  [SMALL_STATE(150)] = 1920,
  [SMALL_STATE(151)] = 1925,
  [SMALL_STATE(152)] = 1932,
  [SMALL_STATE(153)] = 1937,
  [SMALL_STATE(154)] = 1942,
  [SMALL_STATE(155)] = 1949,
  [SMALL_STATE(156)] = 1954,
  [SMALL_STATE(157)] = 1959,
  [SMALL_STATE(158)] = 1966,
  [SMALL_STATE(159)] = 1973,
  [SMALL_STATE(160)] = 1980,
  [SMALL_STATE(161)] = 1987,
  [SMALL_STATE(162)] = 1994,
  [SMALL_STATE(163)] = 2001,
  [SMALL_STATE(164)] = 2006,
  [SMALL_STATE(165)] = 2013,
  [SMALL_STATE(166)] = 2020,
  [SMALL_STATE(167)] = 2025,
  [SMALL_STATE(168)] = 2032,
  [SMALL_STATE(169)] = 2039,
  [SMALL_STATE(170)] = 2046,
  [SMALL_STATE(171)] = 2053,
  [SMALL_STATE(172)] = 2060,
  [SMALL_STATE(173)] = 2067,
  [SMALL_STATE(174)] = 2074,
  [SMALL_STATE(175)] = 2081,
  [SMALL_STATE(176)] = 2088,
  [SMALL_STATE(177)] = 2095,
  [SMALL_STATE(178)] = 2102,
  [SMALL_STATE(179)] = 2109,
  [SMALL_STATE(180)] = 2116,
  [SMALL_STATE(181)] = 2123,
  [SMALL_STATE(182)] = 2130,
  [SMALL_STATE(183)] = 2137,
  [SMALL_STATE(184)] = 2144,
  [SMALL_STATE(185)] = 2151,
  [SMALL_STATE(186)] = 2158,
  [SMALL_STATE(187)] = 2165,
  [SMALL_STATE(188)] = 2172,
  [SMALL_STATE(189)] = 2179,
  [SMALL_STATE(190)] = 2186,
  [SMALL_STATE(191)] = 2193,
  [SMALL_STATE(192)] = 2200,
  [SMALL_STATE(193)] = 2207,
  [SMALL_STATE(194)] = 2214,
  [SMALL_STATE(195)] = 2221,
  [SMALL_STATE(196)] = 2228,
  [SMALL_STATE(197)] = 2235,
  [SMALL_STATE(198)] = 2242,
  [SMALL_STATE(199)] = 2249,
  [SMALL_STATE(200)] = 2256,
  [SMALL_STATE(201)] = 2261,
  [SMALL_STATE(202)] = 2268,
  [SMALL_STATE(203)] = 2275,
  [SMALL_STATE(204)] = 2282,
  [SMALL_STATE(205)] = 2289,
  [SMALL_STATE(206)] = 2296,
  [SMALL_STATE(207)] = 2303,
  [SMALL_STATE(208)] = 2310,
  [SMALL_STATE(209)] = 2317,
  [SMALL_STATE(210)] = 2324,
  [SMALL_STATE(211)] = 2331,
  [SMALL_STATE(212)] = 2336,
  [SMALL_STATE(213)] = 2341,
  [SMALL_STATE(214)] = 2348,
  [SMALL_STATE(215)] = 2355,
  [SMALL_STATE(216)] = 2362,
  [SMALL_STATE(217)] = 2369,
  [SMALL_STATE(218)] = 2376,
  [SMALL_STATE(219)] = 2381,
  [SMALL_STATE(220)] = 2386,
  [SMALL_STATE(221)] = 2393,
  [SMALL_STATE(222)] = 2400,
  [SMALL_STATE(223)] = 2405,
  [SMALL_STATE(224)] = 2412,
  [SMALL_STATE(225)] = 2416,
  [SMALL_STATE(226)] = 2420,
  [SMALL_STATE(227)] = 2424,
  [SMALL_STATE(228)] = 2428,
  [SMALL_STATE(229)] = 2432,
  [SMALL_STATE(230)] = 2436,
  [SMALL_STATE(231)] = 2440,
  [SMALL_STATE(232)] = 2444,
  [SMALL_STATE(233)] = 2448,
  [SMALL_STATE(234)] = 2452,
  [SMALL_STATE(235)] = 2456,
  [SMALL_STATE(236)] = 2460,
  [SMALL_STATE(237)] = 2464,
  [SMALL_STATE(238)] = 2468,
  [SMALL_STATE(239)] = 2472,
  [SMALL_STATE(240)] = 2476,
  [SMALL_STATE(241)] = 2480,
  [SMALL_STATE(242)] = 2484,
  [SMALL_STATE(243)] = 2488,
  [SMALL_STATE(244)] = 2492,
  [SMALL_STATE(245)] = 2496,
  [SMALL_STATE(246)] = 2500,
  [SMALL_STATE(247)] = 2504,
  [SMALL_STATE(248)] = 2508,
  [SMALL_STATE(249)] = 2512,
  [SMALL_STATE(250)] = 2516,
  [SMALL_STATE(251)] = 2520,
  [SMALL_STATE(252)] = 2524,
  [SMALL_STATE(253)] = 2528,
  [SMALL_STATE(254)] = 2532,
  [SMALL_STATE(255)] = 2536,
  [SMALL_STATE(256)] = 2540,
  [SMALL_STATE(257)] = 2544,
  [SMALL_STATE(258)] = 2548,
  [SMALL_STATE(259)] = 2552,
  [SMALL_STATE(260)] = 2556,
  [SMALL_STATE(261)] = 2560,
  [SMALL_STATE(262)] = 2564,
  [SMALL_STATE(263)] = 2568,
  [SMALL_STATE(264)] = 2572,
  [SMALL_STATE(265)] = 2576,
  [SMALL_STATE(266)] = 2580,
  [SMALL_STATE(267)] = 2584,
  [SMALL_STATE(268)] = 2588,
  [SMALL_STATE(269)] = 2592,
  [SMALL_STATE(270)] = 2596,
  [SMALL_STATE(271)] = 2600,
  [SMALL_STATE(272)] = 2604,
  [SMALL_STATE(273)] = 2608,
  [SMALL_STATE(274)] = 2612,
  [SMALL_STATE(275)] = 2616,
  [SMALL_STATE(276)] = 2620,
  [SMALL_STATE(277)] = 2624,
  [SMALL_STATE(278)] = 2628,
  [SMALL_STATE(279)] = 2632,
  [SMALL_STATE(280)] = 2636,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0), SHIFT_REPEAT(22),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0), SHIFT_REPEAT(99),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 2, 0, 7),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 2, 0, 7),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 2, 0, 9),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 2, 0, 9),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 3, 0, 9),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 3, 0, 9),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 3, 0, 7),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 3, 0, 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 1, 0, 0), REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_declaration, 3, 0, 8),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_declaration, 3, 0, 8),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 2, 0, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 2, 0, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, 0, 11),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_declaration, 3, 0, 8),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 11),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 23),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 23), SHIFT_REPEAT(42),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stdio_service_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stdio_service_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stdio_service_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stdio_service_frontmatter_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1, 0, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 15),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stdio_args_block_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stdio_args_block_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 1, 0, 13),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 3, 0, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 12),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 18),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 24),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 12),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 28),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 18),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 24),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 32),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 28),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 33),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 32),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 37),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 33),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 8, 0, 37),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_args_block, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_fence_body, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_psyche_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_psyche_fence_body_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_psyche_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 1, 0, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_fence_body, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_fence_body, 1, 0, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_fence_body, 2, 0, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 2, 0, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_directive, 2, 0, 10),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(218),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, 0, 22),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter_list_item_line, 3, 0, 34),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter_list_item_line, 3, 0, 34),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_directive, 2, 0, 10),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 14),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 35),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 35), SHIFT_REPEAT(161),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_values, 2, 0, 29),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_named_parameter, 1, 0, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_command_line, 4, 0, 38),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_headers_block, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_cwd_line, 4, 0, 38),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_http_headers_block_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_http_headers_block_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_values, 1, 0, 21),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_env_line, 4, 0, 38),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__required_then_optional_named_parameters_repeat1, 2, 0, 27),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__required_then_optional_named_parameters_repeat1, 2, 0, 27), SHIFT_REPEAT(167),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_subject, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_named_parameter, 2, 0, 14),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_named_parameters, 2, 0, 17),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_named_parameters, 2, 0, 17),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 2, 0, 7),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__optional_named_parameters_repeat1, 2, 0, 27),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__optional_named_parameters_repeat1, 2, 0, 27), SHIFT_REPEAT(170),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_named_parameters, 1, 0, 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_named_parameters, 1, 0, 6),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_frontmatter, 5, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 34),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_header, 6, 0, 36),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_frontmatter_fence_content_line, 2, 0, 7),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_service_frontmatter, 6, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stdio_service_frontmatter, 6, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_header, 7, 0, 36),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_service_frontmatter, 7, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stdio_service_frontmatter, 7, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_fence_content_line, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_frontmatter, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_directive, 3, 0, 20),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 4, 0, 12),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_directive, 3, 0, 20),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 5, 0, 12),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_parameter, 1, 0, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_named_parameter, 3, 0, 19),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__required_then_optional_named_parameters_repeat1, 2, 0, 26),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__optional_named_parameters_repeat1, 2, 0, 26),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_then_named_parameters, 1, 0, 6),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 16),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_named_parameter, 4, 0, 30),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_header, 6, 0, 36),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_header, 6, 0, 36),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_header, 7, 0, 36),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_header, 7, 0, 36),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_url_line, 4, 0, 38),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_map_entry_line, 4, 0, 39),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, 0, 19),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_transport_line, 4, 0, 38),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_transport_line, 4, 0, 38),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_named_parameters, 4, 0, 31),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_params_line, 4, 0, 38),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_sequence, 1, 0, 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_header, 7, 0, 36),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unnamed_then_named_parameters, 3, 0, 25),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_named_parameters, 3, 0, 25),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [612] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_parameters, 1, 0, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_header, 6, 0, 36),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
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
