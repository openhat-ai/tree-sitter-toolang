module.exports = grammar({
  name: "toolang",

  extras: () => [/[ \t\f]/],
  conflicts: ($) => [
    [$._trivia, $.text_body],
  ],
  rules: {
    source_file: ($) =>
      repeat(choice($._trivia, $.item)),

    item: ($) =>
      choice(
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
      ),

    newline: () => token(/\r?\n/),
    blank_line: () => token(prec(1, /\r?\n/)),
    parent_doc_line: () => token(prec(2, seq("##!", /[^\r\n]*/, /\r?\n/))),
    doc_line: () => token(prec(1, seq("##", /[^\r\n]*/, /\r?\n/))),
    comment_line: () => token(prec(0, seq("#", /[^\r\n]*/, /\r?\n/))),
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
    builtin_type: () => choice("Text", "Number", "Boolean", "Json", "Part", "Pack"),
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
      prec.right(repeat1(choice($.field, $.doc_line, $.comment_line, $.blank_line))),
    field: ($) =>
      seq(
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
        field("body", $.cap_body),
      ),

    skill: ($) =>
      seq(
        field("kind", $.skill_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        field("body", $.cap_body),
      ),

    service: ($) =>
      seq(
        field("kind", $.service_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        field("body", $.cap_body),
      ),

    prompt: ($) =>
      seq(
        field("kind", $.prompt_keyword),
        field("name", $.cap_name),
        field("colon", $.colon),
        field("body", $.cap_body),
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

    cap_body: ($) =>
      prec.right(seq(
        $.line_end,
        repeat(choice($.property, $._trivia)),
        optional(seq($.text_body, repeat($._trivia))),
      )),
    job_body: ($) =>
      prec.right(seq(
        $.line_end,
        repeat(choice($.property, $._trivia)),
        optional(seq($.text_body, repeat($._trivia))),
      )),

    property: ($) =>
      seq(
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
    text_body: ($) =>
      prec.dynamic(1, prec.right(repeat1(choice($.text_body_line, $.blank_line)))),
    text_body_line: ($) => seq(field("content", $.indented_raw_text), $.newline),
    _nested_text_inline_alias: ($) => alias($._nested_text_inline, $.text_inline),
    _nested_text_inline: ($) =>
      choice(
        seq($.text_line, $.line_end),
        alias($._nested_text_block, $.text_block),
      ),
    _nested_text_block: ($) =>
      prec.right(seq(
        $.line_end,
        alias($._nested_text_body, $.text_body),
      )),
    _nested_text_body: ($) =>
      prec.dynamic(1, prec.right(repeat1(choice(
        alias($._nested_text_body_line, $.text_body_line),
        $.blank_line,
      )))),
    _nested_text_body_line: ($) =>
      seq(field("content", alias($._nested_indented_raw_text, $.indented_raw_text)), $.newline),

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
      prec.right(seq(
        repeat($._trivia),
        choice(
          seq($._directives, optional($.settings), optional($.messages)),
          seq($.settings, optional($.messages)),
          $.messages,
          $._pass_statement,
        ),
        repeat($._trivia),
      )),

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
    param_name: ($) => $.snake_name,

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
      prec.right(seq(
        repeat($._trivia),
        choice(
          seq($._directives, $.statements),
          $.statements,
          $._pass_statement,
        ),
        repeat($._trivia),
      )),
    statements: ($) =>
      prec.right(seq($._flow_statement, repeat(choice($._flow_statement, $._trivia)))),
    _flow_statement: ($) =>
      choice(
        $.let_statement,
        $._flow_operation,
        $.invalid_flow_reserved_statement,
        $.implicit_run_statement,
      ),
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
        $.rank_statement,
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
          $.colon,
          field("value", $._nested_text_inline_alias),
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
    implicit_run_statement: ($) =>
      prec.dynamic(-1, prec.right(seq(
        alias($._implicit_run_text_body_line, $.text_body_line),
        repeat(choice(
          $.text_body_line,
          seq($.blank_line, $.text_body_line),
        )),
        optional($.blank_line),
      ))),
    _implicit_run_text_body_line: ($) =>
      seq(field("content", alias($._implicit_run_raw_text, $.indented_raw_text)), $.newline),
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
        field("body", $._nested_text_inline_alias),
      )),
    scatter_statement: ($) =>
      choice(
        seq(
          $.flow_scatter_keyword,
          field("count", $.integer_literal),
          field("runnable", $.runnable),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_scatter_keyword,
          field("count", $.integer_literal),
          field("agic", $.inline_agic),
        )),
      ),
    storm_statement: ($) =>
      choice(
        seq(
          $.flow_storm_keyword,
          field("count", $.integer_literal),
          field("runnable", $.runnable),
          optional($.par_clause),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_storm_keyword,
          field("count", $.integer_literal),
          optional($.par_clause),
          field("agic", $.inline_agic),
        )),
      ),
    gather_statement: ($) =>
      choice(
        seq(
          $.flow_gather_keyword,
          field("runnable", $.runnable),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_gather_keyword,
          field("agic", $.inline_agic),
        )),
      ),
    settle_statement: ($) =>
      choice(
        seq(
          $.flow_settle_keyword,
          field("runnable", $.runnable),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_settle_keyword,
          field("agic", $.inline_agic),
        )),
      ),
    map_statement: ($) =>
      choice(
        seq(
          $.flow_map_keyword,
          field("runnable", $.runnable),
          optional($.par_clause),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_map_keyword,
          optional($.par_clause),
          field("agic", $.inline_agic),
        )),
      ),
    keep_statement: ($) =>
      choice(
        seq(
          $.flow_keep_keyword,
          $.position_clause,
          $.line_end,
        ),
        seq(
          $.flow_keep_keyword,
          field("runnable", $.runnable),
          optional($.par_clause),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_keep_keyword,
          optional($.par_clause),
          field("agic", $.inline_agic_body),
        )),
      ),
    drop_statement: ($) =>
      choice(
        seq(
          $.flow_drop_keyword,
          $.position_clause,
          $.line_end,
        ),
        seq(
          $.flow_drop_keyword,
          field("runnable", $.runnable),
          optional($.par_clause),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_drop_keyword,
          optional($.par_clause),
          field("agic", $.inline_agic_body),
        )),
      ),
    rank_statement: ($) =>
      choice(
        seq(
          $.flow_rank_keyword,
          field("runnable", $.runnable),
          optional($.rank_selection_clause),
          optional($.par_clause),
          $.line_end,
        ),
        prec.right(seq(
          $.flow_rank_keyword,
          optional($.rank_selection_clause),
          optional($.par_clause),
          field("agic", $.inline_agic_body),
        )),
      ),
    repeat_statement: ($) =>
      choice(
        prec.right(seq(
          $.flow_repeat_keyword,
          field("count", $.integer_literal),
          $.colon,
          $.line_end,
          field("body", $.repeat_body),
        )),
        prec.right(seq(
          $.flow_repeat_keyword,
          $.colon,
          $.line_end,
          field("body", $.repeat_until_body),
        )),
      ),
    repeat_body: ($) =>
      prec.right(seq(
        $.statements,
        optional($.until_statement),
      )),
    repeat_until_body: ($) =>
      prec.right(seq(
        $.statements,
        $.until_statement,
      )),
    until_statement: ($) =>
      prec.dynamic(2, seq(
        $.flow_until_keyword,
        field("agic", $.inline_agic_body),
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
        field("body", $._nested_text_inline_alias),
      ),
    inline_agic_body: ($) =>
      seq(
        $.colon,
        field("body", $._nested_text_inline_alias),
      ),
    par_clause: ($) =>
      seq($.flow_par_keyword, field("limit", $.integer_literal)),
    position_clause: ($) =>
      seq(
        field("position", choice($.flow_first_keyword, $.flow_last_keyword)),
        field("count", $.integer_literal),
      ),
    rank_selection_clause: ($) =>
      seq(
        field("selection", choice($.flow_top_keyword, $.flow_bottom_keyword)),
        field("count", $.integer_literal),
      ),
    runnable: ($) => $.snake_name,
    agent: ($) => $.snake_name,
    local_name: ($) => $.snake_name,
    integer_literal: () => token(/\d+/),

    directive: ($) =>
      seq(
        field("key", $.directive_key),
        field("operator", $.directive_op),
        field("value", $.directive_value),
        $.line_end,
      ),
    directive_key: () =>
      choice("models", "tools", "skills", "services", "psyches", "hands", "handoffs", "recall"),
    directive_op: () => choice("=", "+=", "-="),
    directive_value: () => token(prec(-1, /[^#\r\n]+/)),
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
      choice(
        seq(
          $.context_keyword,
          $.text_ref,
          $.line_end,
        ),
        prec.right(seq(
          $.context_keyword,
          $.colon,
          $._nested_text_inline_alias,
        )),
      ),
    instruct_setting: ($) =>
      choice(
        seq(
          $.instruct_keyword,
          $.text_ref,
          $.line_end,
        ),
        prec.right(seq(
          $.instruct_keyword,
          $.colon,
          $._nested_text_inline_alias,
        )),
      ),
    text_ref: ($) => choice("default", "none", $.snake_name),
    messages: ($) => prec.right(seq($.message, repeat(choice($.message, $._trivia)))),
    message: ($) =>
      choice(
        seq($.role, $.colon, $._nested_text_inline_alias),
        $.invalid_agic_reserved_message,
        $.unroled_message,
      ),
    unroled_message: ($) =>
      prec.dynamic(-1, prec.right(seq(
        alias($._unroled_message_initial_line, $.text_body_line),
        repeat(choice(
          alias($._unroled_message_continuation_line, $.text_body_line),
          seq($.blank_line, alias($._unroled_message_continuation_line, $.text_body_line)),
        )),
        optional($.blank_line),
      ))),
    _unroled_message_initial_line: ($) =>
      seq(field("content", $.indented_raw_text), $.newline),
    _unroled_message_continuation_line: ($) =>
      seq(field("content", $.indented_raw_text), $.newline),
    invalid_agic_reserved_message: ($) =>
      prec.dynamic(-2, seq(
        $._agic_reserved_word,
        optional($.text_line),
        $.line_end,
      )),
    role: () => choice("user", "assistant", "tool"),
    _pass_statement: ($) =>
      prec(1, seq($.pass_keyword, $.line_end)),
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
    flow_rank_keyword: () => "rank",
    flow_repeat_keyword: () => "repeat",
    flow_until_keyword: () => "until",
    flow_par_keyword: () => "par",
    flow_first_keyword: () => "first",
    flow_last_keyword: () => "last",
    flow_top_keyword: () => "top",
    flow_bottom_keyword: () => "bottom",
    flow_think_keyword: () => "think",
    flow_use_keyword: () => "use",
    thunk_keyword: () => "thunk",
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
        $.flow_rank_keyword,
        $.flow_repeat_keyword,
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
        "sort",
        "head",
        "tail",
      ),
    _agic_reserved_word: ($) =>
      choice(
        $.context_keyword,
        $.instruct_keyword,
        $.role,
        $.pass_keyword,
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
    indented_raw_text: () => token(prec(-1, /[ \t][^\r\n]*/)),
    _implicit_run_raw_text: () => token(prec(-1, /[ \t]+([^u \t\r\n][^\r\n]*|u([^n\r\n][^\r\n]*)?|un([^t\r\n][^\r\n]*)?|unt([^i\r\n][^\r\n]*)?|unti([^l\r\n][^\r\n]*)?|until([^ \t:=+\-\r\n][^\r\n]*)?)/)),
    _nested_indented_raw_text: () => token(prec(2, /[ \t]{4,}[^\r\n]*/)),
  },
});
