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
  PROGRAM_DOC_START,
  ITEM_DOC_START,
  PARAM_DOC_START,
  COMMENT_END,
  BODY_START,
  EMPTY_BODY,
  ITEM_START,
  ITEM_INDENT,
  INDENT,
  RUNNABLE_INDENT,
  DEDENT,
  LINE_START,
  DIRECTIVE_START,
  UNTIL_START,
  FROM_START,
  REDUCE_INDENT,
  REDUCE_TEXT_START,
  TEXT_INDENT,
  CAP_TEXT_START,
  RAW_TEXT,
  FLOW_TEXT,
  AGIC_TEXT,
  ERROR_LINE,
  EXEC_BINDING_START,
  OPERATION_BINDING_START,
  RESTRICTED_BINDING_START,
  NAMED_BINDING_START,
  MISSING_REQUIRED,
  INTEGER_LITERAL,
  PARAM_ERROR,
  MISSING_TYPE,
};

enum Mode { STRUCTURAL, TEXT, REDUCE_TEXT };
enum Prefix { NONE, SPACES, TABS, MIXED };
enum TriviaPhase { TRIVIA, BODY_BASELINE, BODY_OUTER_PREFIX };

typedef struct {
  uint32_t column;
  uint8_t prefix;
  uint8_t mode;
} Frame;

// The header includes the pending trivia lookahead. Refuse deeper input instead
// of losing state during incremental parsing; each frame needs six bytes.
#define HEADER_SIZE 16
#define MAX_FRAMES ((TREE_SITTER_SERIALIZATION_BUFFER_SIZE - HEADER_SIZE) / 6)

typedef struct {
  uint32_t lines;
  uint32_t column;
  uint8_t prefix;
  uint8_t phase;
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

static bool assignment_operator(TSLexer *lexer) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    advance(lexer);
  }
  if (lexer->lookahead == '+' || lexer->lookahead == '-') {
    advance(lexer);
  }
  return lexer->lookahead == '=';
}

static bool read_word(TSLexer *lexer, char *word, unsigned capacity) {
  unsigned length = 0;
  bool identifier = lexer->lookahead >= 'a' && lexer->lookahead <= 'z';
  while (word_character(lexer->lookahead)) {
    if (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') {
      identifier = false;
    }
    if (length + 1 < capacity) {
      word[length++] = (char)lexer->lookahead;
    }
    advance(lexer);
  }
  word[length] = '\0';
  return identifier;
}

static bool emit(Scanner *scanner, TSLexer *lexer, enum Token token) {
  lexer->result_symbol = token;
  if (token != COMMENT_START) {
    scanner->file_start = false;
  }
  if (token == DEDENT && scanner->depth > 1) {
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
  if (scanner->trivia.phase != TRIVIA) {
    scanner->trivia = (Trivia){0};
  }
  return emit(scanner, lexer, token);
}

// Inspect a trivia run once. The hidden start token records this dependency in
// Tree-sitter, so an edit anywhere in the lookahead invalidates the cached result.
static bool lookahead_trivia(TSLexer *lexer, Indentation indent, Trivia *trivia, bool text) {
  uint32_t lines = 0;
  for (;;) {
    bool comment = lexer->lookahead == '#';
    // A text body owns an indented '#' line. An outer comment ends the
    // pending value, even when more deeply indented text follows it.
    if (comment && text) {
      trivia->lines = lines;
      trivia->column = indent.column;
      trivia->prefix = indent.prefix;
      return true;
    }
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
      trivia->prefix = NONE;
      return true;
    }
    if (!line_end(lexer)) {
      trivia->lines = lines;
      trivia->column = indent.column;
      trivia->prefix = indent.prefix;
      return true;
    }
    if (lines == UINT32_MAX) {
      return false;
    }
    lines++;
    indent = indentation(lexer);
  }
}

// A body is contiguous: everything through the last outer comment stays in
// the declaration prefix. Once the member baseline is known, classify the run
// in one more pass without storing a list of comment indentation levels.
static bool lookahead_body_prefix(TSLexer *lexer, Indentation indent, Trivia *trivia) {
  uint32_t lines = 0;
  uint32_t outer_lines = 0;
  for (;;) {
    bool comment = lexer->lookahead == '#';
    if (comment) {
      if (lines == UINT32_MAX) {
        return false;
      }
      if (indent.column < trivia->column) {
        outer_lines = lines + 1;
      }
      while (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
        advance(lexer);
      }
    }
    if (lexer->eof(lexer) || !line_end(lexer)) {
      trivia->lines = outer_lines;
      trivia->phase = BODY_OUTER_PREFIX;
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
  if (scanner->trivia.lines && --scanner->trivia.lines == 0 &&
      scanner->trivia.phase != BODY_OUTER_PREFIX) {
    scanner->trivia = (Trivia){0};
  }
}

// Recovery always makes progress on the current physical line and releases any
// rejected comment entry before the next line can establish a layout boundary.
static bool scan_error_line(Scanner *scanner, TSLexer *lexer) {
  if (line_end(lexer)) {
    lexer->mark_end(lexer);
    enum Token newline = scanner->line_started ? NEWLINE : BLANK_LINE;
    finish_trivia_line(scanner);
    scanner->trivia = (Trivia){0};
    return emit(scanner, lexer, newline);
  }
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

static void skip_indentation(TSLexer *lexer) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    lexer->advance(lexer, true);
  }
}

// Integers need the same complete-word boundary as keywords. Checking the
// following character without consuming it preserves adjacent punctuation.
static bool scan_integer(Scanner *scanner, TSLexer *lexer) {
  skip_indentation(lexer);
  if (lexer->lookahead < '0' || lexer->lookahead > '9') {
    return false;
  }
  do {
    advance(lexer);
  } while (lexer->lookahead >= '0' && lexer->lookahead <= '9');
  if (word_character(lexer->lookahead)) {
    return false;
  }
  lexer->mark_end(lexer);
  return emit(scanner, lexer, INTEGER_LITERAL);
}

// Recovery inside a parameter entry requires a real delimiter on this line.
// Leave complete array suffixes to the type grammar and missing ')' to native
// recovery, so an error fragment cannot consume the return annotation or body.
static bool scan_param_error(TSLexer *lexer) {
  skip_indentation(lexer);
  if (lexer->eof(lexer) || lexer->lookahead == ',' || lexer->lookahead == ')' ||
      lexer->lookahead == '\r' || lexer->lookahead == '\n') {
    return false;
  }
  if (lexer->lookahead == '[') {
    advance(lexer);
    if (lexer->lookahead == ']') {
      return false;
    }
  }
  while (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
    if (lexer->lookahead == ',' || lexer->lookahead == ')') {
      lexer->mark_end(lexer);
      return true;
    }
    // A colon introducing a header comment ends this scope before any
    // delimiter inside that comment. Other colons and arrows are still part
    // of the malformed parameter until its own comma or ')' is reached.
    if (lexer->lookahead == ':') {
      advance(lexer);
      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        advance(lexer);
      }
      if (lexer->lookahead == '#') {
        return false;
      }
      continue;
    }
    advance(lexer);
  }
  return false;
}

static bool scan_inline_token(Scanner *scanner, TSLexer *lexer, const bool *valid) {
  skip_indentation(lexer);
  lexer->mark_end(lexer);
  char word[32] = {0};
  unsigned length = 0;
  bool identifier = lexer->lookahead >= 'a' && lexer->lookahead <= 'z';
  while (word_character(lexer->lookahead)) {
    if (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') {
      identifier = false;
    }
    if (length < sizeof(word) - 1) {
      word[length++] = (char)lexer->lookahead;
    }
    advance(lexer);
  }
  // An explicit assignment selects a destination before operation heads. Keep
  // the marked end at the name's start; the grammar consumes the name and '='.
  if (valid[NAMED_BINDING_START] && identifier) {
    skip_indentation(lexer);
    if (lexer->lookahead == '=') {
      return emit(scanner, lexer, NAMED_BINDING_START);
    }
  }
  // Reserve operation heads after both let prefixes before Content can consume
  // them. The start tokens are zero-width; the grammar consumes the keyword.
  if (valid[EXEC_BINDING_START] && strcmp(word, "exec") == 0) {
    return emit(scanner, lexer, EXEC_BINDING_START);
  }
  if (valid[RESTRICTED_BINDING_START] &&
      keyword(word, restricted_binding_keywords,
              sizeof(restricted_binding_keywords) / sizeof(*restricted_binding_keywords))) {
    return emit(scanner, lexer, RESTRICTED_BINDING_START);
  }
  if (valid[OPERATION_BINDING_START] &&
      keyword(word, operation_binding_keywords,
              sizeof(operation_binding_keywords) / sizeof(*operation_binding_keywords))) {
    return emit(scanner, lexer, OPERATION_BINDING_START);
  }
  return false;
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
      token = PARAM_DOC_START;
    }
  } else if (lexer->lookahead == '@') {
    advance(lexer);
    if (column != 0 || scanner->trivia.column != 0) {
      return false;
    }
    token = PROGRAM_DOC_START;
    lexer->mark_end(lexer);
  } else if (lexer->lookahead == '!' && column == 0 && scanner->file_start) {
    token = SHEBANG_COMMENT;
  }
  if (!valid[token]) {
    return false;
  }
  if (token == PROGRAM_DOC_START || token == ITEM_DOC_START || token == PARAM_DOC_START) {
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
      return scan_error_line(scanner, lexer);
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
    if (scanner->comment_started) {
      skip_indentation(lexer);
      if (scan_comment(scanner, lexer, valid)) {
        return true;
      }
      return scan_error_line(scanner, lexer);
    }
    lexer->mark_end(lexer);
    Indentation indent = indentation(lexer);
    Frame frame = scanner->frames[scanner->depth - 1];
    if (at_start && indent.column < frame.column) {
      scanner->line_started = scanner->comment_started = false;
      scanner->trivia = (Trivia){0};
      return emit(scanner, lexer, DEDENT);
    }
    if (at_start && !scanner->line_started && indent.column == frame.column &&
        frame.mode == STRUCTURAL && !lexer->eof(lexer) &&
        lexer->lookahead != '#' && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
      scanner->line_started = true;
      return emit(scanner, lexer, indent.column == 0 ? ITEM_START : LINE_START);
    }
    if (at_start && lexer->lookahead == '#') {
      Trivia trivia = scanner->trivia;
      if (!trivia.lines && !lookahead_trivia(lexer, indent, &trivia, false)) {
        return false;
      }
      scanner->trivia = trivia;
      if (trivia.column < frame.column) {
        return emit(scanner, lexer, DEDENT);
      }
      scanner->comment_started = true;
      return emit(scanner, lexer, COMMENT_START);
    }
    return scan_error_line(scanner, lexer);
  }
  if (scanner->comment_started) {
    skip_indentation(lexer);
    return scan_comment(scanner, lexer, valid);
  }
  // An explicit body/header colon commits a return annotation even when its
  // type is absent. Leave the colon to the grammar and stay on this line.
  if (!at_start && valid[MISSING_TYPE]) {
    skip_indentation(lexer);
    lexer->mark_end(lexer);
    if (lexer->lookahead == ':') {
      return emit(scanner, lexer, MISSING_TYPE);
    }
    return false;
  }
  if (!at_start && valid[PARAM_ERROR]) {
    if (scan_param_error(lexer)) {
      return emit(scanner, lexer, PARAM_ERROR);
    }
    return false;
  }
  if (!at_start && valid[INTEGER_LITERAL]) {
    skip_indentation(lexer);
    if (lexer->lookahead >= '0' && lexer->lookahead <= '9') {
      return scan_integer(scanner, lexer);
    }
  }
  if (!at_start && (valid[EXEC_BINDING_START] || valid[OPERATION_BINDING_START] ||
                    valid[RESTRICTED_BINDING_START] || valid[NAMED_BINDING_START])) {
    // A let value may start on the next line. Leave newline/EOF handling below
    // in control after skipping header whitespace, before inspecting a word.
    skip_indentation(lexer);
    if (!lexer->eof(lexer) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
      return scan_inline_token(scanner, lexer, valid);
    }
  }

  lexer->mark_end(lexer);
  Indentation indent = indentation(lexer);
  // Item bodies are always rooted in the program. Native recovery may roll
  // the parser back to a header while retaining an abandoned scanner frame.
  if (at_start && !scanner->line_started &&
      (valid[ITEM_START] || valid[ITEM_INDENT] || valid[RUNNABLE_INDENT] || valid[EMPTY_BODY])) {
    scanner->depth = 1;
  }
  Frame frame = scanner->frames[scanner->depth - 1];

  // Diagnose an absent body before the internal lexer consumes the next
  // sibling's first word. No layout frame is opened for a missing body.
  bool opening_body = valid[ITEM_INDENT] || valid[INDENT] || valid[RUNNABLE_INDENT] ||
                      valid[TEXT_INDENT] || valid[REDUCE_INDENT];
  bool structural_entry = valid[LINE_START] || valid[DIRECTIVE_START] ||
                          valid[UNTIL_START] || valid[FROM_START] || valid[REDUCE_TEXT_START];
  bool awaiting_body = scanner->depth == 1 || opening_body || !structural_entry;
  bool literal = frame.mode != STRUCTURAL && indent.column >= frame.column;
  bool opening_text = valid[TEXT_INDENT] && indent.column > frame.column;
  // Reduce opens a structural clause scope, then a literal reducer at the same
  // baseline. Both transitions preserve leading Markdown as literal content.
  bool opening_reduce = valid[REDUCE_INDENT] && indent.column > frame.column;
  bool starting_reduce_text = valid[REDUCE_TEXT_START] && indent.column == frame.column &&
                             indent.prefix == frame.prefix;
  bool opening_structural = valid[ITEM_INDENT] || valid[INDENT] || valid[RUNNABLE_INDENT];
  if (at_start && !scanner->line_started && opening_structural &&
      scanner->trivia.phase != TRIVIA && lexer->lookahead == '#') {
    Trivia trivia = scanner->trivia;
    if (trivia.phase == BODY_BASELINE && !lookahead_body_prefix(lexer, indent, &trivia)) {
      return false;
    }
    scanner->trivia = trivia;
    if (trivia.lines == 0) {
      enum Token token = valid[RUNNABLE_INDENT] ? RUNNABLE_INDENT :
                         valid[ITEM_INDENT] ? ITEM_INDENT : INDENT;
      return push(scanner, lexer, (Indentation){trivia.column, trivia.prefix}, STRUCTURAL, token);
    }
    if (valid[COMMENT_START]) {
      scanner->comment_started = true;
      return emit(scanner, lexer, COMMENT_START);
    }
    return false;
  }
  // Resolve every pending requirement before outer comments, including an
  // already-open body that still needs a statement. Existing same-level entries
  // keep the prefix open; new bodies and values require deeper indentation.
  // Without a body-start signal, blank lines can be consumed normally before
  // inspecting the next comment, substantive line, or EOF.
  if (at_start && !scanner->line_started && !scanner->trivia.lines &&
      scanner->trivia.phase == TRIVIA &&
      (valid[BODY_START] || valid[EMPTY_BODY] ||
       (valid[MISSING_REQUIRED] && (opening_body || lexer->lookahead == '#'))) &&
      !(lexer->lookahead == '#' && (literal || opening_text || opening_reduce || starting_reduce_text)) &&
      (lexer->lookahead == '#' || lexer->lookahead == '\r' || lexer->lookahead == '\n')) {
    bool comment = lexer->lookahead == '#';
    Trivia trivia = {0};
    if (!lookahead_trivia(lexer, indent, &trivia, valid[TEXT_INDENT] || valid[REDUCE_INDENT])) {
      return false;
    }
    bool outside_requirement = trivia.column < frame.column ||
                               (awaiting_body && trivia.column == frame.column);
    if (valid[MISSING_REQUIRED] && outside_requirement) {
      return emit(scanner, lexer, MISSING_REQUIRED);
    }
    if (trivia.column > frame.column) {
      if (valid[BODY_START] && trivia.lines) {
        if (opening_structural) {
          trivia.phase = BODY_BASELINE;
        }
        scanner->trivia = trivia;
        return emit(scanner, lexer, BODY_START);
      }
    } else if (valid[EMPTY_BODY]) {
      return emit(scanner, lexer, EMPTY_BODY);
    } else if (comment && valid[COMMENT_START]) {
      scanner->trivia = trivia;
      scanner->comment_started = true;
      return emit(scanner, lexer, COMMENT_START);
    }
    // Lookahead advanced the lexer without consuming a token. A successful
    // start signal is the only branch that can continue from that position.
    return false;
  }
  if (valid[EMPTY_BODY] && !scanner->line_started &&
      (lexer->eof(lexer) || (at_start && indent.column <= frame.column))) {
    return emit(scanner, lexer, EMPTY_BODY);
  }
  if (valid[MISSING_REQUIRED] && !scanner->line_started &&
      (lexer->eof(lexer) || (at_start &&
       (indent.column < frame.column || (awaiting_body && indent.column == frame.column)) &&
       lexer->lookahead != '#' && lexer->lookahead != '\r' && lexer->lookahead != '\n'))) {
    return emit(scanner, lexer, MISSING_REQUIRED);
  }

  // Recovery can abandon scanner frames before the parser has reduced their
  // owning blocks. Close those parser scopes at the program boundary too.
  if (at_start && indent.column == 0 && scanner->depth == 1 && valid[DEDENT]) {
    scanner->line_started = false;
    return emit(scanner, lexer, DEDENT);
  }

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

  if (frame.mode != STRUCTURAL && !literal && !scanner->line_started && valid[DEDENT]) {
    return emit(scanner, lexer, DEDENT);
  }
  if (lexer->lookahead == '#' && !literal && !opening_text &&
      !opening_reduce && !starting_reduce_text) {
    if (!valid[COMMENT_START] && !valid[DEDENT]) {
      return false;
    }
    Trivia trivia = scanner->trivia;
    if (!trivia.lines && !lookahead_trivia(lexer, indent, &trivia, false)) {
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
  if (!scanner->line_started && opening_reduce) {
    return push(scanner, lexer, indent, STRUCTURAL, REDUCE_INDENT);
  }
  if (!scanner->line_started && valid[RUNNABLE_INDENT] && indent.column > frame.column) {
    // Establish layout before validating the first entry. Rejecting a header
    // first would let an orphaned nested line take over the body's baseline.
    return push(scanner, lexer, indent, STRUCTURAL, RUNNABLE_INDENT);
  }
  if (!scanner->line_started && valid[INDENT] && indent.column > frame.column) {
    return push(scanner, lexer, indent, STRUCTURAL, INDENT);
  }
  if (!scanner->line_started && valid[ITEM_INDENT] && indent.column > frame.column) {
    return push(scanner, lexer, indent, STRUCTURAL, ITEM_INDENT);
  }

  char word[32];
  bool property_name = read_word(lexer, word, sizeof(word));

  if (frame.mode == REDUCE_TEXT && indent.column == frame.column &&
      strcmp(word, "from") == 0 && !scanner->line_started && valid[DEDENT]) {
    return emit(scanner, lexer, DEDENT);
  }

  bool at_baseline = indent.column == frame.column && indent.prefix == frame.prefix;
  if (valid[ITEM_START] && !scanner->line_started && at_baseline) {
    scanner->line_started = true;
    return emit(scanner, lexer, ITEM_START);
  }
  if (valid[MISSING_REQUIRED] && valid[REDUCE_TEXT_START] &&
      !scanner->line_started && at_baseline && strcmp(word, "from") == 0) {
    return emit(scanner, lexer, MISSING_REQUIRED);
  }
  if (valid[REDUCE_TEXT_START] && !scanner->line_started && at_baseline &&
      strcmp(word, "from") != 0) {
    return push(scanner, lexer, indent, REDUCE_TEXT, REDUCE_TEXT_START);
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
    } else if (valid[DIRECTIVE_START]) {
      bool directive = keyword(word, directive_keywords,
                               sizeof(directive_keywords) / sizeof(*directive_keywords));
      if (!directive && property_name && assignment_operator(lexer)) {
        // The prefix is still open after earlier directives or trivia. This
        // token is unavailable once a message or statement has begun.
        return false;
      }
      if (directive) {
        start = DIRECTIVE_START;
      }
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
  buffer[size++] = (char)(scanner->trivia.prefix | (scanner->trivia.phase << 2));
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
  scanner->trivia.prefix = bytes[7] & 3;
  scanner->trivia.phase = bytes[7] >> 2;
  unsigned offset = 8;
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
