module.exports = grammar({
  name: "toolang",

  extras: () => [/[ \t]/],
  externals: ($) => [
    $.newline, $.blank_line,
    $._indent, $._dedent, $._line_start, $._directive_start, $._setting_start,
    $._until_start, $._text_indent, $._cap_text_start,
    $.indented_raw_text, $._flow_raw_text, $._agic_raw_text, $._error_sentinel,
  ],
  rules: {
    source_file: ($) =>
      repeat(choice($._trivia, $.item)),

    parent_doc_line: () => token(prec(2, /##![^\r\n]*(\r?\n)?/)),
    doc_line: () => token(prec(1, /##[^\r\n]*(\r?\n)?/)),
    comment_line: () => token(/#[^\r\n]*(\r?\n)?/),
    item: ($) =>
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

    inline_comment: () => token(seq("#", /[^\r\n]*/)),
    line_end: ($) => seq(optional($.inline_comment), $.newline),
    _trivia: ($) => choice($.parent_doc_line, $.doc_line, $.comment_line, $.blank_line),

    with: ($) =>
      seq(
        field("keyword", $.with_keyword),
        field("kind", $.cap_kind),
        field("reference", $.cap_ref),
        $.line_end,
      ),

    type: ($) =>
      seq(
        field("base", $.base_type),
        repeat(field("suffix", $.type_suffix)),
      ),

    base_type: ($) => choice($.builtin_type, $.user_type),
    builtin_type: () => choice("Text", "Number", "Boolean", "Json", "Part"),
    user_type: ($) => $.type_name,
    type_suffix: ($) => $.array_suffix,
    array_suffix: () => "[]",

    struct: ($) =>
      seq(
        field("keyword", $.struct_keyword),
        field("name", $.struct_name),
        field("colon", $.colon),
        $.line_end,
        field("body", $.struct_body),
      ),

    struct_name: ($) => $.type_name,
    struct_body: ($) =>
      structuralBody($, seq($.field, repeat(choice($.field, $._trivia)))),
    field: ($) =>
      seq(
        $._line_start,
        field("name", $.field_name),
        optional(field("optional", $.optional_marker)),
        field("colon", $.colon),
        field("type", $.type),
        $.line_end,
      ),
    field_name: ($) => $.snake_name,

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
        optional(field("body", $.cap_body)),
        $._dedent,
      )))),
    cap_body: ($) => alias($._cap_text_body, $.text_body),
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
    cap_ref: ($) => $.text_line,
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
        field("key", $.property_key),
        field("operator", $.assign_operator),
        field("value", $.property_value),
        $.line_end,
      ),
    property_key: ($) => $.snake_name,
    property_value: ($) => $.text_line,

    instruct: ($) =>
      seq(
        field("keyword", $.instruct_keyword),
        optional(field("name", $.instruct_name)),
        field("colon", $.colon),
        field("body", $.instruct_body),
      ),
    instruct_name: ($) => $.snake_name,
    instruct_body: ($) => $.text_inline,

    context: ($) =>
      seq(
        field("keyword", $.context_keyword),
        optional(field("name", $.context_name)),
        field("colon", $.colon),
        field("body", $.context_body),
      ),
    context_name: ($) => $.snake_name,
    context_body: ($) => $.text_inline,

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
      $._text_indent,
      repeat1(choice($.text_body_line, $.blank_line)),
      $._dedent,
    ),
    text_body_line: ($) => seq(field("content", $.indented_raw_text), $.newline),

    agic: ($) =>
      prec.right(seq(
        field("keyword", $.agic_keyword),
        optional(field("name", $.agic_name)),
        optional(field("params", $.params)),
        optional(seq(field("arrow", $.arrow), field("return", $.type))),
        field("colon", $.colon),
        $.line_end,
        field("body", $.agic_body),
      )),
    agic_name: ($) => $.snake_name,
    agic_body: ($) =>
      structuralBody($,
        choice(
          seq($._directives, optional($.settings), optional($.messages)),
          seq($.settings, optional($.messages)),
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
        field("name", $.param_name),
        optional(field("optional", $.optional_marker)),
        optional(seq(field("colon", $.colon), field("type", $.type))),
      ),
    param_name: ($) => choice("_", $.snake_name),

    flow: ($) =>
      prec.right(seq(
        field("keyword", $.flow_keyword),
        optional(field("name", $.flow_name)),
        optional(field("params", $.params)),
        optional(seq(field("arrow", $.arrow), field("return", $.type))),
        field("colon", $.colon),
        $.line_end,
        field("body", $.flow_body),
      )),
    flow_name: ($) => $.snake_name,
    flow_body: ($) =>
      structuralBody($,
        choice(
          seq($._directives, $.statements),
          $.statements,
          $._pass_statement,
        ),
      ),
    statements: ($) =>
      prec.right(seq($._flow_statement, repeat(choice($._flow_statement, $._trivia)))),
    _flow_statement: ($) =>
      seq($._line_start, choice(
        $.let_statement,
        $._flow_operation,
        $.invalid_flow_reserved_statement,
        $.implicit_run_statement,
      )),
    _flow_operation: ($) =>
      choice(
        $.run_statement,
        $.seek_statement,
        $.ask_statement,
        $.scatter_statement,
        $.storm_statement,
        $.gather_statement,
        $.settle_statement,
        $.map_statement,
        $.keep_statement,
        $.drop_statement,
        $.sort_statement,
        $.repeat_statement,
      ),
    let_statement: ($) =>
      choice(
        seq(
          $.flow_let_keyword,
          field("name", $.local_name),
          $.assign_operator,
          field("statement", $._flow_operation),
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
    run_statement: ($) =>
      choice(
        seq(
          $.flow_run_keyword,
          field("runnable", $.runnable),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_run_keyword,
          field("agic", $.inline_agic),
        )),
      ),
    implicit_run_statement: ($) => paragraph($, $._implicit_run_line),
    _implicit_run_line: ($) => seq(
      field("content", alias($._flow_raw_text, $.indented_raw_text)), $.newline,
    ),

    seek_statement: ($) =>
      choice(
        seq(
          $.flow_seek_keyword,
          field("agent", $.agent),
          field("runnable", $.runnable),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_seek_keyword,
          field("agent", $.agent),
          field("agic", $.inline_agic),
        )),
      ),
    ask_statement: ($) =>
      prec.right(seq(
        $.flow_ask_keyword,
        $.colon,
        field("body", $.text_inline),
      )),
    scatter_statement: ($) =>
      choice(
        seq(
          $.flow_scatter_keyword,
          field("count", $.integer_literal),
          $._named_using_complement,
          $.line_end,
        ),
        prec.right(seq(
          $.flow_scatter_keyword,
          field("count", $.integer_literal),
          $._inline_using_complement,
        )),
      ),
    storm_statement: ($) =>
      seq(
        $.flow_storm_keyword,
        field("count", $.integer_literal),
        $._using_complements,
      ),
    gather_statement: ($) =>
      choice(
        seq(
          $.flow_gather_keyword,
          $._named_using_complement,
          $.line_end,
        ),
        prec.right(seq(
          $.flow_gather_keyword,
          $._inline_using_complement,
        )),
      ),
    settle_statement: ($) =>
      choice(
        seq(
          $.flow_settle_keyword,
          $._named_using_complement,
          $.line_end,
        ),
        prec.right(seq(
          $.flow_settle_keyword,
          $._inline_using_complement,
        )),
      ),
    map_statement: ($) =>
      seq(
        $.flow_map_keyword,
        $._using_complements,
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
        field("runnable", $.runnable),
      ),
    _inline_using_complement: ($) =>
      seq(
        $.flow_using_keyword,
        field("runnable", $.inline_agic),
      ),
    _named_if_complement: ($) =>
      seq(
        $.flow_if_keyword,
        field("runnable", $.runnable),
      ),
    _inline_if_complement: ($) =>
      seq(
        $.flow_if_keyword,
        field("runnable", $.inline_agic),
      ),
    _named_by_complement: ($) =>
      seq(
        $.flow_by_keyword,
        field("runnable", $.runnable),
      ),
    _inline_by_complement: ($) =>
      seq(
        $.flow_by_keyword,
        field("runnable", $.inline_agic),
      ),
    _using_complements: ($) =>
      choice(
        seq($._named_using_complement, $.line_end),
        seq($._lanes_complement, $._named_using_complement, $.line_end),
        seq($._named_using_complement, $._lanes_complement, $.line_end),
        $._inline_using_complement,
        seq($._lanes_complement, $._inline_using_complement),
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
    repeat_statement: ($) =>
      choice(
        prec.right(seq(
          $.flow_repeat_keyword,
          $._repeat_count_complement,
          $.colon,
          $.line_end,
          structuralBody($, seq(field("body", $.statements), optional($._until_complement), repeat($._trivia))),
        )),
        prec.right(seq(
          $.flow_repeat_keyword,
          $.colon,
          $.line_end,
          structuralBody($, seq(field("body", $.statements), $._until_complement, repeat($._trivia))),
        )),
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
    _until_complement: ($) =>
      prec.dynamic(2, seq(
        $._until_start,
        $.flow_until_keyword,
        field("until", $.inline_agic_body),
      )),
    invalid_flow_reserved_statement: ($) =>
      prec.dynamic(-2, seq(
        $._flow_reserved_word,
        optional($.text_line),
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
        field("count", $.integer_literal),
      ),
    runnable: ($) => $.snake_name,
    agent: ($) => $.snake_name,
    local_name: ($) => $.snake_name,
    integer_literal: () => token(/\d+/),
    _one_integer_literal: () => token(/0*1/),
    _other_integer_literal: () => token(/0*(0|[2-9]|[1-9][0-9]+)/),

    directive: ($) =>
      seq($._directive_start, choice(
        seq(
          field("key", $.recall_keyword),
          field("operator", $.assign_operator),
          field("value", $.recall_value),
          $.line_end,
        ),
        seq(
          field("key", $.directive_key),
          field("operator", $.directive_op),
          field("value", $.directive_value),
          $.line_end,
        ),
      )),
    directive_key: () =>
      choice("models", "tools", "skills", "services", "psyches", "hands", "handoffs"),
    directive_op: () => choice("=", "+=", "-="),
    directive_value: () => token(prec(-1, /[^#\r\n]+/)),
    recall_value: ($) =>
      choice(
        $.recall_auto_keyword,
        $.recall_none_keyword,
        $.recall_far_keyword,
        $.recall_near_keyword,
        seq($.recall_far_keyword, $.comma, $.recall_near_keyword),
      ),
    _directives: ($) => prec.right(seq($.directive, repeat(choice($.directive, $._trivia)))),

    settings: ($) =>
      prec.right(choice(
        seq(
          $.context_setting,
          repeat($._trivia),
          $.instruct_setting,
          repeat($._trivia),
        ),
        seq(
          $.instruct_setting,
          repeat($._trivia),
          $.context_setting,
          repeat($._trivia),
        ),
        seq($.context_setting, repeat($._trivia)),
        seq($.instruct_setting, repeat($._trivia)),
      )),
    context_setting: ($) =>
      seq($._setting_start, choice(
        seq(
          $.context_keyword,
          $.text_ref,
          $.line_end,
        ),
        prec.right(seq(
          $.context_keyword,
          $.colon,
          $.text_inline,
        )),
      )),
    instruct_setting: ($) =>
      seq($._setting_start, choice(
        seq(
          $.instruct_keyword,
          $.text_ref,
          $.line_end,
        ),
        prec.right(seq(
          $.instruct_keyword,
          $.colon,
          $.text_inline,
        )),
      )),
    text_ref: ($) => choice("default", "none", $.snake_name),
    messages: ($) => prec.right(seq($.message, repeat(choice($.message, $._trivia)))),
    message: ($) =>
      seq($._line_start, choice(
        seq($.role, $.colon, $.text_inline),
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
        optional($.text_line),
        $.line_end,
      )),
    role: () => choice("user", "assistant", "tool"),
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
    flow_let_keyword: () => "let",
    flow_seek_keyword: () => "seek",
    flow_ask_keyword: () => "ask",
    flow_scatter_keyword: () => "scatter",
    flow_storm_keyword: () => "storm",
    flow_gather_keyword: () => "gather",
    flow_settle_keyword: () => "settle",
    flow_map_keyword: () => "map",
    flow_keep_keyword: () => "keep",
    flow_drop_keyword: () => "drop",
    flow_sort_keyword: () => "sort",
    flow_rank_keyword: () => "rank",
    flow_repeat_keyword: () => "repeat",
    flow_until_keyword: () => "until",
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
    recall_auto_keyword: () => "auto",
    recall_none_keyword: () => "none",
    recall_far_keyword: () => "far",
    recall_near_keyword: () => "near",
    _flow_reserved_word: ($) =>
      choice(
        $.flow_run_keyword,
        $.flow_let_keyword,
        $.flow_seek_keyword,
        $.flow_ask_keyword,
        $.flow_scatter_keyword,
        $.flow_storm_keyword,
        $.flow_gather_keyword,
        $.flow_settle_keyword,
        $.flow_map_keyword,
        $.flow_drop_keyword,
        $.flow_keep_keyword,
        $.flow_sort_keyword,
        $.flow_until_keyword,
        $.flow_rank_keyword,
        $.flow_repeat_keyword,
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
        $.flow_in_keyword, $.flow_lane_keyword, $.flow_lanes_keyword,
        $.flow_ascending_keyword, $.flow_descending_keyword,
        $.flow_time_keyword, $.flow_times_keyword,
        $.flow_first_keyword, $.flow_last_keyword,
        $.with_keyword, $.struct_keyword, $.psyche_keyword, $.skill_keyword,
        $.service_keyword, $.prompt_keyword, $.task_keyword, $.chore_keyword,
        $.agic_keyword, $.flow_keyword, $._agic_reserved_word,
      ),
    _agic_reserved_word: ($) =>
      choice(
        $.context_keyword,
        $.instruct_keyword,
        $.role,
        $.pass_keyword,
        $.recall_keyword,
        $.directive_key,
      ),

    optional_marker: () => "?",
    assign_operator: () => "=",
    arrow: () => "->",
    colon: () => ":",
    lparen: () => "(",
    rparen: () => ")",
    comma: () => ",",

    cap_kind: () => token(choice("psyche", "skill", "service", "prompt")),

    type_name: ($) => $.pascal_name,
    pascal_name: () => token(/[A-Z][A-Za-z0-9]*/),
    snake_name: () => token(/[a-z][a-z0-9_]*(_[a-z0-9]+)*/),
    kebab_name: () => token(/[a-z][a-z0-9]*(-[a-z0-9]+)*/),
    _snake_kebab_name: () => token(/[a-z][a-z0-9_-]*/),
    text_line: () => token(prec(-1, /[^#\r\n]+/)),
  },
});

function structuralBody($, content) {
  return prec.right(seq(repeat($._trivia), $._indent, content, $._dedent));
}

function paragraph($, line) {
  const bodyLine = alias(line, $.text_body_line);
  return prec.right(seq(
    bodyLine,
    repeat(choice(bodyLine, seq($.blank_line, bodyLine))),
    optional($.blank_line),
  ));
}
