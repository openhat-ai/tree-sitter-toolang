#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 172
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
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
  sym_thunk_keyword = 7,
  sym_assign_operator = 8,
  sym_add_assign_operator = 9,
  sym_remove_assign_operator = 10,
  sym_arrow = 11,
  sym_colon = 12,
  sym_lparen = 13,
  sym_rparen = 14,
  sym_comma = 15,
  sym_question = 16,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 17,
  anon_sym_psyche = 18,
  anon_sym_skill = 19,
  anon_sym_service = 20,
  anon_sym_slash = 21,
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
  sym_parameter_list = 43,
  sym_parameter = 44,
  sym_type_expression = 45,
  sym_thunk = 46,
  sym_thunk_header = 47,
  sym_thunk_body = 48,
  sym_directive_line = 49,
  sym_collection_directive = 50,
  sym_model_directive = 51,
  sym_directive_values = 52,
  sym_body_line = 53,
  sym_fence_body = 54,
  sym_fence_content_line = 55,
  sym_fence_open = 56,
  sym_fence_close = 57,
  sym_cap_kind = 58,
  sym_decl_kind = 59,
  sym_collection_subject = 60,
  sym_reference = 61,
  sym_directive_value = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_struct_body_repeat1 = 64,
  aux_sym_parameter_list_repeat1 = 65,
  aux_sym_type_expression_repeat1 = 66,
  aux_sym_thunk_body_repeat1 = 67,
  aux_sym_thunk_body_repeat2 = 68,
  aux_sym_thunk_body_repeat3 = 69,
  aux_sym_directive_values_repeat1 = 70,
  aux_sym_fence_body_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_newline_token1] = "newline_token1",
  [sym_comment] = "comment",
  [sym_array_suffix] = "array_suffix",
  [sym_inline_comment] = "inline_comment",
  [sym_use_keyword] = "use_keyword",
  [sym_struct_keyword] = "struct_keyword",
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
  [anon_sym_psyche] = "psyche",
  [anon_sym_skill] = "skill",
  [anon_sym_service] = "service",
  [anon_sym_slash] = "slash",
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
  [sym_fence_open] = "fence_open",
  [sym_fence_close] = "fence_close",
  [sym_cap_kind] = "cap_kind",
  [sym_decl_kind] = "decl_kind",
  [sym_collection_subject] = "collection_subject",
  [sym_reference] = "reference",
  [sym_directive_value] = "directive_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_type_expression_repeat1] = "type_expression_repeat1",
  [aux_sym_thunk_body_repeat1] = "thunk_body_repeat1",
  [aux_sym_thunk_body_repeat2] = "thunk_body_repeat2",
  [aux_sym_thunk_body_repeat3] = "thunk_body_repeat3",
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
  [anon_sym_psyche] = anon_sym_psyche,
  [anon_sym_skill] = anon_sym_skill,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_slash] = anon_sym_slash,
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
  [sym_fence_open] = sym_fence_open,
  [sym_fence_close] = sym_fence_close,
  [sym_cap_kind] = sym_cap_kind,
  [sym_decl_kind] = sym_decl_kind,
  [sym_collection_subject] = sym_collection_subject,
  [sym_reference] = sym_reference,
  [sym_directive_value] = sym_directive_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_type_expression_repeat1] = aux_sym_type_expression_repeat1,
  [aux_sym_thunk_body_repeat1] = aux_sym_thunk_body_repeat1,
  [aux_sym_thunk_body_repeat2] = aux_sym_thunk_body_repeat2,
  [aux_sym_thunk_body_repeat3] = aux_sym_thunk_body_repeat3,
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
  [anon_sym_slash] = {
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
  [aux_sym_thunk_body_repeat3] = {
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
  [18] = 14,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 14,
  [25] = 19,
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 19,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 19,
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
  [107] = 19,
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
  [153] = 14,
  [154] = 154,
  [155] = 19,
  [156] = 19,
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
        '(', 89,
        ')', 90,
        '+', 10,
        ',', 91,
        '-', 11,
        ':', 88,
        '=', 84,
        '?', 92,
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
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(88);
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
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(93);
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
      if (lookahead == 'e') ADVANCE(95);
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
      if (lookahead == 'h') ADVANCE(100);
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
      if (lookahead == 'k') ADVANCE(82);
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
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_thunk_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_add_assign_operator);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_remove_assign_operator);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_question);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_psyche);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
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
      ACCEPT_TOKEN(anon_sym_slash);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_slash);
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
      if (lookahead == 'e') ADVANCE(96);
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
      if (lookahead == 'h') ADVANCE(101);
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
      if (lookahead == 'k') ADVANCE(83);
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
      if (lookahead == 'e') ADVANCE(95);
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
      if (lookahead == 'h') ADVANCE(100);
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
      if (lookahead == 'k') ADVANCE(82);
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
      if (lookahead == '`') ADVANCE(94);
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
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 71},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 71},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 70},
  [23] = {.lex_state = 70},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 70},
  [28] = {.lex_state = 70},
  [29] = {.lex_state = 70},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
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
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 4},
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
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_newline_token1] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_struct_keyword] = ACTIONS(1),
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
    [anon_sym_psyche] = ACTIONS(1),
    [anon_sym_skill] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_slash] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [sym_model_subject] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(165),
    [sym_newline] = STATE(24),
    [sym_blank_line] = STATE(2),
    [sym_use_statement] = STATE(2),
    [sym_fenced_declaration] = STATE(2),
    [sym_declaration_header] = STATE(32),
    [sym_struct_declaration] = STATE(2),
    [sym_struct_header] = STATE(30),
    [sym_thunk] = STATE(2),
    [sym_thunk_header] = STATE(4),
    [sym_decl_kind] = STATE(169),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_use_keyword] = ACTIONS(9),
    [sym_struct_keyword] = ACTIONS(11),
    [sym_thunk_keyword] = ACTIONS(13),
    [anon_sym_psyche] = ACTIONS(15),
    [anon_sym_service] = ACTIONS(15),
    [anon_sym_slash] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(9), 1,
      sym_use_keyword,
    ACTIONS(11), 1,
      sym_struct_keyword,
    ACTIONS(13), 1,
      sym_thunk_keyword,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_comment,
    STATE(4), 1,
      sym_thunk_header,
    STATE(24), 1,
      sym_newline,
    STATE(30), 1,
      sym_struct_header,
    STATE(32), 1,
      sym_declaration_header,
    STATE(169), 1,
      sym_decl_kind,
    ACTIONS(15), 3,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
    STATE(3), 6,
      sym_blank_line,
      sym_use_statement,
      sym_fenced_declaration,
      sym_struct_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [47] = 13,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_newline_token1,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_use_keyword,
    ACTIONS(32), 1,
      sym_struct_keyword,
    ACTIONS(35), 1,
      sym_thunk_keyword,
    STATE(4), 1,
      sym_thunk_header,
    STATE(24), 1,
      sym_newline,
    STATE(30), 1,
      sym_struct_header,
    STATE(32), 1,
      sym_declaration_header,
    STATE(169), 1,
      sym_decl_kind,
    ACTIONS(38), 3,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
    STATE(3), 6,
      sym_blank_line,
      sym_use_statement,
      sym_fenced_declaration,
      sym_struct_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [94] = 10,
    ACTIONS(41), 1,
      aux_sym_newline_token1,
    ACTIONS(45), 1,
      sym_model_subject,
    ACTIONS(47), 1,
      sym_body_text,
    STATE(18), 1,
      sym_newline,
    STATE(22), 1,
      sym_thunk_body,
    STATE(90), 1,
      sym_collection_subject,
    STATE(9), 2,
      sym_directive_line,
      aux_sym_thunk_body_repeat1,
    STATE(83), 2,
      sym_collection_directive,
      sym_model_directive,
    STATE(8), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
    ACTIONS(43), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [132] = 7,
    ACTIONS(51), 1,
      aux_sym_newline_token1,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(14), 1,
      sym_newline,
    STATE(73), 1,
      sym_struct_field,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(6), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(53), 6,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [162] = 7,
    ACTIONS(59), 1,
      aux_sym_newline_token1,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(14), 1,
      sym_newline,
    STATE(73), 1,
      sym_struct_field,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(6), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
    ACTIONS(62), 6,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [192] = 6,
    ACTIONS(41), 1,
      aux_sym_newline_token1,
    ACTIONS(47), 1,
      sym_body_text,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_newline,
    STATE(10), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
    ACTIONS(69), 7,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [219] = 6,
    ACTIONS(41), 1,
      aux_sym_newline_token1,
    ACTIONS(47), 1,
      sym_body_text,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_newline,
    STATE(10), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
    ACTIONS(73), 7,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [246] = 8,
    ACTIONS(75), 1,
      aux_sym_newline_token1,
    ACTIONS(79), 1,
      sym_model_subject,
    STATE(90), 1,
      sym_collection_subject,
    STATE(153), 1,
      sym_newline,
    STATE(11), 2,
      sym_directive_line,
      aux_sym_thunk_body_repeat1,
    STATE(37), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
    STATE(83), 2,
      sym_collection_directive,
      sym_model_directive,
    ACTIONS(77), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [277] = 6,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_newline_token1,
    ACTIONS(88), 1,
      sym_body_text,
    STATE(18), 1,
      sym_newline,
    STATE(10), 3,
      sym_blank_line,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
    ACTIONS(86), 7,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [304] = 6,
    ACTIONS(91), 1,
      aux_sym_newline_token1,
    ACTIONS(96), 1,
      sym_model_subject,
    STATE(90), 1,
      sym_collection_subject,
    STATE(11), 2,
      sym_directive_line,
      aux_sym_thunk_body_repeat1,
    STATE(83), 2,
      sym_collection_directive,
      sym_model_directive,
    ACTIONS(93), 4,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
  [328] = 2,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(101), 7,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
      sym_identifier,
  [343] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
      sym_body_text,
  [358] = 2,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(109), 7,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
      sym_identifier,
  [373] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
      sym_body_text,
  [388] = 3,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 2,
      aux_sym_newline_token1,
      sym_body_text,
    ACTIONS(120), 7,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [405] = 2,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(124), 7,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
      sym_identifier,
  [420] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
      sym_body_text,
  [435] = 2,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
    ACTIONS(128), 7,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
      sym_identifier,
  [450] = 2,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 9,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
      sym_body_text,
  [465] = 1,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [477] = 1,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [489] = 1,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [501] = 1,
    ACTIONS(107), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [513] = 1,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [525] = 1,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [537] = 1,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [549] = 1,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [561] = 1,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_struct_keyword,
      sym_thunk_keyword,
      anon_sym_psyche,
      anon_sym_service,
      anon_sym_slash,
  [573] = 6,
    ACTIONS(51), 1,
      aux_sym_newline_token1,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(14), 1,
      sym_newline,
    STATE(27), 1,
      sym_struct_body,
    STATE(73), 1,
      sym_struct_field,
    STATE(5), 3,
      sym_blank_line,
      sym_struct_field_line,
      aux_sym_struct_body_repeat1,
  [594] = 4,
    ACTIONS(148), 1,
      sym_array_suffix,
    ACTIONS(150), 1,
      sym_question,
    STATE(33), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(146), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [611] = 7,
    ACTIONS(152), 1,
      aux_sym_newline_token1,
    ACTIONS(154), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(156), 1,
      sym_fence_text,
    STATE(26), 1,
      sym_fence_close,
    STATE(74), 1,
      sym_newline,
    STATE(150), 1,
      sym_fence_body,
    STATE(57), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [634] = 4,
    ACTIONS(148), 1,
      sym_array_suffix,
    ACTIONS(160), 1,
      sym_question,
    STATE(34), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(158), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [651] = 3,
    ACTIONS(164), 1,
      sym_array_suffix,
    STATE(34), 1,
      aux_sym_type_expression_repeat1,
    ACTIONS(162), 6,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [666] = 1,
    ACTIONS(167), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [676] = 1,
    ACTIONS(169), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [686] = 6,
    ACTIONS(41), 1,
      aux_sym_newline_token1,
    ACTIONS(47), 1,
      sym_body_text,
    STATE(16), 1,
      sym_blank_line,
    STATE(18), 1,
      sym_newline,
    STATE(65), 1,
      aux_sym_thunk_body_repeat2,
    STATE(7), 2,
      sym_body_line,
      aux_sym_thunk_body_repeat3,
  [706] = 1,
    ACTIONS(171), 7,
      aux_sym_newline_token1,
      sym_array_suffix,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
      sym_question,
  [716] = 1,
    ACTIONS(173), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [726] = 1,
    ACTIONS(175), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [736] = 1,
    ACTIONS(177), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [746] = 1,
    ACTIONS(179), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [756] = 1,
    ACTIONS(181), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [766] = 1,
    ACTIONS(183), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [776] = 1,
    ACTIONS(185), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [786] = 1,
    ACTIONS(187), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [796] = 1,
    ACTIONS(189), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [806] = 1,
    ACTIONS(191), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [816] = 1,
    ACTIONS(193), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [826] = 1,
    ACTIONS(195), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [836] = 1,
    ACTIONS(197), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [846] = 1,
    ACTIONS(199), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [856] = 1,
    ACTIONS(128), 7,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
      sym_body_text,
  [866] = 1,
    ACTIONS(201), 6,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
  [875] = 1,
    ACTIONS(203), 6,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
  [884] = 5,
    ACTIONS(205), 1,
      aux_sym_newline_token1,
    ACTIONS(208), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(210), 1,
      sym_fence_text,
    STATE(74), 1,
      sym_newline,
    STATE(56), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [901] = 5,
    ACTIONS(152), 1,
      aux_sym_newline_token1,
    ACTIONS(156), 1,
      sym_fence_text,
    ACTIONS(213), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(74), 1,
      sym_newline,
    STATE(56), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [918] = 1,
    ACTIONS(126), 6,
      aux_sym_newline_token1,
      anon_sym_psyches,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_tools,
      sym_model_subject,
  [927] = 1,
    ACTIONS(215), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [935] = 4,
    ACTIONS(219), 1,
      aux_sym_reference_token1,
    STATE(69), 1,
      sym_directive_value,
    STATE(146), 1,
      sym_directive_values,
    ACTIONS(217), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [949] = 5,
    ACTIONS(221), 1,
      sym_arrow,
    ACTIONS(223), 1,
      sym_colon,
    ACTIONS(225), 1,
      sym_lparen,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(145), 1,
      sym_parameter_list,
  [965] = 1,
    ACTIONS(229), 5,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
      sym_rparen,
      sym_comma,
  [973] = 4,
    ACTIONS(219), 1,
      aux_sym_reference_token1,
    STATE(69), 1,
      sym_directive_value,
    STATE(140), 1,
      sym_directive_values,
    ACTIONS(231), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [987] = 2,
    STATE(149), 1,
      sym_cap_kind,
    ACTIONS(233), 4,
      anon_sym_psyche,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_slash,
  [997] = 4,
    ACTIONS(235), 1,
      aux_sym_newline_token1,
    ACTIONS(238), 1,
      sym_body_text,
    STATE(153), 1,
      sym_newline,
    STATE(65), 2,
      sym_blank_line,
      aux_sym_thunk_body_repeat2,
  [1011] = 3,
    ACTIONS(242), 1,
      sym_comma,
    STATE(70), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(240), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1022] = 4,
    ACTIONS(244), 1,
      aux_sym_newline_token1,
    ACTIONS(246), 1,
      sym_inline_comment,
    ACTIONS(248), 1,
      sym_language,
    STATE(100), 1,
      sym_newline,
  [1035] = 3,
    ACTIONS(250), 1,
      sym_colon,
    ACTIONS(254), 1,
      sym_question,
    ACTIONS(252), 2,
      sym_rparen,
      sym_comma,
  [1046] = 3,
    ACTIONS(242), 1,
      sym_comma,
    STATE(66), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(256), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1057] = 3,
    ACTIONS(260), 1,
      sym_comma,
    STATE(70), 1,
      aux_sym_directive_values_repeat1,
    ACTIONS(258), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1068] = 4,
    ACTIONS(225), 1,
      sym_lparen,
    ACTIONS(263), 1,
      sym_arrow,
    ACTIONS(265), 1,
      sym_colon,
    STATE(148), 1,
      sym_parameter_list,
  [1081] = 4,
    ACTIONS(244), 1,
      aux_sym_newline_token1,
    ACTIONS(267), 1,
      sym_inline_comment,
    ACTIONS(269), 1,
      sym_language,
    STATE(92), 1,
      sym_newline,
  [1094] = 3,
    ACTIONS(51), 1,
      aux_sym_newline_token1,
    ACTIONS(271), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_newline,
  [1104] = 1,
    ACTIONS(273), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1110] = 3,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    ACTIONS(277), 1,
      sym_inline_comment,
    STATE(41), 1,
      sym_newline,
  [1120] = 2,
    ACTIONS(279), 1,
      sym_colon,
    ACTIONS(281), 2,
      sym_rparen,
      sym_comma,
  [1128] = 3,
    ACTIONS(283), 1,
      sym_rparen,
    ACTIONS(285), 1,
      sym_comma,
    STATE(86), 1,
      aux_sym_parameter_list_repeat1,
  [1138] = 3,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    ACTIONS(287), 1,
      sym_inline_comment,
    STATE(43), 1,
      sym_newline,
  [1148] = 1,
    ACTIONS(289), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [1154] = 3,
    ACTIONS(285), 1,
      sym_comma,
    ACTIONS(291), 1,
      sym_rparen,
    STATE(77), 1,
      aux_sym_parameter_list_repeat1,
  [1164] = 3,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    ACTIONS(293), 1,
      sym_inline_comment,
    STATE(39), 1,
      sym_newline,
  [1174] = 1,
    ACTIONS(295), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_language,
  [1180] = 3,
    ACTIONS(297), 1,
      aux_sym_newline_token1,
    ACTIONS(299), 1,
      sym_inline_comment,
    STATE(55), 1,
      sym_newline,
  [1190] = 3,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    ACTIONS(301), 1,
      sym_inline_comment,
    STATE(40), 1,
      sym_newline,
  [1200] = 1,
    ACTIONS(303), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1206] = 3,
    ACTIONS(305), 1,
      sym_rparen,
    ACTIONS(307), 1,
      sym_comma,
    STATE(86), 1,
      aux_sym_parameter_list_repeat1,
  [1216] = 3,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    ACTIONS(310), 1,
      sym_inline_comment,
    STATE(46), 1,
      sym_newline,
  [1226] = 3,
    ACTIONS(225), 1,
      sym_lparen,
    ACTIONS(312), 1,
      sym_colon,
    STATE(167), 1,
      sym_parameter_list,
  [1236] = 3,
    ACTIONS(314), 1,
      aux_sym_newline_token1,
    ACTIONS(316), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_newline,
  [1246] = 1,
    ACTIONS(318), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [1252] = 3,
    ACTIONS(244), 1,
      aux_sym_newline_token1,
    ACTIONS(320), 1,
      sym_inline_comment,
    STATE(98), 1,
      sym_newline,
  [1262] = 1,
    ACTIONS(322), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1268] = 3,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    ACTIONS(324), 1,
      sym_inline_comment,
    STATE(36), 1,
      sym_newline,
  [1278] = 3,
    ACTIONS(326), 1,
      sym_rparen,
    ACTIONS(328), 1,
      sym_identifier,
    STATE(80), 1,
      sym_parameter,
  [1288] = 3,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    ACTIONS(330), 1,
      sym_inline_comment,
    STATE(50), 1,
      sym_newline,
  [1298] = 1,
    ACTIONS(332), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_comma,
  [1304] = 1,
    ACTIONS(334), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1310] = 1,
    ACTIONS(336), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1316] = 3,
    ACTIONS(244), 1,
      aux_sym_newline_token1,
    ACTIONS(338), 1,
      sym_inline_comment,
    STATE(105), 1,
      sym_newline,
  [1326] = 1,
    ACTIONS(340), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1332] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(342), 1,
      sym_inline_comment,
    STATE(29), 1,
      sym_newline,
  [1342] = 3,
    ACTIONS(344), 1,
      aux_sym_newline_token1,
    ACTIONS(346), 1,
      sym_inline_comment,
    STATE(120), 1,
      sym_newline,
  [1352] = 1,
    ACTIONS(348), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1358] = 1,
    ACTIONS(350), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1364] = 1,
    ACTIONS(352), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1370] = 1,
    ACTIONS(354), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1376] = 1,
    ACTIONS(128), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [1382] = 1,
    ACTIONS(356), 3,
      sym_assign_operator,
      sym_add_assign_operator,
      sym_remove_assign_operator,
  [1388] = 3,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    ACTIONS(358), 1,
      sym_inline_comment,
    STATE(48), 1,
      sym_newline,
  [1398] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(135), 1,
      sym_type_expression,
  [1405] = 1,
    ACTIONS(362), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [1410] = 2,
    ACTIONS(344), 1,
      aux_sym_newline_token1,
    STATE(111), 1,
      sym_newline,
  [1417] = 2,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    STATE(45), 1,
      sym_newline,
  [1424] = 1,
    ACTIONS(364), 2,
      sym_arrow,
      sym_colon,
  [1429] = 1,
    ACTIONS(366), 2,
      sym_rparen,
      sym_comma,
  [1434] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(129), 1,
      sym_type_expression,
  [1441] = 1,
    ACTIONS(368), 2,
      sym_rparen,
      sym_comma,
  [1446] = 1,
    ACTIONS(370), 2,
      sym_arrow,
      sym_colon,
  [1451] = 2,
    ACTIONS(328), 1,
      sym_identifier,
    STATE(117), 1,
      sym_parameter,
  [1458] = 1,
    ACTIONS(372), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [1463] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(171), 1,
      sym_type_expression,
  [1470] = 2,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    STATE(47), 1,
      sym_newline,
  [1477] = 2,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    STATE(42), 1,
      sym_newline,
  [1484] = 2,
    ACTIONS(219), 1,
      aux_sym_reference_token1,
    STATE(96), 1,
      sym_directive_value,
  [1491] = 2,
    ACTIONS(51), 1,
      aux_sym_newline_token1,
    STATE(17), 1,
      sym_newline,
  [1498] = 2,
    ACTIONS(244), 1,
      aux_sym_newline_token1,
    STATE(97), 1,
      sym_newline,
  [1505] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(163), 1,
      sym_type_expression,
  [1512] = 2,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    STATE(44), 1,
      sym_newline,
  [1519] = 1,
    ACTIONS(374), 2,
      sym_rparen,
      sym_comma,
  [1524] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(115), 1,
      sym_type_expression,
  [1531] = 1,
    ACTIONS(376), 2,
      sym_arrow,
      sym_colon,
  [1536] = 2,
    ACTIONS(314), 1,
      aux_sym_newline_token1,
    STATE(15), 1,
      sym_newline,
  [1543] = 2,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    STATE(51), 1,
      sym_newline,
  [1550] = 1,
    ACTIONS(378), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1555] = 1,
    ACTIONS(380), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1560] = 2,
    ACTIONS(297), 1,
      aux_sym_newline_token1,
    STATE(54), 1,
      sym_newline,
  [1567] = 2,
    ACTIONS(244), 1,
      aux_sym_newline_token1,
    STATE(103), 1,
      sym_newline,
  [1574] = 2,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    STATE(35), 1,
      sym_newline,
  [1581] = 2,
    ACTIONS(244), 1,
      aux_sym_newline_token1,
    STATE(104), 1,
      sym_newline,
  [1588] = 1,
    ACTIONS(382), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1593] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(28), 1,
      sym_newline,
  [1600] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(162), 1,
      sym_type_expression,
  [1607] = 2,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    STATE(52), 1,
      sym_newline,
  [1614] = 2,
    ACTIONS(244), 1,
      aux_sym_newline_token1,
    STATE(85), 1,
      sym_newline,
  [1621] = 2,
    ACTIONS(384), 1,
      sym_arrow,
    ACTIONS(386), 1,
      sym_colon,
  [1628] = 1,
    ACTIONS(388), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [1633] = 2,
    ACTIONS(244), 1,
      aux_sym_newline_token1,
    STATE(106), 1,
      sym_newline,
  [1640] = 2,
    ACTIONS(390), 1,
      sym_arrow,
    ACTIONS(392), 1,
      sym_colon,
  [1647] = 2,
    ACTIONS(394), 1,
      aux_sym_reference_token1,
    STATE(101), 1,
      sym_reference,
  [1654] = 2,
    ACTIONS(396), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(21), 1,
      sym_fence_close,
  [1661] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(159), 1,
      sym_type_expression,
  [1668] = 2,
    ACTIONS(398), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(67), 1,
      sym_fence_open,
  [1675] = 1,
    ACTIONS(109), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [1680] = 2,
    ACTIONS(398), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(72), 1,
      sym_fence_open,
  [1687] = 1,
    ACTIONS(128), 2,
      aux_sym_newline_token1,
      sym_body_text,
  [1692] = 1,
    ACTIONS(126), 2,
      aux_sym_newline_token1,
      sym_identifier,
  [1697] = 2,
    ACTIONS(275), 1,
      aux_sym_newline_token1,
    STATE(49), 1,
      sym_newline,
  [1704] = 1,
    ACTIONS(400), 1,
      aux_sym_reference_token1,
  [1708] = 1,
    ACTIONS(402), 1,
      sym_colon,
  [1712] = 1,
    ACTIONS(404), 1,
      sym_colon,
  [1716] = 1,
    ACTIONS(406), 1,
      sym_identifier,
  [1720] = 1,
    ACTIONS(408), 1,
      sym_colon,
  [1724] = 1,
    ACTIONS(410), 1,
      sym_colon,
  [1728] = 1,
    ACTIONS(412), 1,
      sym_assign_operator,
  [1732] = 1,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
  [1736] = 1,
    ACTIONS(416), 1,
      sym_identifier,
  [1740] = 1,
    ACTIONS(418), 1,
      sym_colon,
  [1744] = 1,
    ACTIONS(420), 1,
      aux_sym_newline_token1,
  [1748] = 1,
    ACTIONS(422), 1,
      sym_identifier,
  [1752] = 1,
    ACTIONS(424), 1,
      sym_colon,
  [1756] = 1,
    ACTIONS(426), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 304,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 343,
  [SMALL_STATE(14)] = 358,
  [SMALL_STATE(15)] = 373,
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 420,
  [SMALL_STATE(19)] = 435,
  [SMALL_STATE(20)] = 450,
  [SMALL_STATE(21)] = 465,
  [SMALL_STATE(22)] = 477,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 501,
  [SMALL_STATE(25)] = 513,
  [SMALL_STATE(26)] = 525,
  [SMALL_STATE(27)] = 537,
  [SMALL_STATE(28)] = 549,
  [SMALL_STATE(29)] = 561,
  [SMALL_STATE(30)] = 573,
  [SMALL_STATE(31)] = 594,
  [SMALL_STATE(32)] = 611,
  [SMALL_STATE(33)] = 634,
  [SMALL_STATE(34)] = 651,
  [SMALL_STATE(35)] = 666,
  [SMALL_STATE(36)] = 676,
  [SMALL_STATE(37)] = 686,
  [SMALL_STATE(38)] = 706,
  [SMALL_STATE(39)] = 716,
  [SMALL_STATE(40)] = 726,
  [SMALL_STATE(41)] = 736,
  [SMALL_STATE(42)] = 746,
  [SMALL_STATE(43)] = 756,
  [SMALL_STATE(44)] = 766,
  [SMALL_STATE(45)] = 776,
  [SMALL_STATE(46)] = 786,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 816,
  [SMALL_STATE(50)] = 826,
  [SMALL_STATE(51)] = 836,
  [SMALL_STATE(52)] = 846,
  [SMALL_STATE(53)] = 856,
  [SMALL_STATE(54)] = 866,
  [SMALL_STATE(55)] = 875,
  [SMALL_STATE(56)] = 884,
  [SMALL_STATE(57)] = 901,
  [SMALL_STATE(58)] = 918,
  [SMALL_STATE(59)] = 927,
  [SMALL_STATE(60)] = 935,
  [SMALL_STATE(61)] = 949,
  [SMALL_STATE(62)] = 965,
  [SMALL_STATE(63)] = 973,
  [SMALL_STATE(64)] = 987,
  [SMALL_STATE(65)] = 997,
  [SMALL_STATE(66)] = 1011,
  [SMALL_STATE(67)] = 1022,
  [SMALL_STATE(68)] = 1035,
  [SMALL_STATE(69)] = 1046,
  [SMALL_STATE(70)] = 1057,
  [SMALL_STATE(71)] = 1068,
  [SMALL_STATE(72)] = 1081,
  [SMALL_STATE(73)] = 1094,
  [SMALL_STATE(74)] = 1104,
  [SMALL_STATE(75)] = 1110,
  [SMALL_STATE(76)] = 1120,
  [SMALL_STATE(77)] = 1128,
  [SMALL_STATE(78)] = 1138,
  [SMALL_STATE(79)] = 1148,
  [SMALL_STATE(80)] = 1154,
  [SMALL_STATE(81)] = 1164,
  [SMALL_STATE(82)] = 1174,
  [SMALL_STATE(83)] = 1180,
  [SMALL_STATE(84)] = 1190,
  [SMALL_STATE(85)] = 1200,
  [SMALL_STATE(86)] = 1206,
  [SMALL_STATE(87)] = 1216,
  [SMALL_STATE(88)] = 1226,
  [SMALL_STATE(89)] = 1236,
  [SMALL_STATE(90)] = 1246,
  [SMALL_STATE(91)] = 1252,
  [SMALL_STATE(92)] = 1262,
  [SMALL_STATE(93)] = 1268,
  [SMALL_STATE(94)] = 1278,
  [SMALL_STATE(95)] = 1288,
  [SMALL_STATE(96)] = 1298,
  [SMALL_STATE(97)] = 1304,
  [SMALL_STATE(98)] = 1310,
  [SMALL_STATE(99)] = 1316,
  [SMALL_STATE(100)] = 1326,
  [SMALL_STATE(101)] = 1332,
  [SMALL_STATE(102)] = 1342,
  [SMALL_STATE(103)] = 1352,
  [SMALL_STATE(104)] = 1358,
  [SMALL_STATE(105)] = 1364,
  [SMALL_STATE(106)] = 1370,
  [SMALL_STATE(107)] = 1376,
  [SMALL_STATE(108)] = 1382,
  [SMALL_STATE(109)] = 1388,
  [SMALL_STATE(110)] = 1398,
  [SMALL_STATE(111)] = 1405,
  [SMALL_STATE(112)] = 1410,
  [SMALL_STATE(113)] = 1417,
  [SMALL_STATE(114)] = 1424,
  [SMALL_STATE(115)] = 1429,
  [SMALL_STATE(116)] = 1434,
  [SMALL_STATE(117)] = 1441,
  [SMALL_STATE(118)] = 1446,
  [SMALL_STATE(119)] = 1451,
  [SMALL_STATE(120)] = 1458,
  [SMALL_STATE(121)] = 1463,
  [SMALL_STATE(122)] = 1470,
  [SMALL_STATE(123)] = 1477,
  [SMALL_STATE(124)] = 1484,
  [SMALL_STATE(125)] = 1491,
  [SMALL_STATE(126)] = 1498,
  [SMALL_STATE(127)] = 1505,
  [SMALL_STATE(128)] = 1512,
  [SMALL_STATE(129)] = 1519,
  [SMALL_STATE(130)] = 1524,
  [SMALL_STATE(131)] = 1531,
  [SMALL_STATE(132)] = 1536,
  [SMALL_STATE(133)] = 1543,
  [SMALL_STATE(134)] = 1550,
  [SMALL_STATE(135)] = 1555,
  [SMALL_STATE(136)] = 1560,
  [SMALL_STATE(137)] = 1567,
  [SMALL_STATE(138)] = 1574,
  [SMALL_STATE(139)] = 1581,
  [SMALL_STATE(140)] = 1588,
  [SMALL_STATE(141)] = 1593,
  [SMALL_STATE(142)] = 1600,
  [SMALL_STATE(143)] = 1607,
  [SMALL_STATE(144)] = 1614,
  [SMALL_STATE(145)] = 1621,
  [SMALL_STATE(146)] = 1628,
  [SMALL_STATE(147)] = 1633,
  [SMALL_STATE(148)] = 1640,
  [SMALL_STATE(149)] = 1647,
  [SMALL_STATE(150)] = 1654,
  [SMALL_STATE(151)] = 1661,
  [SMALL_STATE(152)] = 1668,
  [SMALL_STATE(153)] = 1675,
  [SMALL_STATE(154)] = 1680,
  [SMALL_STATE(155)] = 1687,
  [SMALL_STATE(156)] = 1692,
  [SMALL_STATE(157)] = 1697,
  [SMALL_STATE(158)] = 1704,
  [SMALL_STATE(159)] = 1708,
  [SMALL_STATE(160)] = 1712,
  [SMALL_STATE(161)] = 1716,
  [SMALL_STATE(162)] = 1720,
  [SMALL_STATE(163)] = 1724,
  [SMALL_STATE(164)] = 1728,
  [SMALL_STATE(165)] = 1732,
  [SMALL_STATE(166)] = 1736,
  [SMALL_STATE(167)] = 1740,
  [SMALL_STATE(168)] = 1744,
  [SMALL_STATE(169)] = 1748,
  [SMALL_STATE(170)] = 1752,
  [SMALL_STATE(171)] = 1756,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_body, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_body, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0), SHIFT_REPEAT(20),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 2, 0, 0), SHIFT_REPEAT(89),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 2, 0, 7),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 2, 0, 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 2, 0, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 2, 0, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 3, 0, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 3, 0, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 1, 0, 0), REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat3, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_line, 3, 0, 7),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_line, 3, 0, 7),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fenced_declaration, 3, 0, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 2, 0, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fenced_declaration, 2, 0, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 2, 0, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, 0, 9),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 9),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1, 0, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 13),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 20),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 2, 0, 20), SHIFT_REPEAT(38),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 3, 0, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_expression_repeat1, 1, 0, 11),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 10),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 15),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 21),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 24),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 15),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 21),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 28),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 24),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 29),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 28),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 34),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 29),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 8, 0, 34),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 2, 0, 0),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_body, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, 0, 19),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_directive, 2, 0, 8),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2, 0, 12),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_directive, 2, 0, 8),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0), SHIFT_REPEAT(155),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_body_repeat2, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_values, 2, 0, 25),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_values, 1, 0, 18),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 31),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 31), SHIFT_REPEAT(124),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 12),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 2, 0, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 23),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 23), SHIFT_REPEAT(119),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 5, 0, 26),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_values_repeat1, 2, 0, 30),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 26),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 32),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 33),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 32),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 33),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 35),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 8, 0, 35),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_subject, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 5, 0, 10),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 14),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 16),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 14),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 22),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_header, 4, 0, 10),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 27),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, 0, 16),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_directive, 3, 0, 17),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_directive, 3, 0, 17),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [414] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_kind, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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
