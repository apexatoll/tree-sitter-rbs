#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_class = 1,
  anon_sym_end = 2,
  anon_sym_module = 3,
  anon_sym_interface = 4,
  anon_sym_type = 5,
  anon_sym_EQ = 6,
  anon_sym_untyped = 7,
  sym_program = 8,
  sym_declaration = 9,
  sym_class_declaration = 10,
  sym_module_declaration = 11,
  sym_interface_declaration = 12,
  sym_type_alias_declaration = 13,
  sym_type = 14,
  aux_sym_program_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_interface] = "interface",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_untyped] = "untyped",
  [sym_program] = "program",
  [sym_declaration] = "declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_type] = "type",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_untyped] = anon_sym_untyped,
  [sym_program] = sym_program,
  [sym_declaration] = sym_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_type] = sym_type,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(1);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
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
    [anon_sym_untyped] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(15),
    [sym_declaration] = STATE(2),
    [sym_class_declaration] = STATE(4),
    [sym_module_declaration] = STATE(4),
    [sym_interface_declaration] = STATE(4),
    [sym_type_alias_declaration] = STATE(4),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
  },
  [2] = {
    [sym_declaration] = STATE(3),
    [sym_class_declaration] = STATE(4),
    [sym_module_declaration] = STATE(4),
    [sym_interface_declaration] = STATE(4),
    [sym_type_alias_declaration] = STATE(4),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
  },
  [3] = {
    [sym_declaration] = STATE(3),
    [sym_class_declaration] = STATE(4),
    [sym_module_declaration] = STATE(4),
    [sym_interface_declaration] = STATE(4),
    [sym_type_alias_declaration] = STATE(4),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_module] = ACTIONS(20),
    [anon_sym_interface] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(26),
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
  [48] = 2,
    ACTIONS(41), 1,
      anon_sym_untyped,
    STATE(9), 1,
      sym_type,
  [55] = 1,
    ACTIONS(43), 1,
      anon_sym_end,
  [59] = 1,
    ACTIONS(45), 1,
      anon_sym_end,
  [63] = 1,
    ACTIONS(47), 1,
      anon_sym_end,
  [67] = 1,
    ACTIONS(49), 1,
      anon_sym_EQ,
  [71] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 8,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 40,
  [SMALL_STATE(10)] = 48,
  [SMALL_STATE(11)] = 55,
  [SMALL_STATE(12)] = 59,
  [SMALL_STATE(13)] = 63,
  [SMALL_STATE(14)] = 67,
  [SMALL_STATE(15)] = 71,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
