[
  (comment)
  (preprocessor_comment)
] @comment

"#include" @keyword.import

[
  "#define"
  "#undef"
] @keyword.directive.define

[
  "#ifdef"
  "#ifndef"
  "#elifdef"
  "#elifndef"
  "#else"
  "#endif"
] @keyword.directive

(define_directive
  name: (identifier) @constant
  value: (_)? @string)

(define_function_directive
  name: (identifier) @function.macro
  value: (_)? @string)

(parameters
  (identifier) @variable.parameter)

"..." @variable.parameter.builtin

(undef_directive
  name: (identifier) @constant)

(ifdef_directive
  condition: (identifier) @constant)

(component) @variable.member

((component) @type
  (#match? @type "^[A-Z]"))

(components
  (component) @property .)

[
  (string)
  (resource_value)
] @string

(escape_sequence) @string.escape

[
  "*"
  (any_component)
] @character.special

[
  "."
  ","
  ":"
] @punctuation.delimiter

[
  "("
  ")"
] @punctuation.bracket
