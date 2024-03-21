module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  rules: {
    expression: $ => choice(
      $.number,
      $.binary_expression,
    ),
    number: $ => /\d+/,
    binary_expression: $ => choice(
      $.plus_expression,
      $.minus_expression,
      $.div_expression,
      $.mult_expression,
    ),
    plus_expression: $ => seq(
      $.number,
      "+",
      $.number
    ),
    minus_expression: $ => seq(
      $.number,
      "-",
      $.number
    ),
    div_expression: $ => seq(
      $.number,
      "/",
      $.number
    ),
    mult_expression: $ => seq(
      $.number,
      "*",
      $.number
    ),
  }
});
