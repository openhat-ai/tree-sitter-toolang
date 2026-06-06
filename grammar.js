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
        optional(field("body", $.flow_body)),
      )),
    flow_name: ($) => $.value_name,
    flow_body: ($) =>
      prec.right(repeat1(choice(
        $.directive,
        $.flow_entry,
        $.doc_comment,
        $.comment_line,
        $.blank_line,
        $.pass_statement,
      ))),
    flow_entry: ($) =>
      choice(
        alias($.flow_transform_step, $.step),
        alias($.flow_map_step, $.step),
        alias($.flow_case_step, $.step),
        alias($.flow_block_step, $.step),
        alias($.flow_repeat_until, $.step),
      ),
    flow_transform_step: ($) =>
      prec.right(seq(
        field("keyword", $.flow_transform_keyword),
        choice(
          seq(field("body", $.flow_step_args), $.line_end),
          seq(
            field("colon", $.colon),
            choice(
              seq(field("body", $.flow_inline_body), $.line_end),
              seq($.line_end, optional(field("body", $.block_indented_implicit))),
            ),
          ),
        ),
      )),
    flow_map_step: ($) =>
      prec.right(seq(
        field("keyword", $.flow_map_keyword),
        choice(
          seq(field("body", $.flow_step_args), $.line_end),
          seq(
            field("colon", $.colon),
            choice(
              seq(field("body", $.flow_inline_body), $.line_end),
              seq($.line_end, optional(field("body", $.flow_nested_body))),
            ),
          ),
        ),
      )),
    flow_block_step: ($) =>
      prec.right(seq(
        field("keyword", $.flow_block_keyword),
        field("colon", $.colon),
        $.line_end,
        optional(field("body", $.flow_nested_body)),
      )),
    flow_case_step: ($) =>
      prec.right(seq(
        field("keyword", $.flow_case_keyword),
        field("colon", $.colon),
        $.line_end,
        field("body", $.flow_case_body),
      )),
    flow_case_body: ($) =>
      prec.right(seq(
        repeat1(choice($.flow_case_arm, $.doc_comment, $.comment_line, $.blank_line)),
        field("else", $.flow_else_arm),
      )),
    flow_case_arm: ($) =>
      prec.right(seq(
        field("condition", $.flow_condition),
        field("colon", $.colon),
        $.line_end,
        optional(field("body", $.flow_nested_body)),
      )),
    flow_else_arm: ($) =>
      prec.right(seq(
        field("keyword", $.flow_else_keyword),
        field("colon", $.colon),
        $.line_end,
        optional(field("body", $.flow_nested_body)),
      )),
    flow_repeat_until: ($) =>
      seq(
        field("keyword", $.flow_repeat_keyword),
        field("modifier", $.flow_until_keyword),
        field("colon", $.colon),
        choice(
          seq(field("condition", $.flow_inline_text), $.line_end),
          seq($.line_end, field("condition", $.block_indented_implicit)),
        ),
      ),
    flow_nested_body: ($) =>
      prec.right(repeat1(choice(
        $.flow_entry,
        $.flow_text_block,
        $.doc_comment,
        $.comment_line,
        $.blank_line,
        $.pass_statement,
      ))),
    flow_inline_body: ($) =>
      choice($.flow_call_list, $.flow_inline_text),
    flow_call_list: ($) =>
      seq(
        optional($.flow_do_prefix),
        field("target", $.flow_arg),
        repeat(seq($.comma, optional($.flow_do_prefix), field("target", $.flow_arg))),
      ),
    flow_step_args: ($) =>
      seq(field("arg", $.flow_arg), repeat(seq($.comma, field("arg", $.flow_arg)))),
    flow_do_prefix: () => "do",
    flow_arg: ($) => $.bare_value,
    flow_condition: () => token(prec(-1, /[^:#\r\n][^:#\r\n]*/)),
    flow_inline_text: () => token(prec(-1, /[^#\r\n]+/)),
    flow_text_block: ($) => alias($.block_indented_implicit, $.block),

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
        seq(
          $.pass_statement,
          repeat(choice($.comment_line, $.blank_line)),
        ),
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
    flow_transform_keyword: () => choice("do", "get", "ask", "unfold", "filter", "rank", "fold"),
    flow_map_keyword: () => "map",
    flow_block_keyword: () => "block",
    flow_case_keyword: () => "case",
    flow_else_keyword: () => "else",
    flow_repeat_keyword: () => "repeat",
    flow_until_keyword: () => "until",

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
    fenced_raw_text: () => token(prec(-1, /[^`\r\n][^\r\n]*/)),
  },
});
