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
      optional(field("parameters", $.parameters)),
      ")",
      $.block,
    ),
    parameters: $ => commaSep1($.parameter),
    parameter: $ => seq(
      field("name", $.identifier),
      ":",
      field("type", $.type_anotation),
    ),
    call_expression: $ => seq(
      field("function", $.identifier),
      "(",
      field("arguments", $.arguments),
      ")",
    ),
    arguments: $ => commaSep1(seq(
      $.type,
    )),
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


/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return sep1(rule, ',');
}

/**
 * Creates a rule to match one or more occurrences of `rule` separated by `sep`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @return {SeqRule}
 *
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
