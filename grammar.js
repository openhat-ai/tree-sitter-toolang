module.exports = grammar({
  name: "toolang",

  extras: () => [/[ \t\f]/],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.comment,
          $.use_statement,
          $.declaration_header,
          $.thunk_header,
          $.directive_line,
          $.fence_delimiter,
          $.prompt_line,
          $.newline,
        ),
      ),

    newline: () => /\r?\n/,

    comment: () => token(seq("#", /[^\n]*/)),

    use_statement: ($) =>
      seq(
        field("keyword", $.use_keyword),
        field("kind", $.cap_kind),
        field("reference", $.reference),
        optional($.comment),
        $.newline,
      ),

    declaration_header: ($) =>
      seq(
        field("kind", $.decl_kind),
        field("name", $.identifier),
        field("colon", $.colon),
        field("fence", $.fence_delimiter_inline),
        optional($.comment),
        $.newline,
      ),

    fence_delimiter_inline: ($) =>
      seq(field("ticks", $.fence_ticks), optional(field("language", $.language))),

    fence_delimiter: ($) =>
      seq(
        field("ticks", $.fence_ticks),
        optional(field("language", $.language)),
        optional($.comment),
        $.newline,
      ),

    thunk_header: ($) =>
      seq(
        field("keyword", $.thunk_keyword),
        optional(field("name", $.identifier)),
        optional(seq(field("arrow", $.arrow), field("output", $.identifier))),
        field("colon", $.colon),
        optional($.comment),
        $.newline,
      ),

    directive_line: ($) =>
      seq(
        optional($.indent),
        choice(
          seq(field("keyword", $.no_keyword), optional(field("target", $.line_value))),
          seq(field("keyword", $.with_keyword), field("target", $.line_value)),
          seq(field("keyword", $.use_keyword), field("target", $.line_value)),
        ),
        optional($.comment),
        $.newline,
      ),

    prompt_line: ($) =>
      prec(
        -1,
        seq(optional($.indent), field("text", $.text), optional($.comment), $.newline),
      ),

    indent: () => /[ \t]+/,

    use_keyword: () => "use",
    thunk_keyword: () => "thunk",
    no_keyword: () => "no",
    with_keyword: () => "with",
    arrow: () => "=>",
    colon: () => ":",
    fence_ticks: () => "```",

    cap_kind: () => choice("skill", "service", "prompt", "psyche"),

    decl_kind: () => choice("service", "prompt", "psyche", "output", "note"),

    identifier: () => /[A-Za-z_][A-Za-z0-9_-]*/,

    reference: () => /[A-Za-z0-9_./-]+/,

    language: () => /[A-Za-z0-9_-]+/,

    line_value: () => /[^\n#]+/,

    text: () => /[^\n#][^\n]*/,
  },
});
