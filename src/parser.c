#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 1
#define TOKEN_COUNT 23
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
  aux_sym_undef_directive_token1 = 17,
  aux_sym_ifdef_directive_token1 = 18,
  aux_sym_ifdef_directive_token2 = 19,
  aux_sym_ifdef_directive_token3 = 20,
  aux_sym_else_directive_token1 = 21,
  sym_identifier = 22,
  sym_resources = 23,
  sym__line = 24,
  sym__statement = 25,
  sym_resource = 26,
  sym_components = 27,
  sym_binding = 28,
  sym_resource_value = 29,
  sym_string = 30,
  sym_include_directive = 31,
  sym_define_directive = 32,
  sym_undef_directive = 33,
  sym_ifdef_directive = 34,
  sym_else_directive = 35,
  aux_sym_resources_repeat1 = 36,
  aux_sym_resource_repeat1 = 37,
  aux_sym_components_repeat1 = 38,
  aux_sym_components_repeat2 = 39,
  aux_sym_resource_value_repeat1 = 40,
  alias_sym_body = 41,
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
  [aux_sym_undef_directive_token1] = "#undef",
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
  [sym_undef_directive] = "undef_directive",
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
  [aux_sym_undef_directive_token1] = aux_sym_undef_directive_token1,
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
  [sym_undef_directive] = sym_undef_directive,
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
  [sym_undef_directive] = {
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
  [28] = 26,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '\n', 41,
        '!', 42,
        '"', 68,
        '#', 66,
        '*', 59,
        '.', 58,
        '/', 65,
        ':', 55,
        '?', 62,
        '\\', 67,
        '\t', 56,
        ' ', 56,
      );
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '\n', 41,
        '!', 42,
        '"', 68,
        '#', 9,
        '*', 59,
        '.', 58,
        '/', 4,
        ':', 55,
        '?', 62,
        '\t', 56,
        ' ', 56,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_any_component);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_define_directive_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_undef_directive_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token3);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_else_directive_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 0},
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
    [aux_sym_undef_directive_token1] = ACTIONS(1),
    [aux_sym_ifdef_directive_token1] = ACTIONS(1),
    [aux_sym_ifdef_directive_token2] = ACTIONS(1),
    [aux_sym_ifdef_directive_token3] = ACTIONS(1),
    [aux_sym_else_directive_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_resources] = STATE(39),
    [sym__line] = STATE(8),
    [sym__statement] = STATE(32),
    [sym_resource] = STATE(32),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(32),
    [sym_define_directive] = STATE(32),
    [sym_undef_directive] = STATE(32),
    [sym_ifdef_directive] = STATE(32),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(25),
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
    [sym__line] = STATE(8),
    [sym__statement] = STATE(32),
    [sym_resource] = STATE(32),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(32),
    [sym_define_directive] = STATE(32),
    [sym_undef_directive] = STATE(32),
    [sym_ifdef_directive] = STATE(32),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym__line_token1] = ACTIONS(27),
    [sym_comment] = ACTIONS(30),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_component] = ACTIONS(36),
    [sym_any_component] = ACTIONS(39),
    [aux_sym_include_directive_token1] = ACTIONS(42),
    [aux_sym_define_directive_token1] = ACTIONS(45),
    [aux_sym_undef_directive_token1] = ACTIONS(48),
    [aux_sym_ifdef_directive_token1] = ACTIONS(51),
    [aux_sym_ifdef_directive_token2] = ACTIONS(51),
    [aux_sym_ifdef_directive_token3] = ACTIONS(25),
    [aux_sym_else_directive_token1] = ACTIONS(25),
  },
  [3] = {
    [sym__line] = STATE(8),
    [sym__statement] = STATE(32),
    [sym_resource] = STATE(32),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(32),
    [sym_define_directive] = STATE(32),
    [sym_undef_directive] = STATE(32),
    [sym_ifdef_directive] = STATE(32),
    [sym_else_directive] = STATE(51),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(25),
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
    [aux_sym_ifdef_directive_token3] = ACTIONS(54),
    [aux_sym_else_directive_token1] = ACTIONS(56),
  },
  [4] = {
    [sym__line] = STATE(8),
    [sym__statement] = STATE(32),
    [sym_resource] = STATE(32),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(32),
    [sym_define_directive] = STATE(32),
    [sym_undef_directive] = STATE(32),
    [sym_ifdef_directive] = STATE(32),
    [sym_else_directive] = STATE(44),
    [aux_sym_resources_repeat1] = STATE(3),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(25),
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
    [aux_sym_ifdef_directive_token3] = ACTIONS(58),
    [aux_sym_else_directive_token1] = ACTIONS(56),
  },
  [5] = {
    [sym__line] = STATE(8),
    [sym__statement] = STATE(32),
    [sym_resource] = STATE(32),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(32),
    [sym_define_directive] = STATE(32),
    [sym_undef_directive] = STATE(32),
    [sym_ifdef_directive] = STATE(32),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(60),
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
  [6] = {
    [sym__line] = STATE(8),
    [sym__statement] = STATE(32),
    [sym_resource] = STATE(32),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(32),
    [sym_define_directive] = STATE(32),
    [sym_undef_directive] = STATE(32),
    [sym_ifdef_directive] = STATE(32),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(25),
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
  },
  [7] = {
    [sym__line] = STATE(8),
    [sym__statement] = STATE(32),
    [sym_resource] = STATE(32),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(10),
    [sym_include_directive] = STATE(32),
    [sym_define_directive] = STATE(32),
    [sym_undef_directive] = STATE(32),
    [sym_ifdef_directive] = STATE(32),
    [aux_sym_resources_repeat1] = STATE(6),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(25),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(66), 14,
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
      aux_sym_else_directive_token1,
  [21] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(68), 14,
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
      aux_sym_else_directive_token1,
  [42] = 6,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(70), 1,
      sym_component,
    STATE(22), 1,
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
  [64] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(72), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(75), 2,
      sym_component,
      sym_any_component,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [81] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(77), 2,
      sym_component,
      sym_any_component,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [98] = 4,
    ACTIONS(79), 1,
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
  [114] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(81), 1,
      aux_sym_resource_token1,
    ACTIONS(83), 1,
      sym_escape_sequence,
    ACTIONS(85), 1,
      aux_sym_resource_value_token1,
    STATE(19), 1,
      aux_sym_resource_value_repeat1,
    STATE(28), 1,
      aux_sym_resource_repeat1,
    STATE(46), 1,
      sym_resource_value,
  [136] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(83), 1,
      sym_escape_sequence,
    ACTIONS(85), 1,
      aux_sym_resource_value_token1,
    ACTIONS(87), 1,
      aux_sym_resource_token1,
    STATE(14), 1,
      aux_sym_resource_repeat1,
    STATE(19), 1,
      aux_sym_resource_value_repeat1,
    STATE(37), 1,
      sym_resource_value,
  [158] = 4,
    ACTIONS(89), 1,
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
  [174] = 4,
    ACTIONS(91), 1,
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
  [190] = 5,
    ACTIONS(93), 1,
      aux_sym__line_token1,
    ACTIONS(95), 1,
      sym_escape_sequence,
    ACTIONS(98), 1,
      aux_sym_resource_value_token1,
    STATE(18), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [207] = 5,
    ACTIONS(101), 1,
      aux_sym__line_token1,
    ACTIONS(103), 1,
      sym_escape_sequence,
    ACTIONS(105), 1,
      aux_sym_resource_value_token1,
    STATE(18), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [224] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(107), 4,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
  [235] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(12), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [248] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(109), 1,
      sym_component,
    STATE(23), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [262] = 3,
    STATE(23), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(111), 2,
      sym_component,
      sym_any_component,
  [274] = 5,
    ACTIONS(114), 1,
      aux_sym__line_token1,
    ACTIONS(116), 1,
      sym_preprocessor_comment,
    ACTIONS(118), 1,
      aux_sym_resource_token1,
    ACTIONS(120), 1,
      sym_expansion,
    STATE(26), 1,
      aux_sym_resource_repeat1,
  [290] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(70), 1,
      sym_component,
    STATE(23), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [304] = 5,
    ACTIONS(116), 1,
      sym_preprocessor_comment,
    ACTIONS(122), 1,
      aux_sym__line_token1,
    ACTIONS(124), 1,
      aux_sym_resource_token1,
    ACTIONS(127), 1,
      sym_expansion,
    STATE(26), 1,
      aux_sym_resource_repeat1,
  [320] = 5,
    ACTIONS(116), 1,
      sym_preprocessor_comment,
    ACTIONS(129), 1,
      aux_sym__line_token1,
    ACTIONS(131), 1,
      aux_sym_resource_token1,
    ACTIONS(133), 1,
      sym_expansion,
    STATE(24), 1,
      aux_sym_resource_repeat1,
  [336] = 5,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(122), 1,
      sym_escape_sequence,
    ACTIONS(127), 1,
      aux_sym_resource_value_token1,
    ACTIONS(135), 1,
      aux_sym_resource_token1,
    STATE(28), 1,
      aux_sym_resource_repeat1,
  [352] = 3,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [363] = 2,
    ACTIONS(140), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [371] = 2,
    ACTIONS(142), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [379] = 2,
    ACTIONS(144), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [387] = 2,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [395] = 2,
    ACTIONS(148), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [403] = 2,
    ACTIONS(150), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [411] = 2,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [419] = 2,
    ACTIONS(154), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [427] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [435] = 2,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [443] = 2,
    ACTIONS(160), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [451] = 2,
    ACTIONS(162), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [459] = 2,
    ACTIONS(164), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [467] = 2,
    ACTIONS(166), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [475] = 2,
    ACTIONS(168), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [483] = 2,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [491] = 2,
    ACTIONS(172), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [499] = 2,
    ACTIONS(174), 1,
      aux_sym_string_token1,
    ACTIONS(116), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [507] = 2,
    ACTIONS(176), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [515] = 2,
    ACTIONS(178), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [523] = 2,
    ACTIONS(180), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [531] = 2,
    ACTIONS(182), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [539] = 2,
    ACTIONS(184), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 21,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 64,
  [SMALL_STATE(12)] = 81,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 158,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 190,
  [SMALL_STATE(19)] = 207,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 235,
  [SMALL_STATE(22)] = 248,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 274,
  [SMALL_STATE(25)] = 290,
  [SMALL_STATE(26)] = 304,
  [SMALL_STATE(27)] = 320,
  [SMALL_STATE(28)] = 336,
  [SMALL_STATE(29)] = 352,
  [SMALL_STATE(30)] = 363,
  [SMALL_STATE(31)] = 371,
  [SMALL_STATE(32)] = 379,
  [SMALL_STATE(33)] = 387,
  [SMALL_STATE(34)] = 395,
  [SMALL_STATE(35)] = 403,
  [SMALL_STATE(36)] = 411,
  [SMALL_STATE(37)] = 419,
  [SMALL_STATE(38)] = 427,
  [SMALL_STATE(39)] = 435,
  [SMALL_STATE(40)] = 443,
  [SMALL_STATE(41)] = 451,
  [SMALL_STATE(42)] = 459,
  [SMALL_STATE(43)] = 467,
  [SMALL_STATE(44)] = 475,
  [SMALL_STATE(45)] = 483,
  [SMALL_STATE(46)] = 491,
  [SMALL_STATE(47)] = 499,
  [SMALL_STATE(48)] = 507,
  [SMALL_STATE(49)] = 515,
  [SMALL_STATE(50)] = 523,
  [SMALL_STATE(51)] = 531,
  [SMALL_STATE(52)] = 539,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0), SHIFT_REPEAT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 2, 0, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undef_directive, 2, 0, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 4, 0, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 4, 0, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 7),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 8),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 9),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 6, 0, 10),
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
