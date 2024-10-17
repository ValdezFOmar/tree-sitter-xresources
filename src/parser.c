#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 18

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  sym_comment = 2,
  sym_preprocessor_comment = 3,
  anon_sym_COLON = 4,
  aux_sym_resource_token1 = 5,
  anon_sym_DOT = 6,
  anon_sym_STAR = 7,
  sym_component = 8,
  sym_any_component = 9,
  sym_escape_sequence = 10,
  aux_sym_resource_value_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  aux_sym_include_directive_token1 = 14,
  aux_sym_define_directive_token1 = 15,
  anon_sym_LPAREN = 16,
  anon_sym_DOT_DOT_DOT = 17,
  anon_sym_COMMA = 18,
  anon_sym_RPAREN = 19,
  sym_expansion = 20,
  aux_sym_undef_directive_token1 = 21,
  aux_sym_if_directive_token1 = 22,
  aux_sym_ifdef_directive_token1 = 23,
  aux_sym_ifdef_directive_token2 = 24,
  aux_sym__if_directive_body_token1 = 25,
  aux_sym_elif_directive_token1 = 26,
  aux_sym_elifdef_directive_token1 = 27,
  aux_sym_elifdef_directive_token2 = 28,
  aux_sym_else_directive_token1 = 29,
  sym_identifier = 30,
  sym_resources = 31,
  sym__line = 32,
  sym__statement = 33,
  sym_resource = 34,
  sym_components = 35,
  sym_binding = 36,
  sym_resource_value = 37,
  sym_string = 38,
  sym_include_directive = 39,
  sym_define_directive = 40,
  sym_define_function_directive = 41,
  sym_parameters = 42,
  sym_undef_directive = 43,
  sym_if_directive = 44,
  sym_ifdef_directive = 45,
  sym__if_directive_body = 46,
  sym_elif_directive = 47,
  sym_elifdef_directive = 48,
  sym_else_directive = 49,
  aux_sym_resources_repeat1 = 50,
  aux_sym_resource_repeat1 = 51,
  aux_sym_components_repeat1 = 52,
  aux_sym_components_repeat2 = 53,
  aux_sym_resource_value_repeat1 = 54,
  aux_sym_parameters_repeat1 = 55,
  aux_sym__if_directive_body_repeat1 = 56,
  alias_sym_body = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [sym_comment] = "comment",
  [sym_preprocessor_comment] = "preprocessor_comment",
  [anon_sym_COLON] = ":",
  [aux_sym_resource_token1] = "resource_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [sym_component] = "component",
  [sym_any_component] = "any_component",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_resource_value_token1] = "resource_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_content",
  [aux_sym_include_directive_token1] = "#include",
  [aux_sym_define_directive_token1] = "#define",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_expansion] = "expansion",
  [aux_sym_undef_directive_token1] = "#undef",
  [aux_sym_if_directive_token1] = "#if",
  [aux_sym_ifdef_directive_token1] = "#ifdef",
  [aux_sym_ifdef_directive_token2] = "#ifndef",
  [aux_sym__if_directive_body_token1] = "#endif",
  [aux_sym_elif_directive_token1] = "#elif",
  [aux_sym_elifdef_directive_token1] = "#elifdef",
  [aux_sym_elifdef_directive_token2] = "#elifndef",
  [aux_sym_else_directive_token1] = "#else",
  [sym_identifier] = "identifier",
  [sym_resources] = "resources",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_resource] = "resource",
  [sym_components] = "components",
  [sym_binding] = "binding",
  [sym_resource_value] = "resource_value",
  [sym_string] = "string",
  [sym_include_directive] = "include_directive",
  [sym_define_directive] = "define_directive",
  [sym_define_function_directive] = "define_function_directive",
  [sym_parameters] = "parameters",
  [sym_undef_directive] = "undef_directive",
  [sym_if_directive] = "if_directive",
  [sym_ifdef_directive] = "ifdef_directive",
  [sym__if_directive_body] = "_if_directive_body",
  [sym_elif_directive] = "elif_directive",
  [sym_elifdef_directive] = "elifdef_directive",
  [sym_else_directive] = "else_directive",
  [aux_sym_resources_repeat1] = "resources_repeat1",
  [aux_sym_resource_repeat1] = "resource_repeat1",
  [aux_sym_components_repeat1] = "components_repeat1",
  [aux_sym_components_repeat2] = "components_repeat2",
  [aux_sym_resource_value_repeat1] = "resource_value_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym__if_directive_body_repeat1] = "_if_directive_body_repeat1",
  [alias_sym_body] = "body",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym_comment] = sym_comment,
  [sym_preprocessor_comment] = sym_preprocessor_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_resource_token1] = aux_sym_resource_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_component] = sym_component,
  [sym_any_component] = sym_any_component,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_resource_value_token1] = aux_sym_resource_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_include_directive_token1] = aux_sym_include_directive_token1,
  [aux_sym_define_directive_token1] = aux_sym_define_directive_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_expansion] = sym_expansion,
  [aux_sym_undef_directive_token1] = aux_sym_undef_directive_token1,
  [aux_sym_if_directive_token1] = aux_sym_if_directive_token1,
  [aux_sym_ifdef_directive_token1] = aux_sym_ifdef_directive_token1,
  [aux_sym_ifdef_directive_token2] = aux_sym_ifdef_directive_token2,
  [aux_sym__if_directive_body_token1] = aux_sym__if_directive_body_token1,
  [aux_sym_elif_directive_token1] = aux_sym_elif_directive_token1,
  [aux_sym_elifdef_directive_token1] = aux_sym_elifdef_directive_token1,
  [aux_sym_elifdef_directive_token2] = aux_sym_elifdef_directive_token2,
  [aux_sym_else_directive_token1] = aux_sym_else_directive_token1,
  [sym_identifier] = sym_identifier,
  [sym_resources] = sym_resources,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_resource] = sym_resource,
  [sym_components] = sym_components,
  [sym_binding] = sym_binding,
  [sym_resource_value] = sym_resource_value,
  [sym_string] = sym_string,
  [sym_include_directive] = sym_include_directive,
  [sym_define_directive] = sym_define_directive,
  [sym_define_function_directive] = sym_define_function_directive,
  [sym_parameters] = sym_parameters,
  [sym_undef_directive] = sym_undef_directive,
  [sym_if_directive] = sym_if_directive,
  [sym_ifdef_directive] = sym_ifdef_directive,
  [sym__if_directive_body] = sym__if_directive_body,
  [sym_elif_directive] = sym_elif_directive,
  [sym_elifdef_directive] = sym_elifdef_directive,
  [sym_else_directive] = sym_else_directive,
  [aux_sym_resources_repeat1] = aux_sym_resources_repeat1,
  [aux_sym_resource_repeat1] = aux_sym_resource_repeat1,
  [aux_sym_components_repeat1] = aux_sym_components_repeat1,
  [aux_sym_components_repeat2] = aux_sym_components_repeat2,
  [aux_sym_resource_value_repeat1] = aux_sym_resource_value_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym__if_directive_body_repeat1] = aux_sym__if_directive_body_repeat1,
  [alias_sym_body] = alias_sym_body,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_any_component] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_resource_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_include_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_undef_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ifdef_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ifdef_directive_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__if_directive_body_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_elif_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_elifdef_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_elifdef_directive_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_else_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_resources] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_components] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_define_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_define_function_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_undef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_if_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ifdef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__if_directive_body] = {
    .visible = false,
    .named = true,
  },
  [sym_elif_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_elifdef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_else_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_resources_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_components_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_components_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__if_directive_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_body] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_condition = 2,
  field_consequence = 3,
  field_file = 4,
  field_name = 5,
  field_parameters = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_file] = "file",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_file, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_name, 1},
    {field_parameters, 2},
  [6] =
    {field_name, 0},
    {field_value, 2},
  [8] =
    {field_name, 1},
    {field_parameters, 2},
    {field_value, 3},
  [11] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3, .inherited = true},
  [14] =
    {field_alternative, 0},
  [15] =
    {field_name, 0},
    {field_value, 3},
  [17] =
    {field_condition, 1},
  [18] =
    {field_consequence, 0},
  [19] =
    {field_alternative, 0, .inherited = true},
  [20] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [22] =
    {field_alternative, 1},
    {field_consequence, 0},
  [24] =
    {field_alternative, 1, .inherited = true},
    {field_consequence, 0},
  [26] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1},
  [28] =
    {field_alternative, 1, .inherited = true},
    {field_alternative, 2},
    {field_consequence, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [0] = alias_sym_body,
  },
  [14] = {
    [0] = alias_sym_body,
  },
  [15] = {
    [0] = alias_sym_body,
  },
  [17] = {
    [0] = alias_sym_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_resources_repeat1, 2,
    aux_sym_resources_repeat1,
    alias_sym_body,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '\n', 50,
        '!', 53,
        '(', 88,
        ')', 91,
        '*', 72,
        ',', 90,
        '.', 71,
        '/', 98,
        ':', 68,
        '?', 74,
        '\t', 69,
        ' ', 69,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(75);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(100);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '\n', 50,
        '!', 54,
        '"', 79,
        '#', 13,
        ')', 91,
        '*', 72,
        ',', 90,
        '.', 71,
        '/', 6,
        ':', 68,
        '?', 74,
        '\t', 69,
        ' ', 69,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(64);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(64);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(85);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_any_component);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(64);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(9);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(9);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_define_directive_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(101);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(99);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_undef_directive_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_if_directive_token1);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__if_directive_body_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_elif_directive_token1);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_elifdef_directive_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_elifdef_directive_token2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_else_directive_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 84},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 48},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 48},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_preprocessor_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_component] = ACTIONS(1),
    [sym_any_component] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_expansion] = ACTIONS(1),
  },
  [1] = {
    [sym_resources] = STATE(69),
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [aux_sym_resources_repeat1] = STATE(10),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
  },
  [2] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [sym__if_directive_body] = STATE(63),
    [sym_elif_directive] = STATE(26),
    [sym_elifdef_directive] = STATE(26),
    [sym_else_directive] = STATE(49),
    [aux_sym_resources_repeat1] = STATE(4),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [aux_sym__if_directive_body_repeat1] = STATE(16),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(27),
    [aux_sym_elif_directive_token1] = ACTIONS(29),
    [aux_sym_elifdef_directive_token1] = ACTIONS(31),
    [aux_sym_elifdef_directive_token2] = ACTIONS(31),
    [aux_sym_else_directive_token1] = ACTIONS(33),
  },
  [3] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [sym__if_directive_body] = STATE(52),
    [sym_elif_directive] = STATE(26),
    [sym_elifdef_directive] = STATE(26),
    [sym_else_directive] = STATE(49),
    [aux_sym_resources_repeat1] = STATE(4),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [aux_sym__if_directive_body_repeat1] = STATE(16),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(35),
    [aux_sym_elif_directive_token1] = ACTIONS(29),
    [aux_sym_elifdef_directive_token1] = ACTIONS(31),
    [aux_sym_elifdef_directive_token2] = ACTIONS(31),
    [aux_sym_else_directive_token1] = ACTIONS(33),
  },
  [4] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [sym_elif_directive] = STATE(26),
    [sym_elifdef_directive] = STATE(26),
    [sym_else_directive] = STATE(64),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [aux_sym__if_directive_body_repeat1] = STATE(15),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(37),
    [aux_sym_elif_directive_token1] = ACTIONS(29),
    [aux_sym_elifdef_directive_token1] = ACTIONS(31),
    [aux_sym_elifdef_directive_token2] = ACTIONS(31),
    [aux_sym_else_directive_token1] = ACTIONS(33),
  },
  [5] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym__line_token1] = ACTIONS(41),
    [sym_comment] = ACTIONS(44),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [sym_component] = ACTIONS(50),
    [sym_any_component] = ACTIONS(53),
    [aux_sym_include_directive_token1] = ACTIONS(56),
    [aux_sym_define_directive_token1] = ACTIONS(59),
    [aux_sym_undef_directive_token1] = ACTIONS(62),
    [aux_sym_if_directive_token1] = ACTIONS(65),
    [aux_sym_ifdef_directive_token1] = ACTIONS(68),
    [aux_sym_ifdef_directive_token2] = ACTIONS(68),
    [aux_sym__if_directive_body_token1] = ACTIONS(39),
    [aux_sym_elif_directive_token1] = ACTIONS(71),
    [aux_sym_elifdef_directive_token1] = ACTIONS(39),
    [aux_sym_elifdef_directive_token2] = ACTIONS(39),
    [aux_sym_else_directive_token1] = ACTIONS(39),
  },
  [6] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [aux_sym_resources_repeat1] = STATE(8),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(73),
    [aux_sym_elif_directive_token1] = ACTIONS(75),
    [aux_sym_elifdef_directive_token1] = ACTIONS(73),
    [aux_sym_elifdef_directive_token2] = ACTIONS(73),
    [aux_sym_else_directive_token1] = ACTIONS(73),
  },
  [7] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [aux_sym_resources_repeat1] = STATE(9),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(77),
    [aux_sym_elif_directive_token1] = ACTIONS(79),
    [aux_sym_elifdef_directive_token1] = ACTIONS(77),
    [aux_sym_elifdef_directive_token2] = ACTIONS(77),
    [aux_sym_else_directive_token1] = ACTIONS(77),
  },
  [8] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(81),
    [aux_sym_elif_directive_token1] = ACTIONS(83),
    [aux_sym_elifdef_directive_token1] = ACTIONS(81),
    [aux_sym_elifdef_directive_token2] = ACTIONS(81),
    [aux_sym_else_directive_token1] = ACTIONS(81),
  },
  [9] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(85),
    [aux_sym_elif_directive_token1] = ACTIONS(87),
    [aux_sym_elifdef_directive_token1] = ACTIONS(85),
    [aux_sym_elifdef_directive_token2] = ACTIONS(85),
    [aux_sym_else_directive_token1] = ACTIONS(85),
  },
  [10] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(89),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
  },
  [11] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [aux_sym_resources_repeat1] = STATE(12),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(91),
  },
  [12] = {
    [sym__line] = STATE(13),
    [sym__statement] = STATE(48),
    [sym_resource] = STATE(48),
    [sym_components] = STATE(50),
    [sym_binding] = STATE(18),
    [sym_include_directive] = STATE(48),
    [sym_define_directive] = STATE(48),
    [sym_define_function_directive] = STATE(48),
    [sym_undef_directive] = STATE(48),
    [sym_if_directive] = STATE(48),
    [sym_ifdef_directive] = STATE(48),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat1] = STATE(18),
    [aux_sym_components_repeat2] = STATE(37),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(93),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(97), 2,
      aux_sym_if_directive_token1,
      aux_sym_elif_directive_token1,
    ACTIONS(95), 16,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_undef_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym__if_directive_body_token1,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
      aux_sym_else_directive_token1,
  [27] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(101), 2,
      aux_sym_if_directive_token1,
      aux_sym_elif_directive_token1,
    ACTIONS(99), 16,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_undef_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym__if_directive_body_token1,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
      aux_sym_else_directive_token1,
  [54] = 8,
    ACTIONS(29), 1,
      aux_sym_elif_directive_token1,
    ACTIONS(33), 1,
      aux_sym_else_directive_token1,
    ACTIONS(103), 1,
      aux_sym__if_directive_body_token1,
    STATE(17), 1,
      aux_sym__if_directive_body_repeat1,
    STATE(77), 1,
      sym_else_directive,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(31), 2,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
    STATE(26), 2,
      sym_elif_directive,
      sym_elifdef_directive,
  [82] = 8,
    ACTIONS(29), 1,
      aux_sym_elif_directive_token1,
    ACTIONS(33), 1,
      aux_sym_else_directive_token1,
    ACTIONS(105), 1,
      aux_sym__if_directive_body_token1,
    STATE(17), 1,
      aux_sym__if_directive_body_repeat1,
    STATE(67), 1,
      sym_else_directive,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(31), 2,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
    STATE(26), 2,
      sym_elif_directive,
      sym_elifdef_directive,
  [110] = 6,
    ACTIONS(109), 1,
      aux_sym_elif_directive_token1,
    STATE(17), 1,
      aux_sym__if_directive_body_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(107), 2,
      aux_sym__if_directive_body_token1,
      aux_sym_else_directive_token1,
    ACTIONS(112), 2,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
    STATE(26), 2,
      sym_elif_directive,
      sym_elifdef_directive,
  [133] = 6,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(115), 1,
      sym_component,
    STATE(38), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(19), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [155] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(117), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(120), 2,
      sym_component,
      sym_any_component,
    STATE(19), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [172] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(122), 2,
      sym_component,
      sym_any_component,
    STATE(19), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [189] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(124), 1,
      aux_sym_resource_token1,
    ACTIONS(126), 1,
      sym_escape_sequence,
    ACTIONS(128), 1,
      aux_sym_resource_value_token1,
    STATE(23), 1,
      aux_sym_resource_repeat1,
    STATE(31), 1,
      aux_sym_resource_value_repeat1,
    STATE(71), 1,
      sym_resource_value,
  [211] = 4,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(20), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [227] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(126), 1,
      sym_escape_sequence,
    ACTIONS(128), 1,
      aux_sym_resource_value_token1,
    ACTIONS(132), 1,
      aux_sym_resource_token1,
    STATE(31), 1,
      aux_sym_resource_value_repeat1,
    STATE(39), 1,
      aux_sym_resource_repeat1,
    STATE(53), 1,
      sym_resource_value,
  [249] = 4,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(20), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [265] = 4,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(20), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [281] = 3,
    ACTIONS(140), 1,
      aux_sym_elif_directive_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(138), 4,
      aux_sym__if_directive_body_token1,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
      aux_sym_else_directive_token1,
  [295] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(20), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [308] = 5,
    ACTIONS(142), 1,
      aux_sym__line_token1,
    ACTIONS(144), 1,
      sym_escape_sequence,
    ACTIONS(147), 1,
      aux_sym_resource_value_token1,
    STATE(28), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [325] = 5,
    ACTIONS(150), 1,
      aux_sym__line_token1,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym_expansion,
    STATE(45), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [342] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(156), 4,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
  [353] = 5,
    ACTIONS(158), 1,
      aux_sym__line_token1,
    ACTIONS(160), 1,
      sym_escape_sequence,
    ACTIONS(162), 1,
      aux_sym_resource_value_token1,
    STATE(28), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [370] = 3,
    STATE(32), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(164), 2,
      sym_component,
      sym_any_component,
  [382] = 3,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(167), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [394] = 4,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [408] = 4,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [422] = 4,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [436] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(115), 1,
      sym_component,
    STATE(32), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [450] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(182), 1,
      sym_component,
    STATE(32), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [464] = 5,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(184), 1,
      aux_sym_resource_token1,
    ACTIONS(187), 1,
      sym_escape_sequence,
    ACTIONS(189), 1,
      aux_sym_resource_value_token1,
    STATE(39), 1,
      aux_sym_resource_repeat1,
  [480] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [489] = 3,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [500] = 3,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    ACTIONS(195), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [511] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(197), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [520] = 3,
    ACTIONS(199), 1,
      aux_sym__line_token1,
    ACTIONS(201), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [531] = 3,
    ACTIONS(203), 1,
      aux_sym__line_token1,
    ACTIONS(205), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [542] = 3,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    ACTIONS(209), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [553] = 2,
    ACTIONS(213), 1,
      aux_sym_string_token1,
    ACTIONS(211), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [561] = 2,
    ACTIONS(215), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [569] = 2,
    ACTIONS(217), 1,
      aux_sym__if_directive_body_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [577] = 2,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [585] = 2,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [593] = 2,
    ACTIONS(223), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [601] = 2,
    ACTIONS(225), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [609] = 2,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [617] = 2,
    ACTIONS(229), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [625] = 2,
    ACTIONS(231), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [633] = 2,
    ACTIONS(233), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [641] = 2,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [649] = 2,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [657] = 2,
    ACTIONS(239), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [665] = 2,
    ACTIONS(241), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [673] = 2,
    ACTIONS(243), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [681] = 2,
    ACTIONS(245), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [689] = 2,
    ACTIONS(247), 1,
      aux_sym__if_directive_body_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [697] = 2,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [705] = 2,
    ACTIONS(251), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [713] = 2,
    ACTIONS(253), 1,
      aux_sym__if_directive_body_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [721] = 2,
    ACTIONS(255), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [729] = 2,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [737] = 2,
    ACTIONS(259), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [745] = 2,
    ACTIONS(261), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [753] = 2,
    ACTIONS(263), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [761] = 2,
    ACTIONS(265), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [769] = 2,
    ACTIONS(267), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [777] = 2,
    ACTIONS(269), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [785] = 2,
    ACTIONS(271), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [793] = 2,
    ACTIONS(273), 1,
      aux_sym__if_directive_body_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [801] = 2,
    ACTIONS(275), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [809] = 2,
    ACTIONS(277), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [817] = 2,
    ACTIONS(279), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 27,
  [SMALL_STATE(15)] = 54,
  [SMALL_STATE(16)] = 82,
  [SMALL_STATE(17)] = 110,
  [SMALL_STATE(18)] = 133,
  [SMALL_STATE(19)] = 155,
  [SMALL_STATE(20)] = 172,
  [SMALL_STATE(21)] = 189,
  [SMALL_STATE(22)] = 211,
  [SMALL_STATE(23)] = 227,
  [SMALL_STATE(24)] = 249,
  [SMALL_STATE(25)] = 265,
  [SMALL_STATE(26)] = 281,
  [SMALL_STATE(27)] = 295,
  [SMALL_STATE(28)] = 308,
  [SMALL_STATE(29)] = 325,
  [SMALL_STATE(30)] = 342,
  [SMALL_STATE(31)] = 353,
  [SMALL_STATE(32)] = 370,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 394,
  [SMALL_STATE(35)] = 408,
  [SMALL_STATE(36)] = 422,
  [SMALL_STATE(37)] = 436,
  [SMALL_STATE(38)] = 450,
  [SMALL_STATE(39)] = 464,
  [SMALL_STATE(40)] = 480,
  [SMALL_STATE(41)] = 489,
  [SMALL_STATE(42)] = 500,
  [SMALL_STATE(43)] = 511,
  [SMALL_STATE(44)] = 520,
  [SMALL_STATE(45)] = 531,
  [SMALL_STATE(46)] = 542,
  [SMALL_STATE(47)] = 553,
  [SMALL_STATE(48)] = 561,
  [SMALL_STATE(49)] = 569,
  [SMALL_STATE(50)] = 577,
  [SMALL_STATE(51)] = 585,
  [SMALL_STATE(52)] = 593,
  [SMALL_STATE(53)] = 601,
  [SMALL_STATE(54)] = 609,
  [SMALL_STATE(55)] = 617,
  [SMALL_STATE(56)] = 625,
  [SMALL_STATE(57)] = 633,
  [SMALL_STATE(58)] = 641,
  [SMALL_STATE(59)] = 649,
  [SMALL_STATE(60)] = 657,
  [SMALL_STATE(61)] = 665,
  [SMALL_STATE(62)] = 673,
  [SMALL_STATE(63)] = 681,
  [SMALL_STATE(64)] = 689,
  [SMALL_STATE(65)] = 697,
  [SMALL_STATE(66)] = 705,
  [SMALL_STATE(67)] = 713,
  [SMALL_STATE(68)] = 721,
  [SMALL_STATE(69)] = 729,
  [SMALL_STATE(70)] = 737,
  [SMALL_STATE(71)] = 745,
  [SMALL_STATE(72)] = 753,
  [SMALL_STATE(73)] = 761,
  [SMALL_STATE(74)] = 769,
  [SMALL_STATE(75)] = 777,
  [SMALL_STATE(76)] = 785,
  [SMALL_STATE(77)] = 793,
  [SMALL_STATE(78)] = 801,
  [SMALL_STATE(79)] = 809,
  [SMALL_STATE(80)] = 817,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_directive, 2, 0, 10),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_directive, 2, 0, 10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elifdef_directive, 2, 0, 10),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elifdef_directive, 2, 0, 10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_directive, 3, 0, 10),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_directive, 3, 0, 10),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elifdef_directive, 3, 0, 10),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elifdef_directive, 3, 0, 10),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_directive_body_repeat1, 2, 0, 13),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_directive_body_repeat1, 2, 0, 13), SHIFT_REPEAT(57),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_directive_body_repeat1, 2, 0, 13), SHIFT_REPEAT(65),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_directive_body_repeat1, 1, 0, 8),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_directive_body_repeat1, 1, 0, 8),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 2, 0, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0), SHIFT_REPEAT(27),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_directive, 3, 0, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 4, 0, 7),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 9),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_directive, 4, 0, 6),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 2, 0, 8),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 4, 0, 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 2, 0, 12),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 1),
  [257] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undef_directive, 2, 0, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 3, 0, 14),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 3, 0, 15),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 3, 0, 16),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 4, 0, 17),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 2, 0, 11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_xresources(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
