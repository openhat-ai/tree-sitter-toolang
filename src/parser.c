#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_newline = 2,
  sym_comment = 3,
  anon_sym_use = 4,
  anon_sym_COLON = 5,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 6,
  anon_sym_thunk = 7,
  anon_sym_EQ_GT = 8,
  anon_sym_no = 9,
  anon_sym_with = 10,
  sym_indent = 11,
  anon_sym_skill = 12,
  anon_sym_service = 13,
  anon_sym_prompt = 14,
  anon_sym_psyche = 15,
  anon_sym_output = 16,
  anon_sym_note = 17,
  sym_reference = 18,
  sym_language = 19,
  sym_line_value = 20,
  sym_text = 21,
  sym_source_file = 22,
  sym_use_statement = 23,
  sym_declaration_header = 24,
  sym_fence_delimiter_inline = 25,
  sym_fence_delimiter = 26,
  sym_thunk_header = 27,
  sym_directive_line = 28,
  sym_prompt_line = 29,
  sym_cap_kind = 30,
  sym_decl_kind = 31,
  aux_sym_source_file_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_newline] = "newline",
  [sym_comment] = "comment",
  [anon_sym_use] = "use",
  [anon_sym_COLON] = ":",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_thunk] = "thunk",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_no] = "no",
  [anon_sym_with] = "with",
  [sym_indent] = "indent",
  [anon_sym_skill] = "skill",
  [anon_sym_service] = "service",
  [anon_sym_prompt] = "prompt",
  [anon_sym_psyche] = "psyche",
  [anon_sym_output] = "output",
  [anon_sym_note] = "note",
  [sym_reference] = "reference",
  [sym_language] = "language",
  [sym_line_value] = "line_value",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_use_statement] = "use_statement",
  [sym_declaration_header] = "declaration_header",
  [sym_fence_delimiter_inline] = "fence_delimiter_inline",
  [sym_fence_delimiter] = "fence_delimiter",
  [sym_thunk_header] = "thunk_header",
  [sym_directive_line] = "directive_line",
  [sym_prompt_line] = "prompt_line",
  [sym_cap_kind] = "cap_kind",
  [sym_decl_kind] = "decl_kind",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_newline] = sym_newline,
  [sym_comment] = sym_comment,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_thunk] = anon_sym_thunk,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_with] = anon_sym_with,
  [sym_indent] = sym_indent,
  [anon_sym_skill] = anon_sym_skill,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_prompt] = anon_sym_prompt,
  [anon_sym_psyche] = anon_sym_psyche,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_note] = anon_sym_note,
  [sym_reference] = sym_reference,
  [sym_language] = sym_language,
  [sym_line_value] = sym_line_value,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_use_statement] = sym_use_statement,
  [sym_declaration_header] = sym_declaration_header,
  [sym_fence_delimiter_inline] = sym_fence_delimiter_inline,
  [sym_fence_delimiter] = sym_fence_delimiter,
  [sym_thunk_header] = sym_thunk_header,
  [sym_directive_line] = sym_directive_line,
  [sym_prompt_line] = sym_prompt_line,
  [sym_cap_kind] = sym_cap_kind,
  [sym_decl_kind] = sym_decl_kind,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thunk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
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
  [sym_line_value] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_header] = {
    .visible = true,
    .named = true,
  },
  [sym_fence_delimiter_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_fence_delimiter] = {
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
  [sym_prompt_line] = {
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
};

enum ts_field_identifiers {
  field_fence = 1,
  field_kind = 2,
  field_language = 3,
  field_name = 4,
  field_output = 5,
  field_reference = 6,
  field_target = 7,
  field_text = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_fence] = "fence",
  [field_kind] = "kind",
  [field_language] = "language",
  [field_name] = "name",
  [field_output] = "output",
  [field_reference] = "reference",
  [field_target] = "target",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 3},
  [10] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_text, 0},
  [1] =
    {field_target, 1},
  [2] =
    {field_language, 1},
  [3] =
    {field_text, 1},
  [4] =
    {field_kind, 1},
    {field_reference, 2},
  [6] =
    {field_name, 1},
  [7] =
    {field_target, 2},
  [8] =
    {field_output, 2},
  [9] =
    {field_fence, 3},
    {field_kind, 0},
    {field_name, 1},
  [12] =
    {field_name, 1},
    {field_output, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '`') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\f') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_indent);
      if (lookahead == '\f') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_reference);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_line_value);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_line_value);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_line_value);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_line_value);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_line_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\f') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
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
      ACCEPT_TOKEN(anon_sym_no);
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
      ACCEPT_TOKEN(anon_sym_use);
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
      ACCEPT_TOKEN(anon_sym_with);
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
      ACCEPT_TOKEN(anon_sym_thunk);
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
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_thunk] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_skill] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [anon_sym_psyche] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_use_statement] = STATE(2),
    [sym_declaration_header] = STATE(2),
    [sym_fence_delimiter] = STATE(2),
    [sym_thunk_header] = STATE(2),
    [sym_directive_line] = STATE(2),
    [sym_prompt_line] = STATE(2),
    [sym_decl_kind] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(9),
    [anon_sym_thunk] = ACTIONS(11),
    [anon_sym_no] = ACTIONS(13),
    [anon_sym_with] = ACTIONS(15),
    [sym_indent] = ACTIONS(17),
    [anon_sym_service] = ACTIONS(19),
    [anon_sym_prompt] = ACTIONS(19),
    [anon_sym_psyche] = ACTIONS(19),
    [anon_sym_output] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [2] = {
    [sym_use_statement] = STATE(3),
    [sym_declaration_header] = STATE(3),
    [sym_fence_delimiter] = STATE(3),
    [sym_thunk_header] = STATE(3),
    [sym_directive_line] = STATE(3),
    [sym_prompt_line] = STATE(3),
    [sym_decl_kind] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_newline] = ACTIONS(25),
    [sym_comment] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(9),
    [anon_sym_thunk] = ACTIONS(11),
    [anon_sym_no] = ACTIONS(13),
    [anon_sym_with] = ACTIONS(15),
    [sym_indent] = ACTIONS(17),
    [anon_sym_service] = ACTIONS(19),
    [anon_sym_prompt] = ACTIONS(19),
    [anon_sym_psyche] = ACTIONS(19),
    [anon_sym_output] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [3] = {
    [sym_use_statement] = STATE(3),
    [sym_declaration_header] = STATE(3),
    [sym_fence_delimiter] = STATE(3),
    [sym_thunk_header] = STATE(3),
    [sym_directive_line] = STATE(3),
    [sym_prompt_line] = STATE(3),
    [sym_decl_kind] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_newline] = ACTIONS(29),
    [sym_comment] = ACTIONS(29),
    [anon_sym_use] = ACTIONS(32),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(35),
    [anon_sym_thunk] = ACTIONS(38),
    [anon_sym_no] = ACTIONS(41),
    [anon_sym_with] = ACTIONS(44),
    [sym_indent] = ACTIONS(47),
    [anon_sym_service] = ACTIONS(50),
    [anon_sym_prompt] = ACTIONS(50),
    [anon_sym_psyche] = ACTIONS(50),
    [anon_sym_output] = ACTIONS(50),
    [anon_sym_note] = ACTIONS(50),
    [sym_text] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [20] = 2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [40] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [60] = 2,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [80] = 2,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [100] = 2,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [120] = 2,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [140] = 2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [160] = 2,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [180] = 2,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [200] = 2,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [220] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [240] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [260] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [280] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [300] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [320] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [340] = 2,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [360] = 2,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [380] = 2,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [400] = 2,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [420] = 2,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [440] = 2,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [460] = 2,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [480] = 2,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [500] = 2,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [520] = 2,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 14,
      sym_newline,
      sym_comment,
      anon_sym_use,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_thunk,
      anon_sym_no,
      anon_sym_with,
      sym_indent,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
      anon_sym_output,
      anon_sym_note,
      sym_text,
  [540] = 3,
    ACTIONS(166), 1,
      sym_line_value,
    STATE(73), 1,
      sym_cap_kind,
    ACTIONS(164), 4,
      anon_sym_skill,
      anon_sym_service,
      anon_sym_prompt,
      anon_sym_psyche,
  [553] = 3,
    ACTIONS(170), 1,
      anon_sym_no,
    ACTIONS(172), 1,
      sym_text,
    ACTIONS(168), 2,
      anon_sym_use,
      anon_sym_with,
  [564] = 3,
    ACTIONS(174), 1,
      sym_newline,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_language,
  [574] = 2,
    ACTIONS(182), 1,
      sym_language,
    ACTIONS(180), 2,
      sym_newline,
      sym_comment,
  [582] = 3,
    ACTIONS(166), 1,
      sym_line_value,
    ACTIONS(184), 1,
      sym_newline,
    ACTIONS(186), 1,
      sym_comment,
  [592] = 3,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_COLON,
    ACTIONS(192), 1,
      anon_sym_EQ_GT,
  [602] = 3,
    ACTIONS(194), 1,
      sym_newline,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_line_value,
  [612] = 1,
    ACTIONS(200), 2,
      sym_newline,
      sym_comment,
  [617] = 2,
    ACTIONS(202), 1,
      sym_newline,
    ACTIONS(204), 1,
      sym_comment,
  [624] = 2,
    ACTIONS(206), 1,
      sym_newline,
    ACTIONS(208), 1,
      sym_comment,
  [631] = 2,
    ACTIONS(210), 1,
      sym_newline,
    ACTIONS(212), 1,
      sym_comment,
  [638] = 2,
    ACTIONS(214), 1,
      sym_newline,
    ACTIONS(216), 1,
      sym_comment,
  [645] = 2,
    ACTIONS(218), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(48), 1,
      sym_fence_delimiter_inline,
  [652] = 2,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(222), 1,
      anon_sym_EQ_GT,
  [659] = 2,
    ACTIONS(224), 1,
      sym_newline,
    ACTIONS(226), 1,
      sym_comment,
  [666] = 2,
    ACTIONS(228), 1,
      sym_newline,
    ACTIONS(230), 1,
      sym_comment,
  [673] = 2,
    ACTIONS(232), 1,
      sym_newline,
    ACTIONS(234), 1,
      sym_comment,
  [680] = 2,
    ACTIONS(236), 1,
      sym_newline,
    ACTIONS(238), 1,
      sym_comment,
  [687] = 2,
    ACTIONS(240), 1,
      sym_newline,
    ACTIONS(242), 1,
      sym_comment,
  [694] = 2,
    ACTIONS(244), 1,
      sym_newline,
    ACTIONS(246), 1,
      sym_comment,
  [701] = 2,
    ACTIONS(248), 1,
      sym_newline,
    ACTIONS(250), 1,
      sym_comment,
  [708] = 1,
    ACTIONS(252), 1,
      sym_line_value,
  [712] = 1,
    ACTIONS(254), 1,
      sym_newline,
  [716] = 1,
    ACTIONS(256), 1,
      sym_identifier,
  [720] = 1,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [724] = 1,
    ACTIONS(260), 1,
      sym_newline,
  [728] = 1,
    ACTIONS(262), 1,
      anon_sym_COLON,
  [732] = 1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
  [736] = 1,
    ACTIONS(266), 1,
      sym_newline,
  [740] = 1,
    ACTIONS(268), 1,
      sym_newline,
  [744] = 1,
    ACTIONS(270), 1,
      sym_identifier,
  [748] = 1,
    ACTIONS(272), 1,
      sym_newline,
  [752] = 1,
    ACTIONS(274), 1,
      sym_identifier,
  [756] = 1,
    ACTIONS(276), 1,
      anon_sym_COLON,
  [760] = 1,
    ACTIONS(278), 1,
      sym_line_value,
  [764] = 1,
    ACTIONS(280), 1,
      sym_newline,
  [768] = 1,
    ACTIONS(282), 1,
      sym_reference,
  [772] = 1,
    ACTIONS(284), 1,
      sym_newline,
  [776] = 1,
    ACTIONS(286), 1,
      sym_newline,
  [780] = 1,
    ACTIONS(288), 1,
      sym_newline,
  [784] = 1,
    ACTIONS(290), 1,
      sym_newline,
  [788] = 1,
    ACTIONS(292), 1,
      sym_newline,
  [792] = 1,
    ACTIONS(294), 1,
      sym_reference,
  [796] = 1,
    ACTIONS(296), 1,
      sym_newline,
  [800] = 1,
    ACTIONS(298), 1,
      sym_newline,
  [804] = 1,
    ACTIONS(300), 1,
      sym_identifier,
  [808] = 1,
    ACTIONS(302), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 180,
  [SMALL_STATE(14)] = 200,
  [SMALL_STATE(15)] = 220,
  [SMALL_STATE(16)] = 240,
  [SMALL_STATE(17)] = 260,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 320,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 360,
  [SMALL_STATE(23)] = 380,
  [SMALL_STATE(24)] = 400,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 440,
  [SMALL_STATE(27)] = 460,
  [SMALL_STATE(28)] = 480,
  [SMALL_STATE(29)] = 500,
  [SMALL_STATE(30)] = 520,
  [SMALL_STATE(31)] = 540,
  [SMALL_STATE(32)] = 553,
  [SMALL_STATE(33)] = 564,
  [SMALL_STATE(34)] = 574,
  [SMALL_STATE(35)] = 582,
  [SMALL_STATE(36)] = 592,
  [SMALL_STATE(37)] = 602,
  [SMALL_STATE(38)] = 612,
  [SMALL_STATE(39)] = 617,
  [SMALL_STATE(40)] = 624,
  [SMALL_STATE(41)] = 631,
  [SMALL_STATE(42)] = 638,
  [SMALL_STATE(43)] = 645,
  [SMALL_STATE(44)] = 652,
  [SMALL_STATE(45)] = 659,
  [SMALL_STATE(46)] = 666,
  [SMALL_STATE(47)] = 673,
  [SMALL_STATE(48)] = 680,
  [SMALL_STATE(49)] = 687,
  [SMALL_STATE(50)] = 694,
  [SMALL_STATE(51)] = 701,
  [SMALL_STATE(52)] = 708,
  [SMALL_STATE(53)] = 712,
  [SMALL_STATE(54)] = 716,
  [SMALL_STATE(55)] = 720,
  [SMALL_STATE(56)] = 724,
  [SMALL_STATE(57)] = 728,
  [SMALL_STATE(58)] = 732,
  [SMALL_STATE(59)] = 736,
  [SMALL_STATE(60)] = 740,
  [SMALL_STATE(61)] = 744,
  [SMALL_STATE(62)] = 748,
  [SMALL_STATE(63)] = 752,
  [SMALL_STATE(64)] = 756,
  [SMALL_STATE(65)] = 760,
  [SMALL_STATE(66)] = 764,
  [SMALL_STATE(67)] = 768,
  [SMALL_STATE(68)] = 772,
  [SMALL_STATE(69)] = 776,
  [SMALL_STATE(70)] = 780,
  [SMALL_STATE(71)] = 784,
  [SMALL_STATE(72)] = 788,
  [SMALL_STATE(73)] = 792,
  [SMALL_STATE(74)] = 796,
  [SMALL_STATE(75)] = 800,
  [SMALL_STATE(76)] = 804,
  [SMALL_STATE(77)] = 808,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 5, 0, 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 5, 0, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 7, 0, 10),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 7, 0, 10),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_delimiter, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_delimiter, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 2, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 2, 0, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 3, 0, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 3, 0, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_delimiter, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_delimiter, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_delimiter, 3, 0, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_delimiter, 3, 0, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 3, 0, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 3, 0, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 3, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 3, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 4, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 4, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, 0, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 4, 0, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 4, 0, 6),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 4, 0, 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 4, 0, 7),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 4, 0, 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt_line, 4, 0, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt_line, 4, 0, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 5, 0, 8),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 5, 0, 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 5, 0, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 5, 0, 7),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 5, 0, 7),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_header, 5, 0, 9),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 5, 0, 9),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 6, 0, 8),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 8),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thunk_header, 6, 0, 10),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thunk_header, 6, 0, 10),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_header, 6, 0, 9),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_header, 6, 0, 9),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_delimiter, 4, 0, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fence_delimiter, 4, 0, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_delimiter_inline, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence_delimiter_inline, 2, 0, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [264] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_kind, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_kind, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
