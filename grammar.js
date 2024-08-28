/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// TODO: Implement 'ifdef' and 'ifndef' macros
//
// Check https://github.com/search?q=Xresources&type=repositories for some sample test files.
// 
// More specific an extensive configs (include license when copying):
// https://github.com/bakkeby/dusk.resources

const ANY_CHAR = /[^\x00\n]/;
const WHITE_SPACE = /[ \t]/;

export default grammar({
  name: 'xresources',

  extras: _ => [WHITE_SPACE],

  rules: {
    resources: $ => repeat(seq(optional($._statement), /\n/)),

    _statement: $ => choice(
      $.comment,
      $.include_directive,
      $.define_directive,
      $.resource
    ),

    comment: _ => token.immediate(seq("!", repeat(ANY_CHAR))),

    include_directive: $ => seq(directive('include'), field('file', $.string)),
    define_directive: $ => seq(directive('define'), $.identifier, $.resource_value),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]+/,

    resource: $ => seq(
      field('name', $.components),
      ':',
      repeat(WHITE_SPACE),
      field('value', $.resource_value)
    ),

    components: $ => seq(
      optional($.binding),
      repeat(seq(choice($.component, alias('?', $.any_component)), $.binding)),
      $.component
    ),
    binding: _ => choice('.', '*'),
    component: _ => /[a-zA-Z0-9_-]+/,

    escape_sequence: _ => token(seq('\\', choice('n', '\\', '\t', ' ', /[0-7]{3}/))),
    resource_value: $ => repeat1(choice(ANY_CHAR, $.escape_sequence, alias('\\\n', '\\'))),
    string: $ => seq('"', alias(/[^\n"]*/, $.string_content), '"'),
  },
});


/**
 * @param {string} name Name of the preprocessor directive
 * @returns {Rule} Preprocessor rule
 */
function directive(name) {
  return alias(token.immediate(seq('#', repeat(WHITE_SPACE), name)), '#' + name);
}
