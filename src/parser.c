#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 1
#define TOKEN_COUNT 10
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
  aux_sym_constant_token1 = 7,
  anon_sym_COLON_COLON = 8,
  anon_sym_untyped = 9,
  sym_program = 10,
  sym_declaration = 11,
  sym_class_declaration = 12,
  sym_module_declaration = 13,
  sym_interface_declaration = 14,
  sym_type_alias_declaration = 15,
  sym_constant = 16,
  sym_namespace = 17,
  sym_type = 18,
  aux_sym_program_repeat1 = 19,
  alias_sym_module_name = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_interface] = "interface",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [aux_sym_constant_token1] = "constant_token1",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_untyped] = "untyped",
  [sym_program] = "program",
  [sym_declaration] = "declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_constant] = "class_name",
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
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_untyped] = anon_sym_untyped,
  [sym_program] = sym_program,
  [sym_declaration] = sym_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_constant] = sym_constant,
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
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [sym_constant] = {
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
  sym_constant, 2,
    sym_constant,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '=') ADVANCE(36);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(38);
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
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(34);
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
      if (lookahead == 's') ADVANCE(31);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 39:
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
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_untyped] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(15),
    [sym_declaration] = STATE(3),
    [sym_class_declaration] = STATE(6),
    [sym_module_declaration] = STATE(6),
    [sym_interface_declaration] = STATE(6),
    [sym_type_alias_declaration] = STATE(6),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
  },
  [2] = {
    [sym_declaration] = STATE(2),
    [sym_class_declaration] = STATE(6),
    [sym_module_declaration] = STATE(6),
    [sym_interface_declaration] = STATE(6),
    [sym_type_alias_declaration] = STATE(6),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_class] = ACTIONS(15),
    [anon_sym_module] = ACTIONS(18),
    [anon_sym_interface] = ACTIONS(21),
    [anon_sym_type] = ACTIONS(24),
  },
  [3] = {
    [sym_declaration] = STATE(2),
    [sym_class_declaration] = STATE(6),
    [sym_module_declaration] = STATE(6),
    [sym_interface_declaration] = STATE(6),
    [sym_type_alias_declaration] = STATE(6),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [8] = 1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [16] = 1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [24] = 1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [32] = 1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [40] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [48] = 4,
    ACTIONS(41), 1,
      aux_sym_constant_token1,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    STATE(19), 1,
      sym_namespace,
    STATE(20), 1,
      sym_constant,
  [61] = 4,
    ACTIONS(41), 1,
      aux_sym_constant_token1,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    STATE(16), 1,
      sym_constant,
    STATE(19), 1,
      sym_namespace,
  [74] = 2,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
  [81] = 2,
    ACTIONS(49), 1,
      anon_sym_end,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
  [88] = 2,
    ACTIONS(53), 1,
      anon_sym_untyped,
    STATE(4), 1,
      sym_type,
  [95] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [99] = 1,
    ACTIONS(57), 1,
      anon_sym_end,
  [103] = 1,
    ACTIONS(59), 1,
      aux_sym_constant_token1,
  [107] = 1,
    ACTIONS(61), 1,
      anon_sym_end,
  [111] = 1,
    ACTIONS(63), 1,
      aux_sym_constant_token1,
  [115] = 1,
    ACTIONS(65), 1,
      anon_sym_end,
  [119] = 1,
    ACTIONS(67), 1,
      aux_sym_constant_token1,
  [123] = 1,
    ACTIONS(69), 1,
      anon_sym_EQ,
  [127] = 1,
    ACTIONS(71), 1,
      aux_sym_constant_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 8,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 40,
  [SMALL_STATE(10)] = 48,
  [SMALL_STATE(11)] = 61,
  [SMALL_STATE(12)] = 74,
  [SMALL_STATE(13)] = 81,
  [SMALL_STATE(14)] = 88,
  [SMALL_STATE(15)] = 95,
  [SMALL_STATE(16)] = 99,
  [SMALL_STATE(17)] = 103,
  [SMALL_STATE(18)] = 107,
  [SMALL_STATE(19)] = 111,
  [SMALL_STATE(20)] = 115,
  [SMALL_STATE(21)] = 119,
  [SMALL_STATE(22)] = 123,
  [SMALL_STATE(23)] = 127,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
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
