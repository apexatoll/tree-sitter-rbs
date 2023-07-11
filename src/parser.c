#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 1
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_class = 1,
  anon_sym_end = 2,
  anon_sym_module = 3,
  anon_sym_interface = 4,
  anon_sym_type = 5,
  anon_sym_EQ = 6,
  sym__constant = 7,
  sym__interface = 8,
  sym__scope = 9,
  anon_sym_untyped = 10,
  sym_program = 11,
  sym_declaration = 12,
  sym_class_declaration = 13,
  sym_module_declaration = 14,
  sym_interface_declaration = 15,
  sym_type_alias_declaration = 16,
  sym_class_name = 17,
  sym_interface_name = 18,
  sym_namespace = 19,
  sym_type = 20,
  aux_sym_program_repeat1 = 21,
  alias_sym_module_name = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_interface] = "interface",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
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
  [sym_class_name] = "class_name",
  [sym_interface_name] = "interface_name",
  [sym_namespace] = "namespace",
  [sym_type] = "type",
  [aux_sym_program_repeat1] = "program_repeat1",
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
  [sym_class_name] = sym_class_name,
  [sym_interface_name] = sym_interface_name,
  [sym_namespace] = sym_namespace,
  [sym_type] = sym_type,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(3);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 30:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 41:
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
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
    [sym__constant] = ACTIONS(1),
    [sym__interface] = ACTIONS(1),
    [sym__scope] = ACTIONS(1),
    [anon_sym_untyped] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(29),
    [sym_declaration] = STATE(2),
    [sym_class_declaration] = STATE(8),
    [sym_module_declaration] = STATE(8),
    [sym_interface_declaration] = STATE(8),
    [sym_type_alias_declaration] = STATE(8),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_class,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_interface,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(8), 4,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
  [26] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(20), 1,
      anon_sym_module,
    ACTIONS(23), 1,
      anon_sym_interface,
    ACTIONS(26), 1,
      anon_sym_type,
    STATE(3), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(8), 4,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
  [52] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [60] = 5,
    ACTIONS(31), 1,
      sym__constant,
    ACTIONS(33), 1,
      sym__interface,
    ACTIONS(35), 1,
      sym__scope,
    STATE(13), 1,
      sym_namespace,
    STATE(22), 1,
      sym_interface_name,
  [76] = 1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [84] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [92] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [100] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [108] = 1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [116] = 4,
    ACTIONS(35), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    STATE(24), 1,
      sym_class_name,
    STATE(25), 1,
      sym_namespace,
  [129] = 4,
    ACTIONS(35), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    STATE(25), 1,
      sym_namespace,
    STATE(26), 1,
      sym_class_name,
  [142] = 2,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(51), 1,
      sym__interface,
  [149] = 2,
    ACTIONS(53), 1,
      anon_sym_untyped,
    STATE(6), 1,
      sym_type,
  [156] = 1,
    ACTIONS(55), 2,
      sym__constant,
      sym__interface,
  [161] = 2,
    ACTIONS(57), 1,
      anon_sym_end,
    ACTIONS(59), 1,
      sym__scope,
  [168] = 1,
    ACTIONS(61), 2,
      sym__constant,
      sym__interface,
  [173] = 2,
    ACTIONS(63), 1,
      anon_sym_end,
    ACTIONS(65), 1,
      sym__scope,
  [180] = 1,
    ACTIONS(67), 2,
      sym__constant,
      sym__interface,
  [185] = 1,
    ACTIONS(65), 1,
      sym__scope,
  [189] = 1,
    ACTIONS(69), 1,
      anon_sym_end,
  [193] = 1,
    ACTIONS(71), 1,
      anon_sym_end,
  [197] = 1,
    ACTIONS(73), 1,
      anon_sym_EQ,
  [201] = 1,
    ACTIONS(75), 1,
      anon_sym_end,
  [205] = 1,
    ACTIONS(77), 1,
      sym__constant,
  [209] = 1,
    ACTIONS(79), 1,
      anon_sym_end,
  [213] = 1,
    ACTIONS(59), 1,
      sym__scope,
  [217] = 1,
    ACTIONS(81), 1,
      anon_sym_end,
  [221] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 161,
  [SMALL_STATE(17)] = 168,
  [SMALL_STATE(18)] = 173,
  [SMALL_STATE(19)] = 180,
  [SMALL_STATE(20)] = 185,
  [SMALL_STATE(21)] = 189,
  [SMALL_STATE(22)] = 193,
  [SMALL_STATE(23)] = 197,
  [SMALL_STATE(24)] = 201,
  [SMALL_STATE(25)] = 205,
  [SMALL_STATE(26)] = 209,
  [SMALL_STATE(27)] = 213,
  [SMALL_STATE(28)] = 217,
  [SMALL_STATE(29)] = 221,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
