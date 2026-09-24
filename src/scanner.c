#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#include <stdint.h>
#include <string.h>

#include "keywords.h"

enum Token {
  NEWLINE,
  BLANK_LINE,
  COMMENT_START,
  PLAIN_COMMENT,
  SHEBANG_COMMENT,
  MODULE_DOC_START,
  ITEM_DOC_START,
  PARAM_ITEM_DOC_START,
  COMMENT_END,
  INDENT,
  DEDENT,
  LINE_START,
  DIRECTIVE_START,
  UNTIL_START,
  FROM_START,
  SETTLE_INDENT,
  SETTLE_TEXT_START,
  TEXT_INDENT,
  CAP_TEXT_START,
  RAW_TEXT,
  FLOW_TEXT,
  AGIC_TEXT,
  ERROR_LINE,
};

enum Mode { STRUCTURAL, TEXT, SETTLE_TEXT };
enum Prefix { NONE, SPACES, TABS, MIXED };

typedef struct {
  uint32_t column;
  uint8_t prefix;
  uint8_t mode;
} Frame;

// The header includes the pending trivia lookahead. Refuse deeper input instead
// of losing state during incremental parsing; each frame needs six bytes.
#define HEADER_SIZE 15
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
  bool doc_started;
  bool file_start;
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
  if (token != COMMENT_START) {
    scanner->file_start = false;
  }
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
  scanner->doc_started = false;
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

// Documentation prefixes leave fields to the grammar. Looking through the
// first word makes the reserved tag unambiguous without a prose fallback.
static bool scan_comment(Scanner *scanner, TSLexer *lexer, const bool *valid) {
  if (lexer->lookahead != '#') {
    return false;
  }
  uint32_t column = lexer->get_column(lexer);
  advance(lexer);
  enum Token token = PLAIN_COMMENT;
  if (lexer->lookahead == '#') {
    advance(lexer);
    if (lexer->lookahead == '!') {
      advance(lexer);
      token = MODULE_DOC_START;
      lexer->mark_end(lexer);
    } else {
      token = ITEM_DOC_START;
      lexer->mark_end(lexer);
      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        advance(lexer);
      }
      const char *tag = "@param";
      while (*tag && lexer->lookahead == *tag) {
        advance(lexer);
        tag++;
      }
      if (!*tag && (lexer->eof(lexer) || lexer->lookahead == ' ' ||
                    lexer->lookahead == '\t' || lexer->lookahead == '\r' ||
                    lexer->lookahead == '\n')) {
        token = PARAM_ITEM_DOC_START;
      }
    }
  } else if (lexer->lookahead == '@') {
    advance(lexer);
    if (column != 0 || scanner->trivia.column != 0) {
      return false;
    }
    token = MODULE_DOC_START;
    lexer->mark_end(lexer);
  } else if (lexer->lookahead == '!' && column == 0 && scanner->file_start) {
    token = SHEBANG_COMMENT;
  }
  if (!valid[token]) {
    return false;
  }
  if (token == MODULE_DOC_START || token == ITEM_DOC_START || token == PARAM_ITEM_DOC_START) {
    scanner->comment_started = false;
    scanner->doc_started = true;
    return emit(scanner, lexer, token);
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
  // A runtime may skip a leading BOM but still report column zero. Preserve
  // that distinction in the comment-start state for incremental reuse.
  scanner->file_start = scanner->file_start && lexer->is_at_included_range_start(lexer);
  if (scanner->doc_started) {
    skip_indentation(lexer);
    if (valid[ERROR_LINE]) {
      // A trivia newline lets recovery return to the enclosing declaration
      // list; a documentation-end token alone cannot synchronize that list.
      if (line_end(lexer) || lexer->eof(lexer)) {
        lexer->mark_end(lexer);
        finish_trivia_line(scanner);
        return emit(scanner, lexer, BLANK_LINE);
      }
      while (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
        advance(lexer);
      }
      lexer->mark_end(lexer);
      return emit(scanner, lexer, ERROR_LINE);
    }
    if (valid[COMMENT_END] && (lexer->eof(lexer) || line_end(lexer))) {
      lexer->mark_end(lexer);
      finish_trivia_line(scanner);
      return emit(scanner, lexer, COMMENT_END);
    }
    return false;
  }
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

  bool literal = frame.mode != STRUCTURAL && indent.column >= frame.column;
  bool opening_text = valid[TEXT_INDENT] && indent.column > frame.column;
  // Settle opens a structural clause scope, then a literal reducer at the same
  // baseline. Preserve leading Markdown through both transitions.
  bool opening_settle = valid[SETTLE_INDENT] && indent.column > frame.column;
  bool starting_settle_text = valid[SETTLE_TEXT_START] && indent.column == frame.column &&
                             indent.prefix == frame.prefix;
  if (frame.mode != STRUCTURAL && !literal && !scanner->line_started && valid[DEDENT]) {
    return emit(scanner, lexer, DEDENT);
  }
  if (lexer->lookahead == '#' && !literal && !opening_text &&
      !opening_settle && !starting_settle_text) {
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
  if (!scanner->line_started && opening_settle) {
    return push(scanner, lexer, indent, STRUCTURAL, SETTLE_INDENT);
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

  if (frame.mode == SETTLE_TEXT && indent.column == frame.column &&
      strcmp(word, "from") == 0 && !scanner->line_started && valid[DEDENT]) {
    return emit(scanner, lexer, DEDENT);
  }

  bool at_baseline = indent.column == frame.column && indent.prefix == frame.prefix;
  if (valid[SETTLE_TEXT_START] && !scanner->line_started && at_baseline &&
      strcmp(word, "from") != 0) {
    return push(scanner, lexer, indent, SETTLE_TEXT, SETTLE_TEXT_START);
  }
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
    } else if (valid[FROM_START] && strcmp(word, "from") == 0) {
      start = FROM_START;
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
  scanner->file_start = true;
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
  buffer[size++] = (char)scanner->doc_started;
  buffer[size++] = (char)scanner->file_start;
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
  scanner->file_start = true;
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
  scanner->doc_started = bytes[5];
  scanner->file_start = bytes[6];
  unsigned offset = 7;
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
