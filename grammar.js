/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const ANY_CHAR = /[^\x00\n]/;
const WHITE_SPACE = /[ \t]/;
const NEWLINE = /\n/;

export default grammar({
  name: 'xresources',

  extras: $ => [WHITE_SPACE, $.preprocessor_comment],

  rules: {
    resources: $ => repeat($._line),

    _line: $ => seq(optional($._statement), NEWLINE),

    _statement: $ => choice(
      $.comment,
      $.include_directive,
      $.define_directive,
      $.ifdef_directive,
      $.resource,
    ),

    comment: _ => token.immediate(seq('!', repeat(ANY_CHAR))),

    // C style comments handled by the C preprocessor,
    // rule definition taken from tree-sitter-c
    preprocessor_comment: _ => token(choice(
      seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    )),

    include_directive: $ => seq(directive('include'), field('file', $.string)),

    define_directive: $ => seq(
      directive('define'),
      field('name', $.identifier),
      repeat(WHITE_SPACE),
      optional(field('value', $.expansion))
    ),
    expansion: _ => seq(/\S/, repeat(choice(/./, /\\\n/))),

    ifdef_directive: $ => seq(
      choice(directive('ifdef'), directive('ifndef')),
      field('condition', $.identifier),
      NEWLINE,
      field('consequence', alias(repeat($._line), $.body)),
      optional(field('alternative', $.else_directive)),
      directive('endif'),
    ),

    else_directive: $ => seq(directive('else'), NEWLINE, repeat($._line)),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]+/,

    resource: $ => seq(
      field('name', $.components),
      ':',
      repeat(WHITE_SPACE),
      field('value', $.resource_value),
    ),

    components: $ => seq(
      repeat($.binding),
      repeat(seq(
        choice($.component, $.any_component),
        repeat1($.binding)),
      ),
      $.component,
    ),
    binding: _ => choice('.', '*'),
    component: _ => /[a-zA-Z0-9_-]+/,
    any_component: _ => '?',

    escape_sequence: _ => token(seq('\\', choice('n', '\\', '\t', '\n', ' ', /[0-7]{3}/))),
    resource_value: $ => repeat1(choice(ANY_CHAR, $.escape_sequence)),
    string: $ => seq('"', alias(/[^\n"]*/, $.string_content), '"'),
  },
});


/**
 * @param {string} name Name of the preprocessor directive
 * @returns {Rule} Preprocessor rule
 */
function directive(name) {
  return alias(token(seq('#', repeat(WHITE_SPACE), name)), '#' + name);
}
