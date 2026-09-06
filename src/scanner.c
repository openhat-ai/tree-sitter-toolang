#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#include <stdint.h>
#include <string.h>

#include "keywords.h"

enum Token {
  NEWLINE,
  BLANK_LINE,
  COMMENT_START,
  PARENT_DOC_LINE,
  DOC_LINE,
  COMMENT_LINE,
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
  ERROR_LINE,
};

enum Mode { STRUCTURAL, TEXT };
enum Prefix { NONE, SPACES, TABS, MIXED };

typedef struct {
  uint32_t column;
  uint8_t prefix;
  uint8_t mode;
} Frame;

// The header includes the pending trivia lookahead. Refuse deeper input instead
// of losing state during incremental parsing; each frame needs six bytes.
#define HEADER_SIZE 13
#define MAX_FRAMES ((TREE_SITTER_SERIALIZATION_BUFFER_SIZE - HEADER_SIZE) / 6)

typedef struct {
  uint32_t lines;
  uint32_t column;
} Trivia;

typedef struct {
  Frame frames[MAX_FRAMES];
  uint16_t depth;
  bool line_started;
  bool eof_newline;
  bool comment_started;
  Trivia trivia;
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

// Inspect a trivia run once. The hidden start token records this dependency in
// Tree-sitter, so an edit anywhere in the lookahead invalidates the cached result.
static bool lookahead_trivia(TSLexer *lexer, Indentation indent, Trivia *trivia) {
  uint32_t lines = 0;
  for (;;) {
    bool comment = lexer->lookahead == '#';
    if (comment) {
      while (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
        advance(lexer);
      }
    }
    if (lexer->eof(lexer)) {
      if (comment && lines == UINT32_MAX) {
        return false;
      }
      trivia->lines = lines + comment;
      trivia->column = 0;
      return true;
    }
    if (!line_end(lexer)) {
      trivia->lines = lines;
      trivia->column = indent.column;
      return true;
    }
    if (lines == UINT32_MAX) {
      return false;
    }
    lines++;
    indent = indentation(lexer);
  }
}

static void finish_trivia_line(Scanner *scanner) {
  scanner->comment_started = false;
  scanner->line_started = false;
  if (scanner->trivia.lines && --scanner->trivia.lines == 0) {
    scanner->trivia.column = 0;
  }
}

static void skip_indentation(TSLexer *lexer) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    lexer->advance(lexer, true);
  }
}

// Comments retain their public node types and start at '#', after indentation.
// Consuming their newline here also resets layout state during error recovery.
static bool scan_comment(Scanner *scanner, TSLexer *lexer, const bool *valid) {
  if (lexer->lookahead != '#') {
    return false;
  }
  advance(lexer);
  enum Token token = COMMENT_LINE;
  if (lexer->lookahead == '#') {
    advance(lexer);
    token = lexer->lookahead == '!' ? PARENT_DOC_LINE : DOC_LINE;
  }
  if (!valid[token]) {
    return false;
  }
  while (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
    advance(lexer);
  }
  lexer->mark_end(lexer);
  if (line_end(lexer)) {
    lexer->mark_end(lexer);
  }
  finish_trivia_line(scanner);
  return emit(scanner, lexer, token);
}

bool tree_sitter_toolang_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid) {
  Scanner *scanner = payload;
  bool at_start = lexer->get_column(lexer) == 0;
  if (valid[ERROR_LINE]) {
    // All external tokens are enabled during recovery. Keep unexpected content
    // on its physical line instead of letting recovery borrow a later header.
    // ERROR_LINE is never accepted by a normal grammar production.
    skip_indentation(lexer);
    if (at_start && scan_comment(scanner, lexer, valid)) {
      scanner->trivia = (Trivia){0};
      return true;
    }
    if (!line_end(lexer)) {
      if (lexer->eof(lexer)) {
        return false;
      }
      while (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
        advance(lexer);
      }
      lexer->mark_end(lexer);
      scanner->line_started = scanner->comment_started = false;
      scanner->trivia = (Trivia){0};
      return emit(scanner, lexer, ERROR_LINE);
    }
    lexer->mark_end(lexer);
    enum Token newline = scanner->line_started ? NEWLINE : BLANK_LINE;
    finish_trivia_line(scanner);
    scanner->trivia = (Trivia){0};
    return emit(scanner, lexer, newline);
  }
  if (scanner->comment_started) {
    skip_indentation(lexer);
    return scan_comment(scanner, lexer, valid);
  }

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
      finish_trivia_line(scanner);
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
    if (!valid[COMMENT_START] && !valid[DEDENT]) {
      return false;
    }
    Trivia trivia = scanner->trivia;
    if (!trivia.lines && !lookahead_trivia(lexer, indent, &trivia)) {
      return false;
    }
    enum Token token;
    if (valid[DEDENT] && trivia.column < frame.column) {
      token = DEDENT;
    } else if (valid[COMMENT_START]) {
      token = COMMENT_START;
    } else {
      return false;
    }
    scanner->trivia = trivia;
    scanner->comment_started = token == COMMENT_START;
    return emit(scanner, lexer, token);
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
  buffer[size++] = (char)scanner->comment_started;
  for (unsigned j = 0; j < 4; j++) {
    buffer[size++] = (char)(scanner->trivia.lines >> (j * 8));
  }
  for (unsigned j = 0; j < 4; j++) {
    buffer[size++] = (char)(scanner->trivia.column >> (j * 8));
  }
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
  if (length < HEADER_SIZE) {
    return;
  }
  const uint8_t *bytes = (const uint8_t *)buffer;
  unsigned depth = bytes[0] | (bytes[1] << 8);
  if (depth == 0 || depth > MAX_FRAMES || length != HEADER_SIZE + depth * 6) {
    return;
  }
  scanner->depth = (uint16_t)depth;
  scanner->line_started = bytes[2];
  scanner->eof_newline = bytes[3];
  scanner->comment_started = bytes[4];
  unsigned offset = 5;
  for (unsigned j = 0; j < 4; j++) {
    scanner->trivia.lines |= (uint32_t)bytes[offset++] << (j * 8);
  }
  for (unsigned j = 0; j < 4; j++) {
    scanner->trivia.column |= (uint32_t)bytes[offset++] << (j * 8);
  }
  for (unsigned i = 0; i < depth; i++) {
    Frame *frame = &scanner->frames[i];
    for (unsigned j = 0; j < 4; j++) {
      frame->column |= (uint32_t)bytes[offset++] << (j * 8);
    }
    frame->prefix = bytes[offset++];
    frame->mode = bytes[offset++];
  }
}
