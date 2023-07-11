#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 2
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_class = 1,
  anon_sym_end = 2,
  anon_sym_module = 3,
  anon_sym_interface = 4,
  anon_sym_type = 5,
  anon_sym_EQ = 6,
  anon_sym_COLON = 7,
  sym__constant = 8,
  sym__interface = 9,
  sym__scope = 10,
  anon_sym_untyped = 11,
  sym_program = 12,
  sym_declaration = 13,
  sym_class_declaration = 14,
  sym_module_declaration = 15,
  sym_interface_declaration = 16,
  sym_type_alias_declaration = 17,
  sym_constant_declaration = 18,
  sym_class_name = 19,
  sym_interface_name = 20,
  sym_namespace = 21,
  sym_type = 22,
  aux_sym_program_repeat1 = 23,
  alias_sym_constant = 24,
  alias_sym_module_name = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_interface] = "interface",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [sym__constant] = "_constant",
  [sym__interface] = "_interface",
  [sym__scope] = "_scope",
  [anon_sym_untyped] = "untyped",
  [sym_program] = "program",
  [sym_declaration] = "declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym_class_name] = "class_name",
  [sym_interface_name] = "interface_name",
  [sym_namespace] = "namespace",
  [sym_type] = "type",
  [aux_sym_program_repeat1] = "program_repeat1",
  [alias_sym_constant] = "constant",
  [alias_sym_module_name] = "module_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__constant] = sym__constant,
  [sym__interface] = sym__interface,
  [sym__scope] = sym__scope,
  [anon_sym_untyped] = anon_sym_untyped,
  [sym_program] = sym_program,
  [sym_declaration] = sym_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_constant_declaration] = sym_constant_declaration,
  [sym_class_name] = sym_class_name,
  [sym_interface_name] = sym_interface_name,
  [sym_namespace] = sym_namespace,
  [sym_type] = sym_type,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [alias_sym_constant] = alias_sym_constant,
  [alias_sym_module_name] = alias_sym_module_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym__interface] = {
    .visible = false,
    .named = true,
  },
  [sym__scope] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_untyped] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_name] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_constant] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_module_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_module_name,
  },
  [2] = {
    [0] = alias_sym_constant,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_class_name, 2,
    sym_class_name,
    alias_sym_module_name,
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
      if (eof) ADVANCE(33);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 32:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__constant] = ACTIONS(1),
    [sym__interface] = ACTIONS(1),
    [sym__scope] = ACTIONS(1),
    [anon_sym_untyped] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(31),
    [sym_declaration] = STATE(3),
    [sym_class_declaration] = STATE(7),
    [sym_module_declaration] = STATE(7),
    [sym_interface_declaration] = STATE(7),
    [sym_type_alias_declaration] = STATE(7),
    [sym_constant_declaration] = STATE(7),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [sym__constant] = ACTIONS(13),
  },
  [2] = {
    [sym_declaration] = STATE(2),
    [sym_class_declaration] = STATE(7),
    [sym_module_declaration] = STATE(7),
    [sym_interface_declaration] = STATE(7),
    [sym_type_alias_declaration] = STATE(7),
    [sym_constant_declaration] = STATE(7),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_module] = ACTIONS(20),
    [anon_sym_interface] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(26),
    [sym__constant] = ACTIONS(29),
  },
  [3] = {
    [sym_declaration] = STATE(2),
    [sym_class_declaration] = STATE(7),
    [sym_module_declaration] = STATE(7),
    [sym_interface_declaration] = STATE(7),
    [sym_type_alias_declaration] = STATE(7),
    [sym_constant_declaration] = STATE(7),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [sym__constant] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      sym__constant,
  [9] = 1,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      sym__constant,
  [18] = 1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      sym__constant,
  [27] = 1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      sym__constant,
  [36] = 1,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      sym__constant,
  [45] = 1,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      sym__constant,
  [54] = 1,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      sym__constant,
  [63] = 5,
    ACTIONS(48), 1,
      sym__constant,
    ACTIONS(50), 1,
      sym__interface,
    ACTIONS(52), 1,
      sym__scope,
    STATE(15), 1,
      sym_namespace,
    STATE(24), 1,
      sym_interface_name,
  [79] = 4,
    ACTIONS(52), 1,
      sym__scope,
    ACTIONS(54), 1,
      sym__constant,
    STATE(27), 1,
      sym_namespace,
    STATE(28), 1,
      sym_class_name,
  [92] = 4,
    ACTIONS(52), 1,
      sym__scope,
    ACTIONS(54), 1,
      sym__constant,
    STATE(26), 1,
      sym_class_name,
    STATE(27), 1,
      sym_namespace,
  [105] = 2,
    ACTIONS(56), 1,
      anon_sym_end,
    ACTIONS(58), 1,
      sym__scope,
  [112] = 2,
    ACTIONS(60), 1,
      sym__constant,
    ACTIONS(62), 1,
      sym__interface,
  [119] = 2,
    ACTIONS(64), 1,
      anon_sym_untyped,
    STATE(5), 1,
      sym_type,
  [126] = 2,
    ACTIONS(64), 1,
      anon_sym_untyped,
    STATE(4), 1,
      sym_type,
  [133] = 1,
    ACTIONS(66), 2,
      sym__constant,
      sym__interface,
  [138] = 1,
    ACTIONS(68), 2,
      sym__constant,
      sym__interface,
  [143] = 2,
    ACTIONS(70), 1,
      anon_sym_end,
    ACTIONS(72), 1,
      sym__scope,
  [150] = 1,
    ACTIONS(74), 2,
      sym__constant,
      sym__interface,
  [155] = 1,
    ACTIONS(72), 1,
      sym__scope,
  [159] = 1,
    ACTIONS(76), 1,
      anon_sym_end,
  [163] = 1,
    ACTIONS(78), 1,
      anon_sym_end,
  [167] = 1,
    ACTIONS(80), 1,
      anon_sym_EQ,
  [171] = 1,
    ACTIONS(82), 1,
      anon_sym_end,
  [175] = 1,
    ACTIONS(84), 1,
      sym__constant,
  [179] = 1,
    ACTIONS(86), 1,
      anon_sym_end,
  [183] = 1,
    ACTIONS(58), 1,
      sym__scope,
  [187] = 1,
    ACTIONS(88), 1,
      anon_sym_end,
  [191] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [195] = 1,
    ACTIONS(92), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 9,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 27,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 45,
  [SMALL_STATE(10)] = 54,
  [SMALL_STATE(11)] = 63,
  [SMALL_STATE(12)] = 79,
  [SMALL_STATE(13)] = 92,
  [SMALL_STATE(14)] = 105,
  [SMALL_STATE(15)] = 112,
  [SMALL_STATE(16)] = 119,
  [SMALL_STATE(17)] = 126,
  [SMALL_STATE(18)] = 133,
  [SMALL_STATE(19)] = 138,
  [SMALL_STATE(20)] = 143,
  [SMALL_STATE(21)] = 150,
  [SMALL_STATE(22)] = 155,
  [SMALL_STATE(23)] = 159,
  [SMALL_STATE(24)] = 163,
  [SMALL_STATE(25)] = 167,
  [SMALL_STATE(26)] = 171,
  [SMALL_STATE(27)] = 175,
  [SMALL_STATE(28)] = 179,
  [SMALL_STATE(29)] = 183,
  [SMALL_STATE(30)] = 187,
  [SMALL_STATE(31)] = 191,
  [SMALL_STATE(32)] = 195,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rbs(void) {
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
