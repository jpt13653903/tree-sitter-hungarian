module.exports = grammar({
  name: 'hungarian',

  extras: $ => [ ], // No white-space allowed

  rules: {
    identifier: $ => choice(
      $._hungarian,
      $._normal
    ),

    _hungarian: $ => seq(
      $.prefix,
      $.body
    ),
    prefix: $ => $._prefix,
    body:   $ => seq($._uppercase, optional($._identifier_chars)),

    _normal: $ => choice(
      seq($._prefix,           $._identifier_chars),
      seq($._uppercase,        $._identifier_chars),
      seq($._identifier_start, $._identifier_chars)
    ),

    _prefix: $ => token(prec(4, choice(
      /([Gmg]_)?([pamvch]|lp)*(v|b|f|c|ch|cx|st|cl|s|e|t|sz|br|fn)/,
      /([Gmg]_)?([pamvch]|lp)*(cx)?(w|dw|l|ui)/,
      /([Gmg]_)?([pamvch]|lp)*(cx)?[ui][1248]?/,
      /([Gmg]_)?([pamvch]|lp)*(cx)?[fc](4|8|10)/,
      /([Gmg]_)?(thr|th|h|it|lp)/,
      /b[0-9]+/,
      /n/,
      /G_/
    ))),
    _uppercase:        $ => token(prec(3, /[A-Z]/)),
    _identifier_start: $ => token(prec(2, /_|[a-z]|[A-Z]/)),
    _identifier_chars: $ => token(prec(1, /(_|[a-z]|[A-Z]|[0-9])+/)),
  }
});
