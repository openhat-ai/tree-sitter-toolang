module.exports = grammar({
  name: "toolang",

  extras: () => [/[ \t\f]/],

  rules: {
    source_file: ($) =>
      repeat(choice($.comment_line, $.blank_line, $.item)),

    item: ($) =>
      choice(
        $.use,
        $.struct,
        $.psyche,
        $.skill,
        $.service,
        $.prompt,
        $.instruct,
        $.thunk,
      ),

    newline: () => /\r?\n/,
    blank_line: ($) => $.newline,
    comment_line: () => token(seq("#", /[^\r\n]*/, /\r?\n/)),
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
    builtin_type: () => choice("Text", "Number", "Boolean", "Json", "Message"),
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
      prec.right(repeat1(choice($.field, $.comment_line, $.blank_line))),
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
        repeat($.property_colon),
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
      seq(
        field("keyword", $.thunk_keyword),
        optional(field("name", $.thunk_name)),
        optional(field("params", $.params)),
        optional(seq(field("arrow", $.arrow), field("output", $.type))),
        field("colon", $.colon),
        $.line_end,
        field("body", $.thunk_body),
      ),
    thunk_name: ($) => $.value_name,
    thunk_body: ($) =>
      prec.right(repeat1(choice($.directive, $.block, $.comment_line, $.blank_line))),

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

    directive: ($) =>
      seq(
        field("key", $.directive_key),
        field("operator", $.directive_op),
        field("values", $.directive_csv),
        $.line_end,
      ),
    directive_key: () =>
      choice("models", "tools", "skills", "services", "psyches", "handoffs", "delegates"),
    directive_op: () => choice("=", "+=", "-="),
    directive_csv: ($) =>
      seq($.bare_value, repeat(seq($.comma, $.bare_value))),

    block: ($) =>
      seq(
        field("kind", $.block_kind),
        field("colon", $.colon),
        field("value", $.block_value),
      ),
    block_kind: () => choice("instruct", "system", "user"),
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
    instruct_keyword: () => "instruct",
    thunk_keyword: () => "thunk",

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
