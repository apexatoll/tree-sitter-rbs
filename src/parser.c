#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 2
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  sym__constant = 1,
  sym__global = 2,
  sym__interface = 3,
  sym__scope = 4,
  anon_sym_class = 5,
  anon_sym_end = 6,
  anon_sym_module = 7,
  anon_sym_interface = 8,
  anon_sym_type = 9,
  anon_sym_EQ = 10,
  anon_sym_COLON = 11,
  anon_sym_untyped = 12,
  sym_program = 13,
  sym_declaration = 14,
  sym_class_declaration = 15,
  sym_module_declaration = 16,
  sym_interface_declaration = 17,
  sym_type_alias_declaration = 18,
  sym_constant_declaration = 19,
  sym_global_declaration = 20,
  sym_class_name = 21,
  sym_interface_name = 22,
  sym_namespace = 23,
  sym_type = 24,
  aux_sym_program_repeat1 = 25,
  alias_sym_constant = 26,
  alias_sym_module_name = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__constant] = "_constant",
  [sym__global] = "global",
  [sym__interface] = "_interface",
  [sym__scope] = "_scope",
  [anon_sym_class] = "class",
  [anon_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_interface] = "interface",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_untyped] = "untyped",
  [sym_program] = "program",
  [sym_declaration] = "declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym_global_declaration] = "global_declaration",
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
  [sym__constant] = sym__constant,
  [sym__global] = sym__global,
  [sym__interface] = sym__interface,
  [sym__scope] = sym__scope,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_untyped] = anon_sym_untyped,
  [sym_program] = sym_program,
  [sym_declaration] = sym_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_constant_declaration] = sym_constant_declaration,
  [sym_global_declaration] = sym_global_declaration,
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
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym__global] = {
    .visible = true,
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
  [sym_global_declaration] = {
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
    [0] = alias_sym_constant,
  },
  [2] = {
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '=') ADVANCE(45);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(46);
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
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(43);
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
      if (lookahead == 's') ADVANCE(40);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 33:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 48:
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
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__constant] = ACTIONS(1),
    [sym__global] = ACTIONS(1),
    [sym__interface] = ACTIONS(1),
    [sym__scope] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_untyped] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(31),
    [sym_declaration] = STATE(3),
    [sym_class_declaration] = STATE(8),
    [sym_module_declaration] = STATE(8),
    [sym_interface_declaration] = STATE(8),
    [sym_type_alias_declaration] = STATE(8),
    [sym_constant_declaration] = STATE(8),
    [sym_global_declaration] = STATE(8),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__constant] = ACTIONS(5),
    [sym__global] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
  },
  [2] = {
    [sym_declaration] = STATE(2),
    [sym_class_declaration] = STATE(8),
    [sym_module_declaration] = STATE(8),
    [sym_interface_declaration] = STATE(8),
    [sym_type_alias_declaration] = STATE(8),
    [sym_constant_declaration] = STATE(8),
    [sym_global_declaration] = STATE(8),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__constant] = ACTIONS(19),
    [sym__global] = ACTIONS(22),
    [anon_sym_class] = ACTIONS(25),
    [anon_sym_module] = ACTIONS(28),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_type] = ACTIONS(34),
  },
  [3] = {
    [sym_declaration] = STATE(2),
    [sym_class_declaration] = STATE(8),
    [sym_module_declaration] = STATE(8),
    [sym_interface_declaration] = STATE(8),
    [sym_type_alias_declaration] = STATE(8),
    [sym_constant_declaration] = STATE(8),
    [sym_global_declaration] = STATE(8),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__constant] = ACTIONS(5),
    [sym__global] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [10] = 1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [20] = 1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [30] = 1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [40] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [50] = 1,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [60] = 1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [70] = 1,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [80] = 5,
    ACTIONS(55), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(59), 1,
      sym__scope,
    STATE(16), 1,
      sym_namespace,
    STATE(28), 1,
      sym_interface_name,
  [96] = 4,
    ACTIONS(59), 1,
      sym__scope,
    ACTIONS(61), 1,
      sym__constant,
    STATE(24), 1,
      sym_namespace,
    STATE(30), 1,
      sym_class_name,
  [109] = 4,
    ACTIONS(59), 1,
      sym__scope,
    ACTIONS(61), 1,
      sym__constant,
    STATE(24), 1,
      sym_namespace,
    STATE(25), 1,
      sym_class_name,
  [122] = 1,
    ACTIONS(63), 2,
      sym__constant,
      sym__interface,
  [127] = 2,
    ACTIONS(65), 1,
      sym__constant,
    ACTIONS(67), 1,
      sym__interface,
  [134] = 2,
    ACTIONS(69), 1,
      anon_sym_untyped,
    STATE(4), 1,
      sym_type,
  [141] = 1,
    ACTIONS(71), 2,
      sym__constant,
      sym__interface,
  [146] = 2,
    ACTIONS(73), 1,
      sym__scope,
    ACTIONS(75), 1,
      anon_sym_end,
  [153] = 2,
    ACTIONS(69), 1,
      anon_sym_untyped,
    STATE(9), 1,
      sym_type,
  [160] = 2,
    ACTIONS(69), 1,
      anon_sym_untyped,
    STATE(10), 1,
      sym_type,
  [167] = 2,
    ACTIONS(77), 1,
      sym__scope,
    ACTIONS(79), 1,
      anon_sym_end,
  [174] = 1,
    ACTIONS(81), 2,
      sym__constant,
      sym__interface,
  [179] = 1,
    ACTIONS(83), 1,
      sym__constant,
  [183] = 1,
    ACTIONS(85), 1,
      anon_sym_end,
  [187] = 1,
    ACTIONS(73), 1,
      sym__scope,
  [191] = 1,
    ACTIONS(87), 1,
      anon_sym_end,
  [195] = 1,
    ACTIONS(89), 1,
      anon_sym_end,
  [199] = 1,
    ACTIONS(91), 1,
      anon_sym_COLON,
  [203] = 1,
    ACTIONS(93), 1,
      anon_sym_end,
  [207] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
  [211] = 1,
    ACTIONS(97), 1,
      anon_sym_EQ,
  [215] = 1,
    ACTIONS(77), 1,
      sym__scope,
  [219] = 1,
    ACTIONS(99), 1,
      anon_sym_end,
  [223] = 1,
    ACTIONS(101), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 80,
  [SMALL_STATE(13)] = 96,
  [SMALL_STATE(14)] = 109,
  [SMALL_STATE(15)] = 122,
  [SMALL_STATE(16)] = 127,
  [SMALL_STATE(17)] = 134,
  [SMALL_STATE(18)] = 141,
  [SMALL_STATE(19)] = 146,
  [SMALL_STATE(20)] = 153,
  [SMALL_STATE(21)] = 160,
  [SMALL_STATE(22)] = 167,
  [SMALL_STATE(23)] = 174,
  [SMALL_STATE(24)] = 179,
  [SMALL_STATE(25)] = 183,
  [SMALL_STATE(26)] = 187,
  [SMALL_STATE(27)] = 191,
  [SMALL_STATE(28)] = 195,
  [SMALL_STATE(29)] = 199,
  [SMALL_STATE(30)] = 203,
  [SMALL_STATE(31)] = 207,
  [SMALL_STATE(32)] = 211,
  [SMALL_STATE(33)] = 215,
  [SMALL_STATE(34)] = 219,
  [SMALL_STATE(35)] = 223,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
