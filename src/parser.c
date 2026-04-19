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
#define STATE_COUNT 318
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 48

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
  anon_sym_models = 34,
  anon_sym_psyches = 35,
  anon_sym_skills = 36,
  anon_sym_services = 37,
  anon_sym_tool = 38,
  anon_sym_tools = 39,
  anon_sym_system = 40,
  anon_sym_user = 41,
  anon_sym_assistant = 42,
  sym_http_transport_value = 43,
  sym_stdio_transport_value = 44,
  sym_identifier = 45,
  sym_named_identifier = 46,
  aux_sym_reference_token1 = 47,
  sym_message_text = 48,
  sym_indented_message_text = 49,
  sym_fence_text = 50,
  sym_non_frontmatter_fence_text = 51,
  sym_frontmatter_header_name = 52,
  sym_frontmatter_scalar = 53,
  sym_source_file = 54,
  sym_newline = 55,
  sym_blank_line = 56,
  sym_use_statement = 57,
  sym_psyche_declaration = 58,
  sym_service_declaration = 59,
  sym_prompt_declaration = 60,
  sym_psyche_header = 61,
  sym_service_header = 62,
  sym_prompt_header = 63,
  sym_struct_declaration = 64,
  sym_struct_header = 65,
  sym_struct_field_line = 66,
  sym_struct_body = 67,
  sym_struct_field = 68,
  sym_parameter_list = 69,
  sym__parameter_sequence = 70,
  sym__input_then_params = 71,
  sym__params = 72,
  sym__required_then_optional_params = 73,
  sym__optional_params = 74,
  sym_unnamed_parameter = 75,
  sym_required_named_parameter = 76,
  sym_optional_named_parameter = 77,
  sym_type_expression = 78,
  sym_thunk = 79,
  sym_thunk_signature = 80,
  sym_thunk_body = 81,
  sym__explicit_message = 82,
  sym__implicit_message = 83,
  sym_overlay_line = 84,
  sym_thunk_overlay = 85,
  sym_overlay_values = 86,
  sym_message_line = 87,
  sym_message_continuation_line = 88,
  sym_psyche_fence_body = 89,
  sym_service_fence_body = 90,
  sym_prompt_fence_body = 91,
  sym_service_frontmatter = 92,
  sym_http_service_frontmatter = 93,
  sym_stdio_service_frontmatter = 94,
  sym_prompt_frontmatter = 95,
  sym_http_transport_line = 96,
  sym_stdio_transport_line = 97,
  sym_http_url_line = 98,
  sym_http_headers_block = 99,
  sym_header_map_entry_line = 100,
  sym_stdio_command_line = 101,
  sym_stdio_args_block = 102,
  sym_frontmatter_list_item_line = 103,
  sym_stdio_env_line = 104,
  sym_stdio_cwd_line = 105,
  sym_prompt_params_line = 106,
  sym_fence_content_line = 107,
  sym_non_frontmatter_fence_content_line = 108,
  sym_empty_fence_content_line = 109,
  sym_psyche_keyword = 110,
  sym_service_keyword = 111,
  sym_prompt_keyword = 112,
  sym_fence_open = 113,
  sym_fence_close = 114,
  sym_cap_kind = 115,
  sym_overlay_subject = 116,
  sym_message_kind = 117,
  sym_reference = 118,
  sym_overlay_value = 119,
  aux_sym_source_file_repeat1 = 120,
  aux_sym_struct_body_repeat1 = 121,
  aux_sym__required_then_optional_params_repeat1 = 122,
  aux_sym__optional_params_repeat1 = 123,
  aux_sym_type_expression_repeat1 = 124,
  aux_sym_thunk_body_repeat1 = 125,
  aux_sym_thunk_body_repeat2 = 126,
  aux_sym_thunk_body_repeat3 = 127,
  aux_sym__explicit_message_repeat1 = 128,
  aux_sym__implicit_message_repeat1 = 129,
  aux_sym_overlay_values_repeat1 = 130,
  aux_sym_psyche_fence_body_repeat1 = 131,
  aux_sym_stdio_service_frontmatter_repeat1 = 132,
  aux_sym_http_headers_block_repeat1 = 133,
  aux_sym_stdio_args_block_repeat1 = 134,
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
  [anon_sym_models] = "models",
  [anon_sym_psyches] = "psyches",
  [anon_sym_skills] = "skills",
  [anon_sym_services] = "services",
  [anon_sym_tool] = "tool",
  [anon_sym_tools] = "tools",
  [anon_sym_system] = "system",
  [anon_sym_user] = "user",
  [anon_sym_assistant] = "assistant",
  [sym_http_transport_value] = "http_transport_value",
  [sym_stdio_transport_value] = "stdio_transport_value",
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
  [sym_overlay_subject] = "overlay_subject",
  [sym_message_kind] = "message_kind",
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
  [anon_sym_models] = anon_sym_models,
  [anon_sym_psyches] = anon_sym_psyches,
  [anon_sym_skills] = anon_sym_skills,
  [anon_sym_services] = anon_sym_services,
  [anon_sym_tool] = anon_sym_tool,
  [anon_sym_tools] = anon_sym_tools,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_user] = anon_sym_user,
  [anon_sym_assistant] = anon_sym_assistant,
  [sym_http_transport_value] = sym_http_transport_value,
  [sym_stdio_transport_value] = sym_stdio_transport_value,
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
  [sym_overlay_subject] = sym_overlay_subject,
  [sym_message_kind] = sym_message_kind,
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
  [sym_overlay_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_message_kind] = {
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
  [48] = 5,
  [49] = 49,
  [50] = 50,
  [51] = 5,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 5,
  [56] = 50,
  [57] = 57,
  [58] = 50,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 5,
  [65] = 65,
  [66] = 5,
  [67] = 67,
  [68] = 53,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 50,
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
  [100] = 50,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 5,
  [105] = 105,
  [106] = 106,
  [107] = 53,
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
  [142] = 5,
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
  [169] = 5,
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
  [249] = 50,
  [250] = 5,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 5,
  [256] = 256,
  [257] = 5,
  [258] = 5,
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
  [314] = 314,
  [315] = 5,
  [316] = 316,
  [317] = 317,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '\n', 137,
        '\r', 1,
        '#', 150,
        '(', 172,
        ')', 173,
        '+', 20,
        ',', 174,
        '-', 146,
        ':', 171,
        '=', 167,
        '?', 175,
        '[', 23,
        '_', 176,
        '`', 25,
        'a', 97,
        'c', 88,
        'e', 83,
        'h', 45,
        'm', 38,
        'p', 26,
        's', 51,
        't', 58,
        'u', 99,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(137);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(349);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(349);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 137,
        '\r', 1,
        'a', 282,
        'm', 264,
        'p', 277,
        's', 241,
        't', 267,
        'u', 278,
        '\t', 227,
        '\f', 227,
        ' ', 227,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 137,
        '\r', 1,
        'a', 282,
        's', 294,
        't', 268,
        'u', 278,
        '\t', 228,
        '\f', 228,
        ' ', 228,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '_') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(180);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(168);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '>') ADVANCE(170);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(139);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(178);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'k') ADVANCE(63);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'k') ADVANCE(67);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(164);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 126:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 127:
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 128:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(354);
      END_STATE();
    case 132:
      if (eof) ADVANCE(136);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\f') SKIP(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 133:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '\n', 137,
        '\r', 1,
        '#', 11,
        '-', 146,
        'a', 97,
        'c', 88,
        'e', 83,
        'h', 44,
        'p', 27,
        's', 55,
        't', 60,
        'u', 99,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(133);
      END_STATE();
    case 134:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '\n', 137,
        '\r', 1,
        '#', 11,
        '-', 145,
        'p', 212,
        's', 200,
        't', 204,
        'u', 215,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 135:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '\n', 137,
        '\r', 1,
        '#', 11,
        'p', 274,
        's', 246,
        't', 247,
        'u', 283,
        '\t', 226,
        '\f', 226,
        ' ', 226,
      );
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_transport);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_cwd);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_markdown_language);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_add_assign_operator);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_remove_assign_operator);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_question);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_underscore);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(341);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_frontmatter_delimiter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_skill);
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_tool);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_http_transport_value);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_stdio_transport_value);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_named_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_message_text);
      ADVANCE_MAP(
        '\n', 137,
        '\r', 1,
        '#', 11,
        'p', 274,
        's', 246,
        't', 247,
        'u', 283,
        '\t', 226,
        '\f', 226,
        ' ', 226,
      );
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_message_text);
      ADVANCE_MAP(
        '\n', 137,
        '\r', 1,
        'a', 282,
        'm', 264,
        'p', 277,
        's', 241,
        't', 267,
        'u', 278,
        '\t', 227,
        '\f', 227,
        ' ', 227,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_message_text);
      ADVANCE_MAP(
        '\n', 137,
        '\r', 1,
        'a', 282,
        's', 294,
        't', 268,
        'u', 278,
        '\t', 228,
        '\f', 228,
        ' ', 228,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'k') ADVANCE(250);
      if (lookahead == 'y') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'k') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'm') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'u') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'v') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'v') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'y') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead == 'y') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_message_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_indented_message_text);
      ADVANCE_MAP(
        '\n', 137,
        '\f', 297,
        '\r', 1,
        '#', 11,
        'a', 327,
        'p', 320,
        's', 305,
        't', 307,
        'u', 323,
        '\t', 297,
        ' ', 297,
      );
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == 'y') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'h') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'k') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'o') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'u') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'v') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead == 'y') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_indented_message_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(341);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(341);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '`') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '`') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_non_frontmatter_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == '-') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_frontmatter_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_frontmatter_scalar);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_frontmatter_scalar);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(354);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 133},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 133},
  [4] = {.lex_state = 133},
  [5] = {.lex_state = 133},
  [6] = {.lex_state = 132},
  [7] = {.lex_state = 132},
  [8] = {.lex_state = 132},
  [9] = {.lex_state = 132},
  [10] = {.lex_state = 132},
  [11] = {.lex_state = 132},
  [12] = {.lex_state = 132},
  [13] = {.lex_state = 132},
  [14] = {.lex_state = 132},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 133},
  [17] = {.lex_state = 133},
  [18] = {.lex_state = 133},
  [19] = {.lex_state = 135},
  [20] = {.lex_state = 135},
  [21] = {.lex_state = 135},
  [22] = {.lex_state = 135},
  [23] = {.lex_state = 135},
  [24] = {.lex_state = 134},
  [25] = {.lex_state = 134},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 135},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 135},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 132},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 132},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 135},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 132},
  [51] = {.lex_state = 132},
  [52] = {.lex_state = 133},
  [53] = {.lex_state = 135},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 134},
  [56] = {.lex_state = 135},
  [57] = {.lex_state = 135},
  [58] = {.lex_state = 134},
  [59] = {.lex_state = 134},
  [60] = {.lex_state = 135},
  [61] = {.lex_state = 135},
  [62] = {.lex_state = 134},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 135},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 133},
  [70] = {.lex_state = 133},
  [71] = {.lex_state = 133},
  [72] = {.lex_state = 133},
  [73] = {.lex_state = 133},
  [74] = {.lex_state = 133},
  [75] = {.lex_state = 133},
  [76] = {.lex_state = 133},
  [77] = {.lex_state = 133},
  [78] = {.lex_state = 133},
  [79] = {.lex_state = 133},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 133},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 16},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 130},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 134},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 12},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 12},
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
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 12},
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
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 131},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 131},
  [265] = {.lex_state = 131},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 131},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 131},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 131},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 131},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 130},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
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
    [anon_sym_models] = ACTIONS(1),
    [anon_sym_psyches] = ACTIONS(1),
    [anon_sym_skills] = ACTIONS(1),
    [anon_sym_services] = ACTIONS(1),
    [anon_sym_tool] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_user] = ACTIONS(1),
    [anon_sym_assistant] = ACTIONS(1),
    [sym_http_transport_value] = ACTIONS(1),
    [sym_stdio_transport_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(270),
    [sym_newline] = STATE(75),
    [sym_blank_line] = STATE(3),
    [sym_use_statement] = STATE(3),
    [sym_psyche_declaration] = STATE(3),
    [sym_service_declaration] = STATE(3),
    [sym_prompt_declaration] = STATE(3),
    [sym_psyche_header] = STATE(98),
    [sym_service_header] = STATE(106),
    [sym_prompt_header] = STATE(81),
    [sym_struct_declaration] = STATE(3),
    [sym_struct_header] = STATE(85),
    [sym_thunk] = STATE(3),
    [sym_thunk_signature] = STATE(2),
    [sym_psyche_keyword] = STATE(300),
    [sym_service_keyword] = STATE(304),
    [sym_prompt_keyword] = STATE(307),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    STATE(18), 1,
      aux_sym_thunk_body_repeat3,
    STATE(22), 1,
      sym_message_line,
    STATE(52), 1,
      sym__explicit_message,
    STATE(69), 1,
      sym_thunk_body,
    STATE(72), 1,
      sym__implicit_message,
    STATE(148), 1,
      sym_thunk_overlay,
    STATE(173), 1,
      sym_overlay_subject,
    STATE(249), 1,
      sym_newline,
    STATE(305), 1,
      sym_message_kind,
    STATE(15), 2,
      sym_overlay_line,
      aux_sym_thunk_body_repeat1,
    STATE(92), 2,
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_comment,
    STATE(2), 1,
      sym_thunk_signature,
    STATE(75), 1,
      sym_newline,
    STATE(81), 1,
      sym_prompt_header,
    STATE(85), 1,
      sym_struct_header,
    STATE(98), 1,
      sym_psyche_header,
    STATE(106), 1,
      sym_service_header,
    STATE(300), 1,
      sym_psyche_keyword,
    STATE(304), 1,
      sym_service_keyword,
    STATE(307), 1,
      sym_prompt_keyword,
    STATE(4), 8,
      sym_blank_line,
      sym_use_statement,
      sym_psyche_declaration,
      sym_service_declaration,
      sym_prompt_declaration,
      sym_struct_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [125] = 19,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_newline_token1,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_use_keyword,
    ACTIONS(46), 1,
      anon_sym_psyche,
    ACTIONS(49), 1,
      anon_sym_service,
    ACTIONS(52), 1,
      anon_sym_prompt,
    ACTIONS(55), 1,
      sym_struct_keyword,
    ACTIONS(58), 1,
      sym_thunk_keyword,
    STATE(2), 1,
      sym_thunk_signature,
    STATE(75), 1,
      sym_newline,
    STATE(81), 1,
      sym_prompt_header,
    STATE(85), 1,
      sym_struct_header,
    STATE(98), 1,
      sym_psyche_header,
    STATE(106), 1,
      sym_service_header,
    STATE(300), 1,
      sym_psyche_keyword,
    STATE(304), 1,
      sym_service_keyword,
    STATE(307), 1,
      sym_prompt_keyword,
    STATE(4), 8,
      sym_blank_line,
      sym_use_statement,
      sym_psyche_declaration,
      sym_service_declaration,
      sym_prompt_declaration,
      sym_struct_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [190] = 2,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(61), 18,
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
  [214] = 6,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(71), 1,
      sym_indented_message_text,
    STATE(50), 1,
      sym_newline,
    STATE(12), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(69), 11,
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
  [245] = 6,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(71), 1,
      sym_indented_message_text,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_newline,
    STATE(10), 3,
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
  [276] = 6,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(71), 1,
      sym_indented_message_text,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_newline,
    STATE(6), 3,
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
  [307] = 6,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(71), 1,
      sym_indented_message_text,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_newline,
    STATE(13), 3,
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
  [338] = 6,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(71), 1,
      sym_indented_message_text,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_newline,
    STATE(12), 3,
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
  [369] = 6,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(71), 1,
      sym_indented_message_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_newline,
    STATE(14), 3,
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
  [400] = 6,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(96), 1,
      sym_indented_message_text,
    STATE(50), 1,
      sym_newline,
    STATE(12), 3,
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
  [431] = 6,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(71), 1,
      sym_indented_message_text,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_newline,
    STATE(12), 3,
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
  [462] = 6,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(71), 1,
      sym_indented_message_text,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_newline,
    STATE(12), 3,
      sym_blank_line,
      sym_message_continuation_line,
      aux_sym__explicit_message_repeat1,
    ACTIONS(101), 11,
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
  [493] = 8,
    ACTIONS(103), 1,
      aux_sym_newline_token1,
    STATE(100), 1,
      sym_newline,
    STATE(148), 1,
      sym_thunk_overlay,
    STATE(173), 1,
      sym_overlay_subject,
    STATE(26), 2,
      sym_overlay_line,
      aux_sym_thunk_body_repeat1,
    STATE(49), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(23), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(105), 5,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [527] = 6,
    ACTIONS(109), 1,
      sym_use_keyword,
    STATE(17), 1,
      aux_sym_thunk_body_repeat3,
    STATE(52), 1,
      sym__explicit_message,
    STATE(305), 1,
      sym_message_kind,
    ACTIONS(111), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [556] = 6,
    ACTIONS(115), 1,
      sym_use_keyword,
    STATE(17), 1,
      aux_sym_thunk_body_repeat3,
    STATE(52), 1,
      sym__explicit_message,
    STATE(305), 1,
      sym_message_kind,
    ACTIONS(117), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [585] = 6,
    ACTIONS(122), 1,
      sym_use_keyword,
    STATE(17), 1,
      aux_sym_thunk_body_repeat3,
    STATE(52), 1,
      sym__explicit_message,
    STATE(305), 1,
      sym_message_kind,
    ACTIONS(111), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [614] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      aux_sym_newline_token1,
    STATE(56), 1,
      sym_newline,
    STATE(20), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(27), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(128), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [644] = 7,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      aux_sym_newline_token1,
    ACTIONS(137), 1,
      sym_message_text,
    STATE(249), 1,
      sym_newline,
    STATE(20), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(96), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(135), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [674] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      aux_sym_newline_token1,
    STATE(56), 1,
      sym_newline,
    STATE(23), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(27), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(128), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [704] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(126), 1,
      aux_sym_newline_token1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_newline,
    STATE(19), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(47), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(142), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [734] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(126), 1,
      aux_sym_newline_token1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_newline,
    STATE(20), 2,
      sym_message_line,
      aux_sym__implicit_message_repeat1,
    STATE(36), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(146), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [764] = 7,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(58), 1,
      sym_newline,
    STATE(170), 1,
      sym_struct_field,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(25), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(152), 6,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [794] = 7,
    ACTIONS(158), 1,
      aux_sym_newline_token1,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(58), 1,
      sym_newline,
    STATE(170), 1,
      sym_struct_field,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(25), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(161), 6,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [824] = 6,
    ACTIONS(166), 1,
      aux_sym_newline_token1,
    STATE(148), 1,
      sym_thunk_overlay,
    STATE(173), 1,
      sym_overlay_subject,
    STATE(26), 2,
      sym_overlay_line,
      aux_sym_thunk_body_repeat1,
    ACTIONS(168), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(171), 5,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [851] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(126), 1,
      aux_sym_newline_token1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_newline,
    STATE(61), 1,
      sym_message_line,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(146), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [880] = 1,
    ACTIONS(174), 14,
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
  [897] = 1,
    ACTIONS(176), 14,
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
  [914] = 1,
    ACTIONS(178), 14,
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
  [931] = 1,
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
  [948] = 1,
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
  [965] = 1,
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
  [982] = 1,
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
  [999] = 1,
    ACTIONS(188), 14,
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
  [1016] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(126), 1,
      aux_sym_newline_token1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_newline,
    STATE(61), 1,
      sym_message_line,
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
  [1045] = 1,
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
  [1062] = 1,
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
  [1079] = 1,
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
  [1096] = 1,
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
  [1113] = 2,
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
  [1132] = 1,
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
  [1149] = 1,
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
  [1166] = 1,
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
  [1183] = 2,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 13,
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
  [1202] = 1,
    ACTIONS(216), 14,
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
  [1219] = 7,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      aux_sym_newline_token1,
    STATE(56), 1,
      sym_newline,
    STATE(61), 1,
      sym_message_line,
    STATE(53), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(128), 7,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1248] = 1,
    ACTIONS(63), 14,
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
  [1265] = 10,
    ACTIONS(29), 1,
      sym_message_text,
    ACTIONS(218), 1,
      aux_sym_newline_token1,
    STATE(16), 1,
      aux_sym_thunk_body_repeat3,
    STATE(22), 1,
      sym_message_line,
    STATE(52), 1,
      sym__explicit_message,
    STATE(77), 1,
      sym__implicit_message,
    STATE(100), 1,
      sym_newline,
    STATE(305), 1,
      sym_message_kind,
    STATE(67), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(27), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [1300] = 2,
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
  [1319] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 13,
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
  [1338] = 2,
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
  [1356] = 5,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      aux_sym_newline_token1,
    STATE(56), 1,
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
  [1380] = 11,
    ACTIONS(235), 1,
      sym_rparen,
    ACTIONS(237), 1,
      sym_underscore,
    ACTIONS(239), 1,
      sym_named_identifier,
    STATE(139), 1,
      sym_required_named_parameter,
    STATE(140), 1,
      sym_optional_named_parameter,
    STATE(188), 1,
      sym_unnamed_parameter,
    STATE(263), 1,
      sym__params,
    STATE(276), 1,
      sym__required_then_optional_params,
    STATE(296), 1,
      sym__optional_params,
    STATE(308), 1,
      sym__input_then_params,
    STATE(314), 1,
      sym__parameter_sequence,
  [1414] = 2,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_DASH,
    ACTIONS(63), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [1430] = 2,
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
  [1445] = 2,
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
  [1460] = 2,
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
  [1475] = 2,
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
  [1490] = 2,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_message_text,
  [1505] = 2,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_message_text,
  [1520] = 2,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(255), 7,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_identifier,
  [1535] = 2,
    ACTIONS(259), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(257), 6,
      aux_sym_newline_token1,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [1550] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
      sym_message_text,
  [1565] = 2,
    ACTIONS(263), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(261), 6,
      aux_sym_newline_token1,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [1580] = 2,
    ACTIONS(63), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_skill,
      anon_sym_tool,
    ACTIONS(61), 6,
      aux_sym_newline_token1,
      anon_sym_models,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [1595] = 6,
    ACTIONS(265), 1,
      aux_sym_newline_token1,
    ACTIONS(268), 1,
      sym_message_text,
    STATE(21), 1,
      sym_message_line,
    STATE(100), 1,
      sym_newline,
    STATE(68), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(233), 4,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
  [1618] = 4,
    ACTIONS(265), 1,
      aux_sym_newline_token1,
    STATE(100), 1,
      sym_newline,
    STATE(68), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    ACTIONS(233), 5,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
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
    ACTIONS(120), 9,
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
  [1696] = 1,
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
  [1708] = 1,
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
  [1720] = 1,
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
  [1732] = 1,
    ACTIONS(107), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      sym_struct_keyword,
      sym_thunk_keyword,
  [1744] = 1,
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
  [1756] = 1,
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
  [1768] = 3,
    ACTIONS(289), 1,
      sym_array_suffix,
    STATE(80), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(287), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [1783] = 7,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(294), 1,
      sym_frontmatter_delimiter,
    ACTIONS(296), 1,
      sym_non_frontmatter_fence_text,
    STATE(103), 1,
      sym_prompt_frontmatter,
    STATE(152), 1,
      sym_newline,
    STATE(244), 1,
      sym_prompt_fence_body,
    STATE(95), 2,
      sym_non_frontmatter_fence_content_line,
      sym_empty_fence_content_line,
  [1806] = 5,
    ACTIONS(298), 1,
      anon_sym_args,
    ACTIONS(300), 1,
      anon_sym_env,
    ACTIONS(302), 1,
      anon_sym_cwd,
    ACTIONS(304), 1,
      sym_frontmatter_delimiter,
    STATE(87), 4,
      sym_stdio_args_block,
      sym_stdio_env_line,
      sym_stdio_cwd_line,
      aux_sym_stdio_service_frontmatter_repeat1,
  [1825] = 5,
    ACTIONS(298), 1,
      anon_sym_args,
    ACTIONS(300), 1,
      anon_sym_env,
    ACTIONS(302), 1,
      anon_sym_cwd,
    ACTIONS(306), 1,
      sym_frontmatter_delimiter,
    STATE(82), 4,
      sym_stdio_args_block,
      sym_stdio_env_line,
      sym_stdio_cwd_line,
      aux_sym_stdio_service_frontmatter_repeat1,
  [1844] = 4,
    ACTIONS(310), 1,
      sym_array_suffix,
    ACTIONS(312), 1,
      sym_question,
    STATE(80), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(308), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1861] = 6,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(58), 1,
      sym_newline,
    STATE(71), 1,
      sym_struct_body,
    STATE(170), 1,
      sym_struct_field,
    STATE(24), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
  [1882] = 4,
    ACTIONS(310), 1,
      sym_array_suffix,
    ACTIONS(318), 1,
      sym_question,
    STATE(84), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(316), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1899] = 5,
    ACTIONS(320), 1,
      anon_sym_args,
    ACTIONS(323), 1,
      anon_sym_env,
    ACTIONS(326), 1,
      anon_sym_cwd,
    ACTIONS(329), 1,
      sym_frontmatter_delimiter,
    STATE(87), 4,
      sym_stdio_args_block,
      sym_stdio_env_line,
      sym_stdio_cwd_line,
      aux_sym_stdio_service_frontmatter_repeat1,
  [1918] = 1,
    ACTIONS(331), 7,
      aux_sym_newline_token1,
      sym_array_suffix,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [1928] = 3,
    ACTIONS(335), 1,
      anon_sym_DASH,
    STATE(90), 2,
      sym_frontmatter_list_item_line,
      aux_sym_stdio_args_block_repeat1,
    ACTIONS(333), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [1942] = 3,
    ACTIONS(339), 1,
      anon_sym_DASH,
    STATE(90), 2,
      sym_frontmatter_list_item_line,
      aux_sym_stdio_args_block_repeat1,
    ACTIONS(337), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [1956] = 5,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(342), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(344), 1,
      sym_fence_text,
    STATE(153), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [1973] = 5,
    ACTIONS(21), 1,
      aux_sym_newline_token1,
    ACTIONS(29), 1,
      sym_message_text,
    STATE(21), 1,
      sym_message_line,
    STATE(249), 1,
      sym_newline,
    STATE(107), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
  [1990] = 5,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(344), 1,
      sym_fence_text,
    ACTIONS(346), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(153), 1,
      sym_newline,
    STATE(91), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2007] = 5,
    ACTIONS(348), 1,
      aux_sym_newline_token1,
    ACTIONS(351), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(353), 1,
      sym_fence_text,
    STATE(153), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2024] = 5,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(344), 1,
      sym_fence_text,
    ACTIONS(356), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(153), 1,
      sym_newline,
    STATE(102), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2041] = 5,
    ACTIONS(21), 1,
      aux_sym_newline_token1,
    ACTIONS(29), 1,
      sym_message_text,
    STATE(61), 1,
      sym_message_line,
    STATE(249), 1,
      sym_newline,
    STATE(107), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
  [2058] = 5,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(344), 1,
      sym_fence_text,
    ACTIONS(358), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(153), 1,
      sym_newline,
    STATE(101), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2075] = 5,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(360), 1,
      sym_non_frontmatter_fence_text,
    STATE(152), 1,
      sym_newline,
    STATE(212), 1,
      sym_psyche_fence_body,
    STATE(93), 2,
      sym_non_frontmatter_fence_content_line,
      sym_empty_fence_content_line,
  [2092] = 5,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(344), 1,
      sym_fence_text,
    ACTIONS(362), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(153), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2109] = 1,
    ACTIONS(222), 6,
      aux_sym_newline_token1,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [2118] = 5,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(344), 1,
      sym_fence_text,
    ACTIONS(364), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(153), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2135] = 5,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(344), 1,
      sym_fence_text,
    ACTIONS(366), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(153), 1,
      sym_newline,
    STATE(94), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2152] = 5,
    ACTIONS(292), 1,
      aux_sym_newline_token1,
    ACTIONS(344), 1,
      sym_fence_text,
    ACTIONS(368), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(153), 1,
      sym_newline,
    STATE(99), 2,
      sym_fence_content_line,
      aux_sym_psyche_fence_body_repeat1,
  [2169] = 1,
    ACTIONS(63), 6,
      aux_sym_newline_token1,
      anon_sym_tool,
      anon_sym_system,
      anon_sym_user,
      anon_sym_assistant,
      sym_message_text,
  [2178] = 6,
    ACTIONS(239), 1,
      sym_named_identifier,
    STATE(139), 1,
      sym_required_named_parameter,
    STATE(140), 1,
      sym_optional_named_parameter,
    STATE(276), 1,
      sym__required_then_optional_params,
    STATE(278), 1,
      sym__params,
    STATE(296), 1,
      sym__optional_params,
  [2197] = 4,
    ACTIONS(370), 1,
      sym_frontmatter_delimiter,
    STATE(97), 1,
      sym_service_frontmatter,
    STATE(230), 1,
      sym_service_fence_body,
    STATE(159), 2,
      sym_http_service_frontmatter,
      sym_stdio_service_frontmatter,
  [2211] = 4,
    ACTIONS(233), 1,
      sym_message_text,
    ACTIONS(372), 1,
      aux_sym_newline_token1,
    STATE(249), 1,
      sym_newline,
    STATE(107), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
  [2225] = 5,
    ACTIONS(375), 1,
      sym_arrow,
    ACTIONS(377), 1,
      sym_colon,
    ACTIONS(379), 1,
      sym_lparen,
    ACTIONS(381), 1,
      sym_identifier,
    STATE(236), 1,
      sym_parameter_list,
  [2241] = 2,
    STATE(180), 1,
      sym_cap_kind,
    ACTIONS(383), 4,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_skill,
  [2251] = 2,
    ACTIONS(387), 1,
      anon_sym_DASH,
    ACTIONS(385), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [2261] = 1,
    ACTIONS(389), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2269] = 1,
    ACTIONS(391), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [2277] = 4,
    ACTIONS(395), 1,
      aux_sym_reference_token1,
    STATE(118), 1,
      sym_overlay_value,
    STATE(224), 1,
      sym_overlay_values,
    ACTIONS(393), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2291] = 1,
    ACTIONS(397), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [2298] = 2,
    ACTIONS(401), 1,
      sym_colon,
    ACTIONS(399), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [2307] = 4,
    ACTIONS(239), 1,
      sym_named_identifier,
    STATE(140), 1,
      sym_optional_named_parameter,
    STATE(179), 1,
      sym_required_named_parameter,
    STATE(293), 1,
      sym__optional_params,
  [2320] = 4,
    ACTIONS(379), 1,
      sym_lparen,
    ACTIONS(403), 1,
      sym_arrow,
    ACTIONS(405), 1,
      sym_colon,
    STATE(196), 1,
      sym_parameter_list,
  [2333] = 3,
    ACTIONS(409), 1,
      sym_comma,
    STATE(121), 1,
      aux_sym_overlay_values_repeat1,
    ACTIONS(407), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2344] = 3,
    ACTIONS(411), 1,
      sym_colon,
    ACTIONS(415), 1,
      sym_question,
    ACTIONS(413), 2,
      sym_rparen,
      sym_comma,
  [2355] = 4,
    ACTIONS(239), 1,
      sym_named_identifier,
    STATE(140), 1,
      sym_optional_named_parameter,
    STATE(179), 1,
      sym_required_named_parameter,
    STATE(295), 1,
      sym__optional_params,
  [2368] = 3,
    ACTIONS(409), 1,
      sym_comma,
    STATE(122), 1,
      aux_sym_overlay_values_repeat1,
    ACTIONS(417), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2379] = 3,
    ACTIONS(421), 1,
      sym_comma,
    STATE(122), 1,
      aux_sym_overlay_values_repeat1,
    ACTIONS(419), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [2390] = 1,
    ACTIONS(424), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [2397] = 3,
    ACTIONS(426), 1,
      sym_frontmatter_delimiter,
    ACTIONS(428), 1,
      sym_frontmatter_header_name,
    STATE(126), 2,
      sym_header_map_entry_line,
      aux_sym_http_headers_block_repeat1,
  [2408] = 1,
    ACTIONS(430), 4,
      anon_sym_args,
      anon_sym_env,
      anon_sym_cwd,
      sym_frontmatter_delimiter,
  [2415] = 3,
    ACTIONS(432), 1,
      sym_frontmatter_delimiter,
    ACTIONS(434), 1,
      sym_frontmatter_header_name,
    STATE(126), 2,
      sym_header_map_entry_line,
      aux_sym_http_headers_block_repeat1,
  [2426] = 4,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(437), 1,
      sym_inline_comment,
    ACTIONS(439), 1,
      sym_message_text,
    STATE(7), 1,
      sym_newline,
  [2439] = 3,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    ACTIONS(443), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_newline,
  [2449] = 3,
    ACTIONS(445), 1,
      aux_sym_newline_token1,
    ACTIONS(447), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_newline,
  [2459] = 3,
    ACTIONS(449), 1,
      aux_sym_newline_token1,
    ACTIONS(451), 1,
      sym_inline_comment,
    STATE(233), 1,
      sym_newline,
  [2469] = 3,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    ACTIONS(453), 1,
      sym_inline_comment,
    STATE(32), 1,
      sym_newline,
  [2479] = 3,
    ACTIONS(455), 1,
      sym_rparen,
    ACTIONS(457), 1,
      sym_comma,
    STATE(133), 1,
      aux_sym__required_then_optional_params_repeat1,
  [2489] = 3,
    ACTIONS(459), 1,
      sym_rparen,
    ACTIONS(461), 1,
      sym_comma,
    STATE(133), 1,
      aux_sym__required_then_optional_params_repeat1,
  [2499] = 3,
    ACTIONS(464), 1,
      sym_rparen,
    ACTIONS(466), 1,
      sym_comma,
    STATE(134), 1,
      aux_sym__optional_params_repeat1,
  [2509] = 3,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    ACTIONS(469), 1,
      sym_inline_comment,
    STATE(37), 1,
      sym_newline,
  [2519] = 3,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    ACTIONS(471), 1,
      sym_inline_comment,
    STATE(39), 1,
      sym_newline,
  [2529] = 3,
    ACTIONS(473), 1,
      anon_sym_headers,
    ACTIONS(475), 1,
      sym_frontmatter_delimiter,
    STATE(266), 1,
      sym_http_headers_block,
  [2539] = 3,
    ACTIONS(477), 1,
      sym_rparen,
    ACTIONS(479), 1,
      sym_comma,
    STATE(134), 1,
      aux_sym__optional_params_repeat1,
  [2549] = 3,
    ACTIONS(481), 1,
      sym_rparen,
    ACTIONS(483), 1,
      sym_comma,
    STATE(132), 1,
      aux_sym__required_then_optional_params_repeat1,
  [2559] = 3,
    ACTIONS(479), 1,
      sym_comma,
    ACTIONS(485), 1,
      sym_rparen,
    STATE(138), 1,
      aux_sym__optional_params_repeat1,
  [2569] = 3,
    ACTIONS(445), 1,
      aux_sym_newline_token1,
    ACTIONS(487), 1,
      sym_inline_comment,
    STATE(41), 1,
      sym_newline,
  [2579] = 1,
    ACTIONS(63), 3,
      aux_sym_newline_token1,
      sym_frontmatter_delimiter,
      sym_non_frontmatter_fence_text,
  [2585] = 3,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    ACTIONS(491), 1,
      sym_inline_comment,
    STATE(215), 1,
      sym_newline,
  [2595] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(493), 1,
      sym_inline_comment,
    STATE(299), 1,
      sym_newline,
  [2605] = 3,
    ACTIONS(495), 1,
      aux_sym_newline_token1,
    ACTIONS(497), 1,
      sym_inline_comment,
    STATE(155), 1,
      sym_newline,
  [2615] = 3,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    ACTIONS(499), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_newline,
  [2625] = 3,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    ACTIONS(501), 1,
      sym_inline_comment,
    STATE(31), 1,
      sym_newline,
  [2635] = 3,
    ACTIONS(503), 1,
      aux_sym_newline_token1,
    ACTIONS(505), 1,
      sym_inline_comment,
    STATE(63), 1,
      sym_newline,
  [2645] = 1,
    ACTIONS(507), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2651] = 1,
    ACTIONS(509), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [2657] = 3,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    ACTIONS(511), 1,
      sym_inline_comment,
    STATE(34), 1,
      sym_newline,
  [2667] = 1,
    ACTIONS(513), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2673] = 1,
    ACTIONS(515), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2679] = 3,
    ACTIONS(517), 1,
      anon_sym_transport,
    STATE(195), 1,
      sym_http_transport_line,
    STATE(201), 1,
      sym_stdio_transport_line,
  [2689] = 1,
    ACTIONS(519), 3,
      aux_sym_newline_token1,
      sym_frontmatter_delimiter,
      sym_non_frontmatter_fence_text,
  [2695] = 2,
    ACTIONS(411), 1,
      sym_colon,
    ACTIONS(413), 2,
      sym_rparen,
      sym_comma,
  [2703] = 1,
    ACTIONS(521), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2709] = 1,
    ACTIONS(523), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2715] = 1,
    ACTIONS(525), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2721] = 1,
    ACTIONS(527), 3,
      aux_sym_newline_token1,
      sym_frontmatter_delimiter,
      sym_non_frontmatter_fence_text,
  [2727] = 2,
    ACTIONS(529), 1,
      sym_frontmatter_header_name,
    STATE(124), 2,
      sym_header_map_entry_line,
      aux_sym_http_headers_block_repeat1,
  [2735] = 1,
    ACTIONS(531), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2741] = 3,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    ACTIONS(533), 1,
      sym_inline_comment,
    STATE(40), 1,
      sym_newline,
  [2751] = 2,
    ACTIONS(535), 1,
      anon_sym_DASH,
    STATE(89), 2,
      sym_frontmatter_list_item_line,
      aux_sym_stdio_args_block_repeat1,
  [2759] = 1,
    ACTIONS(537), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2765] = 1,
    ACTIONS(539), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2771] = 2,
    ACTIONS(541), 1,
      sym_colon,
    ACTIONS(543), 2,
      sym_rparen,
      sym_comma,
  [2779] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(545), 1,
      sym_inline_comment,
    STATE(70), 1,
      sym_newline,
  [2789] = 1,
    ACTIONS(63), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2795] = 3,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    ACTIONS(547), 1,
      sym_inline_comment,
    STATE(62), 1,
      sym_newline,
  [2805] = 1,
    ACTIONS(549), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [2811] = 1,
    ACTIONS(399), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [2817] = 1,
    ACTIONS(551), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [2823] = 3,
    ACTIONS(553), 1,
      aux_sym_newline_token1,
    ACTIONS(555), 1,
      sym_inline_comment,
    STATE(57), 1,
      sym_newline,
  [2833] = 1,
    ACTIONS(557), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [2839] = 1,
    ACTIONS(559), 2,
      sym_rparen,
      sym_comma,
  [2844] = 1,
    ACTIONS(561), 2,
      sym_rparen,
      sym_comma,
  [2849] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(176), 1,
      sym_type_expression,
  [2856] = 1,
    ACTIONS(565), 2,
      sym_rparen,
      sym_comma,
  [2861] = 2,
    ACTIONS(567), 1,
      aux_sym_reference_token1,
    STATE(168), 1,
      sym_reference,
  [2868] = 1,
    ACTIONS(569), 2,
      sym_rparen,
      sym_comma,
  [2873] = 2,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    STATE(30), 1,
      sym_newline,
  [2880] = 2,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    STATE(38), 1,
      sym_newline,
  [2887] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(311), 1,
      sym_type_expression,
  [2894] = 2,
    ACTIONS(571), 1,
      sym_http_transport_value,
    ACTIONS(573), 1,
      sym_stdio_transport_value,
  [2901] = 2,
    ACTIONS(575), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(297), 1,
      sym_fence_open,
  [2908] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(149), 1,
      sym_newline,
  [2915] = 2,
    ACTIONS(579), 1,
      sym_rparen,
    ACTIONS(581), 1,
      sym_comma,
  [2922] = 2,
    ACTIONS(395), 1,
      aux_sym_reference_token1,
    STATE(150), 1,
      sym_overlay_value,
  [2929] = 2,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    STATE(35), 1,
      sym_newline,
  [2936] = 2,
    ACTIONS(445), 1,
      aux_sym_newline_token1,
    STATE(11), 1,
      sym_newline,
  [2943] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(279), 1,
      sym_type_expression,
  [2950] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(79), 1,
      sym_newline,
  [2957] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(288), 1,
      sym_type_expression,
  [2964] = 2,
    ACTIONS(583), 1,
      anon_sym_url,
    STATE(137), 1,
      sym_http_url_line,
  [2971] = 2,
    ACTIONS(585), 1,
      sym_arrow,
    ACTIONS(587), 1,
      sym_colon,
  [2978] = 2,
    ACTIONS(575), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(289), 1,
      sym_fence_open,
  [2985] = 2,
    ACTIONS(589), 1,
      sym_named_identifier,
    STATE(179), 1,
      sym_required_named_parameter,
  [2992] = 2,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    STATE(42), 1,
      sym_newline,
  [2999] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(287), 1,
      sym_type_expression,
  [3006] = 2,
    ACTIONS(591), 1,
      anon_sym_command,
    STATE(83), 1,
      sym_stdio_command_line,
  [3013] = 2,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    STATE(44), 1,
      sym_newline,
  [3020] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(312), 1,
      sym_newline,
  [3027] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(313), 1,
      sym_newline,
  [3034] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(157), 1,
      sym_newline,
  [3041] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(158), 1,
      sym_newline,
  [3048] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(269), 1,
      sym_newline,
  [3055] = 1,
    ACTIONS(593), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3060] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(166), 1,
      sym_newline,
  [3067] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(177), 1,
      sym_type_expression,
  [3074] = 2,
    ACTIONS(445), 1,
      aux_sym_newline_token1,
    STATE(45), 1,
      sym_newline,
  [3081] = 2,
    ACTIONS(595), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(76), 1,
      sym_fence_close,
  [3088] = 2,
    ACTIONS(575), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(291), 1,
      sym_fence_open,
  [3095] = 2,
    ACTIONS(489), 1,
      aux_sym_newline_token1,
    STATE(232), 1,
      sym_newline,
  [3102] = 2,
    ACTIONS(597), 1,
      aux_sym_newline_token1,
    ACTIONS(599), 1,
      sym_non_frontmatter_fence_text,
  [3109] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(273), 1,
      sym_newline,
  [3116] = 2,
    ACTIONS(495), 1,
      aux_sym_newline_token1,
    STATE(160), 1,
      sym_newline,
  [3123] = 1,
    ACTIONS(601), 2,
      sym_arrow,
      sym_colon,
  [3128] = 2,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    STATE(46), 1,
      sym_newline,
  [3135] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(154), 1,
      sym_newline,
  [3142] = 2,
    ACTIONS(603), 1,
      anon_sym_params,
    STATE(316), 1,
      sym_prompt_params_line,
  [3149] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(235), 1,
      sym_newline,
  [3156] = 2,
    ACTIONS(605), 1,
      aux_sym_newline_token1,
    STATE(161), 1,
      sym_newline,
  [3163] = 1,
    ACTIONS(607), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3168] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(162), 1,
      sym_newline,
  [3175] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(123), 1,
      sym_newline,
  [3182] = 2,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    STATE(164), 1,
      sym_newline,
  [3189] = 2,
    ACTIONS(449), 1,
      aux_sym_newline_token1,
    STATE(252), 1,
      sym_newline,
  [3196] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(165), 1,
      sym_newline,
  [3203] = 2,
    ACTIONS(595), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(73), 1,
      sym_fence_close,
  [3210] = 2,
    ACTIONS(445), 1,
      aux_sym_newline_token1,
    STATE(8), 1,
      sym_newline,
  [3217] = 2,
    ACTIONS(609), 1,
      aux_sym_newline_token1,
    ACTIONS(611), 1,
      sym_non_frontmatter_fence_text,
  [3224] = 1,
    ACTIONS(613), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [3229] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(208), 1,
      sym_type_expression,
  [3236] = 1,
    ACTIONS(615), 2,
      anon_sym_headers,
      sym_frontmatter_delimiter,
  [3241] = 2,
    ACTIONS(617), 1,
      sym_arrow,
    ACTIONS(619), 1,
      sym_colon,
  [3248] = 2,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    STATE(28), 1,
      sym_newline,
  [3255] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(114), 1,
      sym_newline,
  [3262] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(125), 1,
      sym_newline,
  [3269] = 2,
    ACTIONS(577), 1,
      aux_sym_newline_token1,
    STATE(175), 1,
      sym_newline,
  [3276] = 2,
    ACTIONS(150), 1,
      aux_sym_newline_token1,
    STATE(59), 1,
      sym_newline,
  [3283] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(221), 1,
      sym_newline,
  [3290] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(110), 1,
      sym_newline,
  [3297] = 2,
    ACTIONS(595), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(78), 1,
      sym_fence_close,
  [3304] = 2,
    ACTIONS(621), 1,
      aux_sym_newline_token1,
    STATE(247), 1,
      sym_newline,
  [3311] = 2,
    ACTIONS(553), 1,
      aux_sym_newline_token1,
    STATE(60), 1,
      sym_newline,
  [3318] = 1,
    ACTIONS(623), 2,
      sym_frontmatter_delimiter,
      sym_frontmatter_header_name,
  [3323] = 2,
    ACTIONS(503), 1,
      aux_sym_newline_token1,
    STATE(65), 1,
      sym_newline,
  [3330] = 1,
    ACTIONS(222), 2,
      aux_sym_newline_token1,
      sym_message_text,
  [3335] = 1,
    ACTIONS(63), 2,
      aux_sym_newline_token1,
      sym_message_text,
  [3340] = 1,
    ACTIONS(625), 2,
      sym_arrow,
      sym_colon,
  [3345] = 1,
    ACTIONS(627), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [3350] = 1,
    ACTIONS(629), 2,
      sym_rparen,
      sym_comma,
  [3355] = 2,
    ACTIONS(631), 1,
      sym_named_identifier,
    STATE(181), 1,
      sym_optional_named_parameter,
  [3362] = 1,
    ACTIONS(61), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [3367] = 2,
    ACTIONS(441), 1,
      aux_sym_newline_token1,
    STATE(33), 1,
      sym_newline,
  [3374] = 2,
    ACTIONS(61), 1,
      sym_non_frontmatter_fence_text,
    ACTIONS(63), 1,
      aux_sym_newline_token1,
  [3381] = 1,
    ACTIONS(63), 2,
      sym_frontmatter_delimiter,
      sym_frontmatter_header_name,
  [3386] = 1,
    ACTIONS(633), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [3391] = 1,
    ACTIONS(635), 1,
      sym_identifier,
  [3395] = 1,
    ACTIONS(637), 1,
      sym_frontmatter_scalar,
  [3399] = 1,
    ACTIONS(639), 1,
      sym_colon,
  [3403] = 1,
    ACTIONS(641), 1,
      sym_rparen,
  [3407] = 1,
    ACTIONS(643), 1,
      sym_frontmatter_scalar,
  [3411] = 1,
    ACTIONS(645), 1,
      sym_frontmatter_scalar,
  [3415] = 1,
    ACTIONS(647), 1,
      sym_frontmatter_delimiter,
  [3419] = 1,
    ACTIONS(649), 1,
      sym_frontmatter_scalar,
  [3423] = 1,
    ACTIONS(651), 1,
      sym_colon,
  [3427] = 1,
    ACTIONS(653), 1,
      sym_frontmatter_delimiter,
  [3431] = 1,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
  [3435] = 1,
    ACTIONS(657), 1,
      sym_colon,
  [3439] = 1,
    ACTIONS(659), 1,
      sym_colon,
  [3443] = 1,
    ACTIONS(661), 1,
      sym_frontmatter_delimiter,
  [3447] = 1,
    ACTIONS(415), 1,
      sym_question,
  [3451] = 1,
    ACTIONS(663), 1,
      aux_sym_newline_token1,
  [3455] = 1,
    ACTIONS(665), 1,
      sym_rparen,
  [3459] = 1,
    ACTIONS(667), 1,
      aux_sym_reference_token1,
  [3463] = 1,
    ACTIONS(669), 1,
      sym_rparen,
  [3467] = 1,
    ACTIONS(671), 1,
      sym_colon,
  [3471] = 1,
    ACTIONS(673), 1,
      sym_colon,
  [3475] = 1,
    ACTIONS(675), 1,
      sym_colon,
  [3479] = 1,
    ACTIONS(677), 1,
      sym_colon,
  [3483] = 1,
    ACTIONS(679), 1,
      sym_colon,
  [3487] = 1,
    ACTIONS(681), 1,
      sym_colon,
  [3491] = 1,
    ACTIONS(683), 1,
      sym_markdown_language,
  [3495] = 1,
    ACTIONS(685), 1,
      sym_frontmatter_scalar,
  [3499] = 1,
    ACTIONS(687), 1,
      sym_colon,
  [3503] = 1,
    ACTIONS(689), 1,
      sym_colon,
  [3507] = 1,
    ACTIONS(691), 1,
      sym_markdown_language,
  [3511] = 1,
    ACTIONS(693), 1,
      sym_frontmatter_scalar,
  [3515] = 1,
    ACTIONS(695), 1,
      sym_markdown_language,
  [3519] = 1,
    ACTIONS(697), 1,
      sym_colon,
  [3523] = 1,
    ACTIONS(699), 1,
      sym_rparen,
  [3527] = 1,
    ACTIONS(701), 1,
      sym_colon,
  [3531] = 1,
    ACTIONS(703), 1,
      sym_rparen,
  [3535] = 1,
    ACTIONS(665), 1,
      sym_rparen,
  [3539] = 1,
    ACTIONS(705), 1,
      sym_markdown_language,
  [3543] = 1,
    ACTIONS(707), 1,
      sym_identifier,
  [3547] = 1,
    ACTIONS(709), 1,
      sym_frontmatter_delimiter,
  [3551] = 1,
    ACTIONS(711), 1,
      sym_identifier,
  [3555] = 1,
    ACTIONS(713), 1,
      sym_frontmatter_scalar,
  [3559] = 1,
    ACTIONS(715), 1,
      sym_colon,
  [3563] = 1,
    ACTIONS(717), 1,
      sym_identifier,
  [3567] = 1,
    ACTIONS(719), 1,
      sym_identifier,
  [3571] = 1,
    ACTIONS(721), 1,
      sym_colon,
  [3575] = 1,
    ACTIONS(723), 1,
      sym_identifier,
  [3579] = 1,
    ACTIONS(725), 1,
      sym_identifier,
  [3583] = 1,
    ACTIONS(727), 1,
      sym_rparen,
  [3587] = 1,
    ACTIONS(729), 1,
      sym_colon,
  [3591] = 1,
    ACTIONS(401), 1,
      sym_colon,
  [3595] = 1,
    ACTIONS(731), 1,
      sym_colon,
  [3599] = 1,
    ACTIONS(733), 1,
      anon_sym_url,
  [3603] = 1,
    ACTIONS(735), 1,
      anon_sym_command,
  [3607] = 1,
    ACTIONS(737), 1,
      sym_rparen,
  [3611] = 1,
    ACTIONS(61), 1,
      sym_frontmatter_header_name,
  [3615] = 1,
    ACTIONS(739), 1,
      sym_frontmatter_delimiter,
  [3619] = 1,
    ACTIONS(741), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 125,
  [SMALL_STATE(5)] = 190,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 369,
  [SMALL_STATE(12)] = 400,
  [SMALL_STATE(13)] = 431,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 493,
  [SMALL_STATE(16)] = 527,
  [SMALL_STATE(17)] = 556,
  [SMALL_STATE(18)] = 585,
  [SMALL_STATE(19)] = 614,
  [SMALL_STATE(20)] = 644,
  [SMALL_STATE(21)] = 674,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 734,
  [SMALL_STATE(24)] = 764,
  [SMALL_STATE(25)] = 794,
  [SMALL_STATE(26)] = 824,
  [SMALL_STATE(27)] = 851,
  [SMALL_STATE(28)] = 880,
  [SMALL_STATE(29)] = 897,
  [SMALL_STATE(30)] = 914,
  [SMALL_STATE(31)] = 931,
  [SMALL_STATE(32)] = 948,
  [SMALL_STATE(33)] = 965,
  [SMALL_STATE(34)] = 982,
  [SMALL_STATE(35)] = 999,
  [SMALL_STATE(36)] = 1016,
  [SMALL_STATE(37)] = 1045,
  [SMALL_STATE(38)] = 1062,
  [SMALL_STATE(39)] = 1079,
  [SMALL_STATE(40)] = 1096,
  [SMALL_STATE(41)] = 1113,
  [SMALL_STATE(42)] = 1132,
  [SMALL_STATE(43)] = 1149,
  [SMALL_STATE(44)] = 1166,
  [SMALL_STATE(45)] = 1183,
  [SMALL_STATE(46)] = 1202,
  [SMALL_STATE(47)] = 1219,
  [SMALL_STATE(48)] = 1248,
  [SMALL_STATE(49)] = 1265,
  [SMALL_STATE(50)] = 1300,
  [SMALL_STATE(51)] = 1319,
  [SMALL_STATE(52)] = 1338,
  [SMALL_STATE(53)] = 1356,
  [SMALL_STATE(54)] = 1380,
  [SMALL_STATE(55)] = 1414,
  [SMALL_STATE(56)] = 1430,
  [SMALL_STATE(57)] = 1445,
  [SMALL_STATE(58)] = 1460,
  [SMALL_STATE(59)] = 1475,
  [SMALL_STATE(60)] = 1490,
  [SMALL_STATE(61)] = 1505,
  [SMALL_STATE(62)] = 1520,
  [SMALL_STATE(63)] = 1535,
  [SMALL_STATE(64)] = 1550,
  [SMALL_STATE(65)] = 1565,
  [SMALL_STATE(66)] = 1580,
  [SMALL_STATE(67)] = 1595,
  [SMALL_STATE(68)] = 1618,
  [SMALL_STATE(69)] = 1636,
  [SMALL_STATE(70)] = 1648,
  [SMALL_STATE(71)] = 1660,
  [SMALL_STATE(72)] = 1672,
  [SMALL_STATE(73)] = 1684,
  [SMALL_STATE(74)] = 1696,
  [SMALL_STATE(75)] = 1708,
  [SMALL_STATE(76)] = 1720,
  [SMALL_STATE(77)] = 1732,
  [SMALL_STATE(78)] = 1744,
  [SMALL_STATE(79)] = 1756,
  [SMALL_STATE(80)] = 1768,
  [SMALL_STATE(81)] = 1783,
  [SMALL_STATE(82)] = 1806,
  [SMALL_STATE(83)] = 1825,
  [SMALL_STATE(84)] = 1844,
  [SMALL_STATE(85)] = 1861,
  [SMALL_STATE(86)] = 1882,
  [SMALL_STATE(87)] = 1899,
  [SMALL_STATE(88)] = 1918,
  [SMALL_STATE(89)] = 1928,
  [SMALL_STATE(90)] = 1942,
  [SMALL_STATE(91)] = 1956,
  [SMALL_STATE(92)] = 1973,
  [SMALL_STATE(93)] = 1990,
  [SMALL_STATE(94)] = 2007,
  [SMALL_STATE(95)] = 2024,
  [SMALL_STATE(96)] = 2041,
  [SMALL_STATE(97)] = 2058,
  [SMALL_STATE(98)] = 2075,
  [SMALL_STATE(99)] = 2092,
  [SMALL_STATE(100)] = 2109,
  [SMALL_STATE(101)] = 2118,
  [SMALL_STATE(102)] = 2135,
  [SMALL_STATE(103)] = 2152,
  [SMALL_STATE(104)] = 2169,
  [SMALL_STATE(105)] = 2178,
  [SMALL_STATE(106)] = 2197,
  [SMALL_STATE(107)] = 2211,
  [SMALL_STATE(108)] = 2225,
  [SMALL_STATE(109)] = 2241,
  [SMALL_STATE(110)] = 2251,
  [SMALL_STATE(111)] = 2261,
  [SMALL_STATE(112)] = 2269,
  [SMALL_STATE(113)] = 2277,
  [SMALL_STATE(114)] = 2291,
  [SMALL_STATE(115)] = 2298,
  [SMALL_STATE(116)] = 2307,
  [SMALL_STATE(117)] = 2320,
  [SMALL_STATE(118)] = 2333,
  [SMALL_STATE(119)] = 2344,
  [SMALL_STATE(120)] = 2355,
  [SMALL_STATE(121)] = 2368,
  [SMALL_STATE(122)] = 2379,
  [SMALL_STATE(123)] = 2390,
  [SMALL_STATE(124)] = 2397,
  [SMALL_STATE(125)] = 2408,
  [SMALL_STATE(126)] = 2415,
  [SMALL_STATE(127)] = 2426,
  [SMALL_STATE(128)] = 2439,
  [SMALL_STATE(129)] = 2449,
  [SMALL_STATE(130)] = 2459,
  [SMALL_STATE(131)] = 2469,
  [SMALL_STATE(132)] = 2479,
  [SMALL_STATE(133)] = 2489,
  [SMALL_STATE(134)] = 2499,
  [SMALL_STATE(135)] = 2509,
  [SMALL_STATE(136)] = 2519,
  [SMALL_STATE(137)] = 2529,
  [SMALL_STATE(138)] = 2539,
  [SMALL_STATE(139)] = 2549,
  [SMALL_STATE(140)] = 2559,
  [SMALL_STATE(141)] = 2569,
  [SMALL_STATE(142)] = 2579,
  [SMALL_STATE(143)] = 2585,
  [SMALL_STATE(144)] = 2595,
  [SMALL_STATE(145)] = 2605,
  [SMALL_STATE(146)] = 2615,
  [SMALL_STATE(147)] = 2625,
  [SMALL_STATE(148)] = 2635,
  [SMALL_STATE(149)] = 2645,
  [SMALL_STATE(150)] = 2651,
  [SMALL_STATE(151)] = 2657,
  [SMALL_STATE(152)] = 2667,
  [SMALL_STATE(153)] = 2673,
  [SMALL_STATE(154)] = 2679,
  [SMALL_STATE(155)] = 2689,
  [SMALL_STATE(156)] = 2695,
  [SMALL_STATE(157)] = 2703,
  [SMALL_STATE(158)] = 2709,
  [SMALL_STATE(159)] = 2715,
  [SMALL_STATE(160)] = 2721,
  [SMALL_STATE(161)] = 2727,
  [SMALL_STATE(162)] = 2735,
  [SMALL_STATE(163)] = 2741,
  [SMALL_STATE(164)] = 2751,
  [SMALL_STATE(165)] = 2759,
  [SMALL_STATE(166)] = 2765,
  [SMALL_STATE(167)] = 2771,
  [SMALL_STATE(168)] = 2779,
  [SMALL_STATE(169)] = 2789,
  [SMALL_STATE(170)] = 2795,
  [SMALL_STATE(171)] = 2805,
  [SMALL_STATE(172)] = 2811,
  [SMALL_STATE(173)] = 2817,
  [SMALL_STATE(174)] = 2823,
  [SMALL_STATE(175)] = 2833,
  [SMALL_STATE(176)] = 2839,
  [SMALL_STATE(177)] = 2844,
  [SMALL_STATE(178)] = 2849,
  [SMALL_STATE(179)] = 2856,
  [SMALL_STATE(180)] = 2861,
  [SMALL_STATE(181)] = 2868,
  [SMALL_STATE(182)] = 2873,
  [SMALL_STATE(183)] = 2880,
  [SMALL_STATE(184)] = 2887,
  [SMALL_STATE(185)] = 2894,
  [SMALL_STATE(186)] = 2901,
  [SMALL_STATE(187)] = 2908,
  [SMALL_STATE(188)] = 2915,
  [SMALL_STATE(189)] = 2922,
  [SMALL_STATE(190)] = 2929,
  [SMALL_STATE(191)] = 2936,
  [SMALL_STATE(192)] = 2943,
  [SMALL_STATE(193)] = 2950,
  [SMALL_STATE(194)] = 2957,
  [SMALL_STATE(195)] = 2964,
  [SMALL_STATE(196)] = 2971,
  [SMALL_STATE(197)] = 2978,
  [SMALL_STATE(198)] = 2985,
  [SMALL_STATE(199)] = 2992,
  [SMALL_STATE(200)] = 2999,
  [SMALL_STATE(201)] = 3006,
  [SMALL_STATE(202)] = 3013,
  [SMALL_STATE(203)] = 3020,
  [SMALL_STATE(204)] = 3027,
  [SMALL_STATE(205)] = 3034,
  [SMALL_STATE(206)] = 3041,
  [SMALL_STATE(207)] = 3048,
  [SMALL_STATE(208)] = 3055,
  [SMALL_STATE(209)] = 3060,
  [SMALL_STATE(210)] = 3067,
  [SMALL_STATE(211)] = 3074,
  [SMALL_STATE(212)] = 3081,
  [SMALL_STATE(213)] = 3088,
  [SMALL_STATE(214)] = 3095,
  [SMALL_STATE(215)] = 3102,
  [SMALL_STATE(216)] = 3109,
  [SMALL_STATE(217)] = 3116,
  [SMALL_STATE(218)] = 3123,
  [SMALL_STATE(219)] = 3128,
  [SMALL_STATE(220)] = 3135,
  [SMALL_STATE(221)] = 3142,
  [SMALL_STATE(222)] = 3149,
  [SMALL_STATE(223)] = 3156,
  [SMALL_STATE(224)] = 3163,
  [SMALL_STATE(225)] = 3168,
  [SMALL_STATE(226)] = 3175,
  [SMALL_STATE(227)] = 3182,
  [SMALL_STATE(228)] = 3189,
  [SMALL_STATE(229)] = 3196,
  [SMALL_STATE(230)] = 3203,
  [SMALL_STATE(231)] = 3210,
  [SMALL_STATE(232)] = 3217,
  [SMALL_STATE(233)] = 3224,
  [SMALL_STATE(234)] = 3229,
  [SMALL_STATE(235)] = 3236,
  [SMALL_STATE(236)] = 3241,
  [SMALL_STATE(237)] = 3248,
  [SMALL_STATE(238)] = 3255,
  [SMALL_STATE(239)] = 3262,
  [SMALL_STATE(240)] = 3269,
  [SMALL_STATE(241)] = 3276,
  [SMALL_STATE(242)] = 3283,
  [SMALL_STATE(243)] = 3290,
  [SMALL_STATE(244)] = 3297,
  [SMALL_STATE(245)] = 3304,
  [SMALL_STATE(246)] = 3311,
  [SMALL_STATE(247)] = 3318,
  [SMALL_STATE(248)] = 3323,
  [SMALL_STATE(249)] = 3330,
  [SMALL_STATE(250)] = 3335,
  [SMALL_STATE(251)] = 3340,
  [SMALL_STATE(252)] = 3345,
  [SMALL_STATE(253)] = 3350,
  [SMALL_STATE(254)] = 3355,
  [SMALL_STATE(255)] = 3362,
  [SMALL_STATE(256)] = 3367,
  [SMALL_STATE(257)] = 3374,
  [SMALL_STATE(258)] = 3381,
  [SMALL_STATE(259)] = 3386,
  [SMALL_STATE(260)] = 3391,
  [SMALL_STATE(261)] = 3395,
  [SMALL_STATE(262)] = 3399,
  [SMALL_STATE(263)] = 3403,
  [SMALL_STATE(264)] = 3407,
  [SMALL_STATE(265)] = 3411,
  [SMALL_STATE(266)] = 3415,
  [SMALL_STATE(267)] = 3419,
  [SMALL_STATE(268)] = 3423,
  [SMALL_STATE(269)] = 3427,
  [SMALL_STATE(270)] = 3431,
  [SMALL_STATE(271)] = 3435,
  [SMALL_STATE(272)] = 3439,
  [SMALL_STATE(273)] = 3443,
  [SMALL_STATE(274)] = 3447,
  [SMALL_STATE(275)] = 3451,
  [SMALL_STATE(276)] = 3455,
  [SMALL_STATE(277)] = 3459,
  [SMALL_STATE(278)] = 3463,
  [SMALL_STATE(279)] = 3467,
  [SMALL_STATE(280)] = 3471,
  [SMALL_STATE(281)] = 3475,
  [SMALL_STATE(282)] = 3479,
  [SMALL_STATE(283)] = 3483,
  [SMALL_STATE(284)] = 3487,
  [SMALL_STATE(285)] = 3491,
  [SMALL_STATE(286)] = 3495,
  [SMALL_STATE(287)] = 3499,
  [SMALL_STATE(288)] = 3503,
  [SMALL_STATE(289)] = 3507,
  [SMALL_STATE(290)] = 3511,
  [SMALL_STATE(291)] = 3515,
  [SMALL_STATE(292)] = 3519,
  [SMALL_STATE(293)] = 3523,
  [SMALL_STATE(294)] = 3527,
  [SMALL_STATE(295)] = 3531,
  [SMALL_STATE(296)] = 3535,
  [SMALL_STATE(297)] = 3539,
  [SMALL_STATE(298)] = 3543,
  [SMALL_STATE(299)] = 3547,
  [SMALL_STATE(300)] = 3551,
  [SMALL_STATE(301)] = 3555,
  [SMALL_STATE(302)] = 3559,
  [SMALL_STATE(303)] = 3563,
  [SMALL_STATE(304)] = 3567,
  [SMALL_STATE(305)] = 3571,
  [SMALL_STATE(306)] = 3575,
  [SMALL_STATE(307)] = 3579,
  [SMALL_STATE(308)] = 3583,
  [SMALL_STATE(309)] = 3587,
  [SMALL_STATE(310)] = 3591,
  [SMALL_STATE(311)] = 3595,
  [SMALL_STATE(312)] = 3599,
  [SMALL_STATE(313)] = 3603,
  [SMALL_STATE(314)] = 3607,
  [SMALL_STATE(315)] = 3611,
  [SMALL_STATE(316)] = 3615,
  [SMALL_STATE(317)] = 3619,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 5, 0, 27),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 5, 0, 27),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 3, 0, 27),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 3, 0, 27),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 4, 0, 27),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 4, 0, 27),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 4, 0, 37),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 4, 0, 37),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 5, 0, 37),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 5, 0, 37),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__explicit_message_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__explicit_message_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__explicit_message_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__explicit_message_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__explicit_message, 6, 0, 37),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__explicit_message, 6, 0, 37),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0), SHIFT_REPEAT(310),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_message, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_message, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__implicit_message_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_message_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__implicit_message_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__implicit_message_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_message, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_message, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_message, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_message, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 4, 0, 6),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 4, 0, 17),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 5, 0, 17),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 4, 0, 23),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 5, 0, 30),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 6, 0, 30),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 5, 0, 35),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 5, 0, 23),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_message, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__implicit_message, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 6, 0, 40),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 6, 0, 35),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 6, 0, 41),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 3, 0, 6),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_continuation_line, 2, 0, 11),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_continuation_line, 2, 0, 11),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 7, 0, 40),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 7, 0, 45),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 7, 0, 41),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_continuation_line, 3, 0, 11),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_continuation_line, 3, 0, 11),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_signature, 8, 0, 45),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(64),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_line, 2, 0, 11),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_line, 2, 0, 11),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 3, 0, 13),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 3, 0, 13),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_line, 3, 0, 11),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_line, 3, 0, 11),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 2, 0, 13),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 2, 0, 13),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_line, 2, 0, 14),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_overlay_line, 2, 0, 14),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_line, 3, 0, 14),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_overlay_line, 3, 0, 14),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(104),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT(174),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 2, 0, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 16),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 2, 0, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_declaration, 3, 0, 12),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_declaration, 3, 0, 12),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_declaration, 3, 0, 12),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, 0, 16),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 29),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 29), SHIFT_REPEAT(88),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 20),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1, 0, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stdio_service_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stdio_service_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stdio_service_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stdio_service_frontmatter_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 1, 0, 18),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_args_block, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stdio_args_block_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stdio_args_block_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_fence_body, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_fence_body, 1, 0, 0),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_psyche_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_psyche_fence_body_repeat1, 2, 0, 0),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_psyche_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_fence_body, 1, 0, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 2, 0, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_fence_body, 2, 0, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_fence_body, 1, 0, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(250),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter_list_item_line, 3, 0, 42),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter_list_item_line, 3, 0, 42),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 19),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, 0, 28),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_overlay, 2, 0, 15),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_env_line, 4, 0, 46),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_subject, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_kind, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_values, 1, 0, 26),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_named_parameter, 1, 0, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_values, 2, 0, 36),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_values_repeat1, 2, 0, 43),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_overlay_values_repeat1, 2, 0, 43), SHIFT_REPEAT(189),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_command_line, 4, 0, 46),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_headers_block, 4, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_cwd_line, 4, 0, 46),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_http_headers_block_repeat1, 2, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_http_headers_block_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_params, 2, 0, 22),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__required_then_optional_params_repeat1, 2, 0, 34),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__required_then_optional_params_repeat1, 2, 0, 34), SHIFT_REPEAT(198),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__optional_params_repeat1, 2, 0, 34),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__optional_params_repeat1, 2, 0, 34), SHIFT_REPEAT(254),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_params, 2, 0, 22),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_params, 1, 0, 10),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_params, 1, 0, 10),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_frontmatter, 5, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_overlay_values_repeat1, 2, 0, 42),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_fence_content_line, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 1, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_header, 6, 0, 44),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_service_frontmatter, 6, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stdio_service_frontmatter, 6, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_service_frontmatter, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_header, 7, 0, 44),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http_service_frontmatter, 7, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stdio_service_frontmatter, 7, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 2, 0, 11),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_named_parameter, 2, 0, 19),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overlay_value, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_frontmatter_fence_content_line, 2, 0, 11),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_named_parameter, 4, 0, 38),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_named_parameter, 3, 0, 24),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__required_then_optional_params_repeat1, 2, 0, 33),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__optional_params_repeat1, 2, 0, 33),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_then_params, 1, 0, 9),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, 0, 24),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_header, 6, 0, 44),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_header, 6, 0, 44),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 21),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_overlay, 3, 0, 25),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_psyche_header, 7, 0, 44),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_header, 7, 0, 44),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 4, 0, 17),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_url_line, 4, 0, 46),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_map_entry_line, 4, 0, 47),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 5, 0, 17),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_parameter, 1, 0, 5),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_sequence, 1, 0, 8),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_params_line, 4, 0, 46),
  [655] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_header, 7, 0, 44),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__params, 1, 0, 8),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_then_params, 3, 0, 31),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_params, 3, 0, 32),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__required_then_optional_params, 4, 0, 39),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_keyword, 1, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_header, 6, 0, 44),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_keyword, 1, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche_keyword, 1, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_sequence, 1, 0, 7),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_transport_line, 4, 0, 46),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stdio_transport_line, 4, 0, 46),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
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
