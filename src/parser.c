#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 1
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  sym_comment = 2,
  aux_sym_include_directive_token1 = 3,
  aux_sym_define_directive_token1 = 4,
  aux_sym_ifdef_directive_token1 = 5,
  aux_sym_ifdef_directive_token2 = 6,
  aux_sym_ifdef_directive_token3 = 7,
  aux_sym_else_directive_token1 = 8,
  sym_identifier = 9,
  anon_sym_COLON = 10,
  aux_sym_resource_token1 = 11,
  anon_sym_QMARK = 12,
  anon_sym_DOT = 13,
  anon_sym_STAR = 14,
  sym_component = 15,
  sym_escape_sequence = 16,
  aux_sym_resource_value_token1 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  sym_resources = 20,
  sym__line = 21,
  sym__statement = 22,
  sym_include_directive = 23,
  sym_define_directive = 24,
  sym_ifdef_directive = 25,
  sym_else_directive = 26,
  sym_resource = 27,
  sym_components = 28,
  sym_binding = 29,
  sym_resource_value = 30,
  sym_string = 31,
  aux_sym_resources_repeat1 = 32,
  aux_sym_resource_repeat1 = 33,
  aux_sym_components_repeat1 = 34,
  aux_sym_components_repeat2 = 35,
  aux_sym_resource_value_repeat1 = 36,
  alias_sym_body = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [sym_comment] = "comment",
  [aux_sym_include_directive_token1] = "#include",
  [aux_sym_define_directive_token1] = "#define",
  [aux_sym_ifdef_directive_token1] = "#ifdef",
  [aux_sym_ifdef_directive_token2] = "#ifndef",
  [aux_sym_ifdef_directive_token3] = "#endif",
  [aux_sym_else_directive_token1] = "#else",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [aux_sym_resource_token1] = "resource_token1",
  [anon_sym_QMARK] = "any_component",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [sym_component] = "component",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_resource_value_token1] = "resource_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_content",
  [sym_resources] = "resources",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_include_directive] = "include_directive",
  [sym_define_directive] = "define_directive",
  [sym_ifdef_directive] = "ifdef_directive",
  [sym_else_directive] = "else_directive",
  [sym_resource] = "resource",
  [sym_components] = "components",
  [sym_binding] = "binding",
  [sym_resource_value] = "resource_value",
  [sym_string] = "string",
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
  [aux_sym_include_directive_token1] = aux_sym_include_directive_token1,
  [aux_sym_define_directive_token1] = aux_sym_define_directive_token1,
  [aux_sym_ifdef_directive_token1] = aux_sym_ifdef_directive_token1,
  [aux_sym_ifdef_directive_token2] = aux_sym_ifdef_directive_token2,
  [aux_sym_ifdef_directive_token3] = aux_sym_ifdef_directive_token3,
  [aux_sym_else_directive_token1] = aux_sym_else_directive_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_resource_token1] = aux_sym_resource_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_component] = sym_component,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_resource_value_token1] = aux_sym_resource_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_resources] = sym_resources,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_include_directive] = sym_include_directive,
  [sym_define_directive] = sym_define_directive,
  [sym_ifdef_directive] = sym_ifdef_directive,
  [sym_else_directive] = sym_else_directive,
  [sym_resource] = sym_resource,
  [sym_components] = sym_components,
  [sym_binding] = sym_binding,
  [sym_resource_value] = sym_resource_value,
  [sym_string] = sym_string,
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
  [aux_sym_include_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_directive_token1] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = true,
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_file, 1},
  [1] =
    {field_name, 0},
    {field_value, 2},
  [3] =
    {field_condition, 1},
  [4] =
    {field_name, 0},
    {field_value, 3},
  [6] =
    {field_alternative, 3},
    {field_condition, 1},
  [8] =
    {field_condition, 1},
    {field_consequence, 3},
  [10] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [3] = alias_sym_body,
  },
  [7] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '!', 33,
        '"', 54,
        '#', 52,
        '*', 47,
        '.', 46,
        ':', 42,
        '?', 45,
        '\\', 53,
        '\t', 43,
        ' ', 43,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '!', 33,
        '"', 54,
        '#', 3,
        '*', 47,
        '.', 46,
        ':', 42,
        '?', 45,
        '\t', 43,
        ' ', 43,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_define_directive_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token3);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_else_directive_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(28);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 55},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_include_directive_token1] = ACTIONS(1),
    [aux_sym_define_directive_token1] = ACTIONS(1),
    [aux_sym_ifdef_directive_token1] = ACTIONS(1),
    [aux_sym_ifdef_directive_token2] = ACTIONS(1),
    [aux_sym_ifdef_directive_token3] = ACTIONS(1),
    [aux_sym_else_directive_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_component] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_resource_value_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_resources] = STATE(39),
    [sym__line] = STATE(9),
    [sym__statement] = STATE(35),
    [sym_include_directive] = STATE(35),
    [sym_define_directive] = STATE(35),
    [sym_ifdef_directive] = STATE(35),
    [sym_resource] = STATE(35),
    [sym_components] = STATE(33),
    [sym_binding] = STATE(22),
    [aux_sym_resources_repeat1] = STATE(7),
    [aux_sym_components_repeat2] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [sym_component] = ACTIONS(21),
  },
  [2] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(35),
    [sym_include_directive] = STATE(35),
    [sym_define_directive] = STATE(35),
    [sym_ifdef_directive] = STATE(35),
    [sym_else_directive] = STATE(45),
    [sym_resource] = STATE(35),
    [sym_components] = STATE(33),
    [sym_binding] = STATE(22),
    [aux_sym_resources_repeat1] = STATE(3),
    [aux_sym_components_repeat2] = STATE(23),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_ifdef_directive_token3] = ACTIONS(23),
    [aux_sym_else_directive_token1] = ACTIONS(25),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [sym_component] = ACTIONS(21),
  },
  [3] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(35),
    [sym_include_directive] = STATE(35),
    [sym_define_directive] = STATE(35),
    [sym_ifdef_directive] = STATE(35),
    [sym_resource] = STATE(35),
    [sym_components] = STATE(33),
    [sym_binding] = STATE(22),
    [aux_sym_resources_repeat1] = STATE(3),
    [aux_sym_components_repeat2] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(32),
    [aux_sym_include_directive_token1] = ACTIONS(35),
    [aux_sym_define_directive_token1] = ACTIONS(38),
    [aux_sym_ifdef_directive_token1] = ACTIONS(41),
    [aux_sym_ifdef_directive_token2] = ACTIONS(41),
    [aux_sym_ifdef_directive_token3] = ACTIONS(27),
    [aux_sym_else_directive_token1] = ACTIONS(27),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [sym_component] = ACTIONS(50),
  },
  [4] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(35),
    [sym_include_directive] = STATE(35),
    [sym_define_directive] = STATE(35),
    [sym_ifdef_directive] = STATE(35),
    [sym_else_directive] = STATE(38),
    [sym_resource] = STATE(35),
    [sym_components] = STATE(33),
    [sym_binding] = STATE(22),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat2] = STATE(23),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_ifdef_directive_token3] = ACTIONS(53),
    [aux_sym_else_directive_token1] = ACTIONS(25),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [sym_component] = ACTIONS(21),
  },
  [5] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(35),
    [sym_include_directive] = STATE(35),
    [sym_define_directive] = STATE(35),
    [sym_ifdef_directive] = STATE(35),
    [sym_resource] = STATE(35),
    [sym_components] = STATE(33),
    [sym_binding] = STATE(22),
    [aux_sym_resources_repeat1] = STATE(3),
    [aux_sym_components_repeat2] = STATE(23),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_ifdef_directive_token3] = ACTIONS(55),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [sym_component] = ACTIONS(21),
  },
  [6] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(35),
    [sym_include_directive] = STATE(35),
    [sym_define_directive] = STATE(35),
    [sym_ifdef_directive] = STATE(35),
    [sym_resource] = STATE(35),
    [sym_components] = STATE(33),
    [sym_binding] = STATE(22),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat2] = STATE(23),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_ifdef_directive_token3] = ACTIONS(57),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [sym_component] = ACTIONS(21),
  },
  [7] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(35),
    [sym_include_directive] = STATE(35),
    [sym_define_directive] = STATE(35),
    [sym_ifdef_directive] = STATE(35),
    [sym_resource] = STATE(35),
    [sym_components] = STATE(33),
    [sym_binding] = STATE(22),
    [aux_sym_resources_repeat1] = STATE(3),
    [aux_sym_components_repeat2] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(59),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [sym_component] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(61), 13,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym_ifdef_directive_token3,
      aux_sym_else_directive_token1,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
  [19] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(63), 13,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym_ifdef_directive_token3,
      aux_sym_else_directive_token1,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
  [38] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(19), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_QMARK,
      sym_component,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [54] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(67), 2,
      anon_sym_QMARK,
      sym_component,
    ACTIONS(69), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [70] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(72), 1,
      anon_sym_COLON,
    ACTIONS(19), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(10), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [85] = 6,
    ACTIONS(74), 1,
      aux_sym_resource_token1,
    ACTIONS(76), 1,
      sym_escape_sequence,
    ACTIONS(78), 1,
      aux_sym_resource_value_token1,
    STATE(18), 1,
      aux_sym_resource_value_repeat1,
    STATE(25), 1,
      aux_sym_resource_repeat1,
    STATE(40), 1,
      sym_resource_value,
  [104] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(80), 1,
      anon_sym_COLON,
    ACTIONS(19), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(10), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [119] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(19), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(10), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [134] = 6,
    ACTIONS(76), 1,
      sym_escape_sequence,
    ACTIONS(78), 1,
      aux_sym_resource_value_token1,
    ACTIONS(84), 1,
      aux_sym_resource_token1,
    STATE(13), 1,
      aux_sym_resource_repeat1,
    STATE(18), 1,
      aux_sym_resource_value_repeat1,
    STATE(32), 1,
      sym_resource_value,
  [153] = 3,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(19), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(10), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [165] = 5,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(86), 1,
      aux_sym__line_token1,
    ACTIONS(88), 1,
      sym_escape_sequence,
    ACTIONS(90), 1,
      aux_sym_resource_value_token1,
    STATE(20), 1,
      aux_sym_resource_value_repeat1,
  [181] = 5,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(76), 1,
      sym_escape_sequence,
    ACTIONS(78), 1,
      aux_sym_resource_value_token1,
    STATE(18), 1,
      aux_sym_resource_value_repeat1,
    STATE(29), 1,
      sym_resource_value,
  [197] = 5,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(92), 1,
      aux_sym__line_token1,
    ACTIONS(94), 1,
      sym_escape_sequence,
    ACTIONS(97), 1,
      aux_sym_resource_value_token1,
    STATE(20), 1,
      aux_sym_resource_value_repeat1,
  [213] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(100), 4,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
  [223] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(102), 1,
      sym_component,
    STATE(26), 1,
      aux_sym_components_repeat2,
  [236] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(102), 1,
      sym_component,
    STATE(24), 1,
      aux_sym_components_repeat2,
  [249] = 3,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    STATE(24), 1,
      aux_sym_components_repeat2,
    ACTIONS(104), 2,
      anon_sym_QMARK,
      sym_component,
  [260] = 4,
    ACTIONS(107), 1,
      aux_sym_resource_token1,
    ACTIONS(110), 1,
      sym_escape_sequence,
    ACTIONS(112), 1,
      aux_sym_resource_value_token1,
    STATE(25), 1,
      aux_sym_resource_repeat1,
  [273] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(114), 1,
      sym_component,
    STATE(24), 1,
      aux_sym_components_repeat2,
  [286] = 3,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_string,
  [296] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(118), 1,
      aux_sym__line_token1,
  [303] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(120), 1,
      aux_sym__line_token1,
  [310] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(122), 1,
      aux_sym__line_token1,
  [317] = 2,
    ACTIONS(124), 1,
      aux_sym_resource_token1,
    ACTIONS(126), 1,
      aux_sym_string_token1,
  [324] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(128), 1,
      aux_sym__line_token1,
  [331] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(130), 1,
      anon_sym_COLON,
  [338] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(132), 1,
      aux_sym__line_token1,
  [345] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(134), 1,
      aux_sym__line_token1,
  [352] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(136), 1,
      aux_sym__line_token1,
  [359] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(138), 1,
      aux_sym__line_token1,
  [366] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(140), 1,
      aux_sym_ifdef_directive_token3,
  [373] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [380] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(144), 1,
      aux_sym__line_token1,
  [387] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
  [394] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(148), 1,
      sym_identifier,
  [401] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(150), 1,
      aux_sym__line_token1,
  [408] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(152), 1,
      aux_sym__line_token1,
  [415] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(154), 1,
      aux_sym_ifdef_directive_token3,
  [422] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(156), 1,
      sym_identifier,
  [429] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(158), 1,
      aux_sym__line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 19,
  [SMALL_STATE(10)] = 38,
  [SMALL_STATE(11)] = 54,
  [SMALL_STATE(12)] = 70,
  [SMALL_STATE(13)] = 85,
  [SMALL_STATE(14)] = 104,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 134,
  [SMALL_STATE(17)] = 153,
  [SMALL_STATE(18)] = 165,
  [SMALL_STATE(19)] = 181,
  [SMALL_STATE(20)] = 197,
  [SMALL_STATE(21)] = 213,
  [SMALL_STATE(22)] = 223,
  [SMALL_STATE(23)] = 236,
  [SMALL_STATE(24)] = 249,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 273,
  [SMALL_STATE(27)] = 286,
  [SMALL_STATE(28)] = 296,
  [SMALL_STATE(29)] = 303,
  [SMALL_STATE(30)] = 310,
  [SMALL_STATE(31)] = 317,
  [SMALL_STATE(32)] = 324,
  [SMALL_STATE(33)] = 331,
  [SMALL_STATE(34)] = 338,
  [SMALL_STATE(35)] = 345,
  [SMALL_STATE(36)] = 352,
  [SMALL_STATE(37)] = 359,
  [SMALL_STATE(38)] = 366,
  [SMALL_STATE(39)] = 373,
  [SMALL_STATE(40)] = 380,
  [SMALL_STATE(41)] = 387,
  [SMALL_STATE(42)] = 394,
  [SMALL_STATE(43)] = 401,
  [SMALL_STATE(44)] = 408,
  [SMALL_STATE(45)] = 415,
  [SMALL_STATE(46)] = 422,
  [SMALL_STATE(47)] = 429,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0), SHIFT_REPEAT(17),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 4, 0, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 6, 0, 7),
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
