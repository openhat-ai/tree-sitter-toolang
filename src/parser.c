#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 175
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 23
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 36

enum ts_symbol_identifiers {
  aux_sym_newline_token1 = 1,
  sym_comment = 2,
  sym_array_suffix = 3,
  sym_inline_comment = 4,
  sym_use_keyword = 5,
  sym_struct_keyword = 6,
  anon_sym_slash = 7,
  sym_thunk_keyword = 8,
  sym_assign_operator = 9,
  sym_add_assign_operator = 10,
  sym_remove_assign_operator = 11,
  sym_arrow = 12,
  sym_colon = 13,
  sym_lparen = 14,
  sym_rparen = 15,
  sym_comma = 16,
  sym_question = 17,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 18,
  anon_sym_skill = 19,
  anon_sym_service = 20,
  anon_sym_psyche = 21,
  anon_sym_stash = 22,
  anon_sym_psyches = 23,
  anon_sym_skills = 24,
  anon_sym_services = 25,
  anon_sym_tools = 26,
  sym_model_subject = 27,
  sym_identifier = 28,
  aux_sym_reference_token1 = 29,
  sym_language = 30,
  sym_body_text = 31,
  sym_fence_text = 32,
  sym_source_file = 33,
  sym_newline = 34,
  sym_blank_line = 35,
  sym_use_statement = 36,
  sym_fenced_declaration = 37,
  sym_declaration_header = 38,
  sym_struct_declaration = 39,
  sym_struct_header = 40,
  sym_struct_field_line = 41,
  sym_struct_body = 42,
  sym_struct_field = 43,
  sym_slash_declaration = 44,
  sym_slash_header = 45,
  sym_slash_body = 46,
  sym_parameter_list = 47,
  sym_parameter = 48,
  sym_type_expression = 49,
  sym_thunk = 50,
  sym_thunk_header = 51,
  sym_thunk_body = 52,
  sym_directive_line = 53,
  sym_collection_directive = 54,
  sym_model_directive = 55,
  sym_directive_values = 56,
  sym_body_line = 57,
  sym_fence_body = 58,
  sym_fence_content_line = 59,
  sym_slash_keyword = 60,
  sym_fence_open = 61,
  sym_fence_close = 62,
  sym_cap_kind = 63,
  sym_decl_kind = 64,
  sym_collection_subject = 65,
  sym_reference = 66,
  sym_directive_value = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_struct_body_repeat1 = 69,
  aux_sym_slash_body_repeat1 = 70,
  aux_sym_parameter_list_repeat1 = 71,
  aux_sym_type_expression_repeat1 = 72,
  aux_sym_thunk_body_repeat1 = 73,
  aux_sym_directive_values_repeat1 = 74,
  aux_sym_fence_body_repeat1 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_newline_token1] = "newline_token1",
  [sym_comment] = "comment",
  [sym_array_suffix] = "array_suffix",
  [sym_inline_comment] = "inline_comment",
  [sym_use_keyword] = "use_keyword",
  [sym_struct_keyword] = "struct_keyword",
  [anon_sym_slash] = "slash",
  [sym_thunk_keyword] = "thunk_keyword",
  [sym_assign_operator] = "assign_operator",
  [sym_add_assign_operator] = "add_assign_operator",
  [sym_remove_assign_operator] = "remove_assign_operator",
  [sym_arrow] = "arrow",
  [sym_colon] = "colon",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_comma] = "comma",
  [sym_question] = "question",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_skill] = "skill",
  [anon_sym_service] = "service",
  [anon_sym_psyche] = "psyche",
  [anon_sym_stash] = "stash",
  [anon_sym_psyches] = "psyches",
  [anon_sym_skills] = "skills",
  [anon_sym_services] = "services",
  [anon_sym_tools] = "tools",
  [sym_model_subject] = "model_subject",
  [sym_identifier] = "identifier",
  [aux_sym_reference_token1] = "reference_token1",
  [sym_language] = "language",
  [sym_body_text] = "body_text",
  [sym_fence_text] = "fence_text",
  [sym_source_file] = "source_file",
  [sym_newline] = "newline",
  [sym_blank_line] = "blank_line",
  [sym_use_statement] = "use_statement",
  [sym_fenced_declaration] = "fenced_declaration",
  [sym_declaration_header] = "declaration_header",
  [sym_struct_declaration] = "struct_declaration",
  [sym_struct_header] = "struct_header",
  [sym_struct_field_line] = "struct_field_line",
  [sym_struct_body] = "struct_body",
  [sym_struct_field] = "struct_field",
  [sym_slash_declaration] = "slash_declaration",
  [sym_slash_header] = "slash_header",
  [sym_slash_body] = "slash_body",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_type_expression] = "type_expression",
  [sym_thunk] = "thunk",
  [sym_thunk_header] = "thunk_header",
  [sym_thunk_body] = "thunk_body",
  [sym_directive_line] = "directive_line",
  [sym_collection_directive] = "collection_directive",
  [sym_model_directive] = "model_directive",
  [sym_directive_values] = "directive_values",
  [sym_body_line] = "body_line",
  [sym_fence_body] = "fence_body",
  [sym_fence_content_line] = "fence_content_line",
  [sym_slash_keyword] = "slash_keyword",
  [sym_fence_open] = "fence_open",
  [sym_fence_close] = "fence_close",
  [sym_cap_kind] = "cap_kind",
  [sym_decl_kind] = "decl_kind",
  [sym_collection_subject] = "collection_subject",
  [sym_reference] = "reference",
  [sym_directive_value] = "directive_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_slash_body_repeat1] = "slash_body_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_type_expression_repeat1] = "type_expression_repeat1",
  [aux_sym_thunk_body_repeat1] = "thunk_body_repeat1",
  [aux_sym_directive_values_repeat1] = "directive_values_repeat1",
  [aux_sym_fence_body_repeat1] = "fence_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_newline_token1] = aux_sym_newline_token1,
  [sym_comment] = sym_comment,
  [sym_array_suffix] = sym_array_suffix,
  [sym_inline_comment] = sym_inline_comment,
  [sym_use_keyword] = sym_use_keyword,
  [sym_struct_keyword] = sym_struct_keyword,
  [anon_sym_slash] = anon_sym_slash,
  [sym_thunk_keyword] = sym_thunk_keyword,
  [sym_assign_operator] = sym_assign_operator,
  [sym_add_assign_operator] = sym_add_assign_operator,
  [sym_remove_assign_operator] = sym_remove_assign_operator,
  [sym_arrow] = sym_arrow,
  [sym_colon] = sym_colon,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_comma] = sym_comma,
  [sym_question] = sym_question,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_skill] = anon_sym_skill,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_psyche] = anon_sym_psyche,
  [anon_sym_stash] = anon_sym_stash,
  [anon_sym_psyches] = anon_sym_psyches,
  [anon_sym_skills] = anon_sym_skills,
  [anon_sym_services] = anon_sym_services,
  [anon_sym_tools] = anon_sym_tools,
  [sym_model_subject] = sym_model_subject,
  [sym_identifier] = sym_identifier,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [sym_language] = sym_language,
  [sym_body_text] = sym_body_text,
  [sym_fence_text] = sym_fence_text,
  [sym_source_file] = sym_source_file,
  [sym_newline] = sym_newline,
  [sym_blank_line] = sym_blank_line,
  [sym_use_statement] = sym_use_statement,
  [sym_fenced_declaration] = sym_fenced_declaration,
  [sym_declaration_header] = sym_declaration_header,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_struct_header] = sym_struct_header,
  [sym_struct_field_line] = sym_struct_field_line,
  [sym_struct_body] = sym_struct_body,
  [sym_struct_field] = sym_struct_field,
  [sym_slash_declaration] = sym_slash_declaration,
  [sym_slash_header] = sym_slash_header,
  [sym_slash_body] = sym_slash_body,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_type_expression] = sym_type_expression,
  [sym_thunk] = sym_thunk,
  [sym_thunk_header] = sym_thunk_header,
  [sym_thunk_body] = sym_thunk_body,
  [sym_directive_line] = sym_directive_line,
  [sym_collection_directive] = sym_collection_directive,
  [sym_model_directive] = sym_model_directive,
  [sym_directive_values] = sym_directive_values,
  [sym_body_line] = sym_body_line,
  [sym_fence_body] = sym_fence_body,
  [sym_fence_content_line] = sym_fence_content_line,
  [sym_slash_keyword] = sym_slash_keyword,
  [sym_fence_open] = sym_fence_open,
  [sym_fence_close] = sym_fence_close,
  [sym_cap_kind] = sym_cap_kind,
  [sym_decl_kind] = sym_decl_kind,
  [sym_collection_subject] = sym_collection_subject,
  [sym_reference] = sym_reference,
  [sym_directive_value] = sym_directive_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_slash_body_repeat1] = aux_sym_slash_body_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_type_expression_repeat1] = aux_sym_type_expression_repeat1,
  [aux_sym_thunk_body_repeat1] = aux_sym_thunk_body_repeat1,
  [aux_sym_directive_values_repeat1] = aux_sym_directive_values_repeat1,
  [aux_sym_fence_body_repeat1] = aux_sym_fence_body_repeat1,
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
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_use_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_slash] = {
    .visible = true,
    .named = false,
  },
  [sym_thunk_keyword] = {
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
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
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
  [anon_sym_psyche] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stash] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_body_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fence_text] = {
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
  [sym_fenced_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_header] = {
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
  [sym_slash_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_slash_header] = {
    .visible = true,
    .named = true,
  },
  [sym_slash_body] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
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
  [sym_fence_body] = {
    .visible = true,
    .named = true,
  },
  [sym_fence_content_line] = {
    .visible = true,
    .named = true,
  },
  [sym_slash_keyword] = {
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
  [sym_decl_kind] = {
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
  [aux_sym_slash_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
  [aux_sym_directive_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fence_body_repeat1] = {
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
  field_header = 7,
  field_keyword = 8,
  field_kind = 9,
  field_language = 10,
  field_name = 11,
  field_open = 12,
  field_operator = 13,
  field_optional = 14,
  field_parameter = 15,
  field_parameters = 16,
  field_reference = 17,
  field_returns = 18,
  field_subject = 19,
  field_text = 20,
  field_type = 21,
  field_value = 22,
  field_values = 23,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_arrow] = "arrow",
  [field_body] = "body",
  [field_close] = "close",
  [field_colon] = "colon",
  [field_field] = "field",
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
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 3},
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 1},
  [21] = {.index = 39, .length = 3},
  [22] = {.index = 42, .length = 2},
  [23] = {.index = 44, .length = 2},
  [24] = {.index = 46, .length = 2},
  [25] = {.index = 48, .length = 4},
  [26] = {.index = 52, .length = 4},
  [27] = {.index = 56, .length = 2},
  [28] = {.index = 58, .length = 4},
  [29] = {.index = 62, .length = 4},
  [30] = {.index = 66, .length = 5},
  [31] = {.index = 71, .length = 1},
  [32] = {.index = 72, .length = 2},
  [33] = {.index = 74, .length = 5},
  [34] = {.index = 79, .length = 5},
  [35] = {.index = 84, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyword, 0},
  [1] =
    {field_close, 1},
    {field_header, 0},
  [3] =
    {field_body, 1},
    {field_header, 0},
  [5] =
    {field_keyword, 0},
    {field_name, 1},
  [7] =
    {field_name, 0},
  [8] =
    {field_keyword, 0},
    {field_parameters, 1},
  [10] =
    {field_text, 0},
  [11] =
    {field_body, 1},
    {field_close, 2},
    {field_header, 0},
  [14] =
    {field_field, 0},
  [15] =
    {field_operator, 1},
    {field_subject, 0},
  [17] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [20] =
    {field_array, 0},
  [21] =
    {field_name, 0},
    {field_optional, 1},
  [23] =
    {field_array, 1, .inherited = true},
    {field_name, 0},
  [25] =
    {field_arrow, 1},
    {field_keyword, 0},
    {field_returns, 2},
  [28] =
    {field_parameter, 1},
  [29] =
    {field_keyword, 0},
    {field_name, 1},
    {field_parameters, 2},
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
    {field_parameter, 1},
    {field_parameter, 2, .inherited = true},
  [46] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [48] =
    {field_arrow, 2},
    {field_keyword, 0},
    {field_name, 1},
    {field_returns, 3},
  [52] =
    {field_arrow, 2},
    {field_keyword, 0},
    {field_parameters, 1},
    {field_returns, 3},
  [56] =
    {field_value, 0},
    {field_value, 1, .inherited = true},
  [58] =
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
    {field_open, 3},
  [62] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [66] =
    {field_arrow, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_parameters, 2},
    {field_returns, 4},
  [71] =
    {field_value, 1},
  [72] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [74] =
    {field_colon, 2},
    {field_kind, 0},
    {field_language, 4},
    {field_name, 1},
    {field_open, 3},
  [79] =
    {field_colon, 3},
    {field_kind, 0},
    {field_name, 1},
    {field_open, 4},
    {field_parameters, 2},
  [84] =
    {field_colon, 3},
    {field_kind, 0},
    {field_language, 5},
    {field_name, 1},
    {field_open, 4},
    {field_parameters, 2},
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
  [17] = 14,
  [18] = 18,
  [19] = 13,
  [20] = 20,
  [21] = 8,
  [22] = 14,
  [23] = 12,
  [24] = 8,
  [25] = 14,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 8,
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
  [45] = 8,
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
  [80] = 8,
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
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 8,
  [120] = 8,
  [121] = 83,
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
  [162] = 150,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '\n', 69,
        '\r', 1,
        '#', 72,
        '(', 86,
        ')', 87,
        '+', 10,
        ',', 88,
        '-', 11,
        ':', 85,
        '=', 81,
        '?', 89,
        '[', 13,
        '`', 15,
        'm', 47,
        'p', 51,
        's', 24,
        't', 33,
        'u', 52,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 69,
        '\r', 139,
        '#', 9,
        'm', 179,
        'p', 193,
        's', 160,
        't', 180,
        '\t', 136,
        '\f', 136,
        ' ', 136,
      );
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(139);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(205);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == '`') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 64:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(65);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '\n', 69,
        '\r', 139,
        '#', 9,
        'm', 179,
        'p', 188,
        's', 156,
        't', 164,
        'u', 189,
        '\t', 135,
        '\f', 135,
        ' ', 135,
      );
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '\n', 69,
        '\r', 139,
        '#', 9,
        'p', 194,
        's', 161,
        't', 165,
        'u', 189,
        '\t', 137,
        '\f', 137,
        ' ', 137,
      );
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_slash);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_slash);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_add_assign_operator);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_remove_assign_operator);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_question);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_stash);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_stash);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_model_subject);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_body_text);
      ADVANCE_MAP(
        '\n', 69,
        '\r', 139,
        '#', 140,
        'm', 179,
        'p', 188,
        's', 156,
        't', 164,
        'u', 189,
        '\t', 135,
        '\f', 135,
        ' ', 135,
      );
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_body_text);
      ADVANCE_MAP(
        '\n', 69,
        '\r', 139,
        '#', 140,
        'm', 179,
        'p', 193,
        's', 160,
        't', 180,
        '\t', 136,
        '\f', 136,
        ' ', 136,
      );
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_body_text);
      ADVANCE_MAP(
        '\n', 69,
        '\r', 139,
        '#', 140,
        'p', 194,
        's', 161,
        't', 165,
        'u', 189,
        '\t', 137,
        '\f', 137,
        ' ', 137,
      );
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(139);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(140);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'k') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'k') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'k') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'v') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'v') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'y') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'y') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'y') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '\r') ADVANCE(205);
      if (lookahead == '`') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 66},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 66},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 66},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 66},
  [11] = {.lex_state = 66},
  [12] = {.lex_state = 66},
  [13] = {.lex_state = 66},
  [14] = {.lex_state = 66},
  [15] = {.lex_state = 67},
  [16] = {.lex_state = 67},
  [17] = {.lex_state = 64},
  [18] = {.lex_state = 64},
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 65},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 65},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 65},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_newline_token1] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_struct_keyword] = ACTIONS(1),
    [anon_sym_slash] = ACTIONS(1),
    [sym_thunk_keyword] = ACTIONS(1),
    [sym_assign_operator] = ACTIONS(1),
    [sym_add_assign_operator] = ACTIONS(1),
    [sym_remove_assign_operator] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_question] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_skill] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_psyche] = ACTIONS(1),
    [anon_sym_stash] = ACTIONS(1),
    [anon_sym_psyches] = ACTIONS(1),
    [anon_sym_services] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [sym_model_subject] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(164),
    [sym_newline] = STATE(25),
    [sym_blank_line] = STATE(3),
    [sym_use_statement] = STATE(3),
    [sym_fenced_declaration] = STATE(3),
    [sym_declaration_header] = STATE(39),
    [sym_struct_declaration] = STATE(3),
    [sym_struct_header] = STATE(35),
    [sym_slash_declaration] = STATE(3),
    [sym_slash_header] = STATE(41),
    [sym_thunk] = STATE(3),
    [sym_thunk_header] = STATE(6),
    [sym_slash_keyword] = STATE(167),
    [sym_decl_kind] = STATE(170),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_use_keyword] = ACTIONS(9),
    [sym_struct_keyword] = ACTIONS(11),
    [anon_sym_slash] = ACTIONS(13),
    [sym_thunk_keyword] = ACTIONS(15),
    [anon_sym_service] = ACTIONS(17),
    [anon_sym_psyche] = ACTIONS(17),
    [anon_sym_stash] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_newline_token1,
    ACTIONS(24), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_model_subject,
    ACTIONS(35), 1,
      sym_body_text,
    STATE(14), 1,
      sym_newline,
    STATE(100), 1,
      sym_collection_subject,
    STATE(110), 2,
      sym_collection_directive,
      sym_model_directive,
    ACTIONS(29), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
    STATE(2), 4,
      sym_blank_line,
      sym_directive_line,
      sym_body_line,
      aux_sym_thunk_body_repeat1,
    ACTIONS(27), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [47] = 16,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(9), 1,
      sym_use_keyword,
    ACTIONS(11), 1,
      sym_struct_keyword,
    ACTIONS(13), 1,
      anon_sym_slash,
    ACTIONS(15), 1,
      sym_thunk_keyword,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      sym_comment,
    STATE(6), 1,
      sym_thunk_header,
    STATE(25), 1,
      sym_newline,
    STATE(35), 1,
      sym_struct_header,
    STATE(39), 1,
      sym_declaration_header,
    STATE(41), 1,
      sym_slash_header,
    STATE(167), 1,
      sym_slash_keyword,
    STATE(170), 1,
      sym_decl_kind,
    ACTIONS(17), 3,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
    STATE(4), 7,
      sym_blank_line,
      sym_use_statement,
      sym_fenced_declaration,
      sym_struct_declaration,
      sym_slash_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [104] = 16,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym_newline_token1,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_use_keyword,
    ACTIONS(53), 1,
      sym_struct_keyword,
    ACTIONS(56), 1,
      anon_sym_slash,
    ACTIONS(59), 1,
      sym_thunk_keyword,
    STATE(6), 1,
      sym_thunk_header,
    STATE(25), 1,
      sym_newline,
    STATE(35), 1,
      sym_struct_header,
    STATE(39), 1,
      sym_declaration_header,
    STATE(41), 1,
      sym_slash_header,
    STATE(167), 1,
      sym_slash_keyword,
    STATE(170), 1,
      sym_decl_kind,
    ACTIONS(62), 3,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
    STATE(4), 7,
      sym_blank_line,
      sym_use_statement,
      sym_fenced_declaration,
      sym_struct_declaration,
      sym_slash_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [161] = 11,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(69), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_model_subject,
    ACTIONS(77), 1,
      sym_body_text,
    STATE(14), 1,
      sym_newline,
    STATE(100), 1,
      sym_collection_subject,
    STATE(110), 2,
      sym_collection_directive,
      sym_model_directive,
    ACTIONS(73), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
    STATE(2), 4,
      sym_blank_line,
      sym_directive_line,
      sym_body_line,
      aux_sym_thunk_body_repeat1,
    ACTIONS(71), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [208] = 10,
    ACTIONS(67), 1,
      aux_sym_newline_token1,
    ACTIONS(75), 1,
      sym_model_subject,
    ACTIONS(77), 1,
      sym_body_text,
    ACTIONS(79), 1,
      sym_comment,
    STATE(14), 1,
      sym_newline,
    STATE(27), 1,
      sym_thunk_body,
    STATE(100), 1,
      sym_collection_subject,
    STATE(110), 2,
      sym_collection_directive,
      sym_model_directive,
    ACTIONS(73), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
    STATE(5), 4,
      sym_blank_line,
      sym_directive_line,
      sym_body_line,
      aux_sym_thunk_body_repeat1,
  [246] = 8,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_newline_token1,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(17), 1,
      sym_newline,
    STATE(94), 1,
      sym_struct_field,
    STATE(9), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(87), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [279] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 15,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [300] = 8,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym_newline_token1,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(17), 1,
      sym_newline,
    STATE(94), 1,
      sym_struct_field,
    STATE(9), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(103), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [333] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 15,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [354] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 15,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [375] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 15,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [396] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 15,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [417] = 2,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 15,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [438] = 7,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      aux_sym_newline_token1,
    ACTIONS(133), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_body_text,
    STATE(22), 1,
      sym_newline,
    STATE(15), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_slash_body_repeat1,
    ACTIONS(136), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [468] = 7,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      aux_sym_newline_token1,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_body_text,
    STATE(22), 1,
      sym_newline,
    STATE(15), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_slash_body_repeat1,
    ACTIONS(147), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [498] = 2,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(126), 8,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      sym_identifier,
  [514] = 2,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(153), 8,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      sym_identifier,
  [530] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 10,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      sym_body_text,
  [546] = 2,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(157), 8,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      sym_identifier,
  [562] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 10,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      sym_body_text,
  [578] = 2,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 10,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      sym_body_text,
  [594] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 10,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      sym_body_text,
  [610] = 2,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(93), 8,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
      sym_identifier,
  [626] = 1,
    ACTIONS(124), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [639] = 1,
    ACTIONS(159), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [652] = 1,
    ACTIONS(161), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [665] = 1,
    ACTIONS(163), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [678] = 1,
    ACTIONS(165), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [691] = 1,
    ACTIONS(167), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [704] = 1,
    ACTIONS(169), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [717] = 1,
    ACTIONS(171), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [730] = 1,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [743] = 1,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      anon_sym_stash,
  [756] = 7,
    ACTIONS(83), 1,
      aux_sym_newline_token1,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(17), 1,
      sym_newline,
    STATE(29), 1,
      sym_struct_body,
    STATE(94), 1,
      sym_struct_field,
    STATE(7), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
  [780] = 1,
    ACTIONS(179), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [791] = 1,
    ACTIONS(181), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [802] = 1,
    ACTIONS(183), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [813] = 7,
    ACTIONS(185), 1,
      aux_sym_newline_token1,
    ACTIONS(187), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(189), 1,
      sym_fence_text,
    STATE(34), 1,
      sym_fence_close,
    STATE(117), 1,
      sym_newline,
    STATE(137), 1,
      sym_fence_body,
    STATE(61), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [836] = 1,
    ACTIONS(191), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [847] = 6,
    ACTIONS(143), 1,
      aux_sym_newline_token1,
    ACTIONS(149), 1,
      sym_body_text,
    ACTIONS(193), 1,
      sym_comment,
    STATE(22), 1,
      sym_newline,
    STATE(32), 1,
      sym_slash_body,
    STATE(16), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_slash_body_repeat1,
  [868] = 1,
    ACTIONS(195), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [879] = 1,
    ACTIONS(197), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [890] = 1,
    ACTIONS(199), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [901] = 1,
    ACTIONS(93), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [912] = 1,
    ACTIONS(201), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [923] = 1,
    ACTIONS(203), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [934] = 1,
    ACTIONS(205), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [945] = 1,
    ACTIONS(207), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [956] = 1,
    ACTIONS(209), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [967] = 1,
    ACTIONS(211), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [978] = 1,
    ACTIONS(213), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [989] = 1,
    ACTIONS(215), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [1000] = 1,
    ACTIONS(217), 8,
      aux_sym_newline_token1,
      sym_comment,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [1011] = 4,
    ACTIONS(221), 1,
      sym_array_suffix,
    ACTIONS(223), 1,
      sym_question,
    STATE(57), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(219), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_rparen,
      sym_comma,
  [1027] = 7,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(227), 1,
      sym_inline_comment,
    ACTIONS(229), 1,
      sym_arrow,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(53), 1,
      sym_newline,
    STATE(75), 1,
      sym_parameter_list,
  [1049] = 3,
    ACTIONS(237), 1,
      sym_array_suffix,
    STATE(57), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(235), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_rparen,
      sym_comma,
      sym_question,
  [1063] = 4,
    ACTIONS(221), 1,
      sym_array_suffix,
    ACTIONS(242), 1,
      sym_question,
    STATE(55), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(240), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_rparen,
      sym_comma,
  [1079] = 1,
    ACTIONS(244), 6,
      aux_sym_newline_token1,
      sym_array_suffix,
      sym_inline_comment,
      sym_rparen,
      sym_comma,
      sym_question,
  [1088] = 5,
    ACTIONS(246), 1,
      aux_sym_newline_token1,
    ACTIONS(249), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(251), 1,
      sym_fence_text,
    STATE(117), 1,
      sym_newline,
    STATE(60), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [1105] = 5,
    ACTIONS(185), 1,
      aux_sym_newline_token1,
    ACTIONS(189), 1,
      sym_fence_text,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(117), 1,
      sym_newline,
    STATE(60), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [1122] = 6,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(256), 1,
      sym_inline_comment,
    ACTIONS(258), 1,
      sym_arrow,
    STATE(37), 1,
      sym_newline,
    STATE(76), 1,
      sym_parameter_list,
  [1141] = 2,
    STATE(141), 1,
      sym_cap_kind,
    ACTIONS(260), 4,
      anon_sym_slash,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_psyche,
  [1151] = 4,
    ACTIONS(264), 1,
      aux_sym_reference_token1,
    STATE(78), 1,
      sym_directive_value,
    STATE(154), 1,
      sym_directive_values,
    ACTIONS(262), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1165] = 4,
    ACTIONS(264), 1,
      aux_sym_reference_token1,
    STATE(78), 1,
      sym_directive_value,
    STATE(157), 1,
      sym_directive_values,
    ACTIONS(266), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1179] = 5,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(268), 1,
      aux_sym_newline_token1,
    ACTIONS(270), 1,
      sym_inline_comment,
    STATE(86), 1,
      sym_newline,
    STATE(89), 1,
      sym_parameter_list,
  [1195] = 3,
    ACTIONS(274), 1,
      sym_comma,
    STATE(67), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(272), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1206] = 4,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    ACTIONS(279), 1,
      sym_inline_comment,
    ACTIONS(281), 1,
      sym_language,
    STATE(103), 1,
      sym_newline,
  [1219] = 4,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    ACTIONS(283), 1,
      sym_inline_comment,
    ACTIONS(285), 1,
      sym_language,
    STATE(93), 1,
      sym_newline,
  [1232] = 1,
    ACTIONS(287), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_rparen,
      sym_comma,
  [1239] = 1,
    ACTIONS(289), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_arrow,
      sym_colon,
  [1246] = 3,
    ACTIONS(291), 1,
      sym_colon,
    ACTIONS(295), 1,
      sym_question,
    ACTIONS(293), 2,
      sym_rparen,
      sym_comma,
  [1257] = 1,
    ACTIONS(297), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_rparen,
      sym_comma,
  [1264] = 1,
    ACTIONS(299), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_arrow,
      sym_colon,
  [1271] = 4,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(301), 1,
      sym_inline_comment,
    ACTIONS(303), 1,
      sym_arrow,
    STATE(38), 1,
      sym_newline,
  [1284] = 4,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(305), 1,
      sym_inline_comment,
    ACTIONS(307), 1,
      sym_arrow,
    STATE(43), 1,
      sym_newline,
  [1297] = 1,
    ACTIONS(309), 4,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_arrow,
      sym_colon,
  [1304] = 3,
    ACTIONS(313), 1,
      sym_comma,
    STATE(79), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(311), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1315] = 3,
    ACTIONS(313), 1,
      sym_comma,
    STATE(67), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(315), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1326] = 1,
    ACTIONS(93), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1332] = 3,
    ACTIONS(317), 1,
      sym_rparen,
    ACTIONS(319), 1,
      sym_comma,
    STATE(87), 1,
      aux_sym_parameter_list_repeat1,
  [1342] = 3,
    ACTIONS(321), 1,
      aux_sym_newline_token1,
    ACTIONS(323), 1,
      sym_inline_comment,
    STATE(115), 1,
      sym_newline,
  [1352] = 3,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_inline_comment,
    STATE(23), 1,
      sym_newline,
  [1362] = 2,
    ACTIONS(329), 1,
      sym_colon,
    ACTIONS(331), 2,
      sym_rparen,
      sym_comma,
  [1370] = 3,
    ACTIONS(333), 1,
      sym_rparen,
    ACTIONS(335), 1,
      sym_comma,
    STATE(85), 1,
      aux_sym_parameter_list_repeat1,
  [1380] = 1,
    ACTIONS(338), 3,
      aux_sym_newline_token1,
      sym_comment,
      sym_body_text,
  [1386] = 3,
    ACTIONS(319), 1,
      sym_comma,
    ACTIONS(340), 1,
      sym_rparen,
    STATE(85), 1,
      aux_sym_parameter_list_repeat1,
  [1396] = 3,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(342), 1,
      sym_inline_comment,
    STATE(51), 1,
      sym_newline,
  [1406] = 3,
    ACTIONS(268), 1,
      aux_sym_newline_token1,
    ACTIONS(344), 1,
      sym_inline_comment,
    STATE(113), 1,
      sym_newline,
  [1416] = 3,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(346), 1,
      sym_inline_comment,
    STATE(47), 1,
      sym_newline,
  [1426] = 1,
    ACTIONS(348), 3,
      aux_sym_newline_token1,
      sym_comment,
      sym_body_text,
  [1432] = 3,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    ACTIONS(350), 1,
      sym_inline_comment,
    STATE(101), 1,
      sym_newline,
  [1442] = 1,
    ACTIONS(352), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1448] = 3,
    ACTIONS(83), 1,
      aux_sym_newline_token1,
    ACTIONS(354), 1,
      sym_inline_comment,
    STATE(20), 1,
      sym_newline,
  [1458] = 1,
    ACTIONS(356), 3,
      aux_sym_newline_token1,
      sym_comment,
      sym_identifier,
  [1464] = 3,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(358), 1,
      sym_inline_comment,
    STATE(49), 1,
      sym_newline,
  [1474] = 1,
    ACTIONS(360), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [1480] = 1,
    ACTIONS(362), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [1486] = 3,
    ACTIONS(364), 1,
      sym_rparen,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(81), 1,
      sym_parameter,
  [1496] = 1,
    ACTIONS(368), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [1502] = 1,
    ACTIONS(370), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1508] = 3,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    ACTIONS(372), 1,
      sym_inline_comment,
    STATE(107), 1,
      sym_newline,
  [1518] = 1,
    ACTIONS(374), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1524] = 1,
    ACTIONS(376), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [1530] = 1,
    ACTIONS(378), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1536] = 1,
    ACTIONS(380), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1542] = 1,
    ACTIONS(382), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1548] = 1,
    ACTIONS(384), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1554] = 1,
    ACTIONS(386), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1560] = 3,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    ACTIONS(390), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_newline,
  [1570] = 3,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(392), 1,
      sym_colon,
    STATE(173), 1,
      sym_parameter_list,
  [1580] = 1,
    ACTIONS(394), 3,
      aux_sym_newline_token1,
      sym_comment,
      sym_body_text,
  [1586] = 1,
    ACTIONS(396), 3,
      aux_sym_newline_token1,
      sym_comment,
      sym_body_text,
  [1592] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(398), 1,
      sym_inline_comment,
    STATE(26), 1,
      sym_newline,
  [1602] = 1,
    ACTIONS(400), 3,
      aux_sym_newline_token1,
      sym_comment,
      sym_identifier,
  [1608] = 1,
    ACTIONS(402), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_language,
  [1614] = 1,
    ACTIONS(404), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1620] = 3,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    ACTIONS(406), 1,
      sym_inline_comment,
    STATE(40), 1,
      sym_newline,
  [1630] = 1,
    ACTIONS(91), 3,
      aux_sym_newline_token1,
      sym_comment,
      sym_identifier,
  [1636] = 1,
    ACTIONS(93), 3,
      aux_sym_newline_token1,
      sym_comment,
      sym_body_text,
  [1642] = 3,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    ACTIONS(408), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_newline,
  [1652] = 1,
    ACTIONS(410), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1658] = 2,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    STATE(46), 1,
      sym_newline,
  [1665] = 2,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(138), 1,
      sym_type_expression,
  [1672] = 1,
    ACTIONS(414), 2,
      sym_rparen,
      sym_comma,
  [1677] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(28), 1,
      sym_newline,
  [1684] = 2,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    STATE(42), 1,
      sym_newline,
  [1691] = 2,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    STATE(50), 1,
      sym_newline,
  [1698] = 2,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(90), 1,
      sym_type_expression,
  [1705] = 2,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    STATE(109), 1,
      sym_newline,
  [1712] = 2,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    STATE(52), 1,
      sym_newline,
  [1719] = 2,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    STATE(44), 1,
      sym_newline,
  [1726] = 2,
    ACTIONS(264), 1,
      aux_sym_reference_token1,
    STATE(98), 1,
      sym_directive_value,
  [1733] = 2,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(96), 1,
      sym_type_expression,
  [1740] = 2,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    STATE(122), 1,
      sym_newline,
  [1747] = 2,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(163), 1,
      sym_type_expression,
  [1754] = 2,
    ACTIONS(416), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(31), 1,
      sym_fence_close,
  [1761] = 1,
    ACTIONS(418), 2,
      sym_rparen,
      sym_comma,
  [1766] = 2,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(125), 1,
      sym_parameter,
  [1773] = 2,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    STATE(36), 1,
      sym_newline,
  [1780] = 2,
    ACTIONS(420), 1,
      aux_sym_reference_token1,
    STATE(114), 1,
      sym_reference,
  [1787] = 2,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(149), 1,
      sym_type_expression,
  [1794] = 2,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    STATE(48), 1,
      sym_newline,
  [1801] = 2,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(88), 1,
      sym_type_expression,
  [1808] = 2,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    STATE(105), 1,
      sym_newline,
  [1815] = 2,
    ACTIONS(83), 1,
      aux_sym_newline_token1,
    STATE(18), 1,
      sym_newline,
  [1822] = 2,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    STATE(106), 1,
      sym_newline,
  [1829] = 1,
    ACTIONS(422), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1834] = 1,
    ACTIONS(424), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1839] = 2,
    ACTIONS(325), 1,
      aux_sym_newline_token1,
    STATE(19), 1,
      sym_newline,
  [1846] = 2,
    ACTIONS(321), 1,
      aux_sym_newline_token1,
    STATE(95), 1,
      sym_newline,
  [1853] = 2,
    ACTIONS(277), 1,
      aux_sym_newline_token1,
    STATE(108), 1,
      sym_newline,
  [1860] = 2,
    ACTIONS(225), 1,
      aux_sym_newline_token1,
    STATE(54), 1,
      sym_newline,
  [1867] = 1,
    ACTIONS(426), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1872] = 2,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(118), 1,
      sym_type_expression,
  [1879] = 2,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    STATE(11), 1,
      sym_newline,
  [1886] = 1,
    ACTIONS(428), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1891] = 2,
    ACTIONS(268), 1,
      aux_sym_newline_token1,
    STATE(91), 1,
      sym_newline,
  [1898] = 2,
    ACTIONS(268), 1,
      aux_sym_newline_token1,
    STATE(112), 1,
      sym_newline,
  [1905] = 2,
    ACTIONS(430), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(68), 1,
      sym_fence_open,
  [1912] = 2,
    ACTIONS(430), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(69), 1,
      sym_fence_open,
  [1919] = 2,
    ACTIONS(388), 1,
      aux_sym_newline_token1,
    STATE(13), 1,
      sym_newline,
  [1926] = 1,
    ACTIONS(432), 2,
      sym_rparen,
      sym_comma,
  [1931] = 1,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
  [1935] = 1,
    ACTIONS(436), 1,
      sym_identifier,
  [1939] = 1,
    ACTIONS(438), 1,
      sym_identifier,
  [1943] = 1,
    ACTIONS(440), 1,
      sym_identifier,
  [1947] = 1,
    ACTIONS(442), 1,
      sym_colon,
  [1951] = 1,
    ACTIONS(444), 1,
      aux_sym_newline_token1,
  [1955] = 1,
    ACTIONS(446), 1,
      sym_identifier,
  [1959] = 1,
    ACTIONS(448), 1,
      sym_assign_operator,
  [1963] = 1,
    ACTIONS(450), 1,
      aux_sym_reference_token1,
  [1967] = 1,
    ACTIONS(452), 1,
      sym_colon,
  [1971] = 1,
    ACTIONS(454), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 161,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 246,
  [SMALL_STATE(8)] = 279,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 333,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 375,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 417,
  [SMALL_STATE(15)] = 438,
  [SMALL_STATE(16)] = 468,
  [SMALL_STATE(17)] = 498,
  [SMALL_STATE(18)] = 514,
  [SMALL_STATE(19)] = 530,
  [SMALL_STATE(20)] = 546,
  [SMALL_STATE(21)] = 562,
  [SMALL_STATE(22)] = 578,
  [SMALL_STATE(23)] = 594,
  [SMALL_STATE(24)] = 610,
  [SMALL_STATE(25)] = 626,
  [SMALL_STATE(26)] = 639,
  [SMALL_STATE(27)] = 652,
  [SMALL_STATE(28)] = 665,
  [SMALL_STATE(29)] = 678,
  [SMALL_STATE(30)] = 691,
  [SMALL_STATE(31)] = 704,
  [SMALL_STATE(32)] = 717,
  [SMALL_STATE(33)] = 730,
  [SMALL_STATE(34)] = 743,
  [SMALL_STATE(35)] = 756,
  [SMALL_STATE(36)] = 780,
  [SMALL_STATE(37)] = 791,
  [SMALL_STATE(38)] = 802,
  [SMALL_STATE(39)] = 813,
  [SMALL_STATE(40)] = 836,
  [SMALL_STATE(41)] = 847,
  [SMALL_STATE(42)] = 868,
  [SMALL_STATE(43)] = 879,
  [SMALL_STATE(44)] = 890,
  [SMALL_STATE(45)] = 901,
  [SMALL_STATE(46)] = 912,
  [SMALL_STATE(47)] = 923,
  [SMALL_STATE(48)] = 934,
  [SMALL_STATE(49)] = 945,
  [SMALL_STATE(50)] = 956,
  [SMALL_STATE(51)] = 967,
  [SMALL_STATE(52)] = 978,
  [SMALL_STATE(53)] = 989,
  [SMALL_STATE(54)] = 1000,
  [SMALL_STATE(55)] = 1011,
  [SMALL_STATE(56)] = 1027,
  [SMALL_STATE(57)] = 1049,
  [SMALL_STATE(58)] = 1063,
  [SMALL_STATE(59)] = 1079,
  [SMALL_STATE(60)] = 1088,
  [SMALL_STATE(61)] = 1105,
  [SMALL_STATE(62)] = 1122,
  [SMALL_STATE(63)] = 1141,
  [SMALL_STATE(64)] = 1151,
  [SMALL_STATE(65)] = 1165,
  [SMALL_STATE(66)] = 1179,
  [SMALL_STATE(67)] = 1195,
  [SMALL_STATE(68)] = 1206,
  [SMALL_STATE(69)] = 1219,
  [SMALL_STATE(70)] = 1232,
  [SMALL_STATE(71)] = 1239,
  [SMALL_STATE(72)] = 1246,
  [SMALL_STATE(73)] = 1257,
  [SMALL_STATE(74)] = 1264,
  [SMALL_STATE(75)] = 1271,
  [SMALL_STATE(76)] = 1284,
  [SMALL_STATE(77)] = 1297,
  [SMALL_STATE(78)] = 1304,
  [SMALL_STATE(79)] = 1315,
  [SMALL_STATE(80)] = 1326,
  [SMALL_STATE(81)] = 1332,
  [SMALL_STATE(82)] = 1342,
  [SMALL_STATE(83)] = 1352,
  [SMALL_STATE(84)] = 1362,
  [SMALL_STATE(85)] = 1370,
  [SMALL_STATE(86)] = 1380,
  [SMALL_STATE(87)] = 1386,
  [SMALL_STATE(88)] = 1396,
  [SMALL_STATE(89)] = 1406,
  [SMALL_STATE(90)] = 1416,
  [SMALL_STATE(91)] = 1426,
  [SMALL_STATE(92)] = 1432,
  [SMALL_STATE(93)] = 1442,
  [SMALL_STATE(94)] = 1448,
  [SMALL_STATE(95)] = 1458,
  [SMALL_STATE(96)] = 1464,
  [SMALL_STATE(97)] = 1474,
  [SMALL_STATE(98)] = 1480,
  [SMALL_STATE(99)] = 1486,
  [SMALL_STATE(100)] = 1496,
  [SMALL_STATE(101)] = 1502,
  [SMALL_STATE(102)] = 1508,
  [SMALL_STATE(103)] = 1518,
  [SMALL_STATE(104)] = 1524,
  [SMALL_STATE(105)] = 1530,
  [SMALL_STATE(106)] = 1536,
  [SMALL_STATE(107)] = 1542,
  [SMALL_STATE(108)] = 1548,
  [SMALL_STATE(109)] = 1554,
  [SMALL_STATE(110)] = 1560,
  [SMALL_STATE(111)] = 1570,
  [SMALL_STATE(112)] = 1580,
  [SMALL_STATE(113)] = 1586,
  [SMALL_STATE(114)] = 1592,
  [SMALL_STATE(115)] = 1602,
  [SMALL_STATE(116)] = 1608,
  [SMALL_STATE(117)] = 1614,
  [SMALL_STATE(118)] = 1620,
  [SMALL_STATE(119)] = 1630,
  [SMALL_STATE(120)] = 1636,
  [SMALL_STATE(121)] = 1642,
  [SMALL_STATE(122)] = 1652,
  [SMALL_STATE(123)] = 1658,
  [SMALL_STATE(124)] = 1665,
  [SMALL_STATE(125)] = 1672,
  [SMALL_STATE(126)] = 1677,
  [SMALL_STATE(127)] = 1684,
  [SMALL_STATE(128)] = 1691,
  [SMALL_STATE(129)] = 1698,
  [SMALL_STATE(130)] = 1705,
  [SMALL_STATE(131)] = 1712,
  [SMALL_STATE(132)] = 1719,
  [SMALL_STATE(133)] = 1726,
  [SMALL_STATE(134)] = 1733,
  [SMALL_STATE(135)] = 1740,
  [SMALL_STATE(136)] = 1747,
  [SMALL_STATE(137)] = 1754,
  [SMALL_STATE(138)] = 1761,
  [SMALL_STATE(139)] = 1766,
  [SMALL_STATE(140)] = 1773,
  [SMALL_STATE(141)] = 1780,
  [SMALL_STATE(142)] = 1787,
  [SMALL_STATE(143)] = 1794,
  [SMALL_STATE(144)] = 1801,
  [SMALL_STATE(145)] = 1808,
  [SMALL_STATE(146)] = 1815,
  [SMALL_STATE(147)] = 1822,
  [SMALL_STATE(148)] = 1829,
  [SMALL_STATE(149)] = 1834,
  [SMALL_STATE(150)] = 1839,
  [SMALL_STATE(151)] = 1846,
  [SMALL_STATE(152)] = 1853,
  [SMALL_STATE(153)] = 1860,
  [SMALL_STATE(154)] = 1867,
  [SMALL_STATE(155)] = 1872,
  [SMALL_STATE(156)] = 1879,
  [SMALL_STATE(157)] = 1886,
  [SMALL_STATE(158)] = 1891,
  [SMALL_STATE(159)] = 1898,
  [SMALL_STATE(160)] = 1905,
  [SMALL_STATE(161)] = 1912,
  [SMALL_STATE(162)] = 1919,
  [SMALL_STATE(163)] = 1926,
  [SMALL_STATE(164)] = 1931,
  [SMALL_STATE(165)] = 1935,
  [SMALL_STATE(166)] = 1939,
  [SMALL_STATE(167)] = 1943,
  [SMALL_STATE(168)] = 1947,
  [SMALL_STATE(169)] = 1951,
  [SMALL_STATE(170)] = 1955,
  [SMALL_STATE(171)] = 1959,
  [SMALL_STATE(172)] = 1963,
  [SMALL_STATE(173)] = 1967,
  [SMALL_STATE(174)] = 1971,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 2, 0, 7),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 2, 0, 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 3, 0, 7),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 3, 0, 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slash_body_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_slash_body_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_slash_body_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_slash_body_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_slash_body_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slash_body, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_body, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 3, 0, 9),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 3, 0, 9),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 2, 0, 9),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 2, 0, 9),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 2, 0, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, 0, 11),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 2, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fenced_declaration, 3, 0, 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slash_declaration, 2, 0, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fenced_declaration, 2, 0, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 30),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 3, 0, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 3, 0, 6),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 15),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 17),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 6),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 15),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 25),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 17),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 26),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 25),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 30),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 26),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 2, 0, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 3, 0, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 14),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 22),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 22), SHIFT_REPEAT(59),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1, 0, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 1, 0, 12),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_body, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_directive, 2, 0, 10),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_directive, 2, 0, 10),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 32),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 32), SHIFT_REPEAT(133),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, 0, 21),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 16),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 13),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 23),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_values, 1, 0, 20),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_values, 2, 0, 27),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 13),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 24),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 24), SHIFT_REPEAT(139),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_header, 3, 0, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_header, 5, 0, 17),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 5, 0, 28),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 4, 0, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_subject, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 31),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 33),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 34),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 33),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 34),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 35),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 8, 0, 35),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 2, 0, 7),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_header, 4, 0, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_header, 4, 0, 17),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 3, 0, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 28),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 16),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 29),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, 0, 18),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_directive, 3, 0, 19),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_directive, 3, 0, 19),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 18),
  [434] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_kind, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slash_keyword, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
