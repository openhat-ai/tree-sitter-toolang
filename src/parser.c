#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 18

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_newline_token1 = 2,
  sym_comment = 3,
  sym_inline_comment = 4,
  sym_use_keyword = 5,
  sym_thunk_keyword = 6,
  sym_no_keyword = 7,
  sym_with_keyword = 8,
  sym_arrow = 9,
  sym_colon = 10,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 11,
  anon_sym_skill = 12,
  anon_sym_service = 13,
  anon_sym_prompt = 14,
  anon_sym_psyche = 15,
  anon_sym_output = 16,
  anon_sym_note = 17,
  sym_reference = 18,
  sym_language = 19,
  sym_directive_target = 20,
  sym_prompt_text = 21,
  sym_fence_text = 22,
  sym_indent = 23,
  sym_source_file = 24,
  sym_newline = 25,
  sym_blank_line = 26,
  sym_use_statement = 27,
  sym_declaration = 28,
  sym_declaration_header = 29,
  sym_thunk = 30,
  sym_thunk_header = 31,
  sym_directive_line = 32,
  sym_no_directive = 33,
  sym_with_directive = 34,
  sym_use_directive = 35,
  sym_prompt_line = 36,
  sym_fence_content_line = 37,
  sym_fence_open = 38,
  sym_fence_close = 39,
  sym_cap_kind = 40,
  sym_decl_kind = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_declaration_repeat1 = 43,
  aux_sym_thunk_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_newline_token1] = "newline_token1",
  [sym_comment] = "comment",
  [sym_inline_comment] = "inline_comment",
  [sym_use_keyword] = "use_keyword",
  [sym_thunk_keyword] = "thunk_keyword",
  [sym_no_keyword] = "no_keyword",
  [sym_with_keyword] = "with_keyword",
  [sym_arrow] = "arrow",
  [sym_colon] = "colon",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_skill] = "skill",
  [anon_sym_service] = "service",
  [anon_sym_prompt] = "prompt",
  [anon_sym_psyche] = "psyche",
  [anon_sym_output] = "output",
  [anon_sym_note] = "note",
  [sym_reference] = "reference",
  [sym_language] = "language",
  [sym_directive_target] = "directive_target",
  [sym_prompt_text] = "prompt_text",
  [sym_fence_text] = "fence_text",
  [sym_indent] = "indent",
  [sym_source_file] = "source_file",
  [sym_newline] = "newline",
  [sym_blank_line] = "blank_line",
  [sym_use_statement] = "use_statement",
  [sym_declaration] = "declaration",
  [sym_declaration_header] = "declaration_header",
  [sym_thunk] = "thunk",
  [sym_thunk_header] = "thunk_header",
  [sym_directive_line] = "directive_line",
  [sym_no_directive] = "no_directive",
  [sym_with_directive] = "with_directive",
  [sym_use_directive] = "use_directive",
  [sym_prompt_line] = "prompt_line",
  [sym_fence_content_line] = "fence_content_line",
  [sym_fence_open] = "fence_open",
  [sym_fence_close] = "fence_close",
  [sym_cap_kind] = "cap_kind",
  [sym_decl_kind] = "decl_kind",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_thunk_repeat1] = "thunk_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_newline_token1] = aux_sym_newline_token1,
  [sym_comment] = sym_comment,
  [sym_inline_comment] = sym_inline_comment,
  [sym_use_keyword] = sym_use_keyword,
  [sym_thunk_keyword] = sym_thunk_keyword,
  [sym_no_keyword] = sym_no_keyword,
  [sym_with_keyword] = sym_with_keyword,
  [sym_arrow] = sym_arrow,
  [sym_colon] = sym_colon,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_skill] = anon_sym_skill,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_prompt] = anon_sym_prompt,
  [anon_sym_psyche] = anon_sym_psyche,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_note] = anon_sym_note,
  [sym_reference] = sym_reference,
  [sym_language] = sym_language,
  [sym_directive_target] = sym_directive_target,
  [sym_prompt_text] = sym_prompt_text,
  [sym_fence_text] = sym_fence_text,
  [sym_indent] = sym_indent,
  [sym_source_file] = sym_source_file,
  [sym_newline] = sym_newline,
  [sym_blank_line] = sym_blank_line,
  [sym_use_statement] = sym_use_statement,
  [sym_declaration] = sym_declaration,
  [sym_declaration_header] = sym_declaration_header,
  [sym_thunk] = sym_thunk,
  [sym_thunk_header] = sym_thunk_header,
  [sym_directive_line] = sym_directive_line,
  [sym_no_directive] = sym_no_directive,
  [sym_with_directive] = sym_with_directive,
  [sym_use_directive] = sym_use_directive,
  [sym_prompt_line] = sym_prompt_line,
  [sym_fence_content_line] = sym_fence_content_line,
  [sym_fence_open] = sym_fence_open,
  [sym_fence_close] = sym_fence_close,
  [sym_cap_kind] = sym_cap_kind,
  [sym_decl_kind] = sym_decl_kind,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_thunk_repeat1] = aux_sym_thunk_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_use_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_no_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_with_keyword] = {
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
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psyche] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_target] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fence_text] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
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
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_header] = {
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
  [sym_directive_line] = {
    .visible = true,
    .named = true,
  },
  [sym_no_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_with_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_line] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_thunk_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arrow = 1,
  field_close = 2,
  field_colon = 3,
  field_content = 4,
  field_header = 5,
  field_indent = 6,
  field_keyword = 7,
  field_kind = 8,
  field_language = 9,
  field_name = 10,
  field_open = 11,
  field_output = 12,
  field_reference = 13,
  field_target = 14,
  field_text = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arrow] = "arrow",
  [field_close] = "close",
  [field_colon] = "colon",
  [field_content] = "content",
  [field_header] = "header",
  [field_indent] = "indent",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_language] = "language",
  [field_name] = "name",
  [field_open] = "open",
  [field_output] = "output",
  [field_reference] = "reference",
  [field_target] = "target",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 4},
  [15] = {.index = 28, .length = 4},
  [16] = {.index = 32, .length = 5},
  [17] = {.index = 37, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header, 0},
  [1] =
    {field_content, 0},
  [2] =
    {field_close, 1},
    {field_header, 0},
  [4] =
    {field_colon, 1},
    {field_keyword, 0},
  [6] =
    {field_text, 0},
  [7] =
    {field_indent, 0},
  [8] =
    {field_close, 2},
    {field_content, 1, .inherited = true},
    {field_header, 0},
  [11] =
    {field_content, 0, .inherited = true},
    {field_content, 1, .inherited = true},
  [13] =
    {field_keyword, 0},
  [14] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [17] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [20] =
    {field_indent, 0},
    {field_text, 1},
  [22] =
    {field_keyword, 0},
    {field_target, 1},
  [24] =
    {field_arrow, 1},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [28] =
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
    {field_open, 3},
  [32] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [37] =
    {field_colon, 2},
    {field_kind, 0},
    {field_language, 4},
    {field_name, 1},
    {field_open, 3},
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
  [25] = 22,
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
  [45] = 22,
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
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\f') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == '`') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(11);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(30);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\f') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_reference);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_directive_target);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_directive_target);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_directive_target);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_directive_target);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == '\f') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '\f') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '`') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'n') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'w') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_no_keyword);
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_newline_token1] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(1),
    [sym_use_keyword] = ACTIONS(1),
    [sym_thunk_keyword] = ACTIONS(1),
    [sym_no_keyword] = ACTIONS(1),
    [sym_with_keyword] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_skill] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [anon_sym_psyche] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym_newline] = STATE(23),
    [sym_blank_line] = STATE(3),
    [sym_use_statement] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_declaration_header] = STATE(31),
    [sym_thunk] = STATE(3),
    [sym_thunk_header] = STATE(5),
    [sym_decl_kind] = STATE(83),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_newline_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_use_keyword] = ACTIONS(9),
    [sym_thunk_keyword] = ACTIONS(11),
    [anon_sym_service] = ACTIONS(13),
    [anon_sym_prompt] = ACTIONS(13),
    [anon_sym_psyche] = ACTIONS(13),
    [anon_sym_output] = ACTIONS(13),
    [anon_sym_note] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_newline_token1,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_use_keyword,
    ACTIONS(26), 1,
      sym_thunk_keyword,
    STATE(5), 1,
      sym_thunk_header,
    STATE(23), 1,
      sym_newline,
    STATE(31), 1,
      sym_declaration_header,
    STATE(83), 1,
      sym_decl_kind,
    ACTIONS(29), 5,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
    STATE(2), 5,
      sym_blank_line,
      sym_use_statement,
      sym_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [42] = 11,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(9), 1,
      sym_use_keyword,
    ACTIONS(11), 1,
      sym_thunk_keyword,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_comment,
    STATE(5), 1,
      sym_thunk_header,
    STATE(23), 1,
      sym_newline,
    STATE(31), 1,
      sym_declaration_header,
    STATE(83), 1,
      sym_decl_kind,
    ACTIONS(13), 5,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
    STATE(2), 5,
      sym_blank_line,
      sym_use_statement,
      sym_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [84] = 7,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      aux_sym_newline_token1,
    ACTIONS(43), 1,
      sym_prompt_text,
    ACTIONS(45), 1,
      sym_indent,
    STATE(21), 1,
      sym_newline,
    STATE(6), 4,
      sym_blank_line,
      sym_directive_line,
      sym_prompt_line,
      aux_sym_thunk_repeat1,
    ACTIONS(41), 8,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [116] = 7,
    ACTIONS(43), 1,
      sym_prompt_text,
    ACTIONS(45), 1,
      sym_indent,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_newline_token1,
    STATE(21), 1,
      sym_newline,
    STATE(4), 4,
      sym_blank_line,
      sym_directive_line,
      sym_prompt_line,
      aux_sym_thunk_repeat1,
    ACTIONS(52), 8,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [148] = 7,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_newline_token1,
    ACTIONS(61), 1,
      sym_prompt_text,
    ACTIONS(64), 1,
      sym_indent,
    STATE(21), 1,
      sym_newline,
    STATE(6), 4,
      sym_blank_line,
      sym_directive_line,
      sym_prompt_line,
      aux_sym_thunk_repeat1,
    ACTIONS(59), 8,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [180] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [197] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [214] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [231] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [248] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [265] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [282] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [299] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [316] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [333] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [350] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [367] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [384] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [401] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [418] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [435] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 11,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
      sym_indent,
  [452] = 1,
    ACTIONS(123), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [465] = 1,
    ACTIONS(131), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [478] = 1,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [491] = 1,
    ACTIONS(133), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [504] = 1,
    ACTIONS(135), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [517] = 1,
    ACTIONS(137), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [530] = 1,
    ACTIONS(139), 10,
      ts_builtin_sym_end,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [543] = 8,
    ACTIONS(141), 1,
      aux_sym_newline_token1,
    ACTIONS(143), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(145), 1,
      sym_fence_text,
    ACTIONS(147), 1,
      sym_indent,
    STATE(24), 1,
      sym_fence_close,
    STATE(32), 1,
      aux_sym_declaration_repeat1,
    STATE(41), 1,
      sym_fence_content_line,
    STATE(42), 1,
      sym_newline,
  [568] = 8,
    ACTIONS(141), 1,
      aux_sym_newline_token1,
    ACTIONS(143), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(145), 1,
      sym_fence_text,
    ACTIONS(147), 1,
      sym_indent,
    STATE(29), 1,
      sym_fence_close,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    STATE(41), 1,
      sym_fence_content_line,
    STATE(42), 1,
      sym_newline,
  [593] = 7,
    ACTIONS(149), 1,
      aux_sym_newline_token1,
    ACTIONS(152), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(154), 1,
      sym_fence_text,
    ACTIONS(157), 1,
      sym_indent,
    STATE(32), 1,
      aux_sym_declaration_repeat1,
    STATE(41), 1,
      sym_fence_content_line,
    STATE(42), 1,
      sym_newline,
  [615] = 5,
    ACTIONS(160), 1,
      sym_use_keyword,
    ACTIONS(162), 1,
      sym_no_keyword,
    ACTIONS(164), 1,
      sym_with_keyword,
    ACTIONS(166), 1,
      sym_prompt_text,
    STATE(58), 3,
      sym_no_directive,
      sym_with_directive,
      sym_use_directive,
  [633] = 2,
    STATE(77), 1,
      sym_cap_kind,
    ACTIONS(168), 4,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
  [643] = 1,
    ACTIONS(170), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [650] = 1,
    ACTIONS(172), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [657] = 4,
    ACTIONS(174), 1,
      aux_sym_newline_token1,
    ACTIONS(176), 1,
      sym_inline_comment,
    ACTIONS(178), 1,
      sym_language,
    STATE(40), 1,
      sym_newline,
  [670] = 1,
    ACTIONS(180), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [677] = 1,
    ACTIONS(182), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [684] = 1,
    ACTIONS(184), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [691] = 1,
    ACTIONS(186), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [698] = 1,
    ACTIONS(188), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [705] = 1,
    ACTIONS(190), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [712] = 1,
    ACTIONS(192), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [719] = 1,
    ACTIONS(129), 4,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
      sym_indent,
  [726] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(194), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_newline,
  [736] = 3,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    ACTIONS(198), 1,
      sym_inline_comment,
    STATE(10), 1,
      sym_newline,
  [746] = 3,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    ACTIONS(200), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_newline,
  [756] = 3,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    ACTIONS(202), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_newline,
  [766] = 1,
    ACTIONS(204), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_language,
  [772] = 3,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym_arrow,
    ACTIONS(210), 1,
      sym_colon,
  [782] = 3,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    ACTIONS(212), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_newline,
  [792] = 3,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    ACTIONS(214), 1,
      sym_inline_comment,
    STATE(19), 1,
      sym_newline,
  [802] = 2,
    ACTIONS(218), 1,
      sym_directive_target,
    ACTIONS(216), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [810] = 3,
    ACTIONS(174), 1,
      aux_sym_newline_token1,
    ACTIONS(220), 1,
      sym_inline_comment,
    STATE(44), 1,
      sym_newline,
  [820] = 3,
    ACTIONS(141), 1,
      aux_sym_newline_token1,
    ACTIONS(222), 1,
      sym_fence_text,
    STATE(39), 1,
      sym_newline,
  [830] = 3,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    ACTIONS(224), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_newline,
  [840] = 3,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    ACTIONS(226), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_newline,
  [850] = 1,
    ACTIONS(228), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [855] = 2,
    ACTIONS(230), 1,
      sym_arrow,
    ACTIONS(232), 1,
      sym_colon,
  [862] = 1,
    ACTIONS(234), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [867] = 2,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    STATE(16), 1,
      sym_newline,
  [874] = 2,
    ACTIONS(174), 1,
      aux_sym_newline_token1,
    STATE(38), 1,
      sym_newline,
  [881] = 2,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    STATE(17), 1,
      sym_newline,
  [888] = 2,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    STATE(9), 1,
      sym_newline,
  [895] = 2,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    STATE(18), 1,
      sym_newline,
  [902] = 2,
    ACTIONS(174), 1,
      aux_sym_newline_token1,
    STATE(36), 1,
      sym_newline,
  [909] = 2,
    ACTIONS(174), 1,
      aux_sym_newline_token1,
    STATE(35), 1,
      sym_newline,
  [916] = 2,
    ACTIONS(236), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(37), 1,
      sym_fence_open,
  [923] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(28), 1,
      sym_newline,
  [930] = 2,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    STATE(11), 1,
      sym_newline,
  [937] = 2,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    STATE(20), 1,
      sym_newline,
  [944] = 2,
    ACTIONS(174), 1,
      aux_sym_newline_token1,
    STATE(43), 1,
      sym_newline,
  [951] = 2,
    ACTIONS(196), 1,
      aux_sym_newline_token1,
    STATE(15), 1,
      sym_newline,
  [958] = 1,
    ACTIONS(238), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [963] = 1,
    ACTIONS(240), 1,
      sym_identifier,
  [967] = 1,
    ACTIONS(242), 1,
      sym_reference,
  [971] = 1,
    ACTIONS(244), 1,
      sym_directive_target,
  [975] = 1,
    ACTIONS(246), 1,
      sym_colon,
  [979] = 1,
    ACTIONS(248), 1,
      sym_identifier,
  [983] = 1,
    ACTIONS(250), 1,
      sym_directive_target,
  [987] = 1,
    ACTIONS(252), 1,
      aux_sym_newline_token1,
  [991] = 1,
    ACTIONS(254), 1,
      sym_identifier,
  [995] = 1,
    ACTIONS(256), 1,
      sym_colon,
  [999] = 1,
    ACTIONS(258), 1,
      sym_identifier,
  [1003] = 1,
    ACTIONS(260), 1,
      sym_colon,
  [1007] = 1,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [1011] = 1,
    ACTIONS(264), 1,
      sym_reference,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 197,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 231,
  [SMALL_STATE(11)] = 248,
  [SMALL_STATE(12)] = 265,
  [SMALL_STATE(13)] = 282,
  [SMALL_STATE(14)] = 299,
  [SMALL_STATE(15)] = 316,
  [SMALL_STATE(16)] = 333,
  [SMALL_STATE(17)] = 350,
  [SMALL_STATE(18)] = 367,
  [SMALL_STATE(19)] = 384,
  [SMALL_STATE(20)] = 401,
  [SMALL_STATE(21)] = 418,
  [SMALL_STATE(22)] = 435,
  [SMALL_STATE(23)] = 452,
  [SMALL_STATE(24)] = 465,
  [SMALL_STATE(25)] = 478,
  [SMALL_STATE(26)] = 491,
  [SMALL_STATE(27)] = 504,
  [SMALL_STATE(28)] = 517,
  [SMALL_STATE(29)] = 530,
  [SMALL_STATE(30)] = 543,
  [SMALL_STATE(31)] = 568,
  [SMALL_STATE(32)] = 593,
  [SMALL_STATE(33)] = 615,
  [SMALL_STATE(34)] = 633,
  [SMALL_STATE(35)] = 643,
  [SMALL_STATE(36)] = 650,
  [SMALL_STATE(37)] = 657,
  [SMALL_STATE(38)] = 670,
  [SMALL_STATE(39)] = 677,
  [SMALL_STATE(40)] = 684,
  [SMALL_STATE(41)] = 691,
  [SMALL_STATE(42)] = 698,
  [SMALL_STATE(43)] = 705,
  [SMALL_STATE(44)] = 712,
  [SMALL_STATE(45)] = 719,
  [SMALL_STATE(46)] = 726,
  [SMALL_STATE(47)] = 736,
  [SMALL_STATE(48)] = 746,
  [SMALL_STATE(49)] = 756,
  [SMALL_STATE(50)] = 766,
  [SMALL_STATE(51)] = 772,
  [SMALL_STATE(52)] = 782,
  [SMALL_STATE(53)] = 792,
  [SMALL_STATE(54)] = 802,
  [SMALL_STATE(55)] = 810,
  [SMALL_STATE(56)] = 820,
  [SMALL_STATE(57)] = 830,
  [SMALL_STATE(58)] = 840,
  [SMALL_STATE(59)] = 850,
  [SMALL_STATE(60)] = 855,
  [SMALL_STATE(61)] = 862,
  [SMALL_STATE(62)] = 867,
  [SMALL_STATE(63)] = 874,
  [SMALL_STATE(64)] = 881,
  [SMALL_STATE(65)] = 888,
  [SMALL_STATE(66)] = 895,
  [SMALL_STATE(67)] = 902,
  [SMALL_STATE(68)] = 909,
  [SMALL_STATE(69)] = 916,
  [SMALL_STATE(70)] = 923,
  [SMALL_STATE(71)] = 930,
  [SMALL_STATE(72)] = 937,
  [SMALL_STATE(73)] = 944,
  [SMALL_STATE(74)] = 951,
  [SMALL_STATE(75)] = 958,
  [SMALL_STATE(76)] = 963,
  [SMALL_STATE(77)] = 967,
  [SMALL_STATE(78)] = 971,
  [SMALL_STATE(79)] = 975,
  [SMALL_STATE(80)] = 979,
  [SMALL_STATE(81)] = 983,
  [SMALL_STATE(82)] = 987,
  [SMALL_STATE(83)] = 991,
  [SMALL_STATE(84)] = 995,
  [SMALL_STATE(85)] = 999,
  [SMALL_STATE(86)] = 1003,
  [SMALL_STATE(87)] = 1007,
  [SMALL_STATE(88)] = 1011,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 2, 0, 1),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_thunk, 2, 0, 1), SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 2, 0, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 1, 0, 1),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_thunk, 1, 0, 1), SHIFT(22),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 1, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 3, 0, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 3, 0, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 2, 0, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 2, 0, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 4, 0, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 4, 0, 11),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 11),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 3, 0, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 3, 0, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 3, 0, 12),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 3, 0, 12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 3, 0, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 3, 0, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 5, 0, 14),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 14),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 5, 0, 11),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 11),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 4, 0, 12),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 4, 0, 12),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 4, 0, 6),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 4, 0, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 6, 0, 14),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 14),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 6, 0, 16),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 16),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 7, 0, 16),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 16),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 10),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, 0, 10),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 8), SHIFT_REPEAT(45),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 8),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 8), SHIFT_REPEAT(67),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 8), SHIFT_REPEAT(56),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 15),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 2, 0, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 3, 0, 12),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 2, 0, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 5, 0, 15),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 17),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 17),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_no_directive, 1, 0, 9),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_directive, 2, 0, 13),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_directive, 2, 0, 13),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 13),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_kind, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
