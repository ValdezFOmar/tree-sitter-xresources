#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  aux_sym_ifdef_directive_token1 = 22,
  aux_sym_ifdef_directive_token2 = 23,
  aux_sym_ifdef_directive_token3 = 24,
  aux_sym_elifdef_directive_token1 = 25,
  aux_sym_elifdef_directive_token2 = 26,
  aux_sym_else_directive_token1 = 27,
  sym_identifier = 28,
  sym_resources = 29,
  sym__line = 30,
  sym__statement = 31,
  sym_resource = 32,
  sym_components = 33,
  sym_binding = 34,
  sym_resource_value = 35,
  sym_string = 36,
  sym_include_directive = 37,
  sym_define_directive = 38,
  sym_define_function_directive = 39,
  sym_parameters = 40,
  sym_undef_directive = 41,
  sym_ifdef_directive = 42,
  sym_elifdef_directive = 43,
  sym_else_directive = 44,
  aux_sym_resources_repeat1 = 45,
  aux_sym_resource_repeat1 = 46,
  aux_sym_components_repeat1 = 47,
  aux_sym_components_repeat2 = 48,
  aux_sym_resource_value_repeat1 = 49,
  aux_sym_parameters_repeat1 = 50,
  aux_sym_ifdef_directive_repeat1 = 51,
  alias_sym_body = 52,
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
  [aux_sym_ifdef_directive_token1] = "#ifdef",
  [aux_sym_ifdef_directive_token2] = "#ifndef",
  [aux_sym_ifdef_directive_token3] = "#endif",
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
  [sym_ifdef_directive] = "ifdef_directive",
  [sym_elifdef_directive] = "elifdef_directive",
  [sym_else_directive] = "else_directive",
  [aux_sym_resources_repeat1] = "resources_repeat1",
  [aux_sym_resource_repeat1] = "resource_repeat1",
  [aux_sym_components_repeat1] = "components_repeat1",
  [aux_sym_components_repeat2] = "components_repeat2",
  [aux_sym_resource_value_repeat1] = "resource_value_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_ifdef_directive_repeat1] = "ifdef_directive_repeat1",
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
  [aux_sym_ifdef_directive_token1] = aux_sym_ifdef_directive_token1,
  [aux_sym_ifdef_directive_token2] = aux_sym_ifdef_directive_token2,
  [aux_sym_ifdef_directive_token3] = aux_sym_ifdef_directive_token3,
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
  [sym_ifdef_directive] = sym_ifdef_directive,
  [sym_elifdef_directive] = sym_elifdef_directive,
  [sym_else_directive] = sym_else_directive,
  [aux_sym_resources_repeat1] = aux_sym_resources_repeat1,
  [aux_sym_resource_repeat1] = aux_sym_resource_repeat1,
  [aux_sym_components_repeat1] = aux_sym_components_repeat1,
  [aux_sym_components_repeat2] = aux_sym_components_repeat2,
  [aux_sym_resource_value_repeat1] = aux_sym_resource_value_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_ifdef_directive_repeat1] = aux_sym_ifdef_directive_repeat1,
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
  [aux_sym_ifdef_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ifdef_directive_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ifdef_directive_token3] = {
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
  [sym_ifdef_directive] = {
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
  [aux_sym_ifdef_directive_repeat1] = {
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
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 3},
  [17] = {.index = 32, .length = 4},
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
    {field_condition, 1},
  [12] =
    {field_alternative, 0},
  [13] =
    {field_name, 0},
    {field_value, 3},
  [15] =
    {field_alternative, 3},
    {field_condition, 1},
  [17] =
    {field_condition, 1},
    {field_consequence, 3},
  [19] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [21] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [23] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [26] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [29] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [32] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [3] = alias_sym_body,
  },
  [14] = {
    [3] = alias_sym_body,
  },
  [15] = {
    [3] = alias_sym_body,
  },
  [17] = {
    [3] = alias_sym_body,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '\n', 52,
        '!', 55,
        '(', 90,
        ')', 93,
        '*', 74,
        ',', 92,
        '.', 73,
        '/', 100,
        ':', 70,
        '?', 76,
        '\t', 71,
        ' ', 71,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(102);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(102);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(91);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(77);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(102);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '\n', 52,
        '!', 56,
        '"', 81,
        '#', 13,
        ')', 93,
        '*', 74,
        ',', 92,
        '.', 73,
        '/', 6,
        ':', 70,
        '?', 76,
        '\t', 71,
        ' ', 71,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(66);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(66);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_any_component);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(66);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(9);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(9);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_define_directive_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(101);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_undef_directive_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token3);
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
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 50},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 86},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 50},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 50},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
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
    [sym_resources] = STATE(68),
    [sym__line] = STATE(10),
    [sym__statement] = STATE(65),
    [sym_resource] = STATE(65),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(12),
    [sym_include_directive] = STATE(65),
    [sym_define_directive] = STATE(65),
    [sym_define_function_directive] = STATE(65),
    [sym_undef_directive] = STATE(65),
    [sym_ifdef_directive] = STATE(65),
    [aux_sym_resources_repeat1] = STATE(7),
    [aux_sym_components_repeat1] = STATE(12),
    [aux_sym_components_repeat2] = STATE(31),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token2] = ACTIONS(23),
  },
  [2] = {
    [sym__line] = STATE(10),
    [sym__statement] = STATE(65),
    [sym_resource] = STATE(65),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(12),
    [sym_include_directive] = STATE(65),
    [sym_define_directive] = STATE(65),
    [sym_define_function_directive] = STATE(65),
    [sym_undef_directive] = STATE(65),
    [sym_ifdef_directive] = STATE(65),
    [sym_elifdef_directive] = STATE(26),
    [sym_else_directive] = STATE(59),
    [aux_sym_resources_repeat1] = STATE(4),
    [aux_sym_components_repeat1] = STATE(12),
    [aux_sym_components_repeat2] = STATE(31),
    [aux_sym_ifdef_directive_repeat1] = STATE(13),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token2] = ACTIONS(23),
    [aux_sym_ifdef_directive_token3] = ACTIONS(25),
    [aux_sym_elifdef_directive_token1] = ACTIONS(27),
    [aux_sym_elifdef_directive_token2] = ACTIONS(27),
    [aux_sym_else_directive_token1] = ACTIONS(29),
  },
  [3] = {
    [sym__line] = STATE(10),
    [sym__statement] = STATE(65),
    [sym_resource] = STATE(65),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(12),
    [sym_include_directive] = STATE(65),
    [sym_define_directive] = STATE(65),
    [sym_define_function_directive] = STATE(65),
    [sym_undef_directive] = STATE(65),
    [sym_ifdef_directive] = STATE(65),
    [sym_elifdef_directive] = STATE(26),
    [sym_else_directive] = STATE(46),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(12),
    [aux_sym_components_repeat2] = STATE(31),
    [aux_sym_ifdef_directive_repeat1] = STATE(14),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token2] = ACTIONS(23),
    [aux_sym_ifdef_directive_token3] = ACTIONS(31),
    [aux_sym_elifdef_directive_token1] = ACTIONS(27),
    [aux_sym_elifdef_directive_token2] = ACTIONS(27),
    [aux_sym_else_directive_token1] = ACTIONS(29),
  },
  [4] = {
    [sym__line] = STATE(10),
    [sym__statement] = STATE(65),
    [sym_resource] = STATE(65),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(12),
    [sym_include_directive] = STATE(65),
    [sym_define_directive] = STATE(65),
    [sym_define_function_directive] = STATE(65),
    [sym_undef_directive] = STATE(65),
    [sym_ifdef_directive] = STATE(65),
    [aux_sym_resources_repeat1] = STATE(4),
    [aux_sym_components_repeat1] = STATE(12),
    [aux_sym_components_repeat2] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym__line_token1] = ACTIONS(35),
    [sym_comment] = ACTIONS(38),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [sym_component] = ACTIONS(44),
    [sym_any_component] = ACTIONS(47),
    [aux_sym_include_directive_token1] = ACTIONS(50),
    [aux_sym_define_directive_token1] = ACTIONS(53),
    [aux_sym_undef_directive_token1] = ACTIONS(56),
    [aux_sym_ifdef_directive_token1] = ACTIONS(59),
    [aux_sym_ifdef_directive_token2] = ACTIONS(59),
    [aux_sym_ifdef_directive_token3] = ACTIONS(33),
    [aux_sym_elifdef_directive_token1] = ACTIONS(33),
    [aux_sym_elifdef_directive_token2] = ACTIONS(33),
    [aux_sym_else_directive_token1] = ACTIONS(33),
  },
  [5] = {
    [sym__line] = STATE(10),
    [sym__statement] = STATE(65),
    [sym_resource] = STATE(65),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(12),
    [sym_include_directive] = STATE(65),
    [sym_define_directive] = STATE(65),
    [sym_define_function_directive] = STATE(65),
    [sym_undef_directive] = STATE(65),
    [sym_ifdef_directive] = STATE(65),
    [aux_sym_resources_repeat1] = STATE(6),
    [aux_sym_components_repeat1] = STATE(12),
    [aux_sym_components_repeat2] = STATE(31),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token2] = ACTIONS(23),
    [aux_sym_ifdef_directive_token3] = ACTIONS(62),
    [aux_sym_elifdef_directive_token1] = ACTIONS(62),
    [aux_sym_elifdef_directive_token2] = ACTIONS(62),
    [aux_sym_else_directive_token1] = ACTIONS(62),
  },
  [6] = {
    [sym__line] = STATE(10),
    [sym__statement] = STATE(65),
    [sym_resource] = STATE(65),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(12),
    [sym_include_directive] = STATE(65),
    [sym_define_directive] = STATE(65),
    [sym_define_function_directive] = STATE(65),
    [sym_undef_directive] = STATE(65),
    [sym_ifdef_directive] = STATE(65),
    [aux_sym_resources_repeat1] = STATE(4),
    [aux_sym_components_repeat1] = STATE(12),
    [aux_sym_components_repeat2] = STATE(31),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token2] = ACTIONS(23),
    [aux_sym_ifdef_directive_token3] = ACTIONS(64),
    [aux_sym_elifdef_directive_token1] = ACTIONS(64),
    [aux_sym_elifdef_directive_token2] = ACTIONS(64),
    [aux_sym_else_directive_token1] = ACTIONS(64),
  },
  [7] = {
    [sym__line] = STATE(10),
    [sym__statement] = STATE(65),
    [sym_resource] = STATE(65),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(12),
    [sym_include_directive] = STATE(65),
    [sym_define_directive] = STATE(65),
    [sym_define_function_directive] = STATE(65),
    [sym_undef_directive] = STATE(65),
    [sym_ifdef_directive] = STATE(65),
    [aux_sym_resources_repeat1] = STATE(4),
    [aux_sym_components_repeat1] = STATE(12),
    [aux_sym_components_repeat2] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(66),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token2] = ACTIONS(23),
  },
  [8] = {
    [sym__line] = STATE(10),
    [sym__statement] = STATE(65),
    [sym_resource] = STATE(65),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(12),
    [sym_include_directive] = STATE(65),
    [sym_define_directive] = STATE(65),
    [sym_define_function_directive] = STATE(65),
    [sym_undef_directive] = STATE(65),
    [sym_ifdef_directive] = STATE(65),
    [aux_sym_resources_repeat1] = STATE(9),
    [aux_sym_components_repeat1] = STATE(12),
    [aux_sym_components_repeat2] = STATE(31),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token2] = ACTIONS(23),
    [aux_sym_ifdef_directive_token3] = ACTIONS(68),
  },
  [9] = {
    [sym__line] = STATE(10),
    [sym__statement] = STATE(65),
    [sym_resource] = STATE(65),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(12),
    [sym_include_directive] = STATE(65),
    [sym_define_directive] = STATE(65),
    [sym_define_function_directive] = STATE(65),
    [sym_undef_directive] = STATE(65),
    [sym_ifdef_directive] = STATE(65),
    [aux_sym_resources_repeat1] = STATE(4),
    [aux_sym_components_repeat1] = STATE(12),
    [aux_sym_components_repeat2] = STATE(31),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token2] = ACTIONS(23),
    [aux_sym_ifdef_directive_token3] = ACTIONS(70),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(72), 16,
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
      aux_sym_ifdef_directive_token3,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
      aux_sym_else_directive_token1,
  [23] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(74), 16,
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
      aux_sym_ifdef_directive_token3,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
      aux_sym_else_directive_token1,
  [46] = 6,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(76), 1,
      sym_component,
    STATE(33), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(16), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [68] = 7,
    ACTIONS(29), 1,
      aux_sym_else_directive_token1,
    ACTIONS(78), 1,
      aux_sym_ifdef_directive_token3,
    STATE(17), 1,
      aux_sym_ifdef_directive_repeat1,
    STATE(26), 1,
      sym_elifdef_directive,
    STATE(71), 1,
      sym_else_directive,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(27), 2,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
  [92] = 7,
    ACTIONS(29), 1,
      aux_sym_else_directive_token1,
    ACTIONS(80), 1,
      aux_sym_ifdef_directive_token3,
    STATE(17), 1,
      aux_sym_ifdef_directive_repeat1,
    STATE(26), 1,
      sym_elifdef_directive,
    STATE(62), 1,
      sym_else_directive,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(27), 2,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
  [116] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(82), 2,
      sym_component,
      sym_any_component,
    STATE(16), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [133] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(84), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(87), 2,
      sym_component,
      sym_any_component,
    STATE(16), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [150] = 5,
    STATE(17), 1,
      aux_sym_ifdef_directive_repeat1,
    STATE(26), 1,
      sym_elifdef_directive,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(89), 2,
      aux_sym_ifdef_directive_token3,
      aux_sym_else_directive_token1,
    ACTIONS(91), 2,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
  [169] = 4,
    ACTIONS(94), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(15), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [185] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(96), 1,
      aux_sym_resource_token1,
    ACTIONS(98), 1,
      sym_escape_sequence,
    ACTIONS(100), 1,
      aux_sym_resource_value_token1,
    STATE(21), 1,
      aux_sym_resource_repeat1,
    STATE(25), 1,
      aux_sym_resource_value_repeat1,
    STATE(45), 1,
      sym_resource_value,
  [207] = 4,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(15), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [223] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(98), 1,
      sym_escape_sequence,
    ACTIONS(100), 1,
      aux_sym_resource_value_token1,
    ACTIONS(104), 1,
      aux_sym_resource_token1,
    STATE(25), 1,
      aux_sym_resource_value_repeat1,
    STATE(34), 1,
      aux_sym_resource_repeat1,
    STATE(49), 1,
      sym_resource_value,
  [245] = 4,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(15), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [261] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(15), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [274] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(108), 4,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
  [285] = 5,
    ACTIONS(110), 1,
      aux_sym__line_token1,
    ACTIONS(112), 1,
      sym_escape_sequence,
    ACTIONS(114), 1,
      aux_sym_resource_value_token1,
    STATE(27), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [302] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(116), 4,
      aux_sym_ifdef_directive_token3,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
      aux_sym_else_directive_token1,
  [313] = 5,
    ACTIONS(118), 1,
      aux_sym__line_token1,
    ACTIONS(120), 1,
      sym_escape_sequence,
    ACTIONS(123), 1,
      aux_sym_resource_value_token1,
    STATE(27), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [330] = 5,
    ACTIONS(126), 1,
      aux_sym__line_token1,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      sym_expansion,
    STATE(42), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [347] = 4,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [361] = 3,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(137), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [373] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(76), 1,
      sym_component,
    STATE(35), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [387] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [401] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(145), 1,
      sym_component,
    STATE(35), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [415] = 5,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(147), 1,
      aux_sym_resource_token1,
    ACTIONS(150), 1,
      sym_escape_sequence,
    ACTIONS(152), 1,
      aux_sym_resource_value_token1,
    STATE(34), 1,
      aux_sym_resource_repeat1,
  [431] = 3,
    STATE(35), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(154), 2,
      sym_component,
      sym_any_component,
  [443] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [457] = 3,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    ACTIONS(161), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [468] = 3,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [479] = 3,
    ACTIONS(165), 1,
      aux_sym__line_token1,
    ACTIONS(167), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [490] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(169), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [499] = 3,
    ACTIONS(171), 1,
      aux_sym__line_token1,
    ACTIONS(173), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [510] = 3,
    ACTIONS(175), 1,
      aux_sym__line_token1,
    ACTIONS(177), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [521] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [530] = 2,
    ACTIONS(179), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [538] = 2,
    ACTIONS(181), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [546] = 2,
    ACTIONS(183), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [554] = 2,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [562] = 2,
    ACTIONS(189), 1,
      aux_sym_string_token1,
    ACTIONS(187), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [570] = 2,
    ACTIONS(191), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [578] = 2,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [586] = 2,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [594] = 2,
    ACTIONS(197), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [602] = 2,
    ACTIONS(199), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [610] = 2,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [618] = 2,
    ACTIONS(203), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [626] = 2,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [634] = 2,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [642] = 2,
    ACTIONS(209), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [650] = 2,
    ACTIONS(211), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [658] = 2,
    ACTIONS(213), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [666] = 2,
    ACTIONS(215), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [674] = 2,
    ACTIONS(217), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [682] = 2,
    ACTIONS(219), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [690] = 2,
    ACTIONS(221), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [698] = 2,
    ACTIONS(223), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [706] = 2,
    ACTIONS(225), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [714] = 2,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [722] = 2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [730] = 2,
    ACTIONS(231), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [738] = 2,
    ACTIONS(233), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [746] = 2,
    ACTIONS(235), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [754] = 2,
    ACTIONS(237), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [762] = 2,
    ACTIONS(239), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 23,
  [SMALL_STATE(12)] = 46,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 92,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 133,
  [SMALL_STATE(17)] = 150,
  [SMALL_STATE(18)] = 169,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 207,
  [SMALL_STATE(21)] = 223,
  [SMALL_STATE(22)] = 245,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 274,
  [SMALL_STATE(25)] = 285,
  [SMALL_STATE(26)] = 302,
  [SMALL_STATE(27)] = 313,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 347,
  [SMALL_STATE(30)] = 361,
  [SMALL_STATE(31)] = 373,
  [SMALL_STATE(32)] = 387,
  [SMALL_STATE(33)] = 401,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 431,
  [SMALL_STATE(36)] = 443,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 468,
  [SMALL_STATE(39)] = 479,
  [SMALL_STATE(40)] = 490,
  [SMALL_STATE(41)] = 499,
  [SMALL_STATE(42)] = 510,
  [SMALL_STATE(43)] = 521,
  [SMALL_STATE(44)] = 530,
  [SMALL_STATE(45)] = 538,
  [SMALL_STATE(46)] = 546,
  [SMALL_STATE(47)] = 554,
  [SMALL_STATE(48)] = 562,
  [SMALL_STATE(49)] = 570,
  [SMALL_STATE(50)] = 578,
  [SMALL_STATE(51)] = 586,
  [SMALL_STATE(52)] = 594,
  [SMALL_STATE(53)] = 602,
  [SMALL_STATE(54)] = 610,
  [SMALL_STATE(55)] = 618,
  [SMALL_STATE(56)] = 626,
  [SMALL_STATE(57)] = 634,
  [SMALL_STATE(58)] = 642,
  [SMALL_STATE(59)] = 650,
  [SMALL_STATE(60)] = 658,
  [SMALL_STATE(61)] = 666,
  [SMALL_STATE(62)] = 674,
  [SMALL_STATE(63)] = 682,
  [SMALL_STATE(64)] = 690,
  [SMALL_STATE(65)] = 698,
  [SMALL_STATE(66)] = 706,
  [SMALL_STATE(67)] = 714,
  [SMALL_STATE(68)] = 722,
  [SMALL_STATE(69)] = 730,
  [SMALL_STATE(70)] = 738,
  [SMALL_STATE(71)] = 746,
  [SMALL_STATE(72)] = 754,
  [SMALL_STATE(73)] = 762,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elifdef_directive, 2, 0, 7),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elifdef_directive, 3, 0, 7),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ifdef_directive_repeat1, 2, 0, 13),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ifdef_directive_repeat1, 2, 0, 13), SHIFT_REPEAT(54),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ifdef_directive_repeat1, 1, 0, 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 2, 0, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0), SHIFT_REPEAT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_directive, 3, 0, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_directive, 4, 0, 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 4, 0, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 10),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 11),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undef_directive, 2, 0, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 12),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [229] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 6, 0, 14),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 6, 0, 15),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 6, 0, 16),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 7, 0, 17),
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
