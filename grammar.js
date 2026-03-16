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
        "use",
        field("kind", $.cap_kind),
        field("reference", $.reference),
        optional($.comment),
        $.newline,
      ),

    declaration_header: ($) =>
      seq(
        field("kind", $.decl_kind),
        field("name", $.identifier),
        ":",
        field("fence", $.fence_delimiter_inline),
        optional($.comment),
        $.newline,
      ),

    fence_delimiter_inline: ($) =>
      seq("```", optional(field("language", $.language))),

    fence_delimiter: ($) =>
      seq("```", optional(field("language", $.language)), optional($.comment), $.newline),

    thunk_header: ($) =>
      seq(
        "thunk",
        optional(field("name", $.identifier)),
        optional(seq("=>", field("output", $.identifier))),
        ":",
        optional($.comment),
        $.newline,
      ),

    directive_line: ($) =>
      seq(
        optional($.indent),
        choice(
          seq("no", optional(field("target", $.line_value))),
          seq("with", field("target", $.line_value)),
          seq("use", field("target", $.line_value)),
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

    cap_kind: () => choice("skill", "service", "prompt", "psyche"),

    decl_kind: () => choice("service", "prompt", "psyche", "output", "note"),

    identifier: () => /[A-Za-z_][A-Za-z0-9_-]*/,

    reference: () => /[A-Za-z0-9_./-]+/,

    language: () => /[A-Za-z0-9_-]+/,

    line_value: () => /[^\n#]+/,

    text: () => /[^\n#][^\n]*/,
  },
});
