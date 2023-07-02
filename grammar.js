module.exports = grammar({
  name: "csv",

  rules: {
    source_file: $ => repeat($.record),
    record: $ => seq(
      $._field,
      repeat($._pair),
      $._eor,
      // optional($._eor),
    ),
    _eor: $ => choice('\n', '\r\n'),
    _pair: $ => prec.right(1, seq(
      field('deli', $.delimiter),
      optional($._field),
    )),
    delimiter: $ => ',',
    _field: $ => choice(
      $.null,
      $.na,
      $.boolean,
      $._number,
      $.string,
    ),

    null: $ => /null|NULL/,
    na: $ => /na|NA/,
    boolean: $ => /true|TRUE|false|FALSE/,
    _number: $ => choice(
      $.hex,
      $.float,
      $.integer,
    ),
    integer: $ => /\d+/,
    hex: $ => /0[xX][\da-fA-F]+/,
    float: $ => /(0|[1-9]\d*)\.\d+/,
    string: $ => choice(
      seq($.quote, $.quote),
      seq($.quote, $.quoted_content, $.quote),
      $.unquoted_content,
    ),
    quote: $ => '"',
    quoted_content: $ => 
      repeat1(prec.left(1, choice($.escape_sequence, $.text))),
    unquoted_content: $ => $._non_escaped,
    _non_escaped: $ => /[^\\"\r\n\t,]+/,
    text: $ => /[^\\"\r\n]+/,
    escape_sequence: $ => token.immediate(prec(10, choice(
      '""',
      '\n',
      '\r\n',
    ))),
  }
});
