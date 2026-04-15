#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_psyches = 22,
  anon_sym_skills = 23,
  anon_sym_services = 24,
  anon_sym_tools = 25,
  sym_model_subject = 26,
  sym_identifier = 27,
  aux_sym_reference_token1 = 28,
  sym_language = 29,
  sym_body_text = 30,
  sym_fence_text = 31,
  sym_source_file = 32,
  sym_newline = 33,
  sym_blank_line = 34,
  sym_use_statement = 35,
  sym_fenced_declaration = 36,
  sym_declaration_header = 37,
  sym_struct_declaration = 38,
  sym_struct_header = 39,
  sym_struct_field_line = 40,
  sym_struct_body = 41,
  sym_struct_field = 42,
  sym_slash_declaration = 43,
  sym_slash_header = 44,
  sym_slash_body = 45,
  sym_parameter_list = 46,
  sym_parameter = 47,
  sym_type_expression = 48,
  sym_thunk = 49,
  sym_thunk_header = 50,
  sym_thunk_body = 51,
  sym_directive_line = 52,
  sym_collection_directive = 53,
  sym_model_directive = 54,
  sym_directive_values = 55,
  sym_body_line = 56,
  sym_fence_body = 57,
  sym_fence_content_line = 58,
  sym_slash_keyword = 59,
  sym_fence_open = 60,
  sym_fence_close = 61,
  sym_cap_kind = 62,
  sym_decl_kind = 63,
  sym_collection_subject = 64,
  sym_reference = 65,
  sym_directive_value = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_struct_body_repeat1 = 68,
  aux_sym_slash_body_repeat1 = 69,
  aux_sym_parameter_list_repeat1 = 70,
  aux_sym_type_expression_repeat1 = 71,
  aux_sym_thunk_body_repeat1 = 72,
  aux_sym_thunk_body_repeat2 = 73,
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
  [aux_sym_thunk_body_repeat2] = "thunk_body_repeat2",
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
  [aux_sym_thunk_body_repeat2] = aux_sym_thunk_body_repeat2,
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
  [aux_sym_thunk_body_repeat2] = {
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 3},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 3},
  [17] = {.index = 32, .length = 3},
  [18] = {.index = 35, .length = 1},
  [19] = {.index = 36, .length = 3},
  [20] = {.index = 39, .length = 2},
  [21] = {.index = 41, .length = 4},
  [22] = {.index = 45, .length = 2},
  [23] = {.index = 47, .length = 2},
  [24] = {.index = 49, .length = 4},
  [25] = {.index = 53, .length = 2},
  [26] = {.index = 55, .length = 4},
  [27] = {.index = 59, .length = 4},
  [28] = {.index = 63, .length = 5},
  [29] = {.index = 68, .length = 5},
  [30] = {.index = 73, .length = 1},
  [31] = {.index = 74, .length = 2},
  [32] = {.index = 76, .length = 5},
  [33] = {.index = 81, .length = 5},
  [34] = {.index = 86, .length = 6},
  [35] = {.index = 92, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 1},
    {field_header, 0},
  [2] =
    {field_body, 1},
    {field_header, 0},
  [4] =
    {field_name, 0},
  [5] =
    {field_colon, 1},
    {field_keyword, 0},
  [7] =
    {field_text, 0},
  [8] =
    {field_body, 1},
    {field_close, 2},
    {field_header, 0},
  [11] =
    {field_field, 0},
  [12] =
    {field_operator, 1},
    {field_subject, 0},
  [14] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [17] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [20] =
    {field_array, 0},
  [21] =
    {field_name, 0},
    {field_optional, 1},
  [23] =
    {field_array, 1, .inherited = true},
    {field_name, 0},
  [25] =
    {field_parameter, 1},
  [26] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_parameters, 1},
  [29] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [32] =
    {field_operator, 1},
    {field_subject, 0},
    {field_values, 2},
  [35] =
    {field_value, 0},
  [36] =
    {field_array, 1, .inherited = true},
    {field_name, 0},
    {field_optional, 2},
  [39] =
    {field_array, 0, .inherited = true},
    {field_array, 1, .inherited = true},
  [41] =
    {field_arrow, 1},
    {field_colon, 3},
    {field_keyword, 0},
    {field_returns, 2},
  [45] =
    {field_parameter, 1},
    {field_parameter, 2, .inherited = true},
  [47] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [49] =
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_parameters, 2},
  [53] =
    {field_value, 0},
    {field_value, 1, .inherited = true},
  [55] =
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
    {field_open, 3},
  [59] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [63] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_returns, 3},
  [68] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_parameters, 1},
    {field_returns, 3},
  [73] =
    {field_value, 1},
  [74] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [76] =
    {field_colon, 2},
    {field_kind, 0},
    {field_language, 4},
    {field_name, 1},
    {field_open, 3},
  [81] =
    {field_colon, 3},
    {field_kind, 0},
    {field_name, 1},
    {field_open, 4},
    {field_parameters, 2},
  [86] =
    {field_arrow, 3},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_parameters, 2},
    {field_returns, 4},
  [92] =
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 19,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 17,
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
  [56] = 19,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 19,
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
  [111] = 19,
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
  [164] = 17,
  [165] = 165,
  [166] = 166,
  [167] = 19,
  [168] = 19,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        '\n', 74,
        '\r', 1,
        '#', 77,
        '(', 91,
        ')', 92,
        '+', 10,
        ',', 93,
        '-', 11,
        ':', 90,
        '=', 86,
        '?', 94,
        '[', 13,
        '`', 15,
        'm', 49,
        'p', 55,
        's', 23,
        't', 33,
        'u', 56,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 74,
        '\r', 137,
        'm', 166,
        'p', 173,
        's', 148,
        't', 168,
        '\t', 135,
        '\f', 135,
        ' ', 135,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(188);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(89);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == '`') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'k') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 66:
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 70:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(70);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        '\n', 74,
        '\r', 137,
        '#', 9,
        'p', 179,
        's', 152,
        't', 154,
        'u', 177,
        '\t', 134,
        '\f', 134,
        ' ', 134,
      );
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_use_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_struct_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_slash);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_slash);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_add_assign_operator);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_remove_assign_operator);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_question);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_service);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_model_subject);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_body_text);
      ADVANCE_MAP(
        '\n', 74,
        '\r', 137,
        '#', 9,
        'p', 179,
        's', 152,
        't', 154,
        'u', 177,
        '\t', 134,
        '\f', 134,
        ' ', 134,
      );
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_body_text);
      ADVANCE_MAP(
        '\n', 74,
        '\r', 137,
        'm', 166,
        'p', 173,
        's', 148,
        't', 168,
        '\t', 135,
        '\f', 135,
        ' ', 135,
      );
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'k') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'k') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'v') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'y') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead == 'y') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_body_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '\r') ADVANCE(188);
      if (lookahead == '`') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 70},
  [3] = {.lex_state = 70},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 71},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 71},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 71},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 70},
  [23] = {.lex_state = 70},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 70},
  [28] = {.lex_state = 70},
  [29] = {.lex_state = 70},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
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
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
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
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
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
    [anon_sym_tools] = ACTIONS(1),
    [sym_model_subject] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(171),
    [sym_newline] = STATE(27),
    [sym_blank_line] = STATE(2),
    [sym_use_statement] = STATE(2),
    [sym_fenced_declaration] = STATE(2),
    [sym_declaration_header] = STATE(36),
    [sym_struct_declaration] = STATE(2),
    [sym_struct_header] = STATE(33),
    [sym_slash_declaration] = STATE(2),
    [sym_slash_header] = STATE(55),
    [sym_thunk] = STATE(2),
    [sym_thunk_header] = STATE(4),
    [sym_slash_keyword] = STATE(179),
    [sym_decl_kind] = STATE(177),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_use_keyword] = ACTIONS(9),
    [sym_struct_keyword] = ACTIONS(11),
    [anon_sym_slash] = ACTIONS(13),
    [sym_thunk_keyword] = ACTIONS(15),
    [anon_sym_service] = ACTIONS(17),
    [anon_sym_psyche] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
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
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_comment,
    STATE(4), 1,
      sym_thunk_header,
    STATE(27), 1,
      sym_newline,
    STATE(33), 1,
      sym_struct_header,
    STATE(36), 1,
      sym_declaration_header,
    STATE(55), 1,
      sym_slash_header,
    STATE(177), 1,
      sym_decl_kind,
    STATE(179), 1,
      sym_slash_keyword,
    ACTIONS(17), 2,
      anon_sym_service,
      anon_sym_psyche,
    STATE(3), 7,
      sym_blank_line,
      sym_use_statement,
      sym_fenced_declaration,
      sym_struct_declaration,
      sym_slash_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [56] = 16,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_newline_token1,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_use_keyword,
    ACTIONS(34), 1,
      sym_struct_keyword,
    ACTIONS(37), 1,
      anon_sym_slash,
    ACTIONS(40), 1,
      sym_thunk_keyword,
    STATE(4), 1,
      sym_thunk_header,
    STATE(27), 1,
      sym_newline,
    STATE(33), 1,
      sym_struct_header,
    STATE(36), 1,
      sym_declaration_header,
    STATE(55), 1,
      sym_slash_header,
    STATE(177), 1,
      sym_decl_kind,
    STATE(179), 1,
      sym_slash_keyword,
    ACTIONS(43), 2,
      anon_sym_service,
      anon_sym_psyche,
    STATE(3), 7,
      sym_blank_line,
      sym_use_statement,
      sym_fenced_declaration,
      sym_struct_declaration,
      sym_slash_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [112] = 10,
    ACTIONS(46), 1,
      aux_sym_newline_token1,
    ACTIONS(50), 1,
      sym_model_subject,
    ACTIONS(52), 1,
      sym_body_text,
    STATE(20), 1,
      sym_newline,
    STATE(29), 1,
      sym_thunk_body,
    STATE(80), 1,
      sym_collection_subject,
    STATE(8), 2,
      sym_directive_line,
      aux_sym_thunk_body_repeat1,
    STATE(78), 2,
      sym_collection_directive,
      sym_model_directive,
    STATE(11), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_slash_body_repeat1,
    ACTIONS(48), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [150] = 7,
    ACTIONS(56), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(17), 1,
      sym_newline,
    STATE(79), 1,
      sym_struct_field,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(5), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(59), 6,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [180] = 7,
    ACTIONS(66), 1,
      aux_sym_newline_token1,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(17), 1,
      sym_newline,
    STATE(79), 1,
      sym_struct_field,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(5), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(68), 6,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [210] = 6,
    ACTIONS(46), 1,
      aux_sym_newline_token1,
    ACTIONS(52), 1,
      sym_body_text,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_newline,
    STATE(9), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_slash_body_repeat1,
    ACTIONS(74), 7,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [237] = 8,
    ACTIONS(76), 1,
      aux_sym_newline_token1,
    ACTIONS(80), 1,
      sym_model_subject,
    STATE(80), 1,
      sym_collection_subject,
    STATE(164), 1,
      sym_newline,
    STATE(12), 2,
      sym_directive_line,
      aux_sym_thunk_body_repeat1,
    STATE(39), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(78), 2,
      sym_collection_directive,
      sym_model_directive,
    ACTIONS(78), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [268] = 6,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      aux_sym_newline_token1,
    ACTIONS(89), 1,
      sym_body_text,
    STATE(20), 1,
      sym_newline,
    STATE(9), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_slash_body_repeat1,
    ACTIONS(87), 7,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [295] = 6,
    ACTIONS(46), 1,
      aux_sym_newline_token1,
    ACTIONS(52), 1,
      sym_body_text,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_newline,
    STATE(9), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_slash_body_repeat1,
    ACTIONS(94), 7,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [322] = 6,
    ACTIONS(46), 1,
      aux_sym_newline_token1,
    ACTIONS(52), 1,
      sym_body_text,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_newline,
    STATE(9), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_slash_body_repeat1,
    ACTIONS(98), 7,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [349] = 6,
    ACTIONS(100), 1,
      aux_sym_newline_token1,
    ACTIONS(105), 1,
      sym_model_subject,
    STATE(80), 1,
      sym_collection_subject,
    STATE(12), 2,
      sym_directive_line,
      aux_sym_thunk_body_repeat1,
    STATE(78), 2,
      sym_collection_directive,
      sym_model_directive,
    ACTIONS(102), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [373] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      sym_body_text,
  [388] = 2,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(114), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      sym_identifier,
  [403] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      sym_body_text,
  [418] = 2,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(122), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      sym_identifier,
  [433] = 2,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(126), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      sym_identifier,
  [448] = 3,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 2,
      aux_sym_newline_token1,
      sym_body_text,
    ACTIONS(133), 7,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [465] = 2,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(137), 7,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      sym_identifier,
  [480] = 2,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      sym_body_text,
  [495] = 2,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
      sym_body_text,
  [510] = 1,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [522] = 1,
    ACTIONS(139), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [534] = 1,
    ACTIONS(141), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [546] = 1,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [558] = 1,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [570] = 1,
    ACTIONS(124), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [582] = 1,
    ACTIONS(147), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [594] = 1,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [606] = 1,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [618] = 1,
    ACTIONS(153), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      anon_sym_slash,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_psyche,
  [630] = 4,
    ACTIONS(157), 1,
      sym_array_suffix,
    ACTIONS(159), 1,
      sym_question,
    STATE(34), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(155), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [647] = 6,
    ACTIONS(66), 1,
      aux_sym_newline_token1,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(17), 1,
      sym_newline,
    STATE(25), 1,
      sym_struct_body,
    STATE(79), 1,
      sym_struct_field,
    STATE(6), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
  [668] = 4,
    ACTIONS(157), 1,
      sym_array_suffix,
    ACTIONS(165), 1,
      sym_question,
    STATE(35), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(163), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [685] = 3,
    ACTIONS(169), 1,
      sym_array_suffix,
    STATE(35), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(167), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [700] = 7,
    ACTIONS(172), 1,
      aux_sym_newline_token1,
    ACTIONS(174), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(176), 1,
      sym_fence_text,
    STATE(30), 1,
      sym_fence_close,
    STATE(90), 1,
      sym_newline,
    STATE(157), 1,
      sym_fence_body,
    STATE(60), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [723] = 1,
    ACTIONS(178), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [733] = 1,
    ACTIONS(180), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [743] = 6,
    ACTIONS(46), 1,
      aux_sym_newline_token1,
    ACTIONS(52), 1,
      sym_body_text,
    STATE(18), 1,
      sym_blank_line,
    STATE(20), 1,
      sym_newline,
    STATE(62), 1,
      aux_sym_thunk_body_repeat2,
    STATE(10), 2,
      sym_body_line,
      aux_sym_slash_body_repeat1,
  [763] = 1,
    ACTIONS(182), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [773] = 1,
    ACTIONS(184), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [783] = 1,
    ACTIONS(186), 7,
      aux_sym_newline_token1,
      sym_array_suffix,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [793] = 1,
    ACTIONS(188), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [803] = 1,
    ACTIONS(190), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [813] = 1,
    ACTIONS(192), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [823] = 1,
    ACTIONS(194), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [833] = 1,
    ACTIONS(196), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [843] = 1,
    ACTIONS(198), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [853] = 1,
    ACTIONS(200), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [863] = 1,
    ACTIONS(202), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [873] = 1,
    ACTIONS(204), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [883] = 1,
    ACTIONS(206), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [893] = 1,
    ACTIONS(208), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [903] = 1,
    ACTIONS(210), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [913] = 5,
    ACTIONS(46), 1,
      aux_sym_newline_token1,
    ACTIONS(52), 1,
      sym_body_text,
    STATE(20), 1,
      sym_newline,
    STATE(26), 1,
      sym_slash_body,
    STATE(7), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_slash_body_repeat1,
  [931] = 1,
    ACTIONS(137), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [941] = 5,
    ACTIONS(212), 1,
      aux_sym_newline_token1,
    ACTIONS(215), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(217), 1,
      sym_fence_text,
    STATE(90), 1,
      sym_newline,
    STATE(57), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [958] = 1,
    ACTIONS(220), 6,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
  [967] = 1,
    ACTIONS(222), 6,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
  [976] = 5,
    ACTIONS(172), 1,
      aux_sym_newline_token1,
    ACTIONS(176), 1,
      sym_fence_text,
    ACTIONS(224), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(90), 1,
      sym_newline,
    STATE(57), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [993] = 1,
    ACTIONS(135), 6,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
  [1002] = 4,
    ACTIONS(226), 1,
      aux_sym_newline_token1,
    ACTIONS(229), 1,
      sym_body_text,
    STATE(164), 1,
      sym_newline,
    STATE(62), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
  [1016] = 4,
    ACTIONS(233), 1,
      aux_sym_reference_token1,
    STATE(74), 1,
      sym_directive_value,
    STATE(163), 1,
      sym_directive_values,
    ACTIONS(231), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1030] = 5,
    ACTIONS(235), 1,
      sym_arrow,
    ACTIONS(237), 1,
      sym_colon,
    ACTIONS(239), 1,
      sym_lparen,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(119), 1,
      sym_parameter_list,
  [1046] = 4,
    ACTIONS(233), 1,
      aux_sym_reference_token1,
    STATE(74), 1,
      sym_directive_value,
    STATE(160), 1,
      sym_directive_values,
    ACTIONS(243), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1060] = 2,
    STATE(135), 1,
      sym_cap_kind,
    ACTIONS(245), 4,
      anon_sym_slash,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_psyche,
  [1070] = 1,
    ACTIONS(247), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1078] = 1,
    ACTIONS(249), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [1086] = 4,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    ACTIONS(253), 1,
      sym_inline_comment,
    ACTIONS(255), 1,
      sym_language,
    STATE(102), 1,
      sym_newline,
  [1099] = 3,
    ACTIONS(259), 1,
      sym_comma,
    STATE(70), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(257), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1110] = 4,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    ACTIONS(262), 1,
      sym_inline_comment,
    ACTIONS(264), 1,
      sym_language,
    STATE(89), 1,
      sym_newline,
  [1123] = 3,
    ACTIONS(266), 1,
      sym_colon,
    ACTIONS(270), 1,
      sym_question,
    ACTIONS(268), 2,
      sym_rparen,
      sym_comma,
  [1134] = 4,
    ACTIONS(239), 1,
      sym_lparen,
    ACTIONS(272), 1,
      sym_arrow,
    ACTIONS(274), 1,
      sym_colon,
    STATE(121), 1,
      sym_parameter_list,
  [1147] = 3,
    ACTIONS(278), 1,
      sym_comma,
    STATE(75), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(276), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1158] = 3,
    ACTIONS(278), 1,
      sym_comma,
    STATE(70), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(280), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1169] = 1,
    ACTIONS(282), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1175] = 3,
    ACTIONS(284), 1,
      aux_sym_newline_token1,
    ACTIONS(286), 1,
      sym_inline_comment,
    STATE(133), 1,
      sym_newline,
  [1185] = 3,
    ACTIONS(288), 1,
      aux_sym_newline_token1,
    ACTIONS(290), 1,
      sym_inline_comment,
    STATE(58), 1,
      sym_newline,
  [1195] = 3,
    ACTIONS(66), 1,
      aux_sym_newline_token1,
    ACTIONS(292), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_newline,
  [1205] = 1,
    ACTIONS(294), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [1211] = 3,
    ACTIONS(296), 1,
      sym_rparen,
    ACTIONS(298), 1,
      sym_comma,
    STATE(81), 1,
      aux_sym_parameter_list_repeat1,
  [1221] = 3,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    ACTIONS(303), 1,
      sym_inline_comment,
    STATE(48), 1,
      sym_newline,
  [1231] = 3,
    ACTIONS(76), 1,
      aux_sym_newline_token1,
    ACTIONS(305), 1,
      sym_inline_comment,
    STATE(117), 1,
      sym_newline,
  [1241] = 3,
    ACTIONS(307), 1,
      sym_rparen,
    ACTIONS(309), 1,
      sym_comma,
    STATE(115), 1,
      aux_sym_parameter_list_repeat1,
  [1251] = 3,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    ACTIONS(311), 1,
      sym_inline_comment,
    STATE(50), 1,
      sym_newline,
  [1261] = 3,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    ACTIONS(313), 1,
      sym_inline_comment,
    STATE(40), 1,
      sym_newline,
  [1271] = 3,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    ACTIONS(315), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_newline,
  [1281] = 3,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    ACTIONS(317), 1,
      sym_inline_comment,
    STATE(99), 1,
      sym_newline,
  [1291] = 1,
    ACTIONS(319), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1297] = 1,
    ACTIONS(321), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1303] = 2,
    ACTIONS(323), 1,
      sym_colon,
    ACTIONS(325), 2,
      sym_rparen,
      sym_comma,
  [1311] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(327), 1,
      sym_inline_comment,
    STATE(28), 1,
      sym_newline,
  [1321] = 3,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    ACTIONS(329), 1,
      sym_inline_comment,
    STATE(52), 1,
      sym_newline,
  [1331] = 3,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    ACTIONS(331), 1,
      sym_inline_comment,
    STATE(41), 1,
      sym_newline,
  [1341] = 3,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    ACTIONS(333), 1,
      sym_inline_comment,
    STATE(45), 1,
      sym_newline,
  [1351] = 1,
    ACTIONS(335), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [1357] = 1,
    ACTIONS(337), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1363] = 1,
    ACTIONS(339), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1369] = 1,
    ACTIONS(341), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1375] = 1,
    ACTIONS(343), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [1381] = 3,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    ACTIONS(345), 1,
      sym_inline_comment,
    STATE(108), 1,
      sym_newline,
  [1391] = 1,
    ACTIONS(347), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1397] = 1,
    ACTIONS(349), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [1403] = 3,
    ACTIONS(239), 1,
      sym_lparen,
    ACTIONS(351), 1,
      sym_colon,
    STATE(174), 1,
      sym_parameter_list,
  [1413] = 3,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    ACTIONS(353), 1,
      sym_inline_comment,
    STATE(38), 1,
      sym_newline,
  [1423] = 1,
    ACTIONS(355), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1429] = 3,
    ACTIONS(357), 1,
      sym_rparen,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(84), 1,
      sym_parameter,
  [1439] = 1,
    ACTIONS(361), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1445] = 3,
    ACTIONS(239), 1,
      sym_lparen,
    ACTIONS(363), 1,
      sym_colon,
    STATE(175), 1,
      sym_parameter_list,
  [1455] = 1,
    ACTIONS(365), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1461] = 1,
    ACTIONS(137), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1467] = 3,
    ACTIONS(367), 1,
      aux_sym_newline_token1,
    ACTIONS(369), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_newline,
  [1477] = 3,
    ACTIONS(76), 1,
      aux_sym_newline_token1,
    ACTIONS(371), 1,
      sym_inline_comment,
    STATE(138), 1,
      sym_newline,
  [1487] = 1,
    ACTIONS(373), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_language,
  [1493] = 3,
    ACTIONS(309), 1,
      sym_comma,
    ACTIONS(375), 1,
      sym_rparen,
    STATE(81), 1,
      aux_sym_parameter_list_repeat1,
  [1503] = 2,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    STATE(76), 1,
      sym_newline,
  [1510] = 1,
    ACTIONS(377), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [1515] = 2,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(170), 1,
      sym_type_expression,
  [1522] = 2,
    ACTIONS(381), 1,
      sym_arrow,
    ACTIONS(383), 1,
      sym_colon,
  [1529] = 2,
    ACTIONS(385), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(69), 1,
      sym_fence_open,
  [1536] = 2,
    ACTIONS(387), 1,
      sym_arrow,
    ACTIONS(389), 1,
      sym_colon,
  [1543] = 1,
    ACTIONS(391), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [1548] = 2,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(182), 1,
      sym_type_expression,
  [1555] = 2,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    STATE(47), 1,
      sym_newline,
  [1562] = 2,
    ACTIONS(385), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(71), 1,
      sym_fence_open,
  [1569] = 1,
    ACTIONS(393), 2,
      sym_rparen,
      sym_comma,
  [1574] = 2,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(142), 1,
      sym_type_expression,
  [1581] = 1,
    ACTIONS(395), 2,
      sym_rparen,
      sym_comma,
  [1586] = 1,
    ACTIONS(397), 2,
      sym_arrow,
      sym_colon,
  [1591] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(31), 1,
      sym_newline,
  [1598] = 2,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    STATE(49), 1,
      sym_newline,
  [1605] = 2,
    ACTIONS(284), 1,
      aux_sym_newline_token1,
    STATE(122), 1,
      sym_newline,
  [1612] = 1,
    ACTIONS(399), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [1617] = 2,
    ACTIONS(233), 1,
      aux_sym_reference_token1,
    STATE(96), 1,
      sym_directive_value,
  [1624] = 2,
    ACTIONS(401), 1,
      aux_sym_reference_token1,
    STATE(92), 1,
      sym_reference,
  [1631] = 1,
    ACTIONS(403), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [1636] = 2,
    ACTIONS(76), 1,
      aux_sym_newline_token1,
    STATE(149), 1,
      sym_newline,
  [1643] = 1,
    ACTIONS(405), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [1648] = 2,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    STATE(98), 1,
      sym_newline,
  [1655] = 2,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    STATE(97), 1,
      sym_newline,
  [1662] = 2,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(126), 1,
      sym_type_expression,
  [1669] = 1,
    ACTIONS(407), 2,
      sym_rparen,
      sym_comma,
  [1674] = 2,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    STATE(51), 1,
      sym_newline,
  [1681] = 1,
    ACTIONS(409), 2,
      sym_arrow,
      sym_colon,
  [1686] = 2,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(128), 1,
      sym_parameter,
  [1693] = 2,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    STATE(53), 1,
      sym_newline,
  [1700] = 2,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(156), 1,
      sym_type_expression,
  [1707] = 2,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    STATE(44), 1,
      sym_newline,
  [1714] = 1,
    ACTIONS(411), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [1719] = 2,
    ACTIONS(66), 1,
      aux_sym_newline_token1,
    STATE(16), 1,
      sym_newline,
  [1726] = 2,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    STATE(106), 1,
      sym_newline,
  [1733] = 2,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(173), 1,
      sym_type_expression,
  [1740] = 2,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(186), 1,
      sym_type_expression,
  [1747] = 2,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    STATE(46), 1,
      sym_newline,
  [1754] = 2,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    STATE(54), 1,
      sym_newline,
  [1761] = 1,
    ACTIONS(413), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1766] = 2,
    ACTIONS(415), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(24), 1,
      sym_fence_close,
  [1773] = 2,
    ACTIONS(367), 1,
      aux_sym_newline_token1,
    STATE(13), 1,
      sym_newline,
  [1780] = 2,
    ACTIONS(251), 1,
      aux_sym_newline_token1,
    STATE(110), 1,
      sym_newline,
  [1787] = 1,
    ACTIONS(417), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1792] = 1,
    ACTIONS(419), 2,
      sym_arrow,
      sym_colon,
  [1797] = 1,
    ACTIONS(421), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1802] = 1,
    ACTIONS(423), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1807] = 1,
    ACTIONS(126), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [1812] = 2,
    ACTIONS(288), 1,
      aux_sym_newline_token1,
    STATE(59), 1,
      sym_newline,
  [1819] = 2,
    ACTIONS(76), 1,
      aux_sym_newline_token1,
    STATE(136), 1,
      sym_newline,
  [1826] = 1,
    ACTIONS(137), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [1831] = 1,
    ACTIONS(135), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [1836] = 2,
    ACTIONS(301), 1,
      aux_sym_newline_token1,
    STATE(37), 1,
      sym_newline,
  [1843] = 1,
    ACTIONS(425), 1,
      sym_colon,
  [1847] = 1,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
  [1851] = 1,
    ACTIONS(429), 1,
      sym_colon,
  [1855] = 1,
    ACTIONS(431), 1,
      sym_colon,
  [1859] = 1,
    ACTIONS(433), 1,
      sym_colon,
  [1863] = 1,
    ACTIONS(435), 1,
      sym_colon,
  [1867] = 1,
    ACTIONS(437), 1,
      sym_assign_operator,
  [1871] = 1,
    ACTIONS(439), 1,
      sym_identifier,
  [1875] = 1,
    ACTIONS(441), 1,
      sym_identifier,
  [1879] = 1,
    ACTIONS(443), 1,
      sym_identifier,
  [1883] = 1,
    ACTIONS(445), 1,
      sym_identifier,
  [1887] = 1,
    ACTIONS(447), 1,
      sym_colon,
  [1891] = 1,
    ACTIONS(449), 1,
      sym_colon,
  [1895] = 1,
    ACTIONS(451), 1,
      aux_sym_reference_token1,
  [1899] = 1,
    ACTIONS(453), 1,
      sym_identifier,
  [1903] = 1,
    ACTIONS(455), 1,
      aux_sym_newline_token1,
  [1907] = 1,
    ACTIONS(457), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 237,
  [SMALL_STATE(9)] = 268,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 322,
  [SMALL_STATE(12)] = 349,
  [SMALL_STATE(13)] = 373,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 403,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 465,
  [SMALL_STATE(20)] = 480,
  [SMALL_STATE(21)] = 495,
  [SMALL_STATE(22)] = 510,
  [SMALL_STATE(23)] = 522,
  [SMALL_STATE(24)] = 534,
  [SMALL_STATE(25)] = 546,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 594,
  [SMALL_STATE(30)] = 606,
  [SMALL_STATE(31)] = 618,
  [SMALL_STATE(32)] = 630,
  [SMALL_STATE(33)] = 647,
  [SMALL_STATE(34)] = 668,
  [SMALL_STATE(35)] = 685,
  [SMALL_STATE(36)] = 700,
  [SMALL_STATE(37)] = 723,
  [SMALL_STATE(38)] = 733,
  [SMALL_STATE(39)] = 743,
  [SMALL_STATE(40)] = 763,
  [SMALL_STATE(41)] = 773,
  [SMALL_STATE(42)] = 783,
  [SMALL_STATE(43)] = 793,
  [SMALL_STATE(44)] = 803,
  [SMALL_STATE(45)] = 813,
  [SMALL_STATE(46)] = 823,
  [SMALL_STATE(47)] = 833,
  [SMALL_STATE(48)] = 843,
  [SMALL_STATE(49)] = 853,
  [SMALL_STATE(50)] = 863,
  [SMALL_STATE(51)] = 873,
  [SMALL_STATE(52)] = 883,
  [SMALL_STATE(53)] = 893,
  [SMALL_STATE(54)] = 903,
  [SMALL_STATE(55)] = 913,
  [SMALL_STATE(56)] = 931,
  [SMALL_STATE(57)] = 941,
  [SMALL_STATE(58)] = 958,
  [SMALL_STATE(59)] = 967,
  [SMALL_STATE(60)] = 976,
  [SMALL_STATE(61)] = 993,
  [SMALL_STATE(62)] = 1002,
  [SMALL_STATE(63)] = 1016,
  [SMALL_STATE(64)] = 1030,
  [SMALL_STATE(65)] = 1046,
  [SMALL_STATE(66)] = 1060,
  [SMALL_STATE(67)] = 1070,
  [SMALL_STATE(68)] = 1078,
  [SMALL_STATE(69)] = 1086,
  [SMALL_STATE(70)] = 1099,
  [SMALL_STATE(71)] = 1110,
  [SMALL_STATE(72)] = 1123,
  [SMALL_STATE(73)] = 1134,
  [SMALL_STATE(74)] = 1147,
  [SMALL_STATE(75)] = 1158,
  [SMALL_STATE(76)] = 1169,
  [SMALL_STATE(77)] = 1175,
  [SMALL_STATE(78)] = 1185,
  [SMALL_STATE(79)] = 1195,
  [SMALL_STATE(80)] = 1205,
  [SMALL_STATE(81)] = 1211,
  [SMALL_STATE(82)] = 1221,
  [SMALL_STATE(83)] = 1231,
  [SMALL_STATE(84)] = 1241,
  [SMALL_STATE(85)] = 1251,
  [SMALL_STATE(86)] = 1261,
  [SMALL_STATE(87)] = 1271,
  [SMALL_STATE(88)] = 1281,
  [SMALL_STATE(89)] = 1291,
  [SMALL_STATE(90)] = 1297,
  [SMALL_STATE(91)] = 1303,
  [SMALL_STATE(92)] = 1311,
  [SMALL_STATE(93)] = 1321,
  [SMALL_STATE(94)] = 1331,
  [SMALL_STATE(95)] = 1341,
  [SMALL_STATE(96)] = 1351,
  [SMALL_STATE(97)] = 1357,
  [SMALL_STATE(98)] = 1363,
  [SMALL_STATE(99)] = 1369,
  [SMALL_STATE(100)] = 1375,
  [SMALL_STATE(101)] = 1381,
  [SMALL_STATE(102)] = 1391,
  [SMALL_STATE(103)] = 1397,
  [SMALL_STATE(104)] = 1403,
  [SMALL_STATE(105)] = 1413,
  [SMALL_STATE(106)] = 1423,
  [SMALL_STATE(107)] = 1429,
  [SMALL_STATE(108)] = 1439,
  [SMALL_STATE(109)] = 1445,
  [SMALL_STATE(110)] = 1455,
  [SMALL_STATE(111)] = 1461,
  [SMALL_STATE(112)] = 1467,
  [SMALL_STATE(113)] = 1477,
  [SMALL_STATE(114)] = 1487,
  [SMALL_STATE(115)] = 1493,
  [SMALL_STATE(116)] = 1503,
  [SMALL_STATE(117)] = 1510,
  [SMALL_STATE(118)] = 1515,
  [SMALL_STATE(119)] = 1522,
  [SMALL_STATE(120)] = 1529,
  [SMALL_STATE(121)] = 1536,
  [SMALL_STATE(122)] = 1543,
  [SMALL_STATE(123)] = 1548,
  [SMALL_STATE(124)] = 1555,
  [SMALL_STATE(125)] = 1562,
  [SMALL_STATE(126)] = 1569,
  [SMALL_STATE(127)] = 1574,
  [SMALL_STATE(128)] = 1581,
  [SMALL_STATE(129)] = 1586,
  [SMALL_STATE(130)] = 1591,
  [SMALL_STATE(131)] = 1598,
  [SMALL_STATE(132)] = 1605,
  [SMALL_STATE(133)] = 1612,
  [SMALL_STATE(134)] = 1617,
  [SMALL_STATE(135)] = 1624,
  [SMALL_STATE(136)] = 1631,
  [SMALL_STATE(137)] = 1636,
  [SMALL_STATE(138)] = 1643,
  [SMALL_STATE(139)] = 1648,
  [SMALL_STATE(140)] = 1655,
  [SMALL_STATE(141)] = 1662,
  [SMALL_STATE(142)] = 1669,
  [SMALL_STATE(143)] = 1674,
  [SMALL_STATE(144)] = 1681,
  [SMALL_STATE(145)] = 1686,
  [SMALL_STATE(146)] = 1693,
  [SMALL_STATE(147)] = 1700,
  [SMALL_STATE(148)] = 1707,
  [SMALL_STATE(149)] = 1714,
  [SMALL_STATE(150)] = 1719,
  [SMALL_STATE(151)] = 1726,
  [SMALL_STATE(152)] = 1733,
  [SMALL_STATE(153)] = 1740,
  [SMALL_STATE(154)] = 1747,
  [SMALL_STATE(155)] = 1754,
  [SMALL_STATE(156)] = 1761,
  [SMALL_STATE(157)] = 1766,
  [SMALL_STATE(158)] = 1773,
  [SMALL_STATE(159)] = 1780,
  [SMALL_STATE(160)] = 1787,
  [SMALL_STATE(161)] = 1792,
  [SMALL_STATE(162)] = 1797,
  [SMALL_STATE(163)] = 1802,
  [SMALL_STATE(164)] = 1807,
  [SMALL_STATE(165)] = 1812,
  [SMALL_STATE(166)] = 1819,
  [SMALL_STATE(167)] = 1826,
  [SMALL_STATE(168)] = 1831,
  [SMALL_STATE(169)] = 1836,
  [SMALL_STATE(170)] = 1843,
  [SMALL_STATE(171)] = 1847,
  [SMALL_STATE(172)] = 1851,
  [SMALL_STATE(173)] = 1855,
  [SMALL_STATE(174)] = 1859,
  [SMALL_STATE(175)] = 1863,
  [SMALL_STATE(176)] = 1867,
  [SMALL_STATE(177)] = 1871,
  [SMALL_STATE(178)] = 1875,
  [SMALL_STATE(179)] = 1879,
  [SMALL_STATE(180)] = 1883,
  [SMALL_STATE(181)] = 1887,
  [SMALL_STATE(182)] = 1891,
  [SMALL_STATE(183)] = 1895,
  [SMALL_STATE(184)] = 1899,
  [SMALL_STATE(185)] = 1903,
  [SMALL_STATE(186)] = 1907,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slash_body, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_body, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slash_body_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_slash_body_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_slash_body_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_slash_body_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 3, 0, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 3, 0, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 2, 0, 7),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 2, 0, 7),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 2, 0, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 2, 0, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 3, 0, 7),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 3, 0, 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slash_body_repeat1, 1, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_slash_body_repeat1, 1, 0, 0), REDUCE(aux_sym_thunk_body_repeat2, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_slash_body_repeat1, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fenced_declaration, 3, 0, 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 2, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slash_declaration, 2, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 9),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 2, 0, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fenced_declaration, 2, 0, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, 0, 9),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1, 0, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 13),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 20),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 20), SHIFT_REPEAT(42),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 3, 0, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 10),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 15),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 1, 0, 11),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 21),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 10),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 24),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 15),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 21),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 28),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 24),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 29),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 28),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 34),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 29),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 8, 0, 34),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_body, 1, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(167),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_directive, 2, 0, 8),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_directive, 2, 0, 8),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, 0, 19),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 12),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 31),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 31), SHIFT_REPEAT(134),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_values, 1, 0, 18),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_values, 2, 0, 25),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 33),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 23),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 23), SHIFT_REPEAT(145),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 5, 0, 26),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 12),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 30),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 2, 0, 5),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 26),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 32),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_subject, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 33),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 32),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 35),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 8, 0, 35),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_header, 4, 0, 10),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 5, 0, 10),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 16),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 14),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 22),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 4, 0, 10),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_header, 5, 0, 10),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_header, 5, 0, 24),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 27),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 14),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_header, 6, 0, 24),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, 0, 16),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_directive, 3, 0, 17),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_directive, 3, 0, 17),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [427] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slash_keyword, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_kind, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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
