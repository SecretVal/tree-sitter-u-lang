module.exports = grammar({
  name: "U_LANG",

  word: $ => $.identifier,

  supertypes: $ => [
    $.statement,
    $.expression,
    $.declaration,
    $.type,
  ],

  rules: {
    program: $ => repeat($.statement),
    statement: $ => choice(
      $.expression,
      $.declaration,
      $.block,
    ),
    block: $ => seq(
      "{",
      repeat($.statement),
      "}",
    ),
    expression: $ => choice(
      $.identifier,
      $.binary_expression,
      $.call_expression,
    ),
    number: $ => /\d+/,
    string: $ => seq(
      choice('"', "'"),
      repeat(/.*/),
      choice('"', "'"),
    ),
    identifier: $ => /[a-zA-Z]+/,
    declaration: $ => choice(
      $.let_binding,
      $.function_declaration
    ),
    type: $ => choice(
      $.number,
      $.string,
    ),
    call_expression: $ => seq(
      field("function", $.identifier),
      "(",
      field("arguments", repeat(
        $.type
      )),
      ")",
    ),
    function_declaration: $ => seq(
      "fn",
      field("name", $.identifier),
      "(",
      field("parameters", optional(repeat(
        field("parameter", seq(
          $.identifier,
          ":",
          $.identifier
        )),
      ))),
      ")",
      $.block,
    ),
    let_binding: $ => seq(
      field("kind", choice("let", "var", "const")),
      field("name", $.identifier),
      "=",
      field("value", $.expression),
    ),
    binary_expression: $ => choice(
      $.plus_expression,
      $.minus_expression,
    ),
    plus_expression: $ => prec.left(2, seq(
      $.expression,
      "+",
      $.expression,
    )),
    minus_expression: $ => prec.left(2, seq(
      $.expression,
      "-",
      $.expression,
    )),
  }
});
