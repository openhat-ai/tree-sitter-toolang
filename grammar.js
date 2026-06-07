module.exports = grammar({
  name: "toolang",

  extras: () => [/[ \t\f]/],
  rules: {
    source_file: ($) =>
      repeat(choice($.program_doc_comment, $.doc_comment, $.comment_line, $.blank_line, $.item)),

    item: ($) =>
      choice(
        $.use,
        $.struct,
        $.psyche,
        $.skill,
        $.service,
        $.prompt,
        $.context,
        $.instruct,
        $.thunk,
        $.flow,
      ),

    newline: () => /\r?\n/,
    blank_line: ($) => $.newline,
    program_doc_comment: () => token(prec(2, seq("##!", /[^\r\n]*/, /\r?\n/))),
    doc_comment: () => token(prec(1, seq("##", /[^\r\n]*/, /\r?\n/))),
    comment_line: () => token(prec(0, seq("#", /[^\r\n]*/, /\r?\n/))),
    inline_comment: () => token(seq("#", /[^\r\n]*/)),
    line_end: ($) => seq(optional($.inline_comment), $.newline),

    use: ($) =>
      seq(
        field("keyword", $.use_keyword),
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
      prec.right(repeat1(choice($.field, $.doc_comment, $.comment_line, $.blank_line))),
    field: ($) =>
      seq(
        field("name", $.field_name),
        optional(field("optional", $.optional_marker)),
        field("colon", $.colon),
        field("type", $.type),
        $.line_end,
      ),
    field_name: ($) => $.value_name,

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

    cap_name: ($) => $.value_name,
    cap_ref: ($) => choice($.cap_uri, $.cap_shorthand),

    cap_body: ($) => choice($.cap_indented, $.cap_markdown),
    cap_indented: ($) =>
      prec.right(seq(
        $.line_end,
        repeat(choice($.property_eq, $.cap_indented_content_line, $.blank_line)),
      )),
    cap_markdown: ($) =>
      seq(
        $.fence_open,
        optional(field("language", $.block_language)),
        $.line_end,
        optional(field("frontmatter", $.frontmatter)),
        repeat($.cap_fenced_content_line),
        field("close", $.fence_close),
      ),
    cap_content: ($) => $.raw_text,
    cap_indented_content_line: ($) => seq(field("content", $.indented_raw_text), $.newline),
    cap_fenced_content_line: ($) => seq(optional(field("content", $.fenced_raw_text)), $.newline),

    frontmatter: ($) =>
      seq(
        $.frontmatter_delimiter,
        $.newline,
        repeat(choice($.property_colon, $.frontmatter_comment)),
        $.frontmatter_delimiter,
        $.newline,
      ),

    property_eq: ($) =>
      seq(
        field("key", $.property_key),
        field("operator", $.assign_operator),
        field("value", $.property_value),
        $.line_end,
      ),
    property_colon: ($) =>
      seq(
        field("key", $.property_key),
        field("colon", $.colon),
        field("value", $.property_value),
        $.newline,
      ),
    frontmatter_comment: () => token(seq("#", /[^\r\n]*/, /\r?\n/)),
    property_key: ($) => $.value_name,
    property_value: ($) => $.inline_text,

    instruct: ($) =>
      seq(
        field("keyword", $.instruct_keyword),
        optional(field("name", $.instruct_name)),
        field("colon", $.colon),
        field("body", $.instruct_body),
      ),
    instruct_name: ($) => $.value_name,
    instruct_body: ($) => choice($.block_indented, $.block_fenced),

    context: ($) =>
      seq(
        field("keyword", $.context_keyword),
        optional(field("name", $.context_name)),
        field("colon", $.colon),
        field("body", $.context_body),
      ),
    context_name: ($) => $.value_name,
    context_body: ($) => choice($.block_indented, $.block_fenced),

    block_indented: ($) =>
      prec.right(seq(
        $.line_end,
        repeat(choice($.block_indented_content_line, $.blank_line)),
      )),
    block_fenced: ($) =>
      seq(
        $.fence_open,
        optional(field("language", $.block_language)),
        $.line_end,
        repeat($.block_fenced_content_line),
        field("close", $.fence_close),
      ),
    block_content: ($) => $.raw_text,
    block_indented_content_line: ($) => seq(field("content", $.indented_raw_text), $.newline),
    block_fenced_content_line: ($) => seq(optional(field("content", $.fenced_raw_text)), $.newline),
    block_language: () => "md",

    thunk: ($) =>
      prec.right(seq(
        field("keyword", $.thunk_keyword),
        optional(field("name", $.thunk_name)),
        optional(field("params", $.params)),
        optional(seq(field("arrow", $.arrow), field("output", $.type))),
        field("colon", $.colon),
        $.line_end,
        optional(field("body", $.thunk_body)),
      )),
    thunk_name: ($) => $.value_name,
    thunk_body: ($) =>
      prec.right(choice(
        seq(
          $.directive,
          repeat(choice($.directive, $.comment_line, $.blank_line)),
          field("instruction", $.instruction_section),
          repeat(choice($.comment_line, $.blank_line)),
          optional(field("tail", $.thunk_tail)),
        ),
        seq(
          $.directive,
          repeat(choice($.directive, $.comment_line, $.blank_line)),
          optional(field("tail", $.thunk_tail)),
        ),
        seq(
          field("instruction", $.instruction_section),
          repeat(choice($.comment_line, $.blank_line)),
          optional(field("tail", $.thunk_tail)),
        ),
        field("tail", $.thunk_tail),
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
        field("colon", $.colon),
        field("type", $.type),
      ),
    param_name: ($) => $.value_name,

    flow: ($) =>
      prec.right(seq(
        field("keyword", $.flow_keyword),
        optional(field("name", $.flow_name)),
        optional(field("params", $.params)),
        optional(seq(field("arrow", $.arrow), field("output", $.type))),
        field("colon", $.colon),
        $.line_end,
        field("body", $.flow_body),
      )),
    flow_name: ($) => $.value_name,
    flow_body: ($) =>
      prec.right(seq(
        repeat($.directive),
        field("tail", $.flow_body_tail),
      )),
    flow_body_tail: ($) =>
      prec.right(choice(
        seq(
          repeat(choice($.doc_comment, $.comment_line, $.blank_line)),
          $.pass_statement,
        ),
        seq(
          repeat(choice($.doc_comment, $.comment_line, $.blank_line)),
          $.flow_body_statement,
          repeat(choice($.flow_body_statement, $.doc_comment, $.comment_line, $.blank_line)),
          optional($.pass_statement),
        ),
      )),
    flow_body_statement: ($) => $.flow_entry,
    flow_entry: ($) =>
      choice(
        alias($.flow_bare_thunk_step, $.step),
        alias($.flow_do_step, $.step),
        alias($.flow_ask_step, $.step),
        alias($.flow_unfold_step, $.step),
        alias($.flow_keep_step, $.step),
        alias($.flow_drop_step, $.step),
        alias($.flow_rank_step, $.step),
        alias($.flow_each_step, $.step),
        alias($.flow_fold_step, $.step),
        alias($.flow_repeat_step, $.step),
      ),
    flow_bare_thunk_step: ($) =>
      field("body", $.flow_bare_thunk_body),
    flow_bare_thunk_body: ($) =>
      prec.right(seq(
        $.flow_bare_content_line,
        repeat(choice(
          $.flow_bare_content_line,
          seq($.blank_line, $.flow_bare_content_line),
        )),
        optional($.blank_line),
      )),
    flow_bare_content_line: ($) =>
      seq(field("content", $.flow_bare_raw_text), $.newline),
    flow_do_step: ($) =>
      choice(
        seq(
          field("keyword", $.flow_do_keyword),
          field("targets", $.flow_target_list),
          $.line_end,
        ),
        prec.right(seq(
          field("keyword", $.flow_do_keyword),
          optional(field("head", $.flow_inline_output_type)),
          field("body", $.flow_inline_step_body),
        )),
      ),
    flow_ask_step: ($) =>
      seq(
        field("keyword", $.flow_ask_keyword),
        field("target", $.flow_target),
        $.line_end,
      ),
    flow_unfold_step: ($) =>
      choice(
        seq(
          field("keyword", $.flow_unfold_keyword),
          field("target", $.flow_target),
          $.line_end,
        ),
        prec.right(seq(
          field("keyword", $.flow_unfold_keyword),
          optional(field("head", $.flow_inline_output_type)),
          field("body", $.flow_inline_step_body),
        )),
      ),
    flow_keep_step: ($) =>
      choice(
        seq(
          field("keyword", $.flow_keep_keyword),
          field("head", $.flow_named_parallel_head),
          $.line_end,
        ),
        prec.right(seq(
          field("keyword", $.flow_keep_keyword),
          optional(field("head", $.flow_inline_parallel_head)),
          field("body", $.flow_inline_step_body),
        )),
      ),
    flow_drop_step: ($) =>
      choice(
        seq(
          field("keyword", $.flow_drop_keyword),
          field("head", $.flow_named_parallel_head),
          $.line_end,
        ),
        prec.right(seq(
          field("keyword", $.flow_drop_keyword),
          optional(field("head", $.flow_inline_parallel_head)),
          field("body", $.flow_inline_step_body),
        )),
      ),
    flow_rank_step: ($) =>
      choice(
        seq(
          field("keyword", $.flow_rank_keyword),
          field("target", $.flow_target),
          $.line_end,
        ),
        prec.right(seq(
          field("keyword", $.flow_rank_keyword),
          optional(field("head", $.flow_inline_rank_head)),
          field("body", $.flow_inline_step_body),
        )),
      ),
    flow_each_step: ($) =>
      choice(
        seq(
          field("keyword", $.flow_each_keyword),
          field("head", $.flow_named_parallel_head),
          $.line_end,
        ),
        prec.right(seq(
          field("keyword", $.flow_each_keyword),
          optional(field("head", $.flow_inline_each_head)),
          field("body", $.flow_inline_step_body),
        )),
      ),
    flow_fold_step: ($) =>
      choice(
        seq(
          field("keyword", $.flow_fold_keyword),
          field("target", $.flow_target),
          $.line_end,
        ),
        prec.right(seq(
          field("keyword", $.flow_fold_keyword),
          optional(field("head", $.flow_inline_output_type)),
          field("body", $.flow_inline_step_body),
        )),
      ),
    flow_repeat_step: ($) =>
      choice(
        seq(
          field("keyword", $.flow_repeat_keyword),
          field("count", $.flow_repeat_count),
          $.line_end,
        ),
        seq(
          field("keyword", $.flow_repeat_keyword),
          optional(field("count", $.flow_repeat_count)),
          field("condition_keyword", $.flow_until_keyword),
          field("colon", $.colon),
          field("condition", $.flow_condition_body),
        ),
        prec.right(seq(
          field("keyword", $.flow_repeat_keyword),
          optional(field("count", $.flow_repeat_count)),
          field("colon", $.colon),
          $.line_end,
          field("body", $.flow_repeat_block_body),
        )),
      ),
    flow_repeat_block_body: ($) =>
      prec.right(seq(
        repeat(choice($.doc_comment, $.comment_line, $.blank_line)),
        field("entry", $.flow_body_statement),
        repeat(choice($.flow_body_statement, $.doc_comment, $.comment_line, $.blank_line)),
        optional(field("condition", $.flow_until_clause)),
      )),
    flow_until_clause: ($) =>
      seq(
        field("keyword", $.flow_until_keyword),
        field("colon", $.colon),
        field("condition", $.flow_condition_body),
      ),
    flow_condition_body: ($) =>
      choice(
        seq(field("text", $.flow_inline_text), $.line_end),
        seq($.line_end, field("text", $.block_indented_implicit)),
      ),
    flow_inline_step_body: ($) =>
      seq(
        field("colon", $.colon),
        choice(
          seq(field("value", $.flow_inline_body), $.line_end),
          seq($.line_end, field("value", $.block_indented_implicit)),
        ),
      ),
    flow_inline_output_type: ($) =>
      seq(field("keyword", $.flow_to_keyword), field("type", $.type)),
    flow_inline_parallel_head: ($) =>
      $.flow_parallelism,
    flow_inline_rank_head: ($) =>
      $.flow_rank_limit,
    flow_inline_each_head: ($) =>
      choice(
        $.flow_inline_output_type,
        $.flow_parallelism,
        seq($.flow_inline_output_type, $.flow_parallelism),
      ),
    flow_named_parallel_head: ($) =>
      choice(
        $.flow_target,
        seq($.flow_target, $.flow_parallelism),
        seq($.flow_parallelism, $.flow_target),
      ),
    flow_parallelism: ($) =>
      seq(field("keyword", $.flow_par_keyword), field("count", $.integer_literal)),
    flow_rank_limit: ($) =>
      field("count", $.integer_literal),
    flow_target_list: ($) =>
      seq(field("target", $.flow_target), repeat(seq($.comma, field("target", $.flow_target)))),
    flow_inline_body: ($) =>
      $.flow_inline_text,
    flow_target: () => token(/[A-Za-z_@][A-Za-z0-9_./@-]*/),
    flow_repeat_count: ($) => $.integer_literal,
    integer_literal: () => token(/\d+/),
    flow_inline_text: () => token(prec(-1, /[^#\r\n]+/)),

    directive: ($) =>
      seq(
        field("key", $.directive_key),
        field("operator", $.directive_op),
        field("values", $.directive_csv),
        $.line_end,
      ),
    directive_key: () =>
      choice("models", "tools", "skills", "services", "psyches", "hands", "handoffs", "recall"),
    directive_op: () => choice("=", "+=", "-="),
    directive_csv: ($) =>
      seq($.bare_value, repeat(seq($.comma, $.bare_value))),

    instruction_section: ($) =>
      prec.right(choice(
        seq(
          alias($.context_block, $.block),
          repeat(choice($.comment_line, $.blank_line)),
          optional(alias($.instruct_block, $.block)),
        ),
        seq(
          alias($.instruct_block, $.block),
          repeat(choice($.comment_line, $.blank_line)),
          optional(alias($.context_block, $.block)),
        ),
      )),
    message_section: ($) =>
      prec.right(seq(
        choice($.roled_message, $.unroled_message),
        repeat(choice($.roled_message, $.unroled_message, $.comment_line, $.blank_line)),
      )),
    thunk_tail: ($) =>
      prec.right(choice(
        field("messages", $.message_section),
        $.pass_statement,
      )),
    roled_message: ($) => alias($.roled_message_block, $.block),
    unroled_message: ($) => alias($.unroled_message_block, $.block),
    unroled_message_block: ($) =>
      seq(field("value", $.block_indented_implicit)),
    block_indented_implicit: ($) =>
      prec.right(seq(
        $.block_indented_content_line,
        repeat(choice($.block_indented_content_line, $.blank_line)),
      )),

    context_block: ($) =>
      seq(
        field("kind", $.context_block_kind),
        field("colon", $.colon),
        field("value", $.block_value),
      ),
    instruct_block: ($) =>
      seq(
        field("kind", $.instruct_block_kind),
        field("colon", $.colon),
        field("value", $.block_value),
      ),
    roled_message_block: ($) =>
      seq(
        field("kind", $.roled_message_kind),
        field("colon", $.colon),
        field("value", $.block_value),
      ),
    pass_statement: ($) =>
      seq(field("keyword", $.pass_keyword), $.line_end),
    context_block_kind: () => "context",
    instruct_block_kind: () => "instruct",
    roled_message_kind: () => choice("user", "assistant", "tool"),
    block_value: ($) => choice($.block_inline, $.block_indented, $.block_fenced),
    block_inline: ($) =>
      seq(choice(field("name", $.block_name), field("content", $.block_content_inline)), $.line_end),
    block_name: ($) => choice("default", "none", $.value_name),
    block_content_inline: ($) => $.inline_text,

    use_keyword: () => "use",
    struct_keyword: () => "struct",
    psyche_keyword: () => "psyche",
    skill_keyword: () => "skill",
    service_keyword: () => "service",
    prompt_keyword: () => "prompt",
    context_keyword: () => "context",
    instruct_keyword: () => "instruct",
    thunk_keyword: () => "thunk",
    flow_keyword: () => "flow",
    pass_keyword: () => "pass",
    flow_do_keyword: () => "do",
    flow_ask_keyword: () => "ask",
    flow_unfold_keyword: () => "unfold",
    flow_keep_keyword: () => "keep",
    flow_drop_keyword: () => "drop",
    flow_rank_keyword: () => "rank",
    flow_each_keyword: () => "each",
    flow_fold_keyword: () => "fold",
    flow_repeat_keyword: () => "repeat",
    flow_until_keyword: () => "until",
    flow_to_keyword: () => "to",
    flow_par_keyword: () => "par",

    optional_marker: () => "?",
    assign_operator: () => "=",
    arrow: () => "->",
    colon: () => ":",
    lparen: () => "(",
    rparen: () => ")",
    comma: () => ",",
    fence_open: () => "```",
    fence_close: () => seq("```", /\r?\n/),
    frontmatter_delimiter: () => "---",

    cap_kind: () => choice("psyche", "skill", "service", "prompt"),
    cap_uri: () => token(/[A-Za-z][A-Za-z0-9+.-]*:\/\/[^\s#]+/),
    cap_shorthand: () => token(/[A-Za-z0-9_@-][A-Za-z0-9_./:@-]*/),
    bare_value: () => token(/[A-Za-z0-9_./:@-]+/),

    type_name: () => token(/[A-Z][A-Za-z0-9]*/),
    value_name: () => token(/[a-z][a-z0-9_-]*/),
    inline_text: () => token(prec(-1, /[^#\r\n]+/)),
    raw_text: () => token(prec(-1, /[^\r\n]*/)),
    indented_raw_text: () => token(prec(-1, /[ \t][^\r\n]*/)),
    flow_bare_raw_text: () => token(prec(-1, /[ \t]+[^#\s][^\r\n]*/)),
    fenced_raw_text: () => token(prec(-1, /[^`\r\n][^\r\n]*/)),
  },
});
