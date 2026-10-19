const {
  queryKeys: QUERY_DIRECTIVE_KEYS, routeKeys: ROUTE_DIRECTIVE_KEYS,
  roles, builtinTypes, recallSources, capKinds, tables,
} = require("./keywords.js");

module.exports = grammar({
  name: "toolang",

  word: ($) => $._word,

  extras: () => [/[ \t]/],
  externals: ($) => [
    $.newline, $.blank_line,
    $._comment_start, $.plain_comment, $.shebang_comment,
    $._program_doc_start, $._item_doc_start, $._param_doc_start, $._comment_end,
    $._body_start, $._empty_body, $._item_start, $._item_indent, $._indent, $._runnable_indent, $._dedent, $._line_start, $._directive_start,
    $._until_start, $._from_start, $._reduce_indent, $._reduce_text_start, $._text_indent, $._cap_text_start,
    $._raw_text, $._flow_raw_text, $._agic_raw_text, $._error_line,
    $._exec_binding_start, $._operation_binding_start,
    $._restricted_binding_start, $._named_binding_start,
    $._missing_required,
    $.integer_literal, $._param_error, $._missing_type,
  ],
  rules: {
    program: ($) =>
      repeat(choice($._trivia, $._item)),

    _item: ($) =>
      seq($._item_start, choice(
        $.with,
        $.struct,
        $.psyche,
        $.skill,
        $.service,
        $.prompt,
        $.chore,
        $.context,
        $.instruct,
        $.agic,
        $.flow,
      )),

    _inline_comment: () => token(seq("#", /[^\r\n]*/)),
    _line_end: ($) => seq(optional(alias($._inline_comment, $.plain_comment)), $.newline),
    _text_end: ($) => $.newline,
    program_doc: ($) => seq(
      $._program_doc_start, optional(field("text", alias($._doc_text, $.text))), $._comment_end,
    ),
    item_doc: ($) => seq(
      $._item_doc_start, optional(field("text", alias($._doc_text, $.text))), $._comment_end,
    ),
    param_doc: ($) => seq(
      $._param_doc_start, "@param", $._required_space, field("param", $._param_name),
      $._required_space, field("description", alias($._doc_text, $.text)), $._comment_end,
    ),
    _doc_text: () => token(/[^ \t\r\n][^\r\n]*/),
    _comment: ($) => seq($._comment_start, choice(
      $.program_doc, $.item_doc, $.param_doc, $.plain_comment, $.shebang_comment,
    )),
    _trivia: ($) => choice($._comment, $.blank_line),
    // Every prefix segment consumes trivia, so recovery can establish another
    // boundary without repeating a zero-width token at the same source point.
    // The body has its own boundary when member documentation follows directly.
    _body_prefix: ($) => seq($._body_start, repeat1($._trivia)),

    with: ($) =>
      seq(
        field("keyword", "with"),
        field("kind", $._cap_kind),
        $._required_space,
        field("reference", alias($._structural_text, $.text)),
        $._line_end,
      ),

    type: ($) =>
      seq(
        field("base", $._base_type),
        repeat(field("suffix", "[]")),
      ),

    _base_type: ($) => choice($._builtin_type, $.type_name),
    _builtin_type: ($) => keywordLeaves(builtinTypes, $.builtin_type),

    struct: ($) => seq($._struct_header, body($, $.struct_body)),
    _struct_header: ($) => declarationHeader($, "struct", $.type_name),

    struct_body: ($) =>
      structuralBody($, seq(field("field", $.field), repeat(choice(field("field", $.field), $._trivia))), $._item_indent),
    field: ($) =>
      seq(
        $._line_start,
        field("name", $.identifier),
        optional(field("optional", "?")),
        field("colon", ":"),
        field("type", $.type),
        $._line_end,
      ),

    psyche: ($) => seq($._psyche_header, optionalBody($, $.cap_body)),
    _psyche_header: ($) => declarationHeader($, "psyche", $.cap_name),

    skill: ($) => seq($._skill_header, optionalBody($, $.cap_body)),
    _skill_header: ($) => declarationHeader($, "skill", $.cap_name),

    service: ($) => seq($._service_header, optionalBody($, $.cap_body)),
    _service_header: ($) => declarationHeader($, "service", $.cap_name),

    prompt: ($) => seq($._prompt_header, optionalBody($, $.cap_body)),
    _prompt_header: ($) => declarationHeader($, "prompt", $.cap_name),

    cap_body: ($) => definitionBody($),
    _cap_content: ($) => seq(
      $._cap_text_start,
      repeat1(choice($._content_row, $.blank_line)),
      $._dedent,
    ),

    chore: ($) => seq($._chore_header, optionalBody($, $.chore_body)),
    _chore_header: ($) => declarationHeader($, "chore", $.chore_name),

    cap_name: ($) => $._snake_kebab_name,
    chore_name: ($) => $._snake_kebab_name,

    chore_body: ($) => definitionBody($),

    property: ($) =>
      seq(
        $._line_start,
        field("key", $.identifier),
        field("operator", "="),
        field("value", alias($._structural_text, $.text)),
        $._line_end,
      ),

    instruct: ($) => seq($._instruct_header, content($, "content")),
    _instruct_header: ($) => textHeader($, "instruct"),

    context: ($) => seq($._context_header, content($, "content")),
    _context_header: ($) => textHeader($, "context"),

    _inline_content: ($) => alias($._inline_text, $.text),
    _block_content: ($) => seq(
      optional($._body_start),
      repeat($.blank_line),
      choice(
        seq($._text_indent, repeat1(choice($._content_row, $.blank_line)), $._dedent),
        missing($, "content"),
      ),
    ),
    _content_row: ($) => seq(alias($._raw_text, $.text), $.newline),

    agic: ($) => prec.right(seq($._agic_header, body($, $.agic_body))),
    _agic_header: ($) => runnableHeader($, "agic"),
    agic_body: ($) =>
      structuralBody($,
        choice(
          seq($._directives, optional($._messages)),
          $._messages,
          $._pass_statement,
        ),
        $._runnable_indent,
      ),

    params: ($) =>
      seq(
        "(",
        optional(seq(field("param", $._param_entry), repeat(seq(",", field("param", $._param_entry))))),
        ")",
      ),
    _param_entry: ($) => choice($.param, $.invalid_param),
    // A colon commits to an annotation; recover its missing operands locally.
    invalid_param: ($) => choice(
      seq(optional(field("optional", "?")), ":",
        optional(seq(field("type", $.type), optional(alias($._param_error, $.text))))),
      seq(field("name", $._param_name), optional(field("optional", "?")), ":"),
      seq(field("name", $._param_name), optional(field("optional", "?")),
        ":", field("type", $.type), alias($._param_error, $.text)),
    ),
    param: ($) =>
      seq(
        field("name", $._param_name),
        optional(field("optional", "?")),
        optional(seq(field("colon", ":"), field("type", $.type))),
      ),
    _param_name: ($) => choice(alias("_", $.param_name), alias($._identifier, $.param_name)),

    flow: ($) => prec.right(seq($._flow_header, body($, $.flow_body))),
    _flow_header: ($) => runnableHeader($, "flow"),
    flow_body: ($) =>
      structuralBody($,
        choice(
          seq($._directives, choice($._statements, missing($, "statement"))),
          $._statements,
          $._pass_statement,
        ),
        $._runnable_indent,
      ),
    _statements: ($) => prec.right(seq(
      field("statement", $._flow_statement),
      repeat(choice(field("statement", $._flow_statement), $._trivia)),
    )),
    _flow_statement: ($) =>
      seq($._line_start, choice(
        $.let_statement,
        $.exec_statement,
        alias($._invalid_exec_binding, $.invalid_flow_statement),
        alias($._invalid_restricted_binding, $.invalid_flow_statement),
        alias($._invalid_named_binding, $.invalid_flow_statement),
        $._flow_operation,
        $.invalid_flow_statement,
        $.implicit_run_statement,
      )),
    _flow_operation: ($) =>
      choice(
        $.run_statement,
        $.await_statement,
        $.spawn_statement,
        $.seek_statement,
        $.ask_statement,
        $._collection_operation,
        $.keep_statement,
        $.drop_statement,
        $.sort_statement,
        $.repeat_statement,
      ),
    _collection_operation: ($) => choice(
      $.generate_statement, $.map_statement, $.reduce_statement,
    ),
    _bound_operation: ($) => seq(
      // Select operations before the free-form text alternative can consume them.
      $._operation_binding_start,
      choice($._flow_operation, alias($._invalid_bound_operation, $.invalid_flow_statement)),
    ),
    _binding_operation_word: ($) => keywordChoice($, tables.operation_binding),
    _invalid_bound_operation: ($) => prec.dynamic(-2, seq(
      $._binding_operation_word, optional(alias($._recovery_text, $.text)), $._line_end,
    )),
    let_statement: ($) =>
      choice(
        seq(
          "let",
          $._named_binding_start,
          field("local", $.local_name),
          "=",
          field("statement", $._bound_operation),
        ),
        seq(
          "let",
          field("statement", $._flow_operation),
        ),
        prec.right(seq(
          "let",
          $._named_binding_start,
          field("local", $.local_name),
          "=",
          content($, "value"),
        )),
      ),
    exec_statement: ($) => seq("exec", $._target),
    spawn_statement: ($) => seq("spawn", $._target),
    _invalid_exec_binding: ($) => seq(
      "let",
      optional(seq($._named_binding_start, field("local", $.local_name), "=")),
      $._exec_binding_start,
      "exec",
      optional(alias($._recovery_text, $.text)),
      $._line_end,
    ),
    _invalid_restricted_binding: ($) => seq(
      "let",
      optional(seq($._named_binding_start, field("local", $.local_name), "=")),
      $._restricted_binding_start,
      $._restricted_binding_word,
      optional(alias($._recovery_text, $.text)),
      $._line_end,
    ),
    // Keep a missing assignment delimiter diagnostic local and deterministic
    // instead of choosing between a dropped name and an inserted '='.
    _invalid_named_binding: ($) => prec.dynamic(-2, seq(
      "let", field("local", $.local_name),
      optional(alias($._recovery_text, $.text)),
      $._line_end,
    )),
    run_statement: ($) => choice(
      $._run,
      seq($._async_modifier, $._run_after_modifier),
    ),
    _async_modifier: ($) => field("async", "async"),
    _run: ($) => seq("run", $._target),
    // A modifier consumes the statement-head boundary; keep runworker indivisible.
    // Preserve the unmodified run's existing target ranges above.
    _run_after_modifier: ($) => seq(
      "run",
      choice(
        seq($._required_space, field("target", $.runnable_name), $._line_end),
        prec.right(seq(optional($._required_space), field("target", $.inline_agic))),
        alias($._invalid_modified_run_tail, $.invalid_run_target),
      ),
    ),
    // Keep a malformed modified run on its own line even after its target
    // tokens have committed the lexer to structural parsing.
    _invalid_modified_run_tail: ($) => prec.dynamic(-2, prec(-1, seq(
      optional($._required_space),
      choice(
        seq($.runnable_name, optional(alias($._recovery_text, $.text))),
        // A recognized colon commits to an inline agic, including its missing
        // content recovery. Do not reinterpret that header as a malformed tail.
        seq("->", optional(seq($.type, optional(alias($._recovery_text, $.text))))),
        optional(alias($._recovery_text, $.text)),
      ),
      $._line_end,
    ))),
    await_statement: ($) => seq(
      "await",
      field("handle", $.handle_name),
      $._line_end,
    ),
    implicit_run_statement: ($) => field("content", alias($._implicit_content, $.content)),
    _implicit_content: ($) => paragraph($, $._implicit_run_line),
    _implicit_run_line: ($) => seq(
      alias($._flow_raw_text, $.text), $.newline,
    ),

    seek_statement: ($) => seq("seek", field("agent", $.agent_name), $._target),
    ask_statement: ($) =>
      prec.right(seq(
        "ask",
        ":",
        content($, "content"),
      )),
    generate_statement: ($) =>
      seq(
        "generate",
        $._required_space,
        field("count", $.integer_literal),
        optional($._lanes_clause),
        $._using_target,
      ),
    reduce_statement: ($) =>
      choice(
        seq("reduce", $._using_clause, $._line_end),
        seq($._reduce_named_block_header,
          repeat($._body_prefix), structuralBody($, seq($._from_clause, repeat($._trivia)))),
        prec.right(seq("reduce",
          field("target", alias($._reduce_inline_line, $.inline_agic)))),
        prec.right(seq("reduce",
          field("target", alias($._reduce_inline_block, $.inline_agic)),
          optional($._from_clause), repeat($._trivia), $._dedent)),
        seq("reduce",
          field("target", alias($._reduce_empty_block, $.inline_agic))),
      ),
    _reduce_named_block_header: ($) => seq(
      "reduce", usingClause($), ":", $._line_end,
    ),
    _reduce_inline_line: ($) => seq(
      optional($._return_clause),
      ":", field("content", alias($._inline_content, $.content)), $._text_end,
    ),
    _reduce_block_header: ($) => seq(
      optional($._return_clause),
      ":", $._text_end,
    ),
    _reduce_inline_block: ($) => seq(
      $._reduce_block_header,
      field("content", alias($._reduce_content, $.content)),
    ),
    _reduce_empty_block: ($) => seq(
      $._reduce_block_header, field("content", alias($._empty_content, $.content)),
    ),
    _empty_content: ($) => missing($, "content"),
    _reduce_content: ($) => seq(
      optional($._body_start), repeat($.blank_line), $._reduce_indent,
      choice(
        seq($._reduce_text_start, repeat1(choice($._content_row, $.blank_line)), $._dedent),
        missing($, "content"),
      ),
    ),
    _from_clause: ($) => seq(
      $._from_start, "from", ":", content($, "from"),
    ),
    map_statement: ($) =>
      seq(
        "map",
        optional($._lanes_clause),
        $._using_target,
      ),
    keep_statement: ($) =>
      choice(
        seq(
          "keep",
          field("selection", $.selection),
          $._line_end,
        ),
        prec.right(seq(
          "keep",
          optional($._lanes_clause), $._if_target,
        )),
      ),
    drop_statement: ($) =>
      choice(
        seq(
          "drop",
          field("selection", $.selection),
          $._line_end,
        ),
        prec.right(seq(
          "drop",
          optional($._lanes_clause), $._if_target,
        )),
      ),
    sort_statement: ($) =>
      prec.right(seq(
        "sort",
        $._order_clause,
        optional($._lanes_clause), $._by_target,
      )),
    _required_space: () => token.immediate(/[ \t]+/),
    _target: ($) => choice(
      seq(field("target", $.runnable_name), $._line_end),
      prec.right(field("target", $.inline_agic)),
    ),
    _using_clause: ($) => usingClause($),
    _using_target: ($) => choice(
      seq($._using_clause, $._line_end),
      field("target", $.inline_agic),
    ),
    _if_target: ($) => seq("if", $._target),
    _by_target: ($) => seq("by", $._target),
    _lanes_clause: ($) =>
      seq(
        "in",
        $._required_space,
        field("lanes", $.integer_literal),
        choice("lane", "lanes"),
      ),
    _order_clause: ($) =>
      field("order", choice(
        "ascending",
        "descending",
      )),
    repeat_statement: ($) => prec.right(seq(
      $._repeat_header, body($, $.repeat_body),
    )),
    _repeat_header: ($) => seq(
      "repeat",
      optional($._times_clause),
      optional($._window_clause),
      ":",
      $._line_end,
    ),
    repeat_body: ($) => structuralBody($, choice(
      seq(
        $._statements,
        optional(seq($._until_entry, repeat($._trivia), optional($._statements))),
      ),
      seq($._until_entry, repeat($._trivia),
        choice($._statements, missing($, "statement"))),
    )),
    _window_clause: ($) => seq(
      "windowing",
      $._required_space, field("window", $.integer_literal),
    ),
    _times_clause: ($) =>
      seq(
        field("count", $.integer_literal),
        choice("time", "times"),
      ),
    until_clause: ($) =>
      prec.dynamic(2, seq(
        $._until_start,
        "until",
        choice(
          seq(field("target", $.runnable_name), $._line_end),
          field("target", alias($._until_agic, $.inline_agic)),
        ),
      )),
    // Commit the clause entry before inspecting its target. A malformed target
    // stays in this repeat instead of rolling recovery back through its header.
    // Both alternatives expose existing public nodes directly in the body.
    _until_entry: ($) => choice(
      field("until", $.until_clause),
      field("statement", alias($._invalid_until_clause, $.invalid_flow_statement)),
    ),
    _invalid_until_clause: ($) => prec.dynamic(-2, seq(
      $._until_start, "until",
      optional(alias($._recovery_text, $.text)), $._line_end,
    )),
    invalid_flow_statement: ($) =>
      prec.dynamic(-2, seq(
        $._flow_keyword,
        optional(alias($._recovery_text, $.text)),
        $._line_end,
      )),
    inline_agic: ($) =>
      seq(
        optional($._return_clause),
        ":",
        content($, "content"),
      ),
    _until_agic: ($) =>
      seq(
        ":",
        content($, "content"),
      ),
    _return_clause: ($) => seq(
      field("arrow", "->"),
      choice(field("return", $.type), alias($._missing_type, $.invalid_missing_type)),
    ),
    selection: ($) =>
      seq(
        field("side", choice("first", "last")),
        $._required_space,
        field("count", $.integer_literal),
      ),
    runnable_name: ($) => $._identifier,
    agent_name: ($) => $._identifier,
    local_name: ($) => $._identifier,
    handle_name: ($) => $._identifier,

    _directive_entry: ($) => choice($.directive, $.invalid_directive),
    invalid_directive: ($) => prec.dynamic(-2, seq(
      $._directive_start,
      field("key", choice($._query_directive_key, $._route_directive_key,
        ...["recall", "lanes", "context", "instruct"].map(word => alias(word, $.directive_key)))),
      optional(field("operator", $._directive_operator)),
      optional(alias($._recovery_text, $.text)),
      $._line_end,
    )),
    directive: ($) => seq($._directive_start, choice(
      seq(field("key", $._query_directive_key),
        field("operator", $._directive_operator), field("value", $.query_value)),
      seq(field("key", $._route_directive_key),
        field("operator", "="), field("value", $.route_value)),
      seq(field("key", alias("recall", $.directive_key)), field("operator", "="),
        field("value", $.recall_value)),
      seq(field("key", alias("lanes", $.directive_key)),
        field("operator", "="),
        field("value", choice($.integer_literal, "default"))),
      seq(field("key", choice(alias("instruct", $.directive_key), alias("context", $.directive_key))),
        field("operator", "="), field("value", $._text_ref)),
    ), $._line_end),
    _query_directive_key: ($) => keywordLeaves(QUERY_DIRECTIVE_KEYS, $.directive_key),
    _route_directive_key: ($) => keywordLeaves(ROUTE_DIRECTIVE_KEYS, $.directive_key),
    _directive_operator: () => choice("=", "+=", "-="),
    // Prefer a valid raw query value over the overlapping recovery fragment.
    query_value: () => prec(1, token(prec(-1, /[^ \t#\r\n][^#\r\n]*/))),
    route_value: ($) => choice("none", "*",
      seq($.runnable_ref, repeat(seq(",", $.runnable_ref)))),
    runnable_ref: () => token(/([A-Za-z_][A-Za-z0-9_-]*::)*(agic:|flow:)?[A-Za-z_][A-Za-z0-9_-]*/),
    recall_value: ($) => choice("none", "*", "default",
      seq($._recall_source, repeat(seq(",", $._recall_source)))),
    _recall_source: ($) => keywordLeaves(recallSources, $.recall_source),
    _directives: ($) => prec.right(seq(
      field("directive", $._directive_entry), repeat(choice(field("directive", $._directive_entry), $._trivia)),
    )),
    _text_ref: ($) => choice("default", "none", $.identifier),
    _messages: ($) => prec.right(seq(
      field("message", $._message_entry), repeat(choice(field("message", $._message_entry), $._trivia)),
    )),
    _message_entry: ($) => choice($.message, seq($._line_start, $.invalid_agic_message)),
    message: ($) =>
      seq($._line_start, choice(
        seq(field("role", $._role), ":", content($, "content")),
        field("content", alias($._message_content, $.content)),
      )),
    _message_content: ($) => paragraph($, $._unroled_message_line),
    _unroled_message_line: ($) => seq(
      alias($._agic_raw_text, $.text), $.newline,
    ),
    invalid_agic_message: ($) =>
      prec.dynamic(-2, seq(
        $._agic_keyword,
        optional(alias($._recovery_text, $.text)),
        $._line_end,
      )),
    _role: ($) => keywordLeaves(roles, $.role),
    _pass_statement: ($) =>
      prec(1, seq($._line_start, "pass", $._line_end, repeat($._trivia))),
    _flow_keyword: ($) => keywordChoice($, tables.flow),
    _agic_keyword: ($) => keywordChoice($, tables.agic),
    _restricted_binding_word: ($) => keywordChoice($, tables.restricted_binding),

    _cap_kind: ($) => keywordLeaves(capKinds, $.cap_kind),

    // Keyword boundaries are broader than valid authored identifier names. Keep
    // this rule before the narrower name tokens to win equal-length matches.
    _word: () => token(/[A-Za-z_][A-Za-z0-9_]*/),
    type_name: () => token(/[A-Z][A-Za-z0-9]*/),
    identifier: ($) => $._identifier,
    _identifier: () => token(/[a-z][a-z0-9_]*/),
    _snake_kebab_name: () => token(/[a-z][a-z0-9_-]*/),
    // Inline content owns its entire physical line. Structural raw values keep
    // their comment delimiter; both expose the same public text leaf.
    _structural_text: () => token(prec(-1, /[^#\r\n]+/)),
    _inline_text: () => token(prec(-1, /[ \t]*[^ \t\r\n][^\r\n]*/)),
    // Recovery text must not absorb extras shared with structural tokens.
    _recovery_text: () => token(prec(-1, /[^ \t#\r\n][^#\r\n]*/)),
  },
});

// Reduce complete headers before entering their bodies. Native recovery can
// then discard a malformed member without reopening an enclosing header.
// Hidden rules propagate the original public fields and leaves directly.
function declarationHeader($, keyword, name) {
  return seq(field("keyword", keyword), field("name", name), field("colon", ":"), $._line_end);
}

function runnableHeader($, keyword) {
  return seq(
    field("keyword", keyword),
    optional(field("name", $.runnable_name)),
    optional(field("params", $.params)),
    optional($._return_clause),
    field("colon", ":"), $._line_end,
  );
}

function textHeader($, keyword) {
  return seq(field("keyword", keyword), optional(field("name", $.identifier)), field("colon", ":"));
}

// Expand the phrase inside complete headers so required fields remain visible
// to Tree-sitter's schema generator, while sharing the authored syntax.
function usingClause($) {
  return seq("using", $._required_space, field("target", $.runnable_name));
}

// Content is a semantic value; spelling and line endings do not add wrappers.
function content($, name) {
  return choice(
    seq(field(name, alias($._inline_content, $.content)), $._text_end),
    prec.right(seq($._text_end, field(name, alias($._block_content, $.content)))),
  );
}

function body($, node) {
  return seq(repeat($._body_prefix), field("body", node));
}

function optionalBody($, node) {
  return choice(body($, node), $._empty_body);
}

function definitionBody($) {
  return seq(
    optional($._body_start),
    $._item_indent,
    repeat(choice(field("property", $.property), $._trivia)),
    optional(field("content", alias($._cap_content, $.content))),
    $._dedent,
  );
}

// One scanner boundary signal, with diagnostics owned by the grammar context.
function missing($, kind) {
  return alias($._missing_required, $[`invalid_missing_${kind}`]);
}

function structuralBody($, content, indent = $._indent) {
  // The prefix guard leaves outer trivia outside the body. Leading member
  // documentation enters with the body's frame, using the first real member's
  // baseline. Trivia also synchronizes recovery before that required member.
  return prec.right(choice(
    seq(optional($._body_start), indent, repeat($._trivia), choice(content, missing($, "body")), $._dedent),
    missing($, "body"),
  ));
}

function paragraph($, line) {
  return prec.right(seq(
    line,
    repeat(choice(line, seq($.blank_line, line))),
    optional($.blank_line),
  ));
}

// Keep each word eligible for keyword extraction without adding CST wrappers.
function keywordLeaves(words, node) {
  return choice(...words.map(word => alias(word, node)));
}

// Recognition context comes from the vocabulary; public leaves retain their roles.
function keywordChoice($, words) {
  return choice(...[...new Set(words)].map(word => {
    if (roles.includes(word)) return alias(word, $.role);
    if ([...QUERY_DIRECTIVE_KEYS, ...ROUTE_DIRECTIVE_KEYS, "recall"].includes(word)) {
      return alias(word, $.directive_key);
    }
    return word;
  }));
}
