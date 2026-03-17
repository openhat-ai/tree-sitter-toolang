module.exports = grammar({
  name: "toolang",

  extras: () => [/[ \t\f]/],
  conflicts: ($) => [[$.thunk]],

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.comment,
          $.blank_line,
          $.use_statement,
          $.declaration,
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

    declaration: ($) =>
      seq(
        field("header", $.declaration_header),
        optional(field("body", $.fence_body)),
        field("close", $.fence_close),
      ),

    declaration_header: ($) =>
      seq(
        field("kind", $.decl_kind),
        field("name", $.identifier),
        field("colon", $.colon),
        field("open", $.fence_open),
        optional(field("language", $.language)),
        optional($.inline_comment),
        $.newline,
      ),

    thunk: ($) =>
      seq(
        field("header", $.thunk_header),
        repeat(choice($.directive_line, $.prompt_line, $.blank_line)),
      ),

    thunk_header: ($) =>
      seq(
        field("keyword", $.thunk_keyword),
        optional(field("name", $.identifier)),
        optional(seq(field("arrow", $.arrow), field("output", $.identifier))),
        field("colon", $.colon),
        optional($.inline_comment),
        $.newline,
      ),

    directive_line: ($) =>
      seq(
        choice($.no_directive, $.with_directive, $.use_directive),
        optional($.inline_comment),
        $.newline,
      ),

    no_directive: ($) =>
      seq(
        field("keyword", $.no_keyword),
        optional(field("subject", $.directive_subject)),
        optional(seq(field("colon", $.colon), field("target", $.directive_target))),
      ),

    with_directive: ($) =>
      seq(
        field("keyword", $.with_keyword),
        field("subject", $.directive_subject),
        optional(seq(field("colon", $.colon), field("target", $.directive_target))),
      ),

    use_directive: ($) =>
      seq(
        field("keyword", $.use_keyword),
        field("subject", $.directive_subject),
        optional(seq(field("colon", $.colon), field("target", $.directive_target))),
      ),

    prompt_line: ($) =>
      seq(
        field("text", $.prompt_text),
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
    thunk_keyword: () => "thunk",
    no_keyword: () => "no",
    with_keyword: () => "with",
    arrow: () => "=>",
    colon: () => ":",
    fence_open: () => "```",
    fence_close: () => seq("```", /\r?\n/),

    cap_kind: () => choice("skill", "service", "prompt", "psyche"),
    decl_kind: () => choice("service", "prompt", "psyche", "output", "note"),

    identifier: () => token(/[A-Za-z_][A-Za-z0-9_-]*/),
    reference: () => token(/[A-Za-z0-9_./-]+/),
    language: () => token(/[A-Za-z0-9_-]+/),
    directive_subject: () => token(/[A-Za-z_][A-Za-z0-9_-]*/),
    directive_target: () => token(/[^\n#]+/),
    prompt_text: () => token(prec(-1, /[^\n#][^\n]*/)),
    fence_text: () => token(/[^`\n][^\n]*/),
    indent: () => token(/[ \t]+/),
  },
});
