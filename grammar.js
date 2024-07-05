module.exports = grammar({
    name: 'hungarian',

    externals: $ => [
        $.prefix,
        $.body,
        $._normal,
        $.error_sentinel,
    ],

    extras: $ => [ ],

    conflicts: $ => [ ],

    rules: {
        identifier: $ => choice(
          $._hungarian,
          $._normal
        ),

        _hungarian: $ => seq(
          $.prefix,
          $.body
        ),
    }
});

