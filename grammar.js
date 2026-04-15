module.exports = grammar({
  name: "toolang",

  extras: () => [/[ \t\f]/],
  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.comment,
          $.blank_line,
          $.use_statement,
          $.fenced_declaration,
          $.struct_declaration,
          $.slash_declaration,
          $.thunk,
        ),
      ),

    newline: () => /\r?\n/,
    blank_line: ($) => $.newline,
    comment: () => token(seq("#", /[^\n]*/, /\r?\n/)),

    use_statement: ($) =>
      seq(
        field("keyword", $.use_keyword),
        field("kind", $.cap_kind),
        field("reference", $.reference),
        optional($.inline_comment),
        $.newline,
      ),

    fenced_declaration: ($) =>
      seq(
        field("header", $.declaration_header),
        optional(field("body", $.fence_body)),
        field("close", $.fence_close),
      ),

    declaration_header: ($) =>
      seq(
        field("kind", $.decl_kind),
        field("name", $.identifier),
        optional(field("parameters", $.parameter_list)),
        field("colon", $.colon),
        field("open", $.fence_open),
        optional(field("language", $.language)),
        optional($.inline_comment),
        $.newline,
      ),

    struct_declaration: ($) =>
      seq(
        field("header", $.struct_header),
        field("body", $.struct_body),
      ),

    struct_header: ($) =>
      seq(
        field("keyword", $.struct_keyword),
        field("name", $.identifier),
        optional($.inline_comment),
        $.newline,
      ),

    struct_field_line: ($) =>
      seq(
        field("field", $.struct_field),
        optional($.inline_comment),
        $.newline,
      ),

    struct_body: ($) => prec.right(repeat1(choice($.struct_field_line, $.blank_line, $.comment))),

    struct_field: ($) =>
      seq(
        field("name", $.identifier),
        field("colon", $.colon),
        field("type", $.type_expression),
      ),

    slash_declaration: ($) =>
      seq(
        field("header", $.slash_header),
        field("body", $.slash_body),
      ),

    slash_header: ($) =>
      seq(
        field("keyword", $.slash_keyword),
        field("name", $.identifier),
        optional(field("parameters", $.parameter_list)),
        optional($.inline_comment),
        $.newline,
      ),

    slash_body: ($) => prec.right(repeat1(choice($.body_line, $.blank_line, $.comment))),

    parameter_list: ($) =>
      seq(
        $.lparen,
        optional(
          seq(
            field("parameter", $.parameter),
            repeat(seq($.comma, field("parameter", $.parameter))),
          ),
        ),
        $.rparen,
      ),

    parameter: ($) =>
      seq(
        field("name", $.identifier),
        optional(field("optional", $.question)),
        optional(seq(field("colon", $.colon), field("type", $.type_expression))),
      ),

    type_expression: ($) =>
      prec.right(
        seq(
          field("name", $.identifier),
          repeat(field("array", $.array_suffix)),
          optional(field("optional", $.question)),
        ),
      ),

    array_suffix: () => "[]",

    thunk: ($) =>
      seq(
        field("header", $.thunk_header),
        field("body", $.thunk_body),
      ),

    thunk_header: ($) =>
      seq(
        field("keyword", $.thunk_keyword),
        optional(field("name", $.identifier)),
        optional(field("parameters", $.parameter_list)),
        optional(seq(field("arrow", $.arrow), field("returns", $.type_expression))),
        optional($.inline_comment),
        $.newline,
      ),

    thunk_body: ($) =>
      prec.right(repeat1(choice($.directive_line, $.body_line, $.blank_line, $.comment))),

    directive_line: ($) =>
      seq(
        choice($.collection_directive, $.model_directive),
        optional($.inline_comment),
        $.newline,
      ),

    collection_directive: ($) =>
      seq(
        field("subject", $.collection_subject),
        field(
          "operator",
          choice($.assign_operator, $.add_assign_operator, $.remove_assign_operator),
        ),
        optional(field("values", $.directive_values)),
      ),

    model_directive: ($) =>
      seq(
        field("subject", $.model_subject),
        field("operator", $.assign_operator),
        optional(field("values", $.directive_values)),
      ),

    directive_values: ($) =>
      seq(
        field("value", $.directive_value),
        repeat(seq($.comma, field("value", $.directive_value))),
      ),

    body_line: ($) =>
      seq(
        field("text", $.body_text),
        optional($.inline_comment),
        $.newline,
      ),

    fence_body: ($) => repeat1($.fence_content_line),

    fence_content_line: ($) =>
      seq(
        optional(field("text", $.fence_text)),
        $.newline,
      ),

    inline_comment: () => token(seq("#", /[^\n]*/)),

    use_keyword: () => "use",
    struct_keyword: () => "struct",
    slash_keyword: () => "slash",
    thunk_keyword: () => "thunk",
    assign_operator: () => "=",
    add_assign_operator: () => "+=",
    remove_assign_operator: () => "-=",
    arrow: () => "->",
    colon: () => ":",
    lparen: () => "(",
    rparen: () => ")",
    comma: () => ",",
    question: () => "?",
    fence_open: () => "```",
    fence_close: () => seq("```", /\r?\n/),

    cap_kind: () => choice("skill", "service", "slash", "psyche"),
    decl_kind: () => choice("service", "psyche", "stash"),
    collection_subject: () => choice("psyches", "skills", "services", "tools"),
    model_subject: () => "model",

    identifier: () => token(/[A-Za-z_][A-Za-z0-9_-]*/),
    reference: () => token(/[A-Za-z0-9_./:-]+/),
    language: () => token(/[A-Za-z0-9_-]+/),
    directive_value: () => token(/[A-Za-z0-9_./:-]+/),
    body_text: () => token(prec(-1, /[^\n#][^\n]*/)),
    fence_text: () => token(/[^`\n][^\n]*/),
  },
});
