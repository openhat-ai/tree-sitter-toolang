#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  aux_sym_newline_token1 = 1,
  sym_comment = 2,
  sym_inline_comment = 3,
  sym_use_keyword = 4,
  sym_thunk_keyword = 5,
  sym_no_keyword = 6,
  sym_with_keyword = 7,
  sym_arrow = 8,
  sym_colon = 9,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 10,
  anon_sym_skill = 11,
  anon_sym_service = 12,
  anon_sym_prompt = 13,
  anon_sym_psyche = 14,
  anon_sym_output = 15,
  anon_sym_note = 16,
  aux_sym_identifier_token1 = 17,
  sym_reference = 18,
  sym_language = 19,
  sym_directive_target = 20,
  sym_prompt_text = 21,
  sym_fence_text = 22,
  sym_source_file = 23,
  sym_newline = 24,
  sym_blank_line = 25,
  sym_use_statement = 26,
  sym_declaration = 27,
  sym_declaration_header = 28,
  sym_thunk = 29,
  sym_thunk_header = 30,
  sym_directive_line = 31,
  sym_no_directive = 32,
  sym_with_directive = 33,
  sym_use_directive = 34,
  sym_prompt_line = 35,
  sym_fence_body = 36,
  sym_fence_content_line = 37,
  sym_fence_open = 38,
  sym_fence_close = 39,
  sym_cap_kind = 40,
  sym_decl_kind = 41,
  sym_identifier = 42,
  sym_directive_subject = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_thunk_repeat1 = 45,
  aux_sym_fence_body_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_reference] = "reference",
  [sym_language] = "language",
  [sym_directive_target] = "directive_target",
  [sym_prompt_text] = "prompt_text",
  [sym_fence_text] = "fence_text",
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
  [sym_fence_body] = "fence_body",
  [sym_fence_content_line] = "fence_content_line",
  [sym_fence_open] = "fence_open",
  [sym_fence_close] = "fence_close",
  [sym_cap_kind] = "cap_kind",
  [sym_decl_kind] = "decl_kind",
  [sym_identifier] = "identifier",
  [sym_directive_subject] = "directive_subject",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_thunk_repeat1] = "thunk_repeat1",
  [aux_sym_fence_body_repeat1] = "fence_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_reference] = sym_reference,
  [sym_language] = sym_language,
  [sym_directive_target] = sym_directive_target,
  [sym_prompt_text] = sym_prompt_text,
  [sym_fence_text] = sym_fence_text,
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
  [sym_fence_body] = sym_fence_body,
  [sym_fence_content_line] = sym_fence_content_line,
  [sym_fence_open] = sym_fence_open,
  [sym_fence_close] = sym_fence_close,
  [sym_cap_kind] = sym_cap_kind,
  [sym_decl_kind] = sym_decl_kind,
  [sym_identifier] = sym_identifier,
  [sym_directive_subject] = sym_directive_subject,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_thunk_repeat1] = aux_sym_thunk_repeat1,
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
  [aux_sym_identifier_token1] = {
    .visible = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_subject] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_thunk_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fence_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arrow = 1,
  field_body = 2,
  field_close = 3,
  field_colon = 4,
  field_header = 5,
  field_keyword = 6,
  field_kind = 7,
  field_language = 8,
  field_name = 9,
  field_open = 10,
  field_output = 11,
  field_reference = 12,
  field_subject = 13,
  field_target = 14,
  field_text = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arrow] = "arrow",
  [field_body] = "body",
  [field_close] = "close",
  [field_colon] = "colon",
  [field_header] = "header",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_language] = "language",
  [field_name] = "name",
  [field_open] = "open",
  [field_output] = "output",
  [field_reference] = "reference",
  [field_subject] = "subject",
  [field_target] = "target",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 3},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 3},
  [11] = {.index = 21, .length = 4},
  [12] = {.index = 25, .length = 4},
  [13] = {.index = 29, .length = 4},
  [14] = {.index = 33, .length = 5},
  [15] = {.index = 38, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header, 0},
  [1] =
    {field_close, 1},
    {field_header, 0},
  [3] =
    {field_keyword, 0},
  [4] =
    {field_colon, 1},
    {field_keyword, 0},
  [6] =
    {field_text, 0},
  [7] =
    {field_body, 1},
    {field_close, 2},
    {field_header, 0},
  [10] =
    {field_keyword, 0},
    {field_subject, 1},
  [12] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [15] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [18] =
    {field_colon, 1},
    {field_keyword, 0},
    {field_target, 2},
  [21] =
    {field_arrow, 1},
    {field_colon, 3},
    {field_keyword, 0},
    {field_output, 2},
  [25] =
    {field_colon, 2},
    {field_keyword, 0},
    {field_subject, 1},
    {field_target, 3},
  [29] =
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
    {field_open, 3},
  [33] =
    {field_arrow, 2},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_output, 3},
  [38] =
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
  [21] = 19,
  [22] = 22,
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
  [53] = 20,
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
  [89] = 89,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '\n', 51,
        '\r', 1,
        '#', 53,
        ':', 60,
        '=', 6,
        '`', 8,
        'n', 28,
        'o', 41,
        'p', 34,
        's', 12,
        't', 18,
        'u', 35,
        'w', 21,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(47);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '\n', 51,
        '\r', 1,
        '#', 5,
        'n', 30,
        'o', 41,
        'p', 34,
        's', 11,
        't', 18,
        'u', 35,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(48);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '\n', 51,
        '\r', 75,
        '#', 5,
        'n', 93,
        'o', 103,
        'p', 97,
        's', 83,
        't', 85,
        'u', 98,
        'w', 87,
        '\t', 74,
        '\f', 74,
        ' ', 74,
      );
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_newline_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_use_keyword);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_no_keyword);
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_no_keyword);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_skill);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_psyche);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_reference);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_directive_target);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_directive_target);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_prompt_text);
      ADVANCE_MAP(
        '\n', 51,
        '\r', 75,
        '#', 76,
        'n', 93,
        'o', 103,
        'p', 97,
        's', 83,
        't', 85,
        'u', 98,
        'w', 87,
        '\t', 74,
        '\f', 74,
        ' ', 74,
      );
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'k') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead == 'y') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_prompt_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead == '`') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_fence_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
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
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 46},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 47},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 47},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(89),
    [sym_newline] = STATE(21),
    [sym_blank_line] = STATE(5),
    [sym_use_statement] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_declaration_header] = STATE(28),
    [sym_thunk] = STATE(5),
    [sym_thunk_header] = STATE(2),
    [sym_decl_kind] = STATE(71),
    [aux_sym_source_file_repeat1] = STATE(5),
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
  [0] = 10,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_newline_token1,
    ACTIONS(22), 1,
      sym_use_keyword,
    ACTIONS(25), 1,
      sym_no_keyword,
    ACTIONS(27), 1,
      sym_with_keyword,
    ACTIONS(29), 1,
      sym_prompt_text,
    STATE(19), 1,
      sym_newline,
    STATE(40), 3,
      sym_no_directive,
      sym_with_directive,
      sym_use_directive,
    STATE(3), 4,
      sym_blank_line,
      sym_directive_line,
      sym_prompt_line,
      aux_sym_thunk_repeat1,
    ACTIONS(20), 7,
      sym_comment,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [42] = 10,
    ACTIONS(25), 1,
      sym_no_keyword,
    ACTIONS(27), 1,
      sym_with_keyword,
    ACTIONS(29), 1,
      sym_prompt_text,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_newline_token1,
    ACTIONS(38), 1,
      sym_use_keyword,
    STATE(19), 1,
      sym_newline,
    STATE(40), 3,
      sym_no_directive,
      sym_with_directive,
      sym_use_directive,
    STATE(4), 4,
      sym_blank_line,
      sym_directive_line,
      sym_prompt_line,
      aux_sym_thunk_repeat1,
    ACTIONS(36), 7,
      sym_comment,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [84] = 10,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym_newline_token1,
    ACTIONS(48), 1,
      sym_use_keyword,
    ACTIONS(51), 1,
      sym_no_keyword,
    ACTIONS(54), 1,
      sym_with_keyword,
    ACTIONS(57), 1,
      sym_prompt_text,
    STATE(19), 1,
      sym_newline,
    STATE(40), 3,
      sym_no_directive,
      sym_with_directive,
      sym_use_directive,
    STATE(4), 4,
      sym_blank_line,
      sym_directive_line,
      sym_prompt_line,
      aux_sym_thunk_repeat1,
    ACTIONS(46), 7,
      sym_comment,
      sym_thunk_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
  [126] = 11,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(9), 1,
      sym_use_keyword,
    ACTIONS(11), 1,
      sym_thunk_keyword,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_comment,
    STATE(2), 1,
      sym_thunk_header,
    STATE(21), 1,
      sym_newline,
    STATE(28), 1,
      sym_declaration_header,
    STATE(71), 1,
      sym_decl_kind,
    ACTIONS(13), 5,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
    STATE(6), 5,
      sym_blank_line,
      sym_use_statement,
      sym_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [168] = 11,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      aux_sym_newline_token1,
    ACTIONS(69), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_use_keyword,
    ACTIONS(75), 1,
      sym_thunk_keyword,
    STATE(2), 1,
      sym_thunk_header,
    STATE(21), 1,
      sym_newline,
    STATE(28), 1,
      sym_declaration_header,
    STATE(71), 1,
      sym_decl_kind,
    ACTIONS(78), 5,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
    STATE(6), 5,
      sym_blank_line,
      sym_use_statement,
      sym_declaration,
      sym_thunk,
      aux_sym_source_file_repeat1,
  [210] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [228] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [246] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [264] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [282] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [300] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [318] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [336] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [354] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [372] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [390] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [408] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [426] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [444] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 12,
      aux_sym_newline_token1,
      sym_comment,
      sym_use_keyword,
      sym_thunk_keyword,
      sym_no_keyword,
      sym_with_keyword,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_prompt_text,
  [462] = 1,
    ACTIONS(129), 10,
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
  [475] = 1,
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
  [488] = 1,
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
  [501] = 1,
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
  [514] = 1,
    ACTIONS(141), 10,
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
  [527] = 1,
    ACTIONS(143), 10,
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
  [540] = 1,
    ACTIONS(145), 10,
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
  [553] = 7,
    ACTIONS(147), 1,
      aux_sym_newline_token1,
    ACTIONS(149), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(151), 1,
      sym_fence_text,
    STATE(26), 1,
      sym_fence_close,
    STATE(54), 1,
      sym_newline,
    STATE(56), 1,
      sym_fence_body,
    STATE(29), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [576] = 5,
    ACTIONS(147), 1,
      aux_sym_newline_token1,
    ACTIONS(151), 1,
      sym_fence_text,
    ACTIONS(153), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(54), 1,
      sym_newline,
    STATE(30), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [593] = 5,
    ACTIONS(155), 1,
      aux_sym_newline_token1,
    ACTIONS(158), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(160), 1,
      sym_fence_text,
    STATE(54), 1,
      sym_newline,
    STATE(30), 2,
      sym_fence_content_line,
      aux_sym_fence_body_repeat1,
  [610] = 2,
    STATE(82), 1,
      sym_cap_kind,
    ACTIONS(163), 4,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
  [620] = 4,
    ACTIONS(167), 1,
      sym_colon,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(37), 1,
      sym_directive_subject,
    ACTIONS(165), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [634] = 4,
    ACTIONS(171), 1,
      sym_arrow,
    ACTIONS(173), 1,
      sym_colon,
    ACTIONS(175), 1,
      aux_sym_identifier_token1,
    STATE(69), 1,
      sym_identifier,
  [647] = 4,
    ACTIONS(177), 1,
      aux_sym_newline_token1,
    ACTIONS(179), 1,
      sym_inline_comment,
    ACTIONS(181), 1,
      sym_language,
    STATE(49), 1,
      sym_newline,
  [660] = 1,
    ACTIONS(183), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_colon,
  [666] = 2,
    ACTIONS(187), 1,
      sym_colon,
    ACTIONS(185), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [674] = 2,
    ACTIONS(191), 1,
      sym_colon,
    ACTIONS(189), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [682] = 2,
    ACTIONS(195), 1,
      sym_colon,
    ACTIONS(193), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [690] = 3,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    ACTIONS(199), 1,
      sym_inline_comment,
    STATE(11), 1,
      sym_newline,
  [700] = 3,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    ACTIONS(201), 1,
      sym_inline_comment,
    STATE(9), 1,
      sym_newline,
  [710] = 1,
    ACTIONS(203), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [716] = 3,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    ACTIONS(205), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_newline,
  [726] = 3,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    ACTIONS(207), 1,
      sym_inline_comment,
    STATE(27), 1,
      sym_newline,
  [736] = 1,
    ACTIONS(209), 3,
      aux_sym_newline_token1,
      sym_inline_comment,
      sym_language,
  [742] = 3,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    ACTIONS(211), 1,
      sym_inline_comment,
    STATE(8), 1,
      sym_newline,
  [752] = 3,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    ACTIONS(213), 1,
      sym_inline_comment,
    STATE(7), 1,
      sym_newline,
  [762] = 3,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    ACTIONS(215), 1,
      sym_inline_comment,
    STATE(17), 1,
      sym_newline,
  [772] = 3,
    ACTIONS(177), 1,
      aux_sym_newline_token1,
    ACTIONS(217), 1,
      sym_inline_comment,
    STATE(51), 1,
      sym_newline,
  [782] = 1,
    ACTIONS(219), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [788] = 1,
    ACTIONS(221), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [794] = 1,
    ACTIONS(223), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [800] = 1,
    ACTIONS(225), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [806] = 1,
    ACTIONS(135), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [812] = 1,
    ACTIONS(227), 3,
      aux_sym_newline_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_fence_text,
  [818] = 1,
    ACTIONS(229), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [823] = 2,
    ACTIONS(231), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(25), 1,
      sym_fence_close,
  [830] = 2,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    STATE(15), 1,
      sym_newline,
  [837] = 2,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(38), 1,
      sym_directive_subject,
  [844] = 2,
    ACTIONS(175), 1,
      aux_sym_identifier_token1,
    STATE(88), 1,
      sym_identifier,
  [851] = 2,
    ACTIONS(175), 1,
      aux_sym_identifier_token1,
    STATE(78), 1,
      sym_identifier,
  [858] = 2,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    STATE(16), 1,
      sym_newline,
  [865] = 2,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    STATE(12), 1,
      sym_newline,
  [872] = 2,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    STATE(10), 1,
      sym_newline,
  [879] = 1,
    ACTIONS(233), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [884] = 1,
    ACTIONS(235), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [889] = 1,
    ACTIONS(237), 2,
      aux_sym_newline_token1,
      sym_inline_comment,
  [894] = 2,
    ACTIONS(177), 1,
      aux_sym_newline_token1,
    STATE(50), 1,
      sym_newline,
  [901] = 2,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    STATE(13), 1,
      sym_newline,
  [908] = 2,
    ACTIONS(239), 1,
      sym_arrow,
    ACTIONS(241), 1,
      sym_colon,
  [915] = 2,
    ACTIONS(197), 1,
      aux_sym_newline_token1,
    STATE(18), 1,
      sym_newline,
  [922] = 2,
    ACTIONS(175), 1,
      aux_sym_identifier_token1,
    STATE(80), 1,
      sym_identifier,
  [929] = 2,
    ACTIONS(177), 1,
      aux_sym_newline_token1,
    STATE(52), 1,
      sym_newline,
  [936] = 2,
    ACTIONS(243), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(34), 1,
      sym_fence_open,
  [943] = 2,
    ACTIONS(177), 1,
      aux_sym_newline_token1,
    STATE(41), 1,
      sym_newline,
  [950] = 2,
    ACTIONS(5), 1,
      aux_sym_newline_token1,
    STATE(22), 1,
      sym_newline,
  [957] = 2,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(36), 1,
      sym_directive_subject,
  [964] = 1,
    ACTIONS(245), 2,
      sym_arrow,
      sym_colon,
  [969] = 1,
    ACTIONS(247), 1,
      sym_colon,
  [973] = 1,
    ACTIONS(249), 1,
      sym_directive_target,
  [977] = 1,
    ACTIONS(251), 1,
      sym_colon,
  [981] = 1,
    ACTIONS(253), 1,
      aux_sym_newline_token1,
  [985] = 1,
    ACTIONS(255), 1,
      sym_reference,
  [989] = 1,
    ACTIONS(257), 1,
      sym_directive_target,
  [993] = 1,
    ACTIONS(259), 1,
      sym_directive_target,
  [997] = 1,
    ACTIONS(261), 1,
      sym_reference,
  [1001] = 1,
    ACTIONS(263), 1,
      aux_sym_identifier_token1,
  [1005] = 1,
    ACTIONS(265), 1,
      sym_directive_target,
  [1009] = 1,
    ACTIONS(267), 1,
      sym_colon,
  [1013] = 1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 318,
  [SMALL_STATE(14)] = 336,
  [SMALL_STATE(15)] = 354,
  [SMALL_STATE(16)] = 372,
  [SMALL_STATE(17)] = 390,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 426,
  [SMALL_STATE(20)] = 444,
  [SMALL_STATE(21)] = 462,
  [SMALL_STATE(22)] = 475,
  [SMALL_STATE(23)] = 488,
  [SMALL_STATE(24)] = 501,
  [SMALL_STATE(25)] = 514,
  [SMALL_STATE(26)] = 527,
  [SMALL_STATE(27)] = 540,
  [SMALL_STATE(28)] = 553,
  [SMALL_STATE(29)] = 576,
  [SMALL_STATE(30)] = 593,
  [SMALL_STATE(31)] = 610,
  [SMALL_STATE(32)] = 620,
  [SMALL_STATE(33)] = 634,
  [SMALL_STATE(34)] = 647,
  [SMALL_STATE(35)] = 660,
  [SMALL_STATE(36)] = 666,
  [SMALL_STATE(37)] = 674,
  [SMALL_STATE(38)] = 682,
  [SMALL_STATE(39)] = 690,
  [SMALL_STATE(40)] = 700,
  [SMALL_STATE(41)] = 710,
  [SMALL_STATE(42)] = 716,
  [SMALL_STATE(43)] = 726,
  [SMALL_STATE(44)] = 736,
  [SMALL_STATE(45)] = 742,
  [SMALL_STATE(46)] = 752,
  [SMALL_STATE(47)] = 762,
  [SMALL_STATE(48)] = 772,
  [SMALL_STATE(49)] = 782,
  [SMALL_STATE(50)] = 788,
  [SMALL_STATE(51)] = 794,
  [SMALL_STATE(52)] = 800,
  [SMALL_STATE(53)] = 806,
  [SMALL_STATE(54)] = 812,
  [SMALL_STATE(55)] = 818,
  [SMALL_STATE(56)] = 823,
  [SMALL_STATE(57)] = 830,
  [SMALL_STATE(58)] = 837,
  [SMALL_STATE(59)] = 844,
  [SMALL_STATE(60)] = 851,
  [SMALL_STATE(61)] = 858,
  [SMALL_STATE(62)] = 865,
  [SMALL_STATE(63)] = 872,
  [SMALL_STATE(64)] = 879,
  [SMALL_STATE(65)] = 884,
  [SMALL_STATE(66)] = 889,
  [SMALL_STATE(67)] = 894,
  [SMALL_STATE(68)] = 901,
  [SMALL_STATE(69)] = 908,
  [SMALL_STATE(70)] = 915,
  [SMALL_STATE(71)] = 922,
  [SMALL_STATE(72)] = 929,
  [SMALL_STATE(73)] = 936,
  [SMALL_STATE(74)] = 943,
  [SMALL_STATE(75)] = 950,
  [SMALL_STATE(76)] = 957,
  [SMALL_STATE(77)] = 964,
  [SMALL_STATE(78)] = 969,
  [SMALL_STATE(79)] = 973,
  [SMALL_STATE(80)] = 977,
  [SMALL_STATE(81)] = 981,
  [SMALL_STATE(82)] = 985,
  [SMALL_STATE(83)] = 989,
  [SMALL_STATE(84)] = 993,
  [SMALL_STATE(85)] = 997,
  [SMALL_STATE(86)] = 1001,
  [SMALL_STATE(87)] = 1005,
  [SMALL_STATE(88)] = 1009,
  [SMALL_STATE(89)] = 1013,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 1, 0, 1),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_thunk, 1, 0, 1), SHIFT(20),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 1, 0, 1),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_thunk, 1, 0, 1), SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk, 2, 0, 1),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_thunk, 2, 0, 1), SHIFT(20),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk, 2, 0, 1),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_thunk, 2, 0, 1), SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_thunk_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 3, 0, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 3, 0, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 2, 0, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 2, 0, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 4, 0, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 4, 0, 9),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 3, 0, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 3, 0, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 5, 0, 11),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 11),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 5, 0, 9),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 9),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 6, 0, 11),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 11),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 6, 0, 14),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 14),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 7, 0, 14),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 14),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, 0, 8),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_close, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 8),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_body, 1, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fence_body_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_directive, 1, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_subject, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_directive, 2, 0, 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_directive, 2, 0, 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 2, 0, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_open, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 5, 0, 13),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 13),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 15),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 7, 0, 15),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_content_line, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_directive, 3, 0, 10),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 12),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_directive, 4, 0, 12),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_directive, 4, 0, 12),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_kind, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [269] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
