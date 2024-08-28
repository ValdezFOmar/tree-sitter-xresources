#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_resources_token1 = 1,
  sym_comment = 2,
  aux_sym_include_directive_token1 = 3,
  aux_sym_define_directive_token1 = 4,
  sym_identifier = 5,
  anon_sym_COLON = 6,
  aux_sym_resource_token1 = 7,
  anon_sym_QMARK = 8,
  anon_sym_DOT = 9,
  anon_sym_STAR = 10,
  sym_component = 11,
  sym_escape_sequence = 12,
  aux_sym_resource_value_token1 = 13,
  anon_sym_BSLASH_LF = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token1 = 16,
  sym_resources = 17,
  sym__statement = 18,
  sym_include_directive = 19,
  sym_define_directive = 20,
  sym_resource = 21,
  sym_components = 22,
  sym_binding = 23,
  sym_resource_value = 24,
  sym_string = 25,
  aux_sym_resources_repeat1 = 26,
  aux_sym_resource_repeat1 = 27,
  aux_sym_components_repeat1 = 28,
  aux_sym_resource_value_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_resources_token1] = "resources_token1",
  [sym_comment] = "comment",
  [aux_sym_include_directive_token1] = "#include",
  [aux_sym_define_directive_token1] = "#define",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [aux_sym_resource_token1] = "resource_token1",
  [anon_sym_QMARK] = "any_component",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [sym_component] = "component",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_resource_value_token1] = "resource_value_token1",
  [anon_sym_BSLASH_LF] = "\\",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_content",
  [sym_resources] = "resources",
  [sym__statement] = "_statement",
  [sym_include_directive] = "include_directive",
  [sym_define_directive] = "define_directive",
  [sym_resource] = "resource",
  [sym_components] = "components",
  [sym_binding] = "binding",
  [sym_resource_value] = "resource_value",
  [sym_string] = "string",
  [aux_sym_resources_repeat1] = "resources_repeat1",
  [aux_sym_resource_repeat1] = "resource_repeat1",
  [aux_sym_components_repeat1] = "components_repeat1",
  [aux_sym_resource_value_repeat1] = "resource_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_resources_token1] = aux_sym_resources_token1,
  [sym_comment] = sym_comment,
  [aux_sym_include_directive_token1] = aux_sym_include_directive_token1,
  [aux_sym_define_directive_token1] = aux_sym_define_directive_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_resource_token1] = aux_sym_resource_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_component] = sym_component,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_resource_value_token1] = aux_sym_resource_value_token1,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_resources] = sym_resources,
  [sym__statement] = sym__statement,
  [sym_include_directive] = sym_include_directive,
  [sym_define_directive] = sym_define_directive,
  [sym_resource] = sym_resource,
  [sym_components] = sym_components,
  [sym_binding] = sym_binding,
  [sym_resource_value] = sym_resource_value,
  [sym_string] = sym_string,
  [aux_sym_resources_repeat1] = aux_sym_resources_repeat1,
  [aux_sym_resource_repeat1] = aux_sym_resource_repeat1,
  [aux_sym_components_repeat1] = aux_sym_components_repeat1,
  [aux_sym_resource_value_repeat1] = aux_sym_resource_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_resources_token1] = {
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
  [anon_sym_BSLASH_LF] = {
    .visible = true,
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
  [aux_sym_resource_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_file = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file] = "file",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_file, 1},
  [1] =
    {field_name, 0},
    {field_value, 2},
  [3] =
    {field_name, 0},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '\n', 20,
        '!', 21,
        '"', 39,
        '#', 37,
        '*', 31,
        '.', 30,
        ':', 26,
        '?', 29,
        '\\', 36,
        '\t', 27,
        ' ', 27,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '\n', 20,
        '!', 21,
        '"', 39,
        '#', 3,
        '*', 31,
        '.', 30,
        ':', 26,
        '?', 29,
        '\t', 27,
        ' ', 27,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_resources_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_define_directive_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_resources_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_include_directive_token1] = ACTIONS(1),
    [aux_sym_define_directive_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_component] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_resource_value_token1] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_resources] = STATE(32),
    [sym__statement] = STATE(22),
    [sym_include_directive] = STATE(22),
    [sym_define_directive] = STATE(22),
    [sym_resource] = STATE(22),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(14),
    [aux_sym_resources_repeat1] = STATE(3),
    [aux_sym_components_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_resources_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [sym_component] = ACTIONS(19),
  },
  [2] = {
    [sym__statement] = STATE(22),
    [sym_include_directive] = STATE(22),
    [sym_define_directive] = STATE(22),
    [sym_resource] = STATE(22),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(14),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_resources_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(26),
    [aux_sym_include_directive_token1] = ACTIONS(29),
    [aux_sym_define_directive_token1] = ACTIONS(32),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(38),
    [anon_sym_STAR] = ACTIONS(38),
    [sym_component] = ACTIONS(41),
  },
  [3] = {
    [sym__statement] = STATE(22),
    [sym_include_directive] = STATE(22),
    [sym_define_directive] = STATE(22),
    [sym_resource] = STATE(22),
    [sym_components] = STATE(30),
    [sym_binding] = STATE(14),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_resources_token1] = ACTIONS(46),
    [sym_comment] = ACTIONS(9),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [sym_component] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      aux_sym_resources_token1,
      sym_comment,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
  [15] = 6,
    ACTIONS(48), 1,
      aux_sym_resource_token1,
    ACTIONS(52), 1,
      aux_sym_resource_value_token1,
    STATE(6), 1,
      aux_sym_resource_repeat1,
    STATE(9), 1,
      aux_sym_resource_value_repeat1,
    STATE(26), 1,
      sym_resource_value,
    ACTIONS(50), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [35] = 6,
    ACTIONS(52), 1,
      aux_sym_resource_value_token1,
    ACTIONS(54), 1,
      aux_sym_resource_token1,
    STATE(9), 1,
      aux_sym_resource_value_repeat1,
    STATE(10), 1,
      aux_sym_resource_repeat1,
    STATE(31), 1,
      sym_resource_value,
    ACTIONS(50), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [55] = 5,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(52), 1,
      aux_sym_resource_value_token1,
    STATE(9), 1,
      aux_sym_resource_value_repeat1,
    STATE(24), 1,
      sym_resource_value,
    ACTIONS(50), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [72] = 5,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(56), 1,
      aux_sym_resources_token1,
    ACTIONS(61), 1,
      aux_sym_resource_value_token1,
    STATE(8), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(58), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [89] = 5,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(64), 1,
      aux_sym_resources_token1,
    ACTIONS(68), 1,
      aux_sym_resource_value_token1,
    STATE(8), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(66), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [106] = 4,
    ACTIONS(70), 1,
      aux_sym_resource_token1,
    ACTIONS(75), 1,
      aux_sym_resource_value_token1,
    STATE(10), 1,
      aux_sym_resource_repeat1,
    ACTIONS(73), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [120] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(77), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym_binding,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
  [134] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(79), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym_binding,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
  [148] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(81), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym_binding,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
  [162] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(83), 1,
      sym_component,
    STATE(17), 1,
      aux_sym_components_repeat1,
  [175] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(83), 1,
      sym_component,
    STATE(16), 1,
      aux_sym_components_repeat1,
  [188] = 3,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    STATE(16), 1,
      aux_sym_components_repeat1,
    ACTIONS(85), 2,
      anon_sym_QMARK,
      sym_component,
  [199] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(88), 1,
      sym_component,
    STATE(16), 1,
      aux_sym_components_repeat1,
  [212] = 3,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    STATE(19), 1,
      sym_binding,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
  [223] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(90), 2,
      anon_sym_QMARK,
      sym_component,
  [231] = 3,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_string,
  [241] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(94), 2,
      anon_sym_QMARK,
      sym_component,
  [249] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(96), 1,
      aux_sym_resources_token1,
  [256] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
  [263] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(100), 1,
      aux_sym_resources_token1,
  [270] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(102), 1,
      sym_identifier,
  [277] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(104), 1,
      aux_sym_resources_token1,
  [284] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(106), 1,
      aux_sym_resources_token1,
  [291] = 2,
    ACTIONS(108), 1,
      aux_sym_resource_token1,
    ACTIONS(110), 1,
      aux_sym_string_token1,
  [298] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(112), 1,
      aux_sym_resources_token1,
  [305] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(114), 1,
      anon_sym_COLON,
  [312] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(116), 1,
      aux_sym_resources_token1,
  [319] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 35,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 148,
  [SMALL_STATE(14)] = 162,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 188,
  [SMALL_STATE(17)] = 199,
  [SMALL_STATE(18)] = 212,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 241,
  [SMALL_STATE(22)] = 249,
  [SMALL_STATE(23)] = 256,
  [SMALL_STATE(24)] = 263,
  [SMALL_STATE(25)] = 270,
  [SMALL_STATE(26)] = 277,
  [SMALL_STATE(27)] = 284,
  [SMALL_STATE(28)] = 291,
  [SMALL_STATE(29)] = 298,
  [SMALL_STATE(30)] = 305,
  [SMALL_STATE(31)] = 312,
  [SMALL_STATE(32)] = 319,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 3),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
