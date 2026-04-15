module.exports = grammar({
  name: "toolang",

  extras: () => [/[ \t\f]/],
  conflicts: ($) => [[$.thunk_body]],
  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.comment,
          $.blank_line,
          $.use_statement,
          alias($.psyche_declaration, $.fenced_declaration),
          alias($.service_declaration, $.fenced_declaration),
          alias($.slash_declaration, $.fenced_declaration),
          $.struct_declaration,
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

    psyche_declaration: ($) =>
      seq(
        field("header", alias($.psyche_header, $.declaration_header)),
        field("body", $.psyche_fence_body),
        field("close", $.fence_close),
      ),

    service_declaration: ($) =>
      seq(
        field("header", alias($.service_header, $.declaration_header)),
        field("body", $.service_fence_body),
        field("close", $.fence_close),
      ),

    slash_declaration: ($) =>
      seq(
        field("header", alias($.slash_header, $.declaration_header)),
        field("body", $.slash_fence_body),
        field("close", $.fence_close),
      ),

    psyche_header: ($) =>
      seq(
        field("kind", alias($.psyche_keyword, $.decl_kind)),
        field("name", $.identifier),
        field("colon", $.colon),
        field("open", $.fence_open),
        field("language", alias($.markdown_language, $.language)),
        optional($.inline_comment),
        $.newline,
      ),

    service_header: ($) =>
      seq(
        field("kind", alias($.service_keyword, $.decl_kind)),
        field("name", $.identifier),
        field("colon", $.colon),
        field("open", $.fence_open),
        field("language", alias($.markdown_language, $.language)),
        optional($.inline_comment),
        $.newline,
      ),

    slash_header: ($) =>
      seq(
        field("kind", alias($.slash_keyword, $.decl_kind)),
        field("name", $.identifier),
        field("colon", $.colon),
        field("open", $.fence_open),
        field("language", alias($.markdown_language, $.language)),
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
        field("colon", $.colon),
        optional($.inline_comment),
        $.newline,
      ),

    struct_field_line: ($) =>
      seq(
        field("field", $.struct_field),
        optional($.inline_comment),
        $.newline,
      ),

    struct_body: ($) => prec.right(repeat1(choice($.struct_field_line, $.blank_line))),

    struct_field: ($) =>
      seq(
        field("name", $.identifier),
        field("colon", $.colon),
        field("type", $.type_expression),
      ),

    parameter_list: ($) => seq($.lparen, optional($._parameter_sequence), $.rparen),

    _parameter_sequence: ($) =>
      choice($._unnamed_then_named_parameters, $._named_parameters),

    _unnamed_then_named_parameters: ($) =>
      seq(
        field("parameter", alias($.unnamed_parameter, $.parameter)),
        optional(seq($.comma, $._named_parameters)),
      ),

    _named_parameters: ($) =>
      choice($._required_then_optional_named_parameters, $._optional_named_parameters),

    _required_then_optional_named_parameters: ($) =>
      seq(
        field("parameter", alias($.required_named_parameter, $.parameter)),
        repeat(seq($.comma, field("parameter", alias($.required_named_parameter, $.parameter)))),
        optional(seq($.comma, $._optional_named_parameters)),
      ),

    _optional_named_parameters: ($) =>
      seq(
        field("parameter", alias($.optional_named_parameter, $.parameter)),
        repeat(seq($.comma, field("parameter", alias($.optional_named_parameter, $.parameter)))),
      ),

    unnamed_parameter: ($) => field("name", $.underscore),

    required_named_parameter: ($) =>
      seq(
        field("name", $.named_identifier),
        optional(seq(field("colon", $.colon), field("type", $.type_expression))),
      ),

    optional_named_parameter: ($) =>
      seq(
        field("name", $.named_identifier),
        field("optional", $.question),
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
        field("colon", $.colon),
        optional($.inline_comment),
        $.newline,
      ),

    thunk_body: ($) =>
      choice(
        prec.right(
          seq(
            repeat1($.directive_line),
            repeat1($.blank_line),
            repeat1(choice($.body_line, $.blank_line)),
          ),
        ),
        prec.right(repeat1(choice($.body_line, $.blank_line))),
      ),

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

    psyche_fence_body: ($) =>
      seq(choice($.non_frontmatter_fence_content_line, $.empty_fence_content_line), repeat($.fence_content_line)),

    service_fence_body: ($) =>
      seq(field("frontmatter", $.service_frontmatter), repeat($.fence_content_line)),

    slash_fence_body: ($) =>
      choice(
        seq(field("frontmatter", $.slash_frontmatter), repeat($.fence_content_line)),
        seq(choice($.non_frontmatter_fence_content_line, $.empty_fence_content_line), repeat($.fence_content_line)),
      ),

    service_frontmatter: ($) => choice($.http_service_frontmatter, $.stdio_service_frontmatter),

    http_service_frontmatter: ($) =>
      seq(
        $.frontmatter_delimiter,
        $.newline,
        $.http_transport_line,
        $.http_url_line,
        optional($.http_headers_block),
        $.frontmatter_delimiter,
        $.newline,
      ),

    stdio_service_frontmatter: ($) =>
      seq(
        $.frontmatter_delimiter,
        $.newline,
        $.stdio_transport_line,
        $.stdio_command_line,
        repeat(choice($.stdio_args_block, $.stdio_env_line, $.stdio_cwd_line)),
        $.frontmatter_delimiter,
        $.newline,
      ),

    slash_frontmatter: ($) =>
      seq(
        $.frontmatter_delimiter,
        $.newline,
        $.slash_params_line,
        $.frontmatter_delimiter,
        $.newline,
      ),

    http_transport_line: ($) =>
      seq("transport", $.colon, field("value", $.http_transport_value), $.newline),

    stdio_transport_line: ($) =>
      seq("transport", $.colon, field("value", $.stdio_transport_value), $.newline),

    http_url_line: ($) =>
      seq("url", $.colon, field("value", $.frontmatter_scalar), $.newline),

    http_headers_block: ($) =>
      seq("headers", $.colon, $.newline, repeat1($.header_map_entry_line)),

    header_map_entry_line: ($) =>
      seq(field("name", $.frontmatter_header_name), $.colon, field("value", $.frontmatter_scalar), $.newline),

    stdio_command_line: ($) =>
      seq("command", $.colon, field("value", $.frontmatter_scalar), $.newline),

    stdio_args_block: ($) =>
      seq("args", $.colon, $.newline, repeat1($.frontmatter_list_item_line)),

    frontmatter_list_item_line: ($) =>
      seq("-", field("value", $.frontmatter_scalar), $.newline),

    stdio_env_line: ($) =>
      seq("env", $.colon, field("value", $.frontmatter_scalar), $.newline),

    stdio_cwd_line: ($) =>
      seq("cwd", $.colon, field("value", $.frontmatter_scalar), $.newline),

    slash_params_line: ($) =>
      seq("params", $.colon, field("value", $.frontmatter_scalar), $.newline),

    fence_content_line: ($) =>
      seq(
        optional(field("text", $.fence_text)),
        $.newline,
      ),

    non_frontmatter_fence_content_line: ($) =>
      seq(field("text", $.non_frontmatter_fence_text), $.newline),

    empty_fence_content_line: ($) => $.newline,

    inline_comment: () => token(seq("#", /[^\n]*/)),

    use_keyword: () => "use",
    psyche_keyword: () => "psyche",
    service_keyword: () => "service",
    slash_keyword: () => "slash",
    struct_keyword: () => "struct",
    thunk_keyword: () => "thunk",
    markdown_language: () => "md",
    assign_operator: () => "=",
    add_assign_operator: () => "+=",
    remove_assign_operator: () => "-=",
    arrow: () => "->",
    colon: () => ":",
    lparen: () => "(",
    rparen: () => ")",
    comma: () => ",",
    question: () => "?",
    underscore: () => "_",
    fence_open: () => "```",
    fence_close: () => seq("```", /\r?\n/),
    frontmatter_delimiter: () => "---",

    cap_kind: () => choice("psyche", "skill", "service", "slash"),
    decl_kind: () => choice("psyche", "service", "slash"),
    collection_subject: () => choice("psyches", "skills", "services", "tools"),
    model_subject: () => "model",
    http_transport_value: () => "http",
    stdio_transport_value: () => "stdio",

    identifier: () => token(/[A-Za-z_][A-Za-z0-9_-]*/),
    named_identifier: () =>
      token(choice(/[A-Za-z][A-Za-z0-9_-]*/, /_[A-Za-z0-9-][A-Za-z0-9_-]*/)),
    reference: () => token(/[A-Za-z0-9_./:@-]+/),
    language: () => token(/[A-Za-z0-9_-]+/),
    directive_value: () => token(/[A-Za-z0-9_./:@-]+/),
    body_text: () => token(prec(-1, /[^\n#][^\n#]*/)),
    fence_text: () => token(/[^`\n][^\n]*/),
    non_frontmatter_fence_text: () =>
      token(
        /(?:[^`\n-][^\n]*|-[^-\n][^\n]*|--[^-\n][^\n]*|---[^-\n][^\n]*|----[^\n]*)/,
      ),
    frontmatter_header_name: () => token(/[A-Za-z0-9_-]+/),
    frontmatter_scalar: () => token(/[^\n]+/),
  },
});
