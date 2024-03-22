module.exports = grammar({
  name: "U_LANG",

  word: $ => $.identifier,

  supertypes: $ => [
    $.statement,
    $.expression,
    $.declaration,
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
      $.number,
      $.binary_expression,
    ),
    number: $ => /\d+/,
    identifier: $ => /[a-z]+/,
    declaration: $ => choice(
      $.let_binding,
      $.function_declaration
    ),
    let_binding: $ => seq(
      field("kind", choice("let", "var", "const")),
      field("name", $.identifier),
      "=",
      field("value", $.expression),
    ),
    function_declaration: $ => seq(
      "fn",
      field("name", $.identifier),
      $.block,
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
