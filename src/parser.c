#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 31
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
  aux_sym_components_repeat2 = 29,
  aux_sym_resource_value_repeat1 = 30,
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
  [aux_sym_components_repeat2] = "components_repeat2",
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
  [aux_sym_components_repeat2] = aux_sym_components_repeat2,
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
  [aux_sym_components_repeat2] = {
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
  [33] = 33,
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
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
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
    [sym_resources] = STATE(33),
    [sym__statement] = STATE(23),
    [sym_include_directive] = STATE(23),
    [sym_define_directive] = STATE(23),
    [sym_resource] = STATE(23),
    [sym_components] = STATE(31),
    [sym_binding] = STATE(19),
    [aux_sym_resources_repeat1] = STATE(3),
    [aux_sym_components_repeat2] = STATE(18),
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
    [sym__statement] = STATE(23),
    [sym_include_directive] = STATE(23),
    [sym_define_directive] = STATE(23),
    [sym_resource] = STATE(23),
    [sym_components] = STATE(31),
    [sym_binding] = STATE(19),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat2] = STATE(18),
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
    [sym__statement] = STATE(23),
    [sym_include_directive] = STATE(23),
    [sym_define_directive] = STATE(23),
    [sym_resource] = STATE(23),
    [sym_components] = STATE(31),
    [sym_binding] = STATE(19),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat2] = STATE(18),
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
  [15] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(48), 2,
      anon_sym_QMARK,
      sym_component,
    STATE(8), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [31] = 6,
    ACTIONS(50), 1,
      aux_sym_resource_token1,
    ACTIONS(54), 1,
      aux_sym_resource_value_token1,
    STATE(7), 1,
      aux_sym_resource_repeat1,
    STATE(10), 1,
      aux_sym_resource_value_repeat1,
    STATE(27), 1,
      sym_resource_value,
    ACTIONS(52), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [51] = 6,
    ACTIONS(54), 1,
      aux_sym_resource_value_token1,
    ACTIONS(56), 1,
      aux_sym_resource_token1,
    STATE(10), 1,
      aux_sym_resource_value_repeat1,
    STATE(17), 1,
      aux_sym_resource_repeat1,
    STATE(32), 1,
      sym_resource_value,
    ACTIONS(52), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [71] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(58), 2,
      anon_sym_QMARK,
      sym_component,
    ACTIONS(60), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(8), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [87] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(5), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [102] = 5,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(65), 1,
      aux_sym_resources_token1,
    ACTIONS(69), 1,
      aux_sym_resource_value_token1,
    STATE(12), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(67), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [119] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(71), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(5), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [134] = 5,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(73), 1,
      aux_sym_resources_token1,
    ACTIONS(78), 1,
      aux_sym_resource_value_token1,
    STATE(12), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(75), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [151] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(5), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [166] = 5,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(54), 1,
      aux_sym_resource_value_token1,
    STATE(10), 1,
      aux_sym_resource_value_repeat1,
    STATE(24), 1,
      sym_resource_value,
    ACTIONS(52), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [183] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(83), 4,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
  [193] = 3,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(5), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [205] = 4,
    ACTIONS(85), 1,
      aux_sym_resource_token1,
    ACTIONS(90), 1,
      aux_sym_resource_value_token1,
    STATE(17), 1,
      aux_sym_resource_repeat1,
    ACTIONS(88), 2,
      sym_escape_sequence,
      anon_sym_BSLASH_LF,
  [219] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      sym_component,
    STATE(21), 1,
      aux_sym_components_repeat2,
  [232] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      sym_component,
    STATE(20), 1,
      aux_sym_components_repeat2,
  [245] = 4,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(15), 1,
      anon_sym_QMARK,
    ACTIONS(94), 1,
      sym_component,
    STATE(21), 1,
      aux_sym_components_repeat2,
  [258] = 3,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    STATE(21), 1,
      aux_sym_components_repeat2,
    ACTIONS(96), 2,
      anon_sym_QMARK,
      sym_component,
  [269] = 3,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_string,
  [279] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(101), 1,
      aux_sym_resources_token1,
  [286] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(103), 1,
      aux_sym_resources_token1,
  [293] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
  [300] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(107), 1,
      sym_identifier,
  [307] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(109), 1,
      aux_sym_resources_token1,
  [314] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(111), 1,
      aux_sym_resources_token1,
  [321] = 2,
    ACTIONS(113), 1,
      aux_sym_resource_token1,
    ACTIONS(115), 1,
      aux_sym_string_token1,
  [328] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(117), 1,
      aux_sym_resources_token1,
  [335] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(119), 1,
      anon_sym_COLON,
  [342] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(121), 1,
      aux_sym_resources_token1,
  [349] = 2,
    ACTIONS(3), 1,
      aux_sym_resource_token1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 51,
  [SMALL_STATE(8)] = 71,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 183,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 205,
  [SMALL_STATE(18)] = 219,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 279,
  [SMALL_STATE(24)] = 286,
  [SMALL_STATE(25)] = 293,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 307,
  [SMALL_STATE(28)] = 314,
  [SMALL_STATE(29)] = 321,
  [SMALL_STATE(30)] = 328,
  [SMALL_STATE(31)] = 335,
  [SMALL_STATE(32)] = 342,
  [SMALL_STATE(33)] = 349,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 3),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
