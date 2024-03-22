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
      $.type,
    ),
    number: $ => /\d+/,
    identifier: $ => /[a-zA-Z]+/,
    declaration: $ => choice(
      $.let_binding,
      $.function_declaration
    ),
    type_anotation: $ => choice(
      "number",
    ),
    type: $ => choice(
      $.number,
    ),
    function_declaration: $ => seq(
      "fn",
      field("name", $.identifier),
      "(",
      field("parameters", optional(repeat(
        field("parameter", seq(
          $.identifier,
          ":",
          $.type_anotation,
          ",",
        )),
      ))),
      ")",
      $.block,
    ),
    call_expression: $ => seq(
      field("function", $.identifier),
      "(",
      repeat(seq(
        $.type,
        ","
      )),
      ")",
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
