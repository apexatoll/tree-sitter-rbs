#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 2
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym__alias = 1,
  sym__constant = 2,
  sym__global = 3,
  sym__interface = 4,
  sym__scope = 5,
  anon_sym_class = 6,
  anon_sym_end = 7,
  anon_sym_module = 8,
  anon_sym_interface = 9,
  anon_sym_type = 10,
  anon_sym_EQ = 11,
  anon_sym_COLON = 12,
  anon_sym_top = 13,
  anon_sym_bot = 14,
  anon_sym_self = 15,
  anon_sym_instance = 16,
  anon_sym_nil = 17,
  anon_sym_bool = 18,
  anon_sym_void = 19,
  anon_sym_untyped = 20,
  sym_program = 21,
  sym_declaration = 22,
  sym_class_declaration = 23,
  sym_module_declaration = 24,
  sym_interface_declaration = 25,
  sym_type_alias_declaration = 26,
  sym_constant_declaration = 27,
  sym_global_declaration = 28,
  sym_alias_name = 29,
  sym_class_name = 30,
  sym_interface_name = 31,
  sym_namespace = 32,
  sym_type = 33,
  sym_builtin_type = 34,
  aux_sym_program_repeat1 = 35,
  alias_sym_constant = 36,
  alias_sym_module_name = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__alias] = "_alias",
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
  [anon_sym_top] = "top",
  [anon_sym_bot] = "bot",
  [anon_sym_self] = "self",
  [anon_sym_instance] = "instance",
  [anon_sym_nil] = "nil",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_untyped] = "untyped",
  [sym_program] = "program",
  [sym_declaration] = "declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym_global_declaration] = "global_declaration",
  [sym_alias_name] = "alias_name",
  [sym_class_name] = "class_name",
  [sym_interface_name] = "interface_name",
  [sym_namespace] = "namespace",
  [sym_type] = "type",
  [sym_builtin_type] = "builtin_type",
  [aux_sym_program_repeat1] = "program_repeat1",
  [alias_sym_constant] = "constant",
  [alias_sym_module_name] = "module_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__alias] = sym__alias,
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
  [anon_sym_top] = anon_sym_top,
  [anon_sym_bot] = anon_sym_bot,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_instance] = anon_sym_instance,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_untyped] = anon_sym_untyped,
  [sym_program] = sym_program,
  [sym_declaration] = sym_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_constant_declaration] = sym_constant_declaration,
  [sym_global_declaration] = sym_global_declaration,
  [sym_alias_name] = sym_alias_name,
  [sym_class_name] = sym_class_name,
  [sym_interface_name] = sym_interface_name,
  [sym_namespace] = sym_namespace,
  [sym_type] = sym_type,
  [sym_builtin_type] = sym_builtin_type,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [alias_sym_constant] = alias_sym_constant,
  [alias_sym_module_name] = alias_sym_module_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__alias] = {
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
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
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
  [sym_alias_name] = {
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
  [sym_builtin_type] = {
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 74:
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
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
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
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_bot] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_untyped] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(38),
    [sym_declaration] = STATE(3),
    [sym_class_declaration] = STATE(9),
    [sym_module_declaration] = STATE(9),
    [sym_interface_declaration] = STATE(9),
    [sym_type_alias_declaration] = STATE(9),
    [sym_constant_declaration] = STATE(9),
    [sym_global_declaration] = STATE(9),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__constant] = ACTIONS(5),
    [sym__global] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(22), 1,
      sym__global,
    ACTIONS(25), 1,
      anon_sym_class,
    ACTIONS(28), 1,
      anon_sym_module,
    ACTIONS(31), 1,
      anon_sym_interface,
    ACTIONS(34), 1,
      anon_sym_type,
    STATE(2), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(9), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [34] = 9,
    ACTIONS(5), 1,
      sym__constant,
    ACTIONS(7), 1,
      sym__global,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(9), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [68] = 3,
    STATE(7), 1,
      sym_type,
    STATE(13), 1,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [86] = 3,
    STATE(13), 1,
      sym_builtin_type,
    STATE(14), 1,
      sym_type,
    ACTIONS(39), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [104] = 3,
    STATE(12), 1,
      sym_type,
    STATE(13), 1,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [122] = 1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [132] = 1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [142] = 1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [152] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [162] = 1,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [172] = 1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [182] = 1,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [192] = 1,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [202] = 1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [212] = 5,
    ACTIONS(59), 1,
      sym__constant,
    ACTIONS(61), 1,
      sym__interface,
    ACTIONS(63), 1,
      sym__scope,
    STATE(23), 1,
      sym_namespace,
    STATE(30), 1,
      sym_interface_name,
  [228] = 5,
    ACTIONS(59), 1,
      sym__constant,
    ACTIONS(63), 1,
      sym__scope,
    ACTIONS(65), 1,
      sym__alias,
    STATE(24), 1,
      sym_namespace,
    STATE(28), 1,
      sym_alias_name,
  [244] = 4,
    ACTIONS(63), 1,
      sym__scope,
    ACTIONS(67), 1,
      sym__constant,
    STATE(34), 1,
      sym_namespace,
    STATE(35), 1,
      sym_class_name,
  [257] = 4,
    ACTIONS(63), 1,
      sym__scope,
    ACTIONS(67), 1,
      sym__constant,
    STATE(33), 1,
      sym_class_name,
    STATE(34), 1,
      sym_namespace,
  [270] = 1,
    ACTIONS(69), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [276] = 1,
    ACTIONS(71), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [282] = 1,
    ACTIONS(73), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [288] = 2,
    ACTIONS(75), 1,
      sym__constant,
    ACTIONS(77), 1,
      sym__interface,
  [295] = 2,
    ACTIONS(75), 1,
      sym__constant,
    ACTIONS(79), 1,
      sym__alias,
  [302] = 2,
    ACTIONS(81), 1,
      sym__scope,
    ACTIONS(83), 1,
      anon_sym_end,
  [309] = 2,
    ACTIONS(85), 1,
      sym__scope,
    ACTIONS(87), 1,
      anon_sym_end,
  [316] = 1,
    ACTIONS(89), 1,
      anon_sym_EQ,
  [320] = 1,
    ACTIONS(91), 1,
      anon_sym_EQ,
  [324] = 1,
    ACTIONS(93), 1,
      anon_sym_COLON,
  [328] = 1,
    ACTIONS(95), 1,
      anon_sym_end,
  [332] = 1,
    ACTIONS(97), 1,
      anon_sym_end,
  [336] = 1,
    ACTIONS(85), 1,
      sym__scope,
  [340] = 1,
    ACTIONS(99), 1,
      anon_sym_end,
  [344] = 1,
    ACTIONS(101), 1,
      sym__constant,
  [348] = 1,
    ACTIONS(103), 1,
      anon_sym_end,
  [352] = 1,
    ACTIONS(81), 1,
      sym__scope,
  [356] = 1,
    ACTIONS(105), 1,
      anon_sym_end,
  [360] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [364] = 1,
    ACTIONS(109), 1,
      anon_sym_EQ,
  [368] = 1,
    ACTIONS(111), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 182,
  [SMALL_STATE(14)] = 192,
  [SMALL_STATE(15)] = 202,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 244,
  [SMALL_STATE(19)] = 257,
  [SMALL_STATE(20)] = 270,
  [SMALL_STATE(21)] = 276,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 288,
  [SMALL_STATE(24)] = 295,
  [SMALL_STATE(25)] = 302,
  [SMALL_STATE(26)] = 309,
  [SMALL_STATE(27)] = 316,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 328,
  [SMALL_STATE(31)] = 332,
  [SMALL_STATE(32)] = 336,
  [SMALL_STATE(33)] = 340,
  [SMALL_STATE(34)] = 344,
  [SMALL_STATE(35)] = 348,
  [SMALL_STATE(36)] = 352,
  [SMALL_STATE(37)] = 356,
  [SMALL_STATE(38)] = 360,
  [SMALL_STATE(39)] = 364,
  [SMALL_STATE(40)] = 368,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [107] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
