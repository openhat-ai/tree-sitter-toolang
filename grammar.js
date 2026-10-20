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
    $._until_start, $._initial_start, $._reduce_indent, $._reduce_text_start, $._text_indent, $._definition_text_start,
    $._raw_text, $._flow_raw_text, $._agic_raw_text, $._error_line,
    $._exec_binding_start, $._operation_binding_start,
    $._restricted_binding_start, $._named_binding_start,
    $._missing_required,
    $.integer_literal, $._param_error,
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
        field("name", $._name),
        optional(field("optional", "?")),
        field("colon", ":"),
        field("type", $.type),
        $._line_end,
      ),

    psyche: ($) => seq($._psyche_header, optionalBody($, $.cap_body)),
    _psyche_header: ($) => declarationHeader($, "psyche", $._cap_name),

    skill: ($) => seq($._skill_header, optionalBody($, $.cap_body)),
    _skill_header: ($) => declarationHeader($, "skill", $._cap_name),

    service: ($) => seq($._service_header, optionalBody($, $.cap_body)),
    _service_header: ($) => declarationHeader($, "service", $._cap_name),

    prompt: ($) => seq($._prompt_header, optionalBody($, $.cap_body)),
    _prompt_header: ($) => declarationHeader($, "prompt", $._cap_name),

    cap_body: ($) => definitionBody($),
    _definition_content: ($) => seq(
      $._definition_text_start,
      repeat1(choice($._content_line, $.blank_line)),
      $._dedent,
    ),

    chore: ($) => seq($._chore_header, optionalBody($, $.chore_body)),
    _chore_header: ($) => declarationHeader($, "chore", $._chore_name),

    _cap_name: ($) => alias($._snake_kebab_name, $.cap_name),
    _chore_name: ($) => alias($._snake_kebab_name, $.chore_name),

    chore_body: ($) => definitionBody($),

    property: ($) =>
      seq(
        $._line_start,
        field("key", $._name),
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
        seq($._text_indent, repeat1(choice($._content_line, $.blank_line)), $._dedent),
        missing($, "content"),
      ),
    ),
    _content_line: ($) => seq(alias($._raw_text, $.text), $.newline),

    agic: ($) => prec.right(seq($._agic_header, body($, $.agic_body))),
    _agic_header: ($) => seq($._agic_head, field("colon", ":"), $._line_end),
    _agic_head: ($) => runnableHead($, "agic"),
    agic_body: ($) =>
      structuralBody($,
        choice(
          seq($._directives, optional($._messages)),
          $._messages,
          $._pass_stmt,
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
    // Keep malformed suffixes and unnamed entries local to their real list
    // delimiter. A missing type after an authored name uses native recovery.
    invalid_param: ($) => choice(
      seq(optional(field("optional", "?")), ":",
        optional(seq(field("type", $.type), optional(alias($._param_error, $.text))))),
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
    _flow_header: ($) => seq($._flow_head, field("colon", ":"), $._line_end),
    _flow_head: ($) => runnableHead($, "flow"),
    flow_body: ($) =>
      structuralBody($,
        choice(
          seq($._directives, choice($._stmts, missing($, "stmt"))),
          $._stmts,
          $._pass_stmt,
        ),
        $._runnable_indent,
      ),
    _stmts: ($) => prec.right(seq(
      field("stmt", $._flow_stmt),
      repeat(choice(field("stmt", $._flow_stmt), $._trivia)),
    )),
    _flow_stmt: ($) =>
      seq($._line_start, choice(
        $.let_stmt,
        $.exec_stmt,
        alias($._invalid_binding, $.invalid_flow_stmt),
        $._flow_operation,
        $.implicit_run_stmt,
      )),
    _flow_operation: ($) =>
      choice(
        $.run_stmt,
        $.await_stmt,
        $.spawn_stmt,
        $.seek_stmt,
        $.ask_stmt,
        $._collection_operation,
        $.keep_stmt,
        $.drop_stmt,
        $.sort_stmt,
        $.repeat_stmt,
      ),
    _collection_operation: ($) => choice(
      $.generate_stmt, $.map_stmt, $.reduce_stmt,
    ),
    _bound_operation: ($) => seq(
      // Select operations before the free-form text alternative can consume them.
      $._operation_binding_start,
      $._flow_operation,
    ),
    _let_header: ($) => seq("let", $._named_binding_start, field("local", $._local_name), "="),
    let_stmt: ($) => choice(
      seq($._let_header, field("stmt", $._bound_operation)),
      seq("let", field("stmt", $._flow_operation)),
      prec.right(seq($._let_header, content($, "value"))),
    ),
    exec_stmt: ($) => seq("exec", $._target_tail),
    spawn_stmt: ($) => seq("spawn", $._target_tail),
    // These heads cannot be operations or literal values in a binding. Retain
    // one bounded diagnostic instead of letting text recovery accept them.
    _invalid_binding: ($) => seq(
      choice($._let_header, "let"),
      choice(
        seq($._exec_binding_start, "exec"),
        seq($._restricted_binding_start, $._restricted_binding_keyword),
      ),
      optional(alias($._recovery_text, $.text)),
      $._line_end,
    ),
    run_stmt: ($) => choice(
      seq($._named_run_header, $._line_end),
      seq($._run_header, prec.right(seq(optional($._required_space), $._inline_target))),
    ),
    _run_header: ($) => seq(optional($._async_modifier), "run"),
    _named_run_header: ($) => seq($._run_header, $._required_space, $._named_target),
    _async_modifier: ($) => field("async", "async"),
    await_stmt: ($) => seq(
      "await",
      field("handle", $._handle_name),
      $._line_end,
    ),
    implicit_run_stmt: ($) => field("content", alias($._implicit_content, $.content)),
    _implicit_content: ($) => paragraph($, $._implicit_run_line),
    _implicit_run_line: ($) => seq(
      alias($._flow_raw_text, $.text), $.newline,
    ),

    seek_stmt: ($) => seq("seek", field("agent", $._agent_name), $._target_tail),
    ask_stmt: ($) =>
      prec.right(seq(
        "ask",
        ":",
        content($, "content"),
      )),
    generate_stmt: ($) =>
      seq(
        "generate",
        $._required_space,
        field("count", $.integer_literal),
        optional($._lanes_clause),
        $._using_tail,
      ),
    reduce_stmt: ($) =>
      choice(
        seq("reduce", $._using_clause, $._line_end),
        seq($._reduce_using_header,
          repeat($._body_prefix), structuralBody($, seq($._initial_clause, repeat($._trivia)))),
        prec.right(seq("reduce",
          field("target", alias($._reduce_inline_line, $.inline_agic)))),
        prec.right(seq("reduce",
          field("target", alias($._reduce_inline_block, $.inline_agic)),
          optional($._initial_clause), repeat($._trivia), $._dedent)),
        seq("reduce",
          field("target", alias($._reduce_empty_block, $.inline_agic))),
      ),
    _reduce_using_header: ($) => seq(
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
        seq($._reduce_text_start, repeat1(choice($._content_line, $.blank_line)), $._dedent),
        missing($, "content"),
      ),
    ),
    _initial_clause: ($) => seq(
      $._initial_start, "initial", ":", content($, "initial"),
    ),
    map_stmt: ($) =>
      seq(
        "map",
        optional($._lanes_clause),
        $._using_tail,
      ),
    keep_stmt: ($) =>
      choice(
        seq(
          "keep",
          field("selection", $.selection),
          $._line_end,
        ),
        prec.right(seq(
          "keep",
          optional($._lanes_clause), $._if_tail,
        )),
      ),
    drop_stmt: ($) =>
      choice(
        seq(
          "drop",
          field("selection", $.selection),
          $._line_end,
        ),
        prec.right(seq(
          "drop",
          optional($._lanes_clause), $._if_tail,
        )),
      ),
    sort_stmt: ($) =>
      prec.right(seq(
        "sort",
        $._sort_order,
        optional($._lanes_clause), $._by_tail,
      )),
    _required_space: () => token.immediate(/[ \t]+/),
    _named_target: ($) => field("target", $._runnable_name),
    _inline_target: ($) => field("target", $.inline_agic),
    // Target forms expose only their value. Tails complete the surrounding
    // statement; inline content already owns its physical line ending.
    _target_tail: ($) => choice(
      seq($._named_target, $._line_end),
      prec.right($._inline_target),
    ),
    _using_clause: ($) => usingClause($),
    _using_tail: ($) => choice(
      seq($._using_clause, $._line_end),
      $._inline_target,
    ),
    _if_tail: ($) => seq("if", $._target_tail),
    _by_tail: ($) => seq("by", $._target_tail),
    _lanes_clause: ($) =>
      seq(
        "in",
        $._required_space,
        field("lanes", $.integer_literal),
        choice("lane", "lanes"),
      ),
    _sort_order: ($) =>
      field("order", choice(
        "ascending",
        "descending",
      )),
    repeat_stmt: ($) => prec.right(seq(
      $._repeat_header, body($, $.repeat_body),
    )),
    // Reduce options before the terminator so recovery cannot borrow a later
    // declaration's colon when this header is incomplete.
    _repeat_header: ($) => seq($._repeat_head, ":", $._line_end),
    _repeat_head: ($) => seq(
      "repeat",
      optional($._times_clause),
      optional($._windowing_clause),
    ),
    repeat_body: ($) => structuralBody($, choice(
      seq(
        $._stmts,
        optional(seq($._until_entry, repeat($._trivia), optional($._stmts))),
      ),
      seq($._until_entry, repeat($._trivia),
        choice($._stmts, missing($, "stmt"))),
    )),
    _windowing_clause: ($) => seq(
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
          seq(field("target", $._runnable_name), $._line_end),
          field("target", alias($._until_agic, $.inline_agic)),
        ),
      )),
    // Commit the clause entry before inspecting its target. A malformed target
    // stays in this repeat instead of rolling recovery back through its header.
    // Both alternatives expose existing public nodes directly in the body.
    _until_entry: ($) => choice(
      field("until", $.until_clause),
      field("stmt", alias($._invalid_until_clause, $.invalid_flow_stmt)),
    ),
    _invalid_until_clause: ($) => prec.dynamic(-2, seq(
      $._until_start, "until",
      choice(
        seq($._runnable_name, alias($._recovery_text, $.text)),
        optional(alias($._recovery_text, $.text)),
      ), $._line_end,
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
      field("return", $.type),
    ),
    selection: ($) =>
      seq(
        field("side", choice("first", "last")),
        $._required_space,
        field("count", $.integer_literal),
      ),
    // Alias lexical leaves directly so native missing tokens stay visible
    // under their public role instead of inside forwarding nodes.
    _runnable_name: ($) => alias($._identifier, $.runnable_name),
    _agent_name: ($) => alias($._identifier, $.agent_name),
    _local_name: ($) => alias($._identifier, $.local_name),
    _handle_name: ($) => alias($._identifier, $.handle_name),

    directive: ($) => seq($._directive_start, choice(
      seq(field("key", $._query_key),
        field("operator", $._directive_operator), field("value", $._query_value)),
      seq(field("key", $._route_key),
        field("operator", "="), field("value", $.route_value)),
      seq(field("key", alias("recall", $.directive_key)), field("operator", "="),
        field("value", $.recall_value)),
      seq(field("key", alias("lanes", $.directive_key)),
        field("operator", "="),
        field("value", choice($.integer_literal, "default"))),
      seq(field("key", choice(alias("instruct", $.directive_key), alias("context", $.directive_key))),
        field("operator", "="), field("value", $._text_ref)),
    ), $._line_end),
    _query_key: ($) => keywordLeaves(QUERY_DIRECTIVE_KEYS, $.directive_key),
    _route_key: ($) => keywordLeaves(ROUTE_DIRECTIVE_KEYS, $.directive_key),
    _directive_operator: () => choice("=", "+=", "-="),
    _query_value: ($) => alias(token(prec(-1, /[^ \t#\r\n][^#\r\n]*/)), $.query_value),
    route_value: ($) => choice("none", "*",
      seq($.runnable_ref, repeat(seq(",", $.runnable_ref)))),
    runnable_ref: () => token(/([A-Za-z_][A-Za-z0-9_-]*::)*(agic:|flow:)?[A-Za-z_][A-Za-z0-9_-]*/),
    recall_value: ($) => choice("none", "*", "default",
      seq($._recall_source, repeat(seq(",", $._recall_source)))),
    _recall_source: ($) => keywordLeaves(recallSources, $.recall_source),
    _directives: ($) => prec.right(seq(
      field("directive", $.directive), repeat(choice(field("directive", $.directive), $._trivia)),
    )),
    _text_ref: ($) => choice("default", "none", $._name),
    _messages: ($) => prec.right(seq(
      field("message", $.message), repeat(choice(field("message", $.message), $._trivia)),
    )),
    message: ($) =>
      seq($._line_start, choice(
        seq(field("role", $._role), ":", content($, "content")),
        field("content", alias($._message_content, $.content)),
      )),
    _message_content: ($) => paragraph($, $._implicit_message_line),
    _implicit_message_line: ($) => seq(
      alias($._agic_raw_text, $.text), $.newline,
    ),
    _role: ($) => keywordLeaves(roles, $.role),
    _pass_stmt: ($) =>
      prec(1, seq($._line_start, "pass", $._line_end, repeat($._trivia))),
    _restricted_binding_keyword: () => choice(...tables.restricted_binding),

    _cap_kind: ($) => keywordLeaves(capKinds, $.cap_kind),

    // Keyword boundaries are broader than valid authored identifier names. Keep
    // this rule before the narrower name tokens to win equal-length matches.
    _word: () => token(/[A-Za-z_][A-Za-z0-9_]*/),
    type_name: () => token(/[A-Z][A-Za-z0-9]*/),
    _name: ($) => alias($._identifier, $.identifier),
    _identifier: () => token(/[a-z][a-z0-9_]*/),
    _snake_kebab_name: () => token(/[a-z][a-z0-9_-]*/),
    // Inline content owns its entire physical line. Structural raw values keep
    // their comment delimiter; both expose the same public text leaf.
    _structural_text: () => token(prec(-1, /[^#\r\n]+/)),
    _inline_text: () => token(prec(-1, /[ \t]*[^ \t\r\n][^\r\n]*/)),
    // Recovery fragments must not absorb extras shared with structural tokens.
    _recovery_text: () => token(prec(-1, /[^ \t#\r\n][^#\r\n]*/)),
  },
});

// Reduce complete headers before entering their bodies. Native recovery can
// then discard a malformed member without reopening an enclosing header.
// Hidden rules propagate the original public fields and leaves directly.
function declarationHeader($, keyword, name) {
  return seq(field("keyword", keyword), field("name", name), field("colon", ":"), $._line_end);
}

// Commit the signature independently of its colon and physical line ending.
function runnableHead($, keyword) {
  return seq(
    field("keyword", keyword),
    optional(field("name", $._runnable_name)),
    optional(field("params", $.params)),
    optional($._return_clause),
  );
}

function textHeader($, keyword) {
  return seq(field("keyword", keyword), optional(field("name", $._name)), field("colon", ":"));
}

// Expand the phrase inside complete headers so required fields remain visible
// to Tree-sitter's schema generator, while sharing the authored syntax.
function usingClause($) {
  return seq("using", $._required_space, field("target", $._runnable_name));
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
    optional(field("content", alias($._definition_content, $.content))),
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
