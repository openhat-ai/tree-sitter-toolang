#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#include <stdint.h>
#include <string.h>

#include "keywords.h"

enum Token {
  NEWLINE,
  BLANK_LINE,
  INDENT,
  DEDENT,
  LINE_START,
  DIRECTIVE_START,
  SETTING_START,
  UNTIL_START,
  TEXT_INDENT,
  CAP_TEXT_START,
  RAW_TEXT,
  FLOW_TEXT,
  AGIC_TEXT,
  ERROR_SENTINEL,
};

enum Mode { STRUCTURAL, TEXT };
enum Prefix { NONE, SPACES, TABS, MIXED };

typedef struct {
  uint32_t column;
  uint8_t prefix;
  uint8_t mode;
} Frame;

// Every frame needs six serialized bytes; reserve four bytes for the header.
// Refuse deeper input instead of losing state during incremental parsing.
#define MAX_FRAMES ((TREE_SITTER_SERIALIZATION_BUFFER_SIZE - 4) / 6)

typedef struct {
  Frame frames[MAX_FRAMES];
  uint16_t depth;
  bool line_started;
  bool eof_newline;
} Scanner;

typedef struct {
  uint32_t column;
  uint8_t prefix;
} Indentation;

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static Indentation indentation(TSLexer *lexer) {
  Indentation indent = {0, NONE};
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    if (lexer->lookahead == ' ') {
      if (indent.column == UINT32_MAX) {
        return (Indentation){0, MIXED};
      }
      indent.column++;
      indent.prefix |= SPACES;
    } else {
      if (indent.column > UINT32_MAX - 8) {
        return (Indentation){0, MIXED};
      }
      indent.column = (indent.column / 8 + 1) * 8;
      indent.prefix |= TABS;
    }
    advance(lexer);
  }
  return indent;
}

static bool line_end(TSLexer *lexer) {
  if (lexer->lookahead == '\r') {
    advance(lexer);
  }
  if (lexer->lookahead != '\n') {
    return false;
  }
  advance(lexer);
  return true;
}

static bool word_character(int32_t ch) {
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ||
         ch == '_';
}

static bool keyword(const char *word, const char *const *words, unsigned count) {
  for (unsigned i = 0; i < count; i++) {
    if (strcmp(word, words[i]) == 0) {
      return true;
    }
  }
  return false;
}

static bool emit(Scanner *scanner, TSLexer *lexer, enum Token token) {
  lexer->result_symbol = token;
  if (token == DEDENT) {
    scanner->depth--;
  }
  return true;
}

static bool push(Scanner *scanner, TSLexer *lexer, Indentation indent, enum Mode mode,
                 enum Token token) {
  if (scanner->depth == MAX_FRAMES || indent.prefix == MIXED) {
    return false;
  }
  scanner->frames[scanner->depth++] = (Frame){indent.column, indent.prefix, mode};
  return emit(scanner, lexer, token);
}

// Trivia cannot decide ownership. Look ahead without consuming it so comments
// preceding an outer statement stay outside a completed inner block.
static uint32_t next_content_column(TSLexer *lexer, Indentation indent) {
  for (;;) {
    if (lexer->lookahead == '#') {
      while (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
        advance(lexer);
      }
    }
    if (lexer->eof(lexer)) {
      return 0;
    }
    if (!line_end(lexer)) {
      return indent.column;
    }
    indent = indentation(lexer);
  }
}

bool tree_sitter_toolang_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid) {
  Scanner *scanner = payload;
  if (valid[ERROR_SENTINEL]) {
    // Resynchronize at physical newlines, but never infer layout or text while
    // recovering. This keeps malformed entries inside their owning block.
    indentation(lexer);
    if (!line_end(lexer)) {
      return false;
    }
    lexer->mark_end(lexer);
    scanner->line_started = false;
    return emit(scanner, lexer, BLANK_LINE);
  }

  bool at_start = lexer->get_column(lexer) == 0;
  lexer->mark_end(lexer);
  Indentation indent = indentation(lexer);
  Frame frame = scanner->frames[scanner->depth - 1];

  if (lexer->eof(lexer)) {
    if (valid[NEWLINE] && scanner->line_started && !scanner->eof_newline) {
      scanner->line_started = false;
      scanner->eof_newline = true;
      return emit(scanner, lexer, NEWLINE);
    }
    if (valid[DEDENT] && scanner->depth > 1 && !scanner->line_started) {
      return emit(scanner, lexer, DEDENT);
    }
    return false;
  }

  if (lexer->lookahead == '\r' || lexer->lookahead == '\n') {
    if (valid[NEWLINE] && scanner->line_started && line_end(lexer)) {
      lexer->mark_end(lexer);
      scanner->line_started = false;
      return emit(scanner, lexer, NEWLINE);
    }
    // Record blank-line consumption in scanner state as well. Internal trivia
    // can otherwise be reused at a different physical column after an edit,
    // bypassing the layout transition that a fresh parse would perform.
    if (valid[BLANK_LINE] && line_end(lexer)) {
      lexer->mark_end(lexer);
      scanner->line_started = false;
      return emit(scanner, lexer, BLANK_LINE);
    }
    return false;
  }

  if (!at_start) {
    return false;
  }

  bool literal = frame.mode == TEXT && indent.column >= frame.column;
  bool opening_text = valid[TEXT_INDENT] && indent.column > frame.column;
  if (frame.mode == TEXT && !literal && !scanner->line_started && valid[DEDENT]) {
    return emit(scanner, lexer, DEDENT);
  }
  if (lexer->lookahead == '#' && !literal && !opening_text) {
    if (valid[DEDENT] && next_content_column(lexer, indent) < frame.column) {
      return emit(scanner, lexer, DEDENT);
    }
    return false;
  }

  if (!scanner->line_started && valid[DEDENT] && indent.column < frame.column) {
    return emit(scanner, lexer, DEDENT);
  }
  if (!scanner->line_started && opening_text) {
    return push(scanner, lexer, indent, TEXT, TEXT_INDENT);
  }
  if (!scanner->line_started && valid[INDENT] && indent.column > frame.column) {
    return push(scanner, lexer, indent, STRUCTURAL, INDENT);
  }

  char word[32] = {0};
  unsigned length = 0;
  bool property_name = lexer->lookahead >= 'a' && lexer->lookahead <= 'z';
  while (word_character(lexer->lookahead)) {
    if (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') {
      property_name = false;
    }
    if (length < sizeof(word) - 1) {
      word[length++] = (char)lexer->lookahead;
    }
    advance(lexer);
  }

  bool at_baseline = indent.column == frame.column && indent.prefix == frame.prefix;
  if (valid[CAP_TEXT_START] && !scanner->line_started && at_baseline) {
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      advance(lexer);
    }
    if (lexer->lookahead != '=' || !property_name) {
      return push(scanner, lexer, indent, TEXT, CAP_TEXT_START);
    }
  }

  if (!scanner->line_started && at_baseline) {
    enum Token start = LINE_START;
    if (valid[UNTIL_START] && strcmp(word, "until") == 0) {
      start = UNTIL_START;
    } else if (valid[SETTING_START] &&
               (strcmp(word, "context") == 0 || strcmp(word, "instruct") == 0)) {
      start = SETTING_START;
    } else if (valid[DIRECTIVE_START] &&
               (strcmp(word, "recall") == 0 ||
                keyword(word, directive_keywords,
                        sizeof(directive_keywords) / sizeof(*directive_keywords)))) {
      start = DIRECTIVE_START;
    }
    if (start != LINE_START) {
      scanner->line_started = true;
      return emit(scanner, lexer, start);
    }
  }

  bool prose = (valid[FLOW_TEXT] &&
                !keyword(word, flow_keywords, sizeof(flow_keywords) / sizeof(*flow_keywords))) ||
               (valid[AGIC_TEXT] &&
                !keyword(word, agic_keywords, sizeof(agic_keywords) / sizeof(*agic_keywords)));
  if (valid[LINE_START] && !prose && !scanner->line_started && at_baseline) {
    scanner->line_started = true;
    return emit(scanner, lexer, LINE_START);
  }

  enum Token text = RAW_TEXT;
  if (!literal) {
    if (indent.column < frame.column || indent.prefix == MIXED ||
        (indent.column == frame.column && indent.prefix != frame.prefix)) {
      return false;
    }
    if (valid[FLOW_TEXT]) {
      if (keyword(word, flow_keywords, sizeof(flow_keywords) / sizeof(*flow_keywords))) {
        return false;
      }
      text = FLOW_TEXT;
    } else if (valid[AGIC_TEXT]) {
      if (keyword(word, agic_keywords, sizeof(agic_keywords) / sizeof(*agic_keywords))) {
        return false;
      }
      text = AGIC_TEXT;
    } else {
      return false;
    }
  }
  if (!valid[text]) {
    return false;
  }
  while (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
    advance(lexer);
  }
  lexer->mark_end(lexer);
  scanner->line_started = true;
  return emit(scanner, lexer, text);
}

void *tree_sitter_toolang_external_scanner_create(void) {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  scanner->depth = 1;
  return scanner;
}

void tree_sitter_toolang_external_scanner_destroy(void *payload) { ts_free(payload); }

unsigned tree_sitter_toolang_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = payload;
  unsigned size = 0;
  buffer[size++] = (char)(scanner->depth & 0xff);
  buffer[size++] = (char)(scanner->depth >> 8);
  buffer[size++] = (char)scanner->line_started;
  buffer[size++] = (char)scanner->eof_newline;
  for (unsigned i = 0; i < scanner->depth; i++) {
    Frame frame = scanner->frames[i];
    for (unsigned j = 0; j < 4; j++) {
      buffer[size++] = (char)(frame.column >> (j * 8));
    }
    buffer[size++] = (char)frame.prefix;
    buffer[size++] = (char)frame.mode;
  }
  return size;
}

void tree_sitter_toolang_external_scanner_deserialize(void *payload, const char *buffer,
                                                      unsigned length) {
  Scanner *scanner = payload;
  memset(scanner, 0, sizeof(*scanner));
  scanner->depth = 1;
  if (length < 4) {
    return;
  }
  const uint8_t *bytes = (const uint8_t *)buffer;
  unsigned depth = bytes[0] | (bytes[1] << 8);
  if (depth == 0 || depth > MAX_FRAMES || length != 4 + depth * 6) {
    return;
  }
  scanner->depth = (uint16_t)depth;
  scanner->line_started = bytes[2];
  scanner->eof_newline = bytes[3];
  unsigned offset = 4;
  for (unsigned i = 0; i < depth; i++) {
    Frame *frame = &scanner->frames[i];
    for (unsigned j = 0; j < 4; j++) {
      frame->column |= (uint32_t)bytes[offset++] << (j * 8);
    }
    frame->prefix = bytes[offset++];
    frame->mode = bytes[offset++];
  }
}
