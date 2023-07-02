module.exports = grammar({
  name: "csv",

  rules: {
    source_file: $ => repeat($.record),
    record: $ => seq(
      $._field,
      repeat($._pair),
      optional($._eor),
    ),
    _eor: $ => choice('\n', '\r'),
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

    null: $ => token.immediate(prec(1, /null|NULL/)),
    na: $ => token.immediate(prec(1, /na|NA/)),
    boolean: $ => token.immediate(prec(1, /true|TRUE|false|FALSE/)),
    _number: $ => choice(
      $.hex,
      $.float,
      $.integer,
    ),
    integer: $ => token.immediate(prec(1, /\d+/)),
    hex: $ => token.immediate(prec(1,
      /0[xX][\da-fA-F]+/
    )),
    float: $ => token.immediate(prec(1, /(0|[1-9])[0-9]*\.[0-9]+/)),
    string: $ => choice(
      seq($.quote, $.quote),
      seq($.quote, $.quoted_content, $.quote),
      $.unquoted_content,
    ),
    quote: $ => '"',
    quoted_content: $ => choice(
      $.text,
      $.escape_sequence,
    ),
    unquoted_content: $ =>
      token.immediate(prec(1, /[^\\"\n,]+/)),
    text: $ => /[^\\"\n]+/,
    escape_sequence: $ => token(prec(10, choice(
      '""',
      /\\[bfnrt]/,
    ))),
  }
});
