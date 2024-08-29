(comment) @comment

"#include" @keyword.import

"#define" @keyword.directive.define

(define_directive
  (identifier) @constant.macro)

(component) @variable.member

((component) @type
  (#match? @type "^[A-Z]"))

(components
  (component) @property .)

[
  (string)
  (resource_value)
] @string

[
  "*"
  (any_component)
] @character.special

[
  "."
  ":"
] @punctuation.delimiter

(escape_sequence) @string.escape
