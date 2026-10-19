const {
  wordNodes, queryKeys: QUERY_DIRECTIVE_KEYS, routeKeys: ROUTE_DIRECTIVE_KEYS,
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
    $._body_start, $._empty_body, $._indent, $._runnable_indent, $._dedent, $._line_start, $._directive_start,
    $._until_start, $._from_start, $._reduce_indent, $._reduce_text_start, $._text_indent, $._cap_text_start,
    $._raw_text, $._flow_raw_text, $._agic_raw_text, $._error_line,
    $._exec_binding_start, $._operation_binding_start,
    $._restricted_binding_start, $._named_binding_start,
    $._missing_required,
    $.integer_literal,
  ],
  rules: {
    program: ($) =>
      repeat(choice($._trivia, $._item)),

    _item: ($) =>
      seq($._line_start, choice(
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
    _text_line_end: ($) => $.newline,
    program_doc: ($) => seq(
      $._program_doc_start, optional(field("text", $.comment_text)), $._comment_end,
    ),
    item_doc: ($) => seq(
      $._item_doc_start, optional(field("text", $.comment_text)), $._comment_end,
    ),
    param_doc: ($) => seq(
      $._param_doc_start, "@param", $._doc_space, field("param", $._param_name),
      $._doc_space, field("description", $.comment_text), $._comment_end,
    ),
    _doc_space: () => token.immediate(/[ \t]+/),
    comment_text: () => token(/[^ \t\r\n][^\r\n]*/),
    _comment: ($) => seq($._comment_start, choice(
      $.program_doc, $.item_doc, $.param_doc, $.plain_comment, $.shebang_comment,
    )),
    _trivia: ($) => choice($._comment, $.blank_line),
    _body_prefix: ($) => seq($._body_start, repeat1($._trivia)),

    with: ($) =>
      seq(
        field("keyword", $.with_keyword),
        field("kind", $._cap_kind),
        $._required_space,
        field("reference", $.text_line),
        $._line_end,
      ),

    type: ($) =>
      seq(
        field("base", $._base_type),
        repeat(field("suffix", $.array_suffix)),
      ),

    _base_type: ($) => choice($._builtin_type, $.type_name),
    _builtin_type: ($) => keywordLeaves(builtinTypes, $.builtin_type),
    array_suffix: () => "[]",

    struct: ($) =>
      seq(
        field("keyword", $.struct_keyword),
        field("name", $.type_name),
        field("colon", $.colon),
        $._line_end,
        body($, $.struct_body),
      ),

    struct_body: ($) =>
      structuralBody($, seq(field("field", $.field), repeat(choice(field("field", $.field), $._trivia)))),
    field: ($) =>
      seq(
        $._line_start,
        field("name", $.identifier),
        optional(field("optional", $.optional_marker)),
        field("colon", $.colon),
        field("type", $.type),
        $._line_end,
      ),

    psyche: ($) =>
      seq(
        field("keyword", $.psyche_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        $._line_end, optionalBody($, $.cap_body),
      ),

    skill: ($) =>
      seq(
        field("keyword", $.skill_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        $._line_end, optionalBody($, $.cap_body),
      ),

    service: ($) =>
      seq(
        field("keyword", $.service_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        $._line_end, optionalBody($, $.cap_body),
      ),

    prompt: ($) =>
      seq(
        field("keyword", $.prompt_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        $._line_end, optionalBody($, $.cap_body),
      ),

    cap_body: ($) => definitionBody($),
    _cap_content: ($) => seq(
      $._cap_text_start,
      repeat1(choice($._content_row, $.blank_line)),
      $._dedent,
    ),

    chore: ($) =>
      seq(
        field("keyword", $.chore_keyword),
        field("name", $.chore_name),
        field("colon", $.colon),
        $._line_end, optionalBody($, $.chore_body),
      ),

    cap_name: ($) => $._snake_kebab_name,
    chore_name: ($) => $._snake_kebab_name,

    chore_body: ($) => definitionBody($),

    property: ($) =>
      seq(
        $._line_start,
        field("key", $.identifier),
        field("operator", $.assign_operator),
        field("value", $.text_line),
        $._line_end,
      ),

    instruct: ($) =>
      seq(
        field("keyword", $.instruct_keyword),
        optional(field("name", $.identifier)),
        field("colon", $.colon),
        content($, "content"),
      ),

    context: ($) =>
      seq(
        field("keyword", $.context_keyword),
        optional(field("name", $.identifier)),
        field("colon", $.colon),
        content($, "content"),
      ),

    _inline_content: ($) => alias($._literal_text_line, $.text_line),
    _block_content: ($) => seq(
      optional($._body_start),
      repeat($.blank_line),
      choice(
        seq($._text_indent, repeat1(choice($._content_row, $.blank_line)), $._dedent),
        missing($, "content"),
      ),
    ),
    _content_row: ($) => seq(alias($._raw_text, $.text_line), $.newline),

    agic: ($) =>
      prec.right(seq(
        field("keyword", $.agic_keyword),
        optional(field("name", $.runnable_name)),
        optional(field("params", $.params)),
        optional(seq(field("arrow", $.arrow), field("return", $.type))),
        field("colon", $.colon),
        $._line_end,
        body($, $.agic_body),
      )),
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
        $.lparen,
        optional(seq(field("param", $.param), repeat(seq($.comma, field("param", $.param))))),
        $.rparen,
      ),
    param: ($) =>
      seq(
        field("name", $._param_name),
        optional(field("optional", $.optional_marker)),
        optional(seq(field("colon", $.colon), field("type", $.type))),
      ),
    _param_name: ($) => choice(alias("_", $.param_name), alias($._identifier, $.param_name)),

    flow: ($) =>
      prec.right(seq(
        field("keyword", $.flow_keyword),
        optional(field("name", $.runnable_name)),
        optional(field("params", $.params)),
        optional(seq(field("arrow", $.arrow), field("return", $.type))),
        field("colon", $.colon),
        $._line_end,
        body($, $.flow_body),
      )),
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
      $._binding_operation_word, optional(alias($._diagnostic_text, $.text_line)), $._line_end,
    )),
    let_statement: ($) =>
      choice(
        seq(
          $.let_keyword,
          $._named_binding_start,
          field("local", $.local_name),
          $.assign_operator,
          field("statement", $._bound_operation),
        ),
        seq(
          $.let_keyword,
          field("statement", $._flow_operation),
        ),
        prec.right(seq(
          $.let_keyword,
          $._named_binding_start,
          field("local", $.local_name),
          $.assign_operator,
          content($, "value"),
        )),
      ),
    exec_statement: ($) =>
      choice(
        seq(
          $.exec_keyword,
          field("target", $.runnable_name),
          $._line_end,
        ),
        prec.right(seq(
          $.exec_keyword,
          field("target", $.inline_agic),
        )),
      ),
    spawn_statement: ($) =>
      choice(
        seq(
          $.spawn_keyword,
          field("target", $.runnable_name),
          $._line_end,
        ),
        prec.right(seq(
          $.spawn_keyword,
          field("target", $.inline_agic),
        )),
      ),
    _invalid_exec_binding: ($) => seq(
      $.let_keyword,
      optional(seq($._named_binding_start, field("local", $.local_name), $.assign_operator)),
      $._exec_binding_start,
      $.exec_keyword,
      optional(alias($._diagnostic_text, $.text_line)),
      $._line_end,
    ),
    _invalid_restricted_binding: ($) => seq(
      $.let_keyword,
      optional(seq($._named_binding_start, field("local", $.local_name), $.assign_operator)),
      $._restricted_binding_start,
      $._restricted_binding_word,
      optional(alias($._diagnostic_text, $.text_line)),
      $._line_end,
    ),
    // Keep a missing assignment delimiter diagnostic local and deterministic
    // instead of choosing between a dropped name and an inserted '='.
    _invalid_named_binding: ($) => prec.dynamic(-2, seq(
      $.let_keyword, field("local", $.local_name),
      optional(alias($._diagnostic_text, $.text_line)),
      $._line_end,
    )),
    run_statement: ($) => choice(
      $._run,
      seq($._async_modifier, $._run_after_modifier),
    ),
    _async_modifier: ($) => field("async", $.async_keyword),
    _run: ($) => choice(
      seq($.run_keyword, field("target", $.runnable_name), $._line_end),
      prec.right(seq($.run_keyword, field("target", $.inline_agic))),
    ),
    // A modifier consumes the statement-head boundary; keep runworker indivisible.
    // Preserve the unmodified run's existing target ranges above.
    _run_after_modifier: ($) => seq(
      $.run_keyword,
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
        seq($.runnable_name, optional(alias($._diagnostic_text, $.text_line))),
        // A recognized colon commits to an inline agic, including its missing
        // content recovery. Do not reinterpret that header as a malformed tail.
        seq($.arrow, optional(seq($.type, optional(alias($._diagnostic_text, $.text_line))))),
        optional(alias($._diagnostic_text, $.text_line)),
      ),
      $._line_end,
    ))),
    await_statement: ($) => seq(
      $.await_keyword,
      field("handle", $.handle_name),
      $._line_end,
    ),
    implicit_run_statement: ($) => field("content", alias($._implicit_content, $.content)),
    _implicit_content: ($) => paragraph($, $._implicit_run_line),
    _implicit_run_line: ($) => seq(
      alias($._flow_raw_text, $.text_line), $.newline,
    ),

    seek_statement: ($) =>
      choice(
        seq(
          $.seek_keyword,
          field("agent", $.agent_name),
          field("target", $.runnable_name),
          $._line_end,
        ),
        prec.right(seq(
          $.seek_keyword,
          field("agent", $.agent_name),
          field("target", $.inline_agic),
        )),
      ),
    ask_statement: ($) =>
      prec.right(seq(
        $.ask_keyword,
        $.colon,
        content($, "content"),
      )),
    generate_statement: ($) =>
      seq(
        $.generate_keyword,
        $._required_space,
        field("count", $.integer_literal),
        $._runnable_complements,
      ),
    reduce_statement: ($) =>
      choice(
        seq($.reduce_keyword, $._named_using_complement, $._line_end),
        seq($.reduce_keyword, $._named_using_complement, $.colon, $._line_end,
          optional($._body_prefix), structuralBody($, seq($._from_complement, repeat($._trivia)))),
        prec.right(seq($.reduce_keyword,
          field("target", alias($._reduce_inline_line, $.inline_agic)))),
        prec.right(seq($.reduce_keyword,
          field("target", alias($._reduce_inline_block, $.inline_agic)),
          optional($._from_complement), repeat($._trivia), $._dedent)),
        seq($.reduce_keyword,
          field("target", alias($._reduce_empty_block, $.inline_agic))),
      ),
    _reduce_inline_line: ($) => seq(
      optional(seq(field("arrow", $.arrow), field("return", $.type))),
      $.colon, field("content", alias($._inline_content, $.content)), $._text_line_end,
    ),
    _reduce_block_header: ($) => seq(
      optional(seq(field("arrow", $.arrow), field("return", $.type))),
      $.colon, $._text_line_end,
    ),
    _reduce_inline_block: ($) => seq(
      $._reduce_block_header, optional($._body_prefix), $._reduce_indent,
      field("content", alias($._reduce_content, $.content)),
    ),
    _reduce_empty_block: ($) => seq(
      $._reduce_block_header, field("content", alias($._empty_content, $.content)),
    ),
    _empty_content: ($) => missing($, "content"),
    _reduce_content: ($) => choice(
      seq($._reduce_text_start, repeat1(choice($._content_row, $.blank_line)), $._dedent),
      missing($, "content"),
    ),
    _from_complement: ($) => seq(
      $._from_start, $.from_keyword, $.colon, content($, "from"),
    ),
    map_statement: ($) =>
      seq(
        $.map_keyword,
        $._runnable_complements,
      ),
    keep_statement: ($) =>
      choice(
        seq(
          $.keep_keyword,
          field("selection", $.position),
          $._line_end,
        ),
        prec.right(seq(
          $.keep_keyword,
          $._if_complements,
        )),
      ),
    drop_statement: ($) =>
      choice(
        seq(
          $.drop_keyword,
          field("selection", $.position),
          $._line_end,
        ),
        prec.right(seq(
          $.drop_keyword,
          $._if_complements,
        )),
      ),
    sort_statement: ($) =>
      prec.right(seq(
        $.sort_keyword,
        $._order_complement,
        $._by_complements,
      )),
    _named_using_complement: ($) =>
      seq(
        $.using_keyword,
        $._required_space,
        field("target", $.runnable_name),
      ),
    _required_space: () => token.immediate(/[ \t]+/),
    _named_if_complement: ($) =>
      seq(
        $.if_keyword,
        field("target", $.runnable_name),
      ),
    _inline_if_complement: ($) =>
      seq(
        $.if_keyword,
        field("target", $.inline_agic),
      ),
    _named_by_complement: ($) =>
      seq(
        $.by_keyword,
        field("target", $.runnable_name),
      ),
    _inline_by_complement: ($) =>
      seq(
        $.by_keyword,
        field("target", $.inline_agic),
      ),
    _runnable_complements: ($) =>
      seq(
        optional($._lanes_complement),
        choice(
          seq($._named_using_complement, $._line_end),
          field("target", $.inline_agic),
        ),
      ),
    _if_complements: ($) =>
      seq(
        optional($._lanes_complement),
        choice(seq($._named_if_complement, $._line_end), $._inline_if_complement),
      ),
    _by_complements: ($) =>
      seq(
        optional($._lanes_complement),
        choice(seq($._named_by_complement, $._line_end), $._inline_by_complement),
      ),
    _lanes_complement: ($) =>
      seq(
        $.in_keyword,
        $._required_space,
        field("lanes", $.integer_literal),
        choice($.lane_keyword, $.lanes_keyword),
      ),
    _order_complement: ($) =>
      field("order", choice(
        $.ascending_keyword,
        $.descending_keyword,
      )),
    repeat_statement: ($) => prec.right(seq(
      $.repeat_keyword,
      optional($._repeat_count_complement),
      optional($._window_complement),
      $.colon,
      $._line_end,
      body($, $.repeat_body),
    )),
    repeat_body: ($) => structuralBody($, choice(
      seq(
        $._statements,
        optional(seq(field("until", $.until_clause), repeat($._trivia), optional($._statements))),
      ),
      seq(field("until", $.until_clause), repeat($._trivia),
        choice($._statements, missing($, "statement"))),
    )),
    _window_complement: ($) => seq(
      $.windowing_keyword,
      $._required_space, field("window", $.integer_literal),
    ),
    _repeat_count_complement: ($) =>
      seq(
        field("count", $.integer_literal),
        choice($.time_keyword, $.times_keyword),
      ),
    until_clause: ($) =>
      prec.dynamic(2, seq(
        $._until_start,
        $.until_keyword,
        choice(
          seq(field("target", $.runnable_name), $._line_end),
          field("target", alias($._predicate_inline_agic, $.inline_agic)),
        ),
      )),
    invalid_flow_statement: ($) =>
      prec.dynamic(-2, seq(
        $._flow_keyword,
        optional(alias($._diagnostic_text, $.text_line)),
        $._line_end,
      )),
    inline_agic: ($) =>
      seq(
        optional(seq(field("arrow", $.arrow), field("return", $.type))),
        $.colon,
        content($, "content"),
      ),
    _predicate_inline_agic: ($) =>
      seq(
        $.colon,
        content($, "content"),
      ),
    position: ($) =>
      seq(
        field("side", choice($.first_keyword, $.last_keyword)),
        $._required_space,
        field("count", $.integer_literal),
      ),
    runnable_name: ($) => $._identifier,
    agent_name: ($) => $._identifier,
    local_name: ($) => $._identifier,
    handle_name: ($) => $._identifier,

    directive: ($) => seq($._directive_start, choice(
      seq(field("key", $._query_directive_key),
        field("operator", $.directive_operator), field("value", $.directive_value)),
      seq(field("key", $._route_directive_key),
        field("operator", alias($.assign_operator, $.directive_operator)), field("value", $.route_value)),
      seq(field("key", alias($.recall_keyword, $.directive_key)), field("operator", alias($.assign_operator, $.directive_operator)),
        field("value", $.recall_value)),
      seq(field("key", alias($.lanes_keyword, $.directive_key)),
        field("operator", alias($.assign_operator, $.directive_operator)),
        field("value", choice($.integer_literal, $.default_keyword))),
      seq(field("key", choice(alias($.instruct_keyword, $.directive_key), alias($.context_keyword, $.directive_key))),
        field("operator", alias($.assign_operator, $.directive_operator)), field("value", $._text_ref)),
    ), $._line_end),
    _query_directive_key: ($) => keywordLeaves(QUERY_DIRECTIVE_KEYS, $.directive_key),
    _route_directive_key: ($) => keywordLeaves(ROUTE_DIRECTIVE_KEYS, $.directive_key),
    directive_operator: () => token(choice("=", "+=", "-=")),
    directive_value: () => token(prec(-1, /[^ \t#\r\n][^#\r\n]*/)),
    route_value: ($) => choice($.none_keyword, $.all_keyword,
      seq($.runnable_ref, repeat(seq($.comma, $.runnable_ref)))),
    runnable_ref: () => token(/([A-Za-z_][A-Za-z0-9_-]*::)*(agic:|flow:)?[A-Za-z_][A-Za-z0-9_-]*/),
    recall_value: ($) => choice($.none_keyword, $.all_keyword, $.default_keyword,
      seq($._recall_source, repeat(seq($.comma, $._recall_source)))),
    _recall_source: ($) => keywordLeaves(recallSources, $.recall_source),
    _directives: ($) => prec.right(seq(
      field("directive", $.directive), repeat(choice(field("directive", $.directive), $._trivia)),
    )),
    _text_ref: ($) => choice($.default_keyword, $.none_keyword, $.identifier),
    all_keyword: () => "*",
    _messages: ($) => prec.right(seq(
      field("message", $.message), repeat(choice(field("message", $.message), $._trivia)),
    )),
    message: ($) =>
      seq($._line_start, choice(
        seq(field("role", $._role), $.colon, content($, "content")),
        $.invalid_agic_message,
        field("content", alias($._message_content, $.content)),
      )),
    _message_content: ($) => paragraph($, $._unroled_message_line),
    _unroled_message_line: ($) => seq(
      alias($._agic_raw_text, $.text_line), $.newline,
    ),
    invalid_agic_message: ($) =>
      prec.dynamic(-2, seq(
        $._agic_keyword,
        optional(alias($._diagnostic_text, $.text_line)),
        $._line_end,
      )),
    _role: ($) => keywordLeaves(roles, $.role),
    _pass_statement: ($) =>
      prec(1, seq($._line_start, $.pass_keyword, $._line_end, repeat($._trivia))),
    ...Object.fromEntries(Object.entries(wordNodes).map(([word, node]) => [node, () => word])),
    _flow_keyword: ($) => keywordChoice($, tables.flow),
    _agic_keyword: ($) => keywordChoice($, tables.agic),
    _restricted_binding_word: ($) => keywordChoice($, tables.restricted_binding),

    optional_marker: () => "?",
    assign_operator: () => "=",
    arrow: () => "->",
    colon: () => ":",
    lparen: () => "(",
    rparen: () => ")",
    comma: () => ",",

    _cap_kind: ($) => keywordLeaves(capKinds.map(word => $[wordNodes[word]]), $.cap_kind),

    // Keyword boundaries are broader than valid authored identifier names. Keep
    // this rule before the narrower name tokens to win equal-length matches.
    _word: () => token(/[A-Za-z_][A-Za-z0-9_]*/),
    type_name: () => token(/[A-Z][A-Za-z0-9]*/),
    identifier: ($) => $._identifier,
    _identifier: () => token(/[a-z][a-z0-9_]*(_[a-z0-9]+)*/),
    _snake_kebab_name: () => token(/[a-z][a-z0-9_-]*/),
    // Inline content owns its entire physical line. Structural raw values keep
    // their comment delimiter; both expose the same public text leaf.
    text_line: ($) => $._text_line,
    _text_line: () => token(prec(-1, /[^#\r\n]+/)),
    _literal_text_line: () => token(prec(-1, /[ \t]*[^ \t\r\n][^\r\n]*/)),
    // Recovery text must not absorb extras shared with structural tokens.
    _diagnostic_text: () => token(prec(-1, /[^ \t#\r\n][^#\r\n]*/)),
  },
});

// Content is a semantic value; spelling and line endings do not add wrappers.
function content($, name) {
  return choice(
    seq(field(name, alias($._inline_content, $.content)), $._text_line_end),
    prec.right(seq($._text_line_end, field(name, alias($._block_content, $.content)))),
  );
}

function body($, node) {
  return seq(optional($._body_prefix), field("body", node));
}

function optionalBody($, node) {
  return choice(body($, node), $._empty_body);
}

function definitionBody($) {
  return seq(
    $._indent,
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
  return prec.right(choice(seq(indent, content, $._dedent), missing($, "body")));
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
    if (wordNodes[word]) return $[wordNodes[word]];
    if (roles.includes(word)) return alias(word, $.role);
    if (QUERY_DIRECTIVE_KEYS.includes(word) || ROUTE_DIRECTIVE_KEYS.includes(word)) {
      return alias(word, $.directive_key);
    }
    return word;
  }));
}
