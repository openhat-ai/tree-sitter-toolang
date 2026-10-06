const QUERY_DIRECTIVE_KEYS = ["models", "tools", "skills", "services", "psyches", "prompts"];
const ROUTE_DIRECTIVE_KEYS = ["hands", "handoffs"];

module.exports = grammar({
  name: "toolang",

  word: ($) => $._word,

  extras: () => [/[ \t]/],
  externals: ($) => [
    $.newline, $.blank_line,
    $._comment_start, $.plain_comment, $.shebang_comment,
    $._module_doc_start, $._item_doc_start, $._param_item_doc_start, $._comment_end,
    $._indent, $._dedent, $._line_start, $._directive_start,
    $._until_start, $._from_start, $._reduce_indent, $._reduce_text_start, $._text_indent, $._cap_text_start,
    $.indented_raw_text, $._flow_raw_text, $._agic_raw_text, $._error_line,
    $._exec_binding_start, $._operation_binding_start,
    $._reserved_binding_start, $._variable_name,
    $.invalid_empty_body,
    $.integer_literal, $._one_integer_literal, $._other_integer_literal,
  ],
  rules: {
    source_file: ($) =>
      repeat(choice($._trivia, $._item)),

    _item: ($) =>
      seq($._line_start, choice(
        $.with,
        $.struct,
        $.psyche,
        $.skill,
        $.service,
        $.prompt,
        $.task,
        $.chore,
        $.context,
        $.instruct,
        $.agic,
        $.flow,
      )),

    _inline_comment: () => token(seq("#", /[^\r\n]*/)),
    line_end: ($) => seq(optional(alias($._inline_comment, $.plain_comment)), $.newline),
    module_doc_comment: ($) => seq(
      $._module_doc_start, optional(field("text", $.comment_text)), $._comment_end,
    ),
    item_doc_comment: ($) => choice(
      seq($._item_doc_start, optional(field("text", $.comment_text)), $._comment_end),
      seq($._param_item_doc_start, field("parameter", $.param_doc_tag), $._comment_end),
    ),
    param_doc_tag: ($) => seq(
      "@param", $._doc_space, field("name", $._param_name),
      $._doc_space, field("description", $.comment_text),
    ),
    _doc_space: () => token.immediate(/[ \t]+/),
    comment_text: () => token(/[^ \t\r\n][^\r\n]*/),
    _trivia: ($) => choice(
      seq($._comment_start, choice(
        $.module_doc_comment, $.item_doc_comment, $.plain_comment, $.shebang_comment,
      )),
      $.blank_line,
    ),

    with: ($) =>
      seq(
        field("keyword", $.with_keyword),
        field("kind", $._cap_kind),
        $._required_space,
        field("reference", $.text_line),
        $.line_end,
      ),

    type: ($) =>
      seq(
        field("base", $._base_type),
        repeat(field("suffix", $.array_suffix)),
      ),

    _base_type: ($) => choice($._builtin_type, $.type_name),
    _builtin_type: ($) => keywordLeaves(["Text", "Number", "Boolean", "Json", "Part"], $.builtin_type),
    array_suffix: () => "[]",

    struct: ($) =>
      seq(
        field("keyword", $.struct_keyword),
        field("name", $.type_name),
        field("colon", $.colon),
        $.line_end,
        field("body", $.struct_body),
      ),

    struct_body: ($) =>
      structuralBody($, seq($.field, repeat(choice($.field, $._trivia)))),
    field: ($) =>
      seq(
        $._line_start,
        field("name", $.identifier),
        optional(field("optional", $.optional_marker)),
        field("colon", $.colon),
        field("type", $.type),
        $.line_end,
      ),

    psyche: ($) =>
      seq(
        field("kind", $.psyche_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        $._cap_definition,
      ),

    skill: ($) =>
      seq(
        field("kind", $.skill_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        $._cap_definition,
      ),

    service: ($) =>
      seq(
        field("kind", $.service_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        $._cap_definition,
      ),

    prompt: ($) =>
      seq(
        field("kind", $.prompt_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        $._cap_definition,
      ),

    _cap_definition: ($) =>
      prec.right(seq($.line_end, repeat($._trivia), optional(seq(
        $._indent,
        repeat(choice(field("property", $.property), $._trivia)),
        optional(field("body", alias($._cap_text_body, $.text_body))),
        $._dedent,
      )))),
    _cap_text_body: ($) => seq(
      $._cap_text_start,
      repeat1(choice($.text_body_line, $.blank_line)),
      $._dedent,
    ),

    task: ($) =>
      seq(
        field("kind", $.task_keyword),
        field("name", $.job_name),
        field("colon", $.colon),
        field("body", $.job_body),
      ),

    chore: ($) =>
      seq(
        field("kind", $.chore_keyword),
        field("name", $.job_name),
        field("colon", $.colon),
        field("body", $.job_body),
      ),

    cap_name: ($) => $._snake_kebab_name,
    job_name: ($) => $._snake_kebab_name,

    job_body: ($) =>
      prec.right(seq($.line_end, repeat($._trivia), optional(seq(
        $._indent,
        repeat(choice($.property, $._trivia)),
        optional(alias($._cap_text_body, $.text_body)),
        $._dedent,
      )))),

    property: ($) =>
      seq(
        $._line_start,
        field("key", $.identifier),
        field("operator", $.assign_operator),
        field("value", $.text_line),
        $.line_end,
      ),

    instruct: ($) =>
      seq(
        field("keyword", $.instruct_keyword),
        optional(field("name", $.identifier)),
        field("colon", $.colon),
        field("body", $.text_inline),
      ),

    context: ($) =>
      seq(
        field("keyword", $.context_keyword),
        optional(field("name", $.identifier)),
        field("colon", $.colon),
        field("body", $.text_inline),
      ),

    text_inline: ($) =>
      choice(
        seq($.text_line, $.line_end),
        $.text_block,
      ),
    text_block: ($) =>
      prec.right(seq(
        $.line_end,
        $.text_body,
      )),
    text_body: ($) => seq(
      repeat($.blank_line),
      choice(
        seq($._text_indent, repeat1(choice($.text_body_line, $.blank_line)), $._dedent),
        $.invalid_empty_body,
      ),
    ),
    text_body_line: ($) => seq(field("content", $.indented_raw_text), $.newline),

    agic: ($) =>
      prec.right(seq(
        field("keyword", $.agic_keyword),
        optional(field("name", $.runnable_name)),
        optional(field("params", $.params)),
        optional(seq(field("arrow", $.arrow), field("return", $.type))),
        field("colon", $.colon),
        $.line_end,
        field("body", $.agic_body),
      )),
    agic_body: ($) =>
      structuralBody($,
        choice(
          seq($._directives, optional($.messages)),
          $.messages,
          $._pass_statement,
        ),
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
    _param_name: ($) => choice(alias("_", $.param_name), alias($._variable_name, $.param_name)),

    flow: ($) =>
      prec.right(seq(
        field("keyword", $.flow_keyword),
        optional(field("name", $.runnable_name)),
        optional(field("params", $.params)),
        optional(seq(field("arrow", $.arrow), field("return", $.type))),
        field("colon", $.colon),
        $.line_end,
        field("body", $.flow_body),
      )),
    flow_body: ($) =>
      structuralBody($,
        choice(
          seq($._directives, choice($.statements, $.invalid_empty_body)),
          $.statements,
          $._pass_statement,
        ),
      ),
    statements: ($) =>
      prec.right(seq($._flow_statement, repeat(choice($._flow_statement, $._trivia)))),
    _flow_statement: ($) =>
      seq($._line_start, choice(
        $.let_statement,
        $.exec_statement,
        alias($._invalid_exec_binding, $.invalid_flow_reserved_statement),
        alias($._invalid_reserved_binding, $.invalid_flow_reserved_statement),
        alias($._invalid_named_binding, $.invalid_flow_reserved_statement),
        $._flow_operation,
        $.invalid_flow_reserved_statement,
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
      choice($._flow_operation, alias($._invalid_bound_operation, $.invalid_flow_reserved_statement)),
    ),
    _binding_operation_word: ($) => choice(
      $.flow_run_keyword, $.flow_seek_keyword, $.flow_ask_keyword,
      $.flow_keep_keyword, $.flow_drop_keyword, $.flow_sort_keyword, $.flow_repeat_keyword,
      $._collection_binding_word, $.flow_spawn_keyword, $._async_await_binding_word,
    ),
    _invalid_bound_operation: ($) => prec.dynamic(-2, seq(
      $._binding_operation_word, optional(alias($._diagnostic_text, $.text_line)), $.line_end,
    )),
    let_statement: ($) =>
      choice(
        seq(
          $.flow_let_keyword,
          field("name", $.local_name),
          $.assign_operator,
          field("statement", $._bound_operation),
        ),
        seq(
          $.flow_let_keyword,
          field("statement", $._flow_operation),
        ),
        prec.right(seq(
          $.flow_let_keyword,
          field("name", $.local_name),
          $.assign_operator,
          field("value", $.text_inline),
        )),
      ),
    exec_statement: ($) =>
      choice(
        seq(
          $.flow_exec_keyword,
          field("target", $.runnable_name),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_exec_keyword,
          field("target", $.inline_agic),
        )),
      ),
    spawn_statement: ($) =>
      choice(
        seq(
          $.flow_spawn_keyword,
          field("target", $.runnable_name),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_spawn_keyword,
          field("target", $.inline_agic),
        )),
      ),
    _invalid_exec_binding: ($) => seq(
      $.flow_let_keyword,
      optional(seq(field("name", $.local_name), $.assign_operator)),
      $._exec_binding_start,
      $.flow_exec_keyword,
      optional(alias($._diagnostic_text, $.text_line)),
      $.line_end,
    ),
    _invalid_reserved_binding: ($) => seq(
      $.flow_let_keyword,
      optional(seq(field("name", $.local_name), $.assign_operator)),
      $._reserved_binding_start,
      $._reserved_binding_word,
      optional(alias($._diagnostic_text, $.text_line)),
      $.line_end,
    ),
    // Keep a missing assignment delimiter diagnostic local and deterministic
    // instead of choosing between a dropped name and an inserted '='.
    _invalid_named_binding: ($) => prec.dynamic(-2, seq(
      $.flow_let_keyword, field("name", $.local_name),
      optional(alias($._diagnostic_text, $.text_line)),
      $.line_end,
    )),
    run_statement: ($) => choice(
      $._run,
      seq($._async_modifier, $._run_after_modifier),
    ),
    _async_modifier: ($) => field("async", $.flow_async_keyword),
    _run: ($) => choice(
      seq($.flow_run_keyword, field("runnable", $.runnable_name), $.line_end),
      prec.right(seq($.flow_run_keyword, field("agic", $.inline_agic))),
    ),
    // A modifier consumes the statement-head boundary; keep runworker indivisible.
    // Preserve the unmodified run's existing target ranges above.
    _run_after_modifier: ($) => seq(
      $.flow_run_keyword,
      choice(
        seq($._required_space, field("runnable", $.runnable_name), $.line_end),
        prec.right(seq(optional($._required_space), field("agic", $.inline_agic))),
        alias($._invalid_modified_run_tail, $.invalid_flow_reserved_statement),
      ),
    ),
    // Keep a malformed modified run on its own line even after its target
    // tokens have committed the lexer to structural parsing.
    _invalid_modified_run_tail: ($) => prec.dynamic(-2, prec(-1, seq(
      optional($._required_space),
      choice(
        seq($.runnable_name, optional(alias($._diagnostic_text, $.text_line))),
        seq($.arrow, optional(seq($.type, optional($.colon), optional($.text_line)))),
        seq($.colon, optional($.text_line)),
        optional(alias($._diagnostic_text, $.text_line)),
      ),
      $.line_end,
    ))),
    await_statement: ($) => seq(
      $.flow_await_keyword,
      field("handle", $.local_name),
      $.line_end,
    ),
    implicit_run_statement: ($) => paragraph($, $._implicit_run_line),
    _implicit_run_line: ($) => seq(
      field("content", alias($._flow_raw_text, $.indented_raw_text)), $.newline,
    ),

    seek_statement: ($) =>
      choice(
        seq(
          $.flow_seek_keyword,
          field("agent", $.agent_name),
          field("runnable", $.runnable_name),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_seek_keyword,
          field("agent", $.agent_name),
          field("agic", $.inline_agic),
        )),
      ),
    ask_statement: ($) =>
      prec.right(seq(
        $.flow_ask_keyword,
        $.colon,
        field("body", $.text_inline),
      )),
    generate_statement: ($) =>
      seq(
        $.flow_generate_keyword,
        $._required_space,
        field("count", $.integer_literal),
        $._runnable_complements,
      ),
    reduce_statement: ($) =>
      choice(
        seq($.flow_reduce_keyword, $._named_using_complement, $.line_end),
        seq($.flow_reduce_keyword, $._named_using_complement, $.colon, $.line_end,
          structuralBody($, seq($._from_complement, repeat($._trivia)))),
        prec.right(seq($.flow_reduce_keyword,
          field("runnable", alias($._reduce_inline_line, $.inline_agic)))),
        prec.right(seq($.flow_reduce_keyword,
          field("runnable", alias($._reduce_inline_block, $.inline_agic)),
          optional($._from_complement), repeat($._trivia), $._dedent)),
        seq($.flow_reduce_keyword,
          field("runnable", alias($._reduce_empty_block, $.inline_agic))),
      ),
    _reduce_inline_line: ($) => seq(
      optional(seq(field("arrow", $.arrow), field("return", $.type))),
      $.colon, field("body", alias($._reduce_line, $.text_inline)),
    ),
    _reduce_line: ($) => seq($.text_line, $.line_end),
    _reduce_block_header: ($) => seq(
      optional(seq(field("arrow", $.arrow), field("return", $.type))),
      $.colon, $.line_end, repeat($._trivia),
    ),
    _reduce_inline_block: ($) => seq(
      $._reduce_block_header, $._reduce_indent,
      field("body", alias($._reduce_text_body, $.text_body)),
    ),
    _reduce_empty_block: ($) => seq(
      $._reduce_block_header, field("body", $.invalid_empty_body),
    ),
    _reduce_text_body: ($) => choice(
      seq($._reduce_text_start, repeat1(choice($.text_body_line, $.blank_line)), $._dedent),
      $.invalid_empty_body,
    ),
    _from_complement: ($) => seq(
      $._from_start, $.flow_from_keyword, $.colon, field("from", $.text_inline),
    ),
    map_statement: ($) =>
      seq(
        $.flow_map_keyword,
        $._runnable_complements,
      ),
    keep_statement: ($) =>
      choice(
        seq(
          $.flow_keep_keyword,
          field("selection", $.position),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_keep_keyword,
          $._if_complements,
        )),
      ),
    drop_statement: ($) =>
      choice(
        seq(
          $.flow_drop_keyword,
          field("selection", $.position),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_drop_keyword,
          $._if_complements,
        )),
      ),
    sort_statement: ($) =>
      prec.right(seq(
        $.flow_sort_keyword,
        $._order_complement,
        $._by_complements,
      )),
    _named_using_complement: ($) =>
      seq(
        $.flow_using_keyword,
        $._required_space,
        field("runnable", $.runnable_name),
      ),
    _required_space: () => token.immediate(/[ \t]+/),
    _named_if_complement: ($) =>
      seq(
        $.flow_if_keyword,
        field("runnable", $.runnable_name),
      ),
    _inline_if_complement: ($) =>
      seq(
        $.flow_if_keyword,
        field("runnable", $.inline_agic),
      ),
    _named_by_complement: ($) =>
      seq(
        $.flow_by_keyword,
        field("runnable", $.runnable_name),
      ),
    _inline_by_complement: ($) =>
      seq(
        $.flow_by_keyword,
        field("runnable", $.inline_agic),
      ),
    _runnable_complements: ($) =>
      seq(
        optional($._lanes_complement),
        choice(
          seq($._named_using_complement, $.line_end),
          field("runnable", $.inline_agic),
        ),
      ),
    _if_complements: ($) =>
      choice(
        seq($._named_if_complement, $.line_end),
        seq($._lanes_complement, $._named_if_complement, $.line_end),
        seq($._named_if_complement, $._lanes_complement, $.line_end),
        $._inline_if_complement,
        seq($._lanes_complement, $._inline_if_complement),
      ),
    _by_complements: ($) =>
      choice(
        seq($._named_by_complement, $.line_end),
        seq($._lanes_complement, $._named_by_complement, $.line_end),
        seq($._named_by_complement, $._lanes_complement, $.line_end),
        $._inline_by_complement,
        seq($._lanes_complement, $._inline_by_complement),
      ),
    _lanes_complement: ($) =>
      seq(
        $.flow_in_keyword,
        $._required_space,
        choice(
          seq(
            field("lanes", alias($._one_integer_literal, $.integer_literal)),
            $.flow_lane_keyword,
          ),
          seq(
            field("lanes", alias($._other_integer_literal, $.integer_literal)),
            $.flow_lanes_keyword,
          ),
        ),
      ),
    _order_complement: ($) =>
      field("order", choice(
        $.flow_ascending_keyword,
        $.flow_descending_keyword,
      )),
    repeat_statement: ($) => prec.right(seq(
      $.flow_repeat_keyword,
      optional($._repeat_count_complement),
      optional($._window_complement),
      $.colon,
      $.line_end,
      field("body", $.repeat_body),
    )),
    repeat_body: ($) => structuralBody($, choice(
      seq(
        $._repeat_statements,
        optional(seq(field("until", $.until_clause), repeat($._trivia), optional($._repeat_statements))),
      ),
      seq(field("until", $.until_clause), repeat($._trivia),
        choice($._repeat_statements, $.invalid_empty_body)),
    )),
    _repeat_statements: ($) => prec.right(seq(
      field("statement", $._flow_statement),
      repeat(choice(field("statement", $._flow_statement), $._trivia)),
    )),
    _window_complement: ($) => seq(
      $.flow_windowing_keyword,
      $._required_space, field("window", $.integer_literal),
    ),
    _repeat_count_complement: ($) =>
      choice(
        seq(
          field("count", alias($._one_integer_literal, $.integer_literal)),
          $.flow_time_keyword,
        ),
        seq(
          field("count", alias($._other_integer_literal, $.integer_literal)),
          $.flow_times_keyword,
        ),
      ),
    until_clause: ($) =>
      prec.dynamic(2, seq(
        $._until_start,
        $.flow_until_keyword,
        choice(
          seq(field("target", $.runnable_name), $.line_end),
          field("target", $.inline_agic_body),
        ),
      )),
    invalid_flow_reserved_statement: ($) =>
      prec.dynamic(-2, seq(
        $._flow_reserved_word,
        optional(alias($._diagnostic_text, $.text_line)),
        $.line_end,
      )),
    inline_agic: ($) =>
      seq(
        optional(seq(field("arrow", $.arrow), field("return", $.type))),
        $.colon,
        field("body", $.text_inline),
      ),
    inline_agic_body: ($) =>
      seq(
        $.colon,
        field("body", $.text_inline),
      ),
    position: ($) =>
      seq(
        field("side", choice($.flow_first_keyword, $.flow_last_keyword)),
        $._required_space,
        field("count", $.integer_literal),
      ),
    runnable_name: ($) => $._identifier,
    agent_name: ($) => $._identifier,
    local_name: ($) => $._variable_name,

    directive: ($) => seq($._directive_start, choice(
      seq(field("key", $._query_directive_key),
        field("operator", $.directive_operator), field("value", $.directive_value)),
      seq(field("key", $._route_directive_key),
        field("operator", $.assign_operator), field("value", $.route_value)),
      seq(field("key", $.recall_keyword), field("operator", $.assign_operator),
        field("value", $.recall_value)),
      seq(field("key", alias($.flow_lanes_keyword, $.directive_key)),
        field("operator", $.assign_operator),
        field("value", choice($.integer_literal, $.default_keyword))),
      seq(field("key", choice($.instruct_keyword, $.context_keyword)),
        field("operator", $.assign_operator), field("value", $.text_ref)),
    ), $.line_end),
    _query_directive_key: ($) => keywordLeaves(QUERY_DIRECTIVE_KEYS, $.directive_key),
    _route_directive_key: ($) => keywordLeaves(ROUTE_DIRECTIVE_KEYS, $.directive_key),
    _directive_word: ($) => keywordLeaves([...QUERY_DIRECTIVE_KEYS, ...ROUTE_DIRECTIVE_KEYS,
      $.flow_lanes_keyword, $.recall_keyword, $.instruct_keyword, $.context_keyword], $.directive_key),
    directive_operator: () => token(choice("=", "+=", "-=")),
    directive_value: () => token(prec(-1, /[^ \t#\r\n][^#\r\n]*/)),
    route_value: ($) => choice($.none_keyword, $.all_keyword,
      seq($.runnable_ref, repeat(seq($.comma, $.runnable_ref)))),
    runnable_ref: () => token(/([A-Za-z_][A-Za-z0-9_-]*::)*(agic:|flow:)?[A-Za-z_][A-Za-z0-9_-]*/),
    recall_value: ($) => choice($.none_keyword, $.all_keyword, $.default_keyword,
      seq($._recall_source, repeat(seq($.comma, $._recall_source)))),
    _recall_source: ($) => keywordLeaves(["far", "near"], $.recall_source),
    _directives: ($) => prec.right(seq($.directive, repeat(choice($.directive, $._trivia)))),
    text_ref: ($) => choice($.default_keyword, $.none_keyword, $.identifier),
    default_keyword: () => "default",
    none_keyword: () => "none",
    all_keyword: () => "*",
    messages: ($) => prec.right(seq($.message, repeat(choice($.message, $._trivia)))),
    message: ($) =>
      seq($._line_start, choice(
        seq($._role, $.colon, $.text_inline),
        $.invalid_agic_reserved_message,
        $.unroled_message,
      )),
    unroled_message: ($) => paragraph($, $._unroled_message_line),
    _unroled_message_line: ($) => seq(
      field("content", alias($._agic_raw_text, $.indented_raw_text)), $.newline,
    ),
    invalid_agic_reserved_message: ($) =>
      prec.dynamic(-2, seq(
        $._agic_reserved_word,
        optional(alias($._diagnostic_text, $.text_line)),
        $.line_end,
      )),
    _role: ($) => keywordLeaves(["user", "assistant", "tool"], $.role),
    _pass_statement: ($) =>
      prec(1, seq($._line_start, $.pass_keyword, $.line_end, repeat($._trivia))),
    with_keyword: () => "with",
    struct_keyword: () => "struct",
    psyche_keyword: () => "psyche",
    skill_keyword: () => "skill",
    service_keyword: () => "service",
    prompt_keyword: () => "prompt",
    context_keyword: () => "context",
    instruct_keyword: () => "instruct",
    agic_keyword: () => "agic",
    task_keyword: () => "task",
    chore_keyword: () => "chore",
    flow_keyword: () => "flow",
    pass_keyword: () => "pass",
    flow_run_keyword: () => "run",
    flow_async_keyword: () => "async",
    flow_await_keyword: () => "await",
    flow_exec_keyword: () => "exec",
    flow_spawn_keyword: () => "spawn",
    flow_let_keyword: () => "let",
    flow_seek_keyword: () => "seek",
    flow_ask_keyword: () => "ask",
    flow_scatter_keyword: () => "scatter",
    flow_storm_keyword: () => "storm",
    flow_generate_keyword: () => "generate",
    flow_gather_keyword: () => "gather",
    flow_settle_keyword: () => "settle",
    flow_reduce_keyword: () => "reduce",
    flow_map_keyword: () => "map",
    flow_keep_keyword: () => "keep",
    flow_drop_keyword: () => "drop",
    flow_sort_keyword: () => "sort",
    flow_rank_keyword: () => "rank",
    flow_repeat_keyword: () => "repeat",
    flow_until_keyword: () => "until",
    flow_from_keyword: () => "from",
    flow_windowing_keyword: () => "windowing",
    flow_using_keyword: () => "using",
    flow_if_keyword: () => "if",
    flow_by_keyword: () => "by",
    flow_in_keyword: () => "in",
    flow_lane_keyword: () => "lane",
    flow_lanes_keyword: () => "lanes",
    flow_ascending_keyword: () => "ascending",
    flow_descending_keyword: () => "descending",
    flow_time_keyword: () => "time",
    flow_times_keyword: () => "times",
    flow_par_keyword: () => "par",
    flow_first_keyword: () => "first",
    flow_last_keyword: () => "last",
    flow_top_keyword: () => "top",
    flow_bottom_keyword: () => "bottom",
    flow_think_keyword: () => "think",
    flow_use_keyword: () => "use",
    thunk_keyword: () => "thunk",
    recall_keyword: () => "recall",
    _flow_reserved_word: ($) =>
      choice(
        $.flow_exec_keyword,
        $.flow_spawn_keyword,
        $.flow_let_keyword,
        $.flow_run_keyword, $.flow_seek_keyword, $.flow_ask_keyword,
        $._async_await_binding_word,
        $.flow_keep_keyword, $.flow_drop_keyword, $.flow_sort_keyword, $.flow_repeat_keyword,
        $._collection_binding_word,
        $._reserved_binding_word, $.flow_from_keyword, $.flow_windowing_keyword,
        $.flow_rank_keyword,
        $.flow_par_keyword,
        $.flow_top_keyword,
        $.flow_bottom_keyword,
        $.flow_think_keyword,
        $.flow_use_keyword,
        $.thunk_keyword,
        "call",
        "do",
        "unfold",
        "each",
        "fold",
        "head",
        "tail",
        $.flow_using_keyword, $.flow_if_keyword, $.flow_by_keyword,
        $.flow_in_keyword, $.flow_lane_keyword,
        $.flow_ascending_keyword, $.flow_descending_keyword,
        $.flow_time_keyword, $.flow_times_keyword,
        $.flow_first_keyword, $.flow_last_keyword,
        $.with_keyword, $.struct_keyword, $.psyche_keyword, $.skill_keyword,
        $.service_keyword, $.prompt_keyword, $.task_keyword, $.chore_keyword,
        $.agic_keyword, $.flow_keyword, $._agic_reserved_word,
      ),
    _collection_binding_word: ($) => choice(
      $.flow_scatter_keyword, $.flow_gather_keyword,
      $.flow_storm_keyword, $.flow_settle_keyword,
      $.flow_generate_keyword, $.flow_map_keyword, $.flow_reduce_keyword,
    ),
    _async_await_binding_word: ($) => choice($.flow_async_keyword, $.flow_await_keyword),
    _reserved_binding_word: ($) => choice($.flow_until_keyword, "_"),
    _agic_reserved_word: ($) =>
      choice(
        $._role,
        $.pass_keyword,
        $._directive_word,
      ),

    optional_marker: () => "?",
    assign_operator: () => "=",
    arrow: () => "->",
    colon: () => ":",
    lparen: () => "(",
    rparen: () => ")",
    comma: () => ",",

    _cap_kind: ($) => keywordLeaves([$.psyche_keyword, $.skill_keyword, $.service_keyword, $.prompt_keyword], $.cap_kind),

    // Keyword boundaries are broader than valid authored identifier names. Keep
    // this rule before the narrower name tokens to win equal-length matches.
    _word: () => token(/[A-Za-z_][A-Za-z0-9_]*/),
    type_name: () => token(/[A-Z][A-Za-z0-9]*/),
    identifier: ($) => $._identifier,
    _identifier: () => token(/[a-z][a-z0-9_]*(_[a-z0-9]+)*/),
    kebab_name: () => token(/[a-z][a-z0-9]*(-[a-z0-9]+)*/),
    _snake_kebab_name: () => token(/[a-z][a-z0-9_-]*/),
    // Preserve missing-value recovery while exposing only one public text leaf.
    text_line: ($) => $._text_line,
    _text_line: () => token(prec(-1, /[^#\r\n]+/)),
    // Recovery text must not absorb extras shared with structural tokens.
    _diagnostic_text: () => token(prec(-1, /[^ \t#\r\n][^#\r\n]*/)),
  },
});

function structuralBody($, content) {
  return prec.right(seq(repeat($._trivia), choice(
    seq($._indent, content, $._dedent),
    $.invalid_empty_body,
  )));
}

function paragraph($, line) {
  const bodyLine = alias(line, $.text_body_line);
  return prec.right(seq(
    bodyLine,
    repeat(choice(bodyLine, seq($.blank_line, bodyLine))),
    optional($.blank_line),
  ));
}

// Keep each word eligible for keyword extraction without adding CST wrappers.
function keywordLeaves(words, node) {
  return choice(...words.map(word => alias(word, node)));
}
