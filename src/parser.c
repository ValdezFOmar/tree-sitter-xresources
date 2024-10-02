#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

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
  sym_expansion = 16,
  aux_sym_ifdef_directive_token1 = 17,
  aux_sym_ifdef_directive_token2 = 18,
  aux_sym_ifdef_directive_token3 = 19,
  aux_sym_else_directive_token1 = 20,
  sym_identifier = 21,
  sym_resources = 22,
  sym__line = 23,
  sym__statement = 24,
  sym_resource = 25,
  sym_components = 26,
  sym_binding = 27,
  sym_resource_value = 28,
  sym_string = 29,
  sym_include_directive = 30,
  sym_define_directive = 31,
  sym_ifdef_directive = 32,
  sym_else_directive = 33,
  aux_sym_resources_repeat1 = 34,
  aux_sym_resource_repeat1 = 35,
  aux_sym_components_repeat1 = 36,
  aux_sym_components_repeat2 = 37,
  aux_sym_resource_value_repeat1 = 38,
  alias_sym_body = 39,
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
  [sym_expansion] = "expansion",
  [aux_sym_ifdef_directive_token1] = "#ifdef",
  [aux_sym_ifdef_directive_token2] = "#ifndef",
  [aux_sym_ifdef_directive_token3] = "#endif",
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
  [sym_ifdef_directive] = "ifdef_directive",
  [sym_else_directive] = "else_directive",
  [aux_sym_resources_repeat1] = "resources_repeat1",
  [aux_sym_resource_repeat1] = "resource_repeat1",
  [aux_sym_components_repeat1] = "components_repeat1",
  [aux_sym_components_repeat2] = "components_repeat2",
  [aux_sym_resource_value_repeat1] = "resource_value_repeat1",
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
  [sym_expansion] = sym_expansion,
  [aux_sym_ifdef_directive_token1] = aux_sym_ifdef_directive_token1,
  [aux_sym_ifdef_directive_token2] = aux_sym_ifdef_directive_token2,
  [aux_sym_ifdef_directive_token3] = aux_sym_ifdef_directive_token3,
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
  [sym_ifdef_directive] = sym_ifdef_directive,
  [sym_else_directive] = sym_else_directive,
  [aux_sym_resources_repeat1] = aux_sym_resources_repeat1,
  [aux_sym_resource_repeat1] = aux_sym_resource_repeat1,
  [aux_sym_components_repeat1] = aux_sym_components_repeat1,
  [aux_sym_components_repeat2] = aux_sym_components_repeat2,
  [aux_sym_resource_value_repeat1] = aux_sym_resource_value_repeat1,
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
  [sym_expansion] = {
    .visible = true,
    .named = true,
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
  [sym_ifdef_directive] = {
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
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_file] = "file",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
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
    {field_name, 0},
    {field_value, 2},
  [6] =
    {field_name, 1},
    {field_value, 3},
  [8] =
    {field_condition, 1},
  [9] =
    {field_name, 0},
    {field_value, 3},
  [11] =
    {field_alternative, 3},
    {field_condition, 1},
  [13] =
    {field_condition, 1},
    {field_consequence, 3},
  [15] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [3] = alias_sym_body,
  },
  [10] = {
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
  [28] = 27,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '\n', 37,
        '!', 38,
        '"', 64,
        '#', 62,
        '*', 55,
        '.', 54,
        '/', 61,
        ':', 51,
        '?', 58,
        '\\', 63,
        '\t', 52,
        ' ', 52,
      );
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(59);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '\n', 37,
        '!', 38,
        '"', 64,
        '#', 9,
        '*', 55,
        '.', 54,
        '/', 4,
        ':', 51,
        '?', 58,
        '\t', 52,
        ' ', 52,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(45);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(45);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_any_component);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(33);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(45);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_define_directive_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token3);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_else_directive_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 69},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 35},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_resource_value_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_include_directive_token1] = ACTIONS(1),
    [aux_sym_define_directive_token1] = ACTIONS(1),
    [aux_sym_ifdef_directive_token1] = ACTIONS(1),
    [aux_sym_ifdef_directive_token2] = ACTIONS(1),
    [aux_sym_ifdef_directive_token3] = ACTIONS(1),
    [aux_sym_else_directive_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_resources] = STATE(50),
    [sym__line] = STATE(9),
    [sym__statement] = STATE(44),
    [sym_resource] = STATE(44),
    [sym_components] = STATE(48),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(44),
    [sym_define_directive] = STATE(44),
    [sym_ifdef_directive] = STATE(44),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(22),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(21),
    [aux_sym_ifdef_directive_token2] = ACTIONS(21),
  },
  [2] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(44),
    [sym_resource] = STATE(44),
    [sym_components] = STATE(48),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(44),
    [sym_define_directive] = STATE(44),
    [sym_ifdef_directive] = STATE(44),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym__line_token1] = ACTIONS(25),
    [sym_comment] = ACTIONS(28),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [sym_component] = ACTIONS(34),
    [sym_any_component] = ACTIONS(37),
    [aux_sym_include_directive_token1] = ACTIONS(40),
    [aux_sym_define_directive_token1] = ACTIONS(43),
    [aux_sym_ifdef_directive_token1] = ACTIONS(46),
    [aux_sym_ifdef_directive_token2] = ACTIONS(46),
    [aux_sym_ifdef_directive_token3] = ACTIONS(23),
    [aux_sym_else_directive_token1] = ACTIONS(23),
  },
  [3] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(44),
    [sym_resource] = STATE(44),
    [sym_components] = STATE(48),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(44),
    [sym_define_directive] = STATE(44),
    [sym_ifdef_directive] = STATE(44),
    [sym_else_directive] = STATE(47),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(22),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(21),
    [aux_sym_ifdef_directive_token2] = ACTIONS(21),
    [aux_sym_ifdef_directive_token3] = ACTIONS(49),
    [aux_sym_else_directive_token1] = ACTIONS(51),
  },
  [4] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(44),
    [sym_resource] = STATE(44),
    [sym_components] = STATE(48),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(44),
    [sym_define_directive] = STATE(44),
    [sym_ifdef_directive] = STATE(44),
    [sym_else_directive] = STATE(30),
    [aux_sym_resources_repeat1] = STATE(3),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(22),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(21),
    [aux_sym_ifdef_directive_token2] = ACTIONS(21),
    [aux_sym_ifdef_directive_token3] = ACTIONS(53),
    [aux_sym_else_directive_token1] = ACTIONS(51),
  },
  [5] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(44),
    [sym_resource] = STATE(44),
    [sym_components] = STATE(48),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(44),
    [sym_define_directive] = STATE(44),
    [sym_ifdef_directive] = STATE(44),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(55),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(21),
    [aux_sym_ifdef_directive_token2] = ACTIONS(21),
  },
  [6] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(44),
    [sym_resource] = STATE(44),
    [sym_components] = STATE(48),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(44),
    [sym_define_directive] = STATE(44),
    [sym_ifdef_directive] = STATE(44),
    [aux_sym_resources_repeat1] = STATE(7),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(22),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(21),
    [aux_sym_ifdef_directive_token2] = ACTIONS(21),
    [aux_sym_ifdef_directive_token3] = ACTIONS(57),
  },
  [7] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(44),
    [sym_resource] = STATE(44),
    [sym_components] = STATE(48),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(44),
    [sym_define_directive] = STATE(44),
    [sym_ifdef_directive] = STATE(44),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(22),
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
    [aux_sym_ifdef_directive_token1] = ACTIONS(21),
    [aux_sym_ifdef_directive_token2] = ACTIONS(21),
    [aux_sym_ifdef_directive_token3] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(61), 13,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym_ifdef_directive_token3,
      aux_sym_else_directive_token1,
  [20] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(63), 13,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym_ifdef_directive_token3,
      aux_sym_else_directive_token1,
  [40] = 6,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(65), 1,
      sym_component,
    STATE(25), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [62] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(70), 2,
      sym_component,
      sym_any_component,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [79] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(72), 2,
      sym_component,
      sym_any_component,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [96] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(74), 1,
      aux_sym_resource_token1,
    ACTIONS(76), 1,
      sym_escape_sequence,
    ACTIONS(78), 1,
      aux_sym_resource_value_token1,
    STATE(16), 1,
      aux_sym_resource_repeat1,
    STATE(20), 1,
      aux_sym_resource_value_repeat1,
    STATE(31), 1,
      sym_resource_value,
  [118] = 4,
    ACTIONS(80), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(12), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [134] = 4,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(12), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [150] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(76), 1,
      sym_escape_sequence,
    ACTIONS(78), 1,
      aux_sym_resource_value_token1,
    ACTIONS(84), 1,
      aux_sym_resource_token1,
    STATE(20), 1,
      aux_sym_resource_value_repeat1,
    STATE(28), 1,
      aux_sym_resource_repeat1,
    STATE(42), 1,
      sym_resource_value,
  [172] = 4,
    ACTIONS(86), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(12), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [188] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(12), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [201] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(88), 4,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
  [212] = 5,
    ACTIONS(90), 1,
      aux_sym__line_token1,
    ACTIONS(92), 1,
      sym_escape_sequence,
    ACTIONS(94), 1,
      aux_sym_resource_value_token1,
    STATE(21), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [229] = 5,
    ACTIONS(96), 1,
      aux_sym__line_token1,
    ACTIONS(98), 1,
      sym_escape_sequence,
    ACTIONS(101), 1,
      aux_sym_resource_value_token1,
    STATE(21), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [246] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(65), 1,
      sym_component,
    STATE(23), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [260] = 3,
    STATE(23), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(104), 2,
      sym_component,
      sym_any_component,
  [272] = 5,
    ACTIONS(107), 1,
      aux_sym__line_token1,
    ACTIONS(109), 1,
      sym_preprocessor_comment,
    ACTIONS(111), 1,
      aux_sym_resource_token1,
    ACTIONS(113), 1,
      sym_expansion,
    STATE(26), 1,
      aux_sym_resource_repeat1,
  [288] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(115), 1,
      sym_component,
    STATE(23), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [302] = 5,
    ACTIONS(109), 1,
      sym_preprocessor_comment,
    ACTIONS(117), 1,
      aux_sym__line_token1,
    ACTIONS(119), 1,
      aux_sym_resource_token1,
    ACTIONS(121), 1,
      sym_expansion,
    STATE(27), 1,
      aux_sym_resource_repeat1,
  [318] = 5,
    ACTIONS(109), 1,
      sym_preprocessor_comment,
    ACTIONS(123), 1,
      aux_sym__line_token1,
    ACTIONS(125), 1,
      aux_sym_resource_token1,
    ACTIONS(128), 1,
      sym_expansion,
    STATE(27), 1,
      aux_sym_resource_repeat1,
  [334] = 5,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(123), 1,
      sym_escape_sequence,
    ACTIONS(128), 1,
      aux_sym_resource_value_token1,
    ACTIONS(130), 1,
      aux_sym_resource_token1,
    STATE(28), 1,
      aux_sym_resource_repeat1,
  [350] = 3,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [361] = 2,
    ACTIONS(135), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [369] = 2,
    ACTIONS(137), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [377] = 2,
    ACTIONS(139), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [385] = 2,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [393] = 2,
    ACTIONS(143), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [401] = 2,
    ACTIONS(145), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [409] = 2,
    ACTIONS(147), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [417] = 2,
    ACTIONS(149), 1,
      aux_sym_string_token1,
    ACTIONS(109), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [425] = 2,
    ACTIONS(151), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [433] = 2,
    ACTIONS(153), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [441] = 2,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [449] = 2,
    ACTIONS(157), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [457] = 2,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [465] = 2,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [473] = 2,
    ACTIONS(163), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [481] = 2,
    ACTIONS(165), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [489] = 2,
    ACTIONS(167), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [497] = 2,
    ACTIONS(169), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [505] = 2,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [513] = 2,
    ACTIONS(173), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [521] = 2,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 20,
  [SMALL_STATE(10)] = 40,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 79,
  [SMALL_STATE(13)] = 96,
  [SMALL_STATE(14)] = 118,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 188,
  [SMALL_STATE(19)] = 201,
  [SMALL_STATE(20)] = 212,
  [SMALL_STATE(21)] = 229,
  [SMALL_STATE(22)] = 246,
  [SMALL_STATE(23)] = 260,
  [SMALL_STATE(24)] = 272,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 302,
  [SMALL_STATE(27)] = 318,
  [SMALL_STATE(28)] = 334,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 361,
  [SMALL_STATE(31)] = 369,
  [SMALL_STATE(32)] = 377,
  [SMALL_STATE(33)] = 385,
  [SMALL_STATE(34)] = 393,
  [SMALL_STATE(35)] = 401,
  [SMALL_STATE(36)] = 409,
  [SMALL_STATE(37)] = 417,
  [SMALL_STATE(38)] = 425,
  [SMALL_STATE(39)] = 433,
  [SMALL_STATE(40)] = 441,
  [SMALL_STATE(41)] = 449,
  [SMALL_STATE(42)] = 457,
  [SMALL_STATE(43)] = 465,
  [SMALL_STATE(44)] = 473,
  [SMALL_STATE(45)] = 481,
  [SMALL_STATE(46)] = 489,
  [SMALL_STATE(47)] = 497,
  [SMALL_STATE(48)] = 505,
  [SMALL_STATE(49)] = 513,
  [SMALL_STATE(50)] = 521,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 2, 0, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 4, 0, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 4, 0, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 7),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 8),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 6, 0, 10),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
