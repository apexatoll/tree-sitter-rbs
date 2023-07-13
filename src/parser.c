#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 2
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym__alias = 1,
  sym__constant = 2,
  sym__delimited_symbol = 3,
  sym__global = 4,
  aux_sym__integer_token1 = 5,
  sym__interface = 6,
  sym__ivar = 7,
  sym__scope = 8,
  sym__symbol = 9,
  anon_sym_class = 10,
  anon_sym_end = 11,
  anon_sym_module = 12,
  anon_sym_interface = 13,
  anon_sym_type = 14,
  anon_sym_EQ = 15,
  anon_sym_COLON = 16,
  anon_sym_top = 17,
  anon_sym_bot = 18,
  anon_sym_self = 19,
  anon_sym_instance = 20,
  anon_sym_nil = 21,
  anon_sym_bool = 22,
  anon_sym_void = 23,
  anon_sym_untyped = 24,
  aux_sym_string_literal_token1 = 25,
  aux_sym_string_literal_token2 = 26,
  sym_true_literal = 27,
  sym_false_literal = 28,
  anon_sym_PIPE = 29,
  anon_sym_AMP = 30,
  anon_sym_QMARK = 31,
  sym_program = 32,
  sym__integer = 33,
  sym_declaration = 34,
  sym_class_declaration = 35,
  sym_module_declaration = 36,
  sym_interface_declaration = 37,
  sym_type_alias_declaration = 38,
  sym_constant_declaration = 39,
  sym_global_declaration = 40,
  sym_members = 41,
  sym_member = 42,
  sym_ivar_member = 43,
  sym_alias_name = 44,
  sym_class_name = 45,
  sym_interface_name = 46,
  sym_namespace = 47,
  sym_type = 48,
  sym_builtin_type = 49,
  sym_literal_type = 50,
  sym_operator_type = 51,
  sym_namespaceable_type = 52,
  sym_string_literal = 53,
  sym_symbol_literal = 54,
  sym_union_type = 55,
  sym_intersection_type = 56,
  sym_optional_type = 57,
  aux_sym_program_repeat1 = 58,
  aux_sym_members_repeat1 = 59,
  alias_sym_constant = 60,
  alias_sym_module_name = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__alias] = "_alias",
  [sym__constant] = "_constant",
  [sym__delimited_symbol] = "_delimited_symbol",
  [sym__global] = "global",
  [aux_sym__integer_token1] = "_integer_token1",
  [sym__interface] = "_interface",
  [sym__ivar] = "ivar_name",
  [sym__scope] = "_scope",
  [sym__symbol] = "_symbol",
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
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [sym_true_literal] = "true_literal",
  [sym_false_literal] = "false_literal",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK] = "\?",
  [sym_program] = "program",
  [sym__integer] = "integer_literal",
  [sym_declaration] = "declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym_global_declaration] = "global_declaration",
  [sym_members] = "members",
  [sym_member] = "member",
  [sym_ivar_member] = "ivar_member",
  [sym_alias_name] = "alias_name",
  [sym_class_name] = "class_name",
  [sym_interface_name] = "interface_name",
  [sym_namespace] = "namespace",
  [sym_type] = "type",
  [sym_builtin_type] = "builtin_type",
  [sym_literal_type] = "literal_type",
  [sym_operator_type] = "operator_type",
  [sym_namespaceable_type] = "namespaceable_type",
  [sym_string_literal] = "string_literal",
  [sym_symbol_literal] = "symbol_literal",
  [sym_union_type] = "union_type",
  [sym_intersection_type] = "intersection_type",
  [sym_optional_type] = "optional_type",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_members_repeat1] = "members_repeat1",
  [alias_sym_constant] = "constant",
  [alias_sym_module_name] = "module_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__alias] = sym__alias,
  [sym__constant] = sym__constant,
  [sym__delimited_symbol] = sym__delimited_symbol,
  [sym__global] = sym__global,
  [aux_sym__integer_token1] = aux_sym__integer_token1,
  [sym__interface] = sym__interface,
  [sym__ivar] = sym__ivar,
  [sym__scope] = sym__scope,
  [sym__symbol] = sym__symbol,
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
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [sym_true_literal] = sym_true_literal,
  [sym_false_literal] = sym_false_literal,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_program] = sym_program,
  [sym__integer] = sym__integer,
  [sym_declaration] = sym_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_constant_declaration] = sym_constant_declaration,
  [sym_global_declaration] = sym_global_declaration,
  [sym_members] = sym_members,
  [sym_member] = sym_member,
  [sym_ivar_member] = sym_ivar_member,
  [sym_alias_name] = sym_alias_name,
  [sym_class_name] = sym_class_name,
  [sym_interface_name] = sym_interface_name,
  [sym_namespace] = sym_namespace,
  [sym_type] = sym_type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_literal_type] = sym_literal_type,
  [sym_operator_type] = sym_operator_type,
  [sym_namespaceable_type] = sym_namespaceable_type,
  [sym_string_literal] = sym_string_literal,
  [sym_symbol_literal] = sym_symbol_literal,
  [sym_union_type] = sym_union_type,
  [sym_intersection_type] = sym_intersection_type,
  [sym_optional_type] = sym_optional_type,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_members_repeat1] = aux_sym_members_repeat1,
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
  [sym__delimited_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__global] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__integer_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__interface] = {
    .visible = false,
    .named = true,
  },
  [sym__ivar] = {
    .visible = true,
    .named = true,
  },
  [sym__scope] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol] = {
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
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_true_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_false_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__integer] = {
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
  [sym_members] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_ivar_member] = {
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
  [sym_literal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_type] = {
    .visible = true,
    .named = true,
  },
  [sym_namespaceable_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_intersection_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_members_repeat1] = {
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
  [8] = 3,
  [9] = 4,
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
  [40] = 12,
  [41] = 14,
  [42] = 42,
  [43] = 19,
  [44] = 16,
  [45] = 18,
  [46] = 25,
  [47] = 20,
  [48] = 48,
  [49] = 49,
  [50] = 30,
  [51] = 13,
  [52] = 29,
  [53] = 28,
  [54] = 54,
  [55] = 27,
  [56] = 26,
  [57] = 31,
  [58] = 22,
  [59] = 15,
  [60] = 60,
  [61] = 17,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == '|') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '_') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 66:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 69:
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == '|') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '|') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '|') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'c') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'f') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'y') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__delimited_symbol);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__integer_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__ivar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_bot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_instance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_untyped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_true_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_false_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 70},
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 70},
  [41] = {.lex_state = 70},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__constant] = ACTIONS(1),
    [sym__global] = ACTIONS(1),
    [aux_sym__integer_token1] = ACTIONS(1),
    [sym__interface] = ACTIONS(1),
    [sym__ivar] = ACTIONS(1),
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
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [sym_true_literal] = ACTIONS(1),
    [sym_false_literal] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(81),
    [sym_declaration] = STATE(10),
    [sym_class_declaration] = STATE(34),
    [sym_module_declaration] = STATE(34),
    [sym_interface_declaration] = STATE(34),
    [sym_type_alias_declaration] = STATE(34),
    [sym_constant_declaration] = STATE(34),
    [sym_global_declaration] = STATE(34),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__constant] = ACTIONS(5),
    [sym__global] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
  },
  [2] = {
    [sym__integer] = STATE(50),
    [sym_alias_name] = STATE(57),
    [sym_class_name] = STATE(57),
    [sym_interface_name] = STATE(57),
    [sym_namespace] = STATE(68),
    [sym_type] = STATE(60),
    [sym_builtin_type] = STATE(44),
    [sym_literal_type] = STATE(44),
    [sym_operator_type] = STATE(44),
    [sym_namespaceable_type] = STATE(44),
    [sym_string_literal] = STATE(50),
    [sym_symbol_literal] = STATE(50),
    [sym_union_type] = STATE(61),
    [sym_intersection_type] = STATE(61),
    [sym_optional_type] = STATE(61),
    [sym__alias] = ACTIONS(17),
    [sym__constant] = ACTIONS(19),
    [sym__delimited_symbol] = ACTIONS(21),
    [aux_sym__integer_token1] = ACTIONS(23),
    [sym__interface] = ACTIONS(25),
    [sym__scope] = ACTIONS(27),
    [sym__symbol] = ACTIONS(21),
    [anon_sym_class] = ACTIONS(29),
    [anon_sym_top] = ACTIONS(29),
    [anon_sym_bot] = ACTIONS(29),
    [anon_sym_self] = ACTIONS(29),
    [anon_sym_instance] = ACTIONS(29),
    [anon_sym_nil] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(29),
    [anon_sym_untyped] = ACTIONS(29),
    [aux_sym_string_literal_token1] = ACTIONS(31),
    [aux_sym_string_literal_token2] = ACTIONS(31),
    [sym_true_literal] = ACTIONS(33),
    [sym_false_literal] = ACTIONS(33),
  },
  [3] = {
    [sym__integer] = STATE(30),
    [sym_alias_name] = STATE(31),
    [sym_class_name] = STATE(31),
    [sym_interface_name] = STATE(31),
    [sym_namespace] = STATE(65),
    [sym_type] = STATE(19),
    [sym_builtin_type] = STATE(16),
    [sym_literal_type] = STATE(16),
    [sym_operator_type] = STATE(16),
    [sym_namespaceable_type] = STATE(16),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(17),
    [sym_intersection_type] = STATE(17),
    [sym_optional_type] = STATE(17),
    [sym__alias] = ACTIONS(35),
    [sym__constant] = ACTIONS(37),
    [sym__delimited_symbol] = ACTIONS(39),
    [aux_sym__integer_token1] = ACTIONS(41),
    [sym__interface] = ACTIONS(43),
    [sym__scope] = ACTIONS(27),
    [sym__symbol] = ACTIONS(39),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_top] = ACTIONS(45),
    [anon_sym_bot] = ACTIONS(45),
    [anon_sym_self] = ACTIONS(45),
    [anon_sym_instance] = ACTIONS(45),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_void] = ACTIONS(45),
    [anon_sym_untyped] = ACTIONS(45),
    [aux_sym_string_literal_token1] = ACTIONS(47),
    [aux_sym_string_literal_token2] = ACTIONS(47),
    [sym_true_literal] = ACTIONS(49),
    [sym_false_literal] = ACTIONS(49),
  },
  [4] = {
    [sym__integer] = STATE(30),
    [sym_alias_name] = STATE(31),
    [sym_class_name] = STATE(31),
    [sym_interface_name] = STATE(31),
    [sym_namespace] = STATE(65),
    [sym_type] = STATE(20),
    [sym_builtin_type] = STATE(16),
    [sym_literal_type] = STATE(16),
    [sym_operator_type] = STATE(16),
    [sym_namespaceable_type] = STATE(16),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(17),
    [sym_intersection_type] = STATE(17),
    [sym_optional_type] = STATE(17),
    [sym__alias] = ACTIONS(35),
    [sym__constant] = ACTIONS(37),
    [sym__delimited_symbol] = ACTIONS(39),
    [aux_sym__integer_token1] = ACTIONS(41),
    [sym__interface] = ACTIONS(43),
    [sym__scope] = ACTIONS(27),
    [sym__symbol] = ACTIONS(39),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_top] = ACTIONS(45),
    [anon_sym_bot] = ACTIONS(45),
    [anon_sym_self] = ACTIONS(45),
    [anon_sym_instance] = ACTIONS(45),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_void] = ACTIONS(45),
    [anon_sym_untyped] = ACTIONS(45),
    [aux_sym_string_literal_token1] = ACTIONS(47),
    [aux_sym_string_literal_token2] = ACTIONS(47),
    [sym_true_literal] = ACTIONS(49),
    [sym_false_literal] = ACTIONS(49),
  },
  [5] = {
    [sym__integer] = STATE(30),
    [sym_alias_name] = STATE(31),
    [sym_class_name] = STATE(31),
    [sym_interface_name] = STATE(31),
    [sym_namespace] = STATE(65),
    [sym_type] = STATE(21),
    [sym_builtin_type] = STATE(16),
    [sym_literal_type] = STATE(16),
    [sym_operator_type] = STATE(16),
    [sym_namespaceable_type] = STATE(16),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(17),
    [sym_intersection_type] = STATE(17),
    [sym_optional_type] = STATE(17),
    [sym__alias] = ACTIONS(35),
    [sym__constant] = ACTIONS(37),
    [sym__delimited_symbol] = ACTIONS(39),
    [aux_sym__integer_token1] = ACTIONS(41),
    [sym__interface] = ACTIONS(43),
    [sym__scope] = ACTIONS(27),
    [sym__symbol] = ACTIONS(39),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_top] = ACTIONS(45),
    [anon_sym_bot] = ACTIONS(45),
    [anon_sym_self] = ACTIONS(45),
    [anon_sym_instance] = ACTIONS(45),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_void] = ACTIONS(45),
    [anon_sym_untyped] = ACTIONS(45),
    [aux_sym_string_literal_token1] = ACTIONS(47),
    [aux_sym_string_literal_token2] = ACTIONS(47),
    [sym_true_literal] = ACTIONS(49),
    [sym_false_literal] = ACTIONS(49),
  },
  [6] = {
    [sym__integer] = STATE(30),
    [sym_alias_name] = STATE(31),
    [sym_class_name] = STATE(31),
    [sym_interface_name] = STATE(31),
    [sym_namespace] = STATE(65),
    [sym_type] = STATE(23),
    [sym_builtin_type] = STATE(16),
    [sym_literal_type] = STATE(16),
    [sym_operator_type] = STATE(16),
    [sym_namespaceable_type] = STATE(16),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(17),
    [sym_intersection_type] = STATE(17),
    [sym_optional_type] = STATE(17),
    [sym__alias] = ACTIONS(35),
    [sym__constant] = ACTIONS(37),
    [sym__delimited_symbol] = ACTIONS(39),
    [aux_sym__integer_token1] = ACTIONS(41),
    [sym__interface] = ACTIONS(43),
    [sym__scope] = ACTIONS(27),
    [sym__symbol] = ACTIONS(39),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_top] = ACTIONS(45),
    [anon_sym_bot] = ACTIONS(45),
    [anon_sym_self] = ACTIONS(45),
    [anon_sym_instance] = ACTIONS(45),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_void] = ACTIONS(45),
    [anon_sym_untyped] = ACTIONS(45),
    [aux_sym_string_literal_token1] = ACTIONS(47),
    [aux_sym_string_literal_token2] = ACTIONS(47),
    [sym_true_literal] = ACTIONS(49),
    [sym_false_literal] = ACTIONS(49),
  },
  [7] = {
    [sym__integer] = STATE(30),
    [sym_alias_name] = STATE(31),
    [sym_class_name] = STATE(31),
    [sym_interface_name] = STATE(31),
    [sym_namespace] = STATE(65),
    [sym_type] = STATE(24),
    [sym_builtin_type] = STATE(16),
    [sym_literal_type] = STATE(16),
    [sym_operator_type] = STATE(16),
    [sym_namespaceable_type] = STATE(16),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(17),
    [sym_intersection_type] = STATE(17),
    [sym_optional_type] = STATE(17),
    [sym__alias] = ACTIONS(35),
    [sym__constant] = ACTIONS(37),
    [sym__delimited_symbol] = ACTIONS(39),
    [aux_sym__integer_token1] = ACTIONS(41),
    [sym__interface] = ACTIONS(43),
    [sym__scope] = ACTIONS(27),
    [sym__symbol] = ACTIONS(39),
    [anon_sym_class] = ACTIONS(45),
    [anon_sym_top] = ACTIONS(45),
    [anon_sym_bot] = ACTIONS(45),
    [anon_sym_self] = ACTIONS(45),
    [anon_sym_instance] = ACTIONS(45),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_void] = ACTIONS(45),
    [anon_sym_untyped] = ACTIONS(45),
    [aux_sym_string_literal_token1] = ACTIONS(47),
    [aux_sym_string_literal_token2] = ACTIONS(47),
    [sym_true_literal] = ACTIONS(49),
    [sym_false_literal] = ACTIONS(49),
  },
  [8] = {
    [sym__integer] = STATE(50),
    [sym_alias_name] = STATE(57),
    [sym_class_name] = STATE(57),
    [sym_interface_name] = STATE(57),
    [sym_namespace] = STATE(68),
    [sym_type] = STATE(43),
    [sym_builtin_type] = STATE(44),
    [sym_literal_type] = STATE(44),
    [sym_operator_type] = STATE(44),
    [sym_namespaceable_type] = STATE(44),
    [sym_string_literal] = STATE(50),
    [sym_symbol_literal] = STATE(50),
    [sym_union_type] = STATE(61),
    [sym_intersection_type] = STATE(61),
    [sym_optional_type] = STATE(61),
    [sym__alias] = ACTIONS(17),
    [sym__constant] = ACTIONS(19),
    [sym__delimited_symbol] = ACTIONS(21),
    [aux_sym__integer_token1] = ACTIONS(23),
    [sym__interface] = ACTIONS(25),
    [sym__scope] = ACTIONS(27),
    [sym__symbol] = ACTIONS(21),
    [anon_sym_class] = ACTIONS(29),
    [anon_sym_top] = ACTIONS(29),
    [anon_sym_bot] = ACTIONS(29),
    [anon_sym_self] = ACTIONS(29),
    [anon_sym_instance] = ACTIONS(29),
    [anon_sym_nil] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(29),
    [anon_sym_untyped] = ACTIONS(29),
    [aux_sym_string_literal_token1] = ACTIONS(31),
    [aux_sym_string_literal_token2] = ACTIONS(31),
    [sym_true_literal] = ACTIONS(33),
    [sym_false_literal] = ACTIONS(33),
  },
  [9] = {
    [sym__integer] = STATE(50),
    [sym_alias_name] = STATE(57),
    [sym_class_name] = STATE(57),
    [sym_interface_name] = STATE(57),
    [sym_namespace] = STATE(68),
    [sym_type] = STATE(47),
    [sym_builtin_type] = STATE(44),
    [sym_literal_type] = STATE(44),
    [sym_operator_type] = STATE(44),
    [sym_namespaceable_type] = STATE(44),
    [sym_string_literal] = STATE(50),
    [sym_symbol_literal] = STATE(50),
    [sym_union_type] = STATE(61),
    [sym_intersection_type] = STATE(61),
    [sym_optional_type] = STATE(61),
    [sym__alias] = ACTIONS(17),
    [sym__constant] = ACTIONS(19),
    [sym__delimited_symbol] = ACTIONS(21),
    [aux_sym__integer_token1] = ACTIONS(23),
    [sym__interface] = ACTIONS(25),
    [sym__scope] = ACTIONS(27),
    [sym__symbol] = ACTIONS(21),
    [anon_sym_class] = ACTIONS(29),
    [anon_sym_top] = ACTIONS(29),
    [anon_sym_bot] = ACTIONS(29),
    [anon_sym_self] = ACTIONS(29),
    [anon_sym_instance] = ACTIONS(29),
    [anon_sym_nil] = ACTIONS(29),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(29),
    [anon_sym_untyped] = ACTIONS(29),
    [aux_sym_string_literal_token1] = ACTIONS(31),
    [aux_sym_string_literal_token2] = ACTIONS(31),
    [sym_true_literal] = ACTIONS(33),
    [sym_false_literal] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
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
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(34), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [34] = 9,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym__constant,
    ACTIONS(58), 1,
      sym__global,
    ACTIONS(61), 1,
      anon_sym_class,
    ACTIONS(64), 1,
      anon_sym_module,
    ACTIONS(67), 1,
      anon_sym_interface,
    ACTIONS(70), 1,
      anon_sym_type,
    STATE(11), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(34), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [68] = 2,
    ACTIONS(75), 1,
      sym__scope,
    ACTIONS(73), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [84] = 1,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [98] = 2,
    ACTIONS(81), 1,
      sym__scope,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [114] = 1,
    ACTIONS(83), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [128] = 1,
    ACTIONS(85), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [141] = 1,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [154] = 1,
    ACTIONS(89), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [167] = 4,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(95), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_QMARK,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [186] = 4,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(95), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_QMARK,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [205] = 4,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(95), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_QMARK,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [224] = 1,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [237] = 4,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(95), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_QMARK,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [256] = 4,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(95), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_QMARK,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [275] = 1,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [288] = 1,
    ACTIONS(111), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [301] = 1,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [314] = 1,
    ACTIONS(115), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [327] = 1,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [340] = 1,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [353] = 1,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [366] = 1,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [376] = 1,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [386] = 1,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [396] = 1,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [406] = 1,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [416] = 1,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [426] = 5,
    ACTIONS(135), 1,
      sym__ivar,
    ACTIONS(137), 1,
      anon_sym_end,
    STATE(70), 1,
      sym_ivar_member,
    STATE(75), 1,
      sym_members,
    STATE(42), 2,
      sym_member,
      aux_sym_members_repeat1,
  [443] = 5,
    ACTIONS(135), 1,
      sym__ivar,
    ACTIONS(139), 1,
      anon_sym_end,
    STATE(70), 1,
      sym_ivar_member,
    STATE(72), 1,
      sym_members,
    STATE(42), 2,
      sym_member,
      aux_sym_members_repeat1,
  [460] = 2,
    ACTIONS(75), 1,
      sym__scope,
    ACTIONS(73), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [471] = 2,
    ACTIONS(81), 1,
      sym__scope,
    ACTIONS(79), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [482] = 4,
    ACTIONS(135), 1,
      sym__ivar,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(70), 1,
      sym_ivar_member,
    STATE(54), 2,
      sym_member,
      aux_sym_members_repeat1,
  [496] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK,
    ACTIONS(91), 2,
      sym__ivar,
      anon_sym_end,
  [510] = 1,
    ACTIONS(85), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [518] = 1,
    ACTIONS(89), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [526] = 1,
    ACTIONS(109), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [534] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK,
    ACTIONS(99), 2,
      sym__ivar,
      anon_sym_end,
  [548] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(149), 1,
      sym__alias,
    ACTIONS(151), 1,
      sym__constant,
    STATE(71), 1,
      sym_namespace,
    STATE(77), 1,
      sym_alias_name,
  [564] = 5,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(151), 1,
      sym__constant,
    STATE(69), 1,
      sym_namespace,
    STATE(78), 1,
      sym_interface_name,
  [580] = 1,
    ACTIONS(119), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [588] = 1,
    ACTIONS(77), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [596] = 1,
    ACTIONS(117), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [604] = 1,
    ACTIONS(115), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [612] = 4,
    ACTIONS(153), 1,
      sym__ivar,
    ACTIONS(156), 1,
      anon_sym_end,
    STATE(70), 1,
      sym_ivar_member,
    STATE(54), 2,
      sym_member,
      aux_sym_members_repeat1,
  [626] = 1,
    ACTIONS(113), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [634] = 1,
    ACTIONS(111), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [642] = 1,
    ACTIONS(121), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [650] = 1,
    ACTIONS(103), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [658] = 1,
    ACTIONS(83), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [666] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK,
    ACTIONS(158), 2,
      sym__ivar,
      anon_sym_end,
  [680] = 1,
    ACTIONS(87), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [688] = 4,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(27), 1,
      sym__scope,
    STATE(38), 1,
      sym_class_name,
    STATE(80), 1,
      sym_namespace,
  [701] = 4,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(27), 1,
      sym__scope,
    STATE(39), 1,
      sym_class_name,
    STATE(80), 1,
      sym_namespace,
  [714] = 1,
    ACTIONS(160), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [720] = 3,
    ACTIONS(162), 1,
      sym__alias,
    ACTIONS(164), 1,
      sym__constant,
    ACTIONS(166), 1,
      sym__interface,
  [730] = 1,
    ACTIONS(168), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [736] = 1,
    ACTIONS(170), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [742] = 3,
    ACTIONS(172), 1,
      sym__alias,
    ACTIONS(174), 1,
      sym__constant,
    ACTIONS(176), 1,
      sym__interface,
  [752] = 2,
    ACTIONS(176), 1,
      sym__interface,
    ACTIONS(178), 1,
      sym__constant,
  [759] = 1,
    ACTIONS(180), 2,
      sym__ivar,
      anon_sym_end,
  [764] = 2,
    ACTIONS(162), 1,
      sym__alias,
    ACTIONS(178), 1,
      sym__constant,
  [771] = 1,
    ACTIONS(182), 1,
      anon_sym_end,
  [775] = 1,
    ACTIONS(81), 1,
      sym__scope,
  [779] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [783] = 1,
    ACTIONS(186), 1,
      anon_sym_end,
  [787] = 1,
    ACTIONS(188), 1,
      anon_sym_COLON,
  [791] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ,
  [795] = 1,
    ACTIONS(192), 1,
      anon_sym_end,
  [799] = 1,
    ACTIONS(75), 1,
      sym__scope,
  [803] = 1,
    ACTIONS(174), 1,
      sym__constant,
  [807] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [811] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 34,
  [SMALL_STATE(12)] = 68,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 98,
  [SMALL_STATE(15)] = 114,
  [SMALL_STATE(16)] = 128,
  [SMALL_STATE(17)] = 141,
  [SMALL_STATE(18)] = 154,
  [SMALL_STATE(19)] = 167,
  [SMALL_STATE(20)] = 186,
  [SMALL_STATE(21)] = 205,
  [SMALL_STATE(22)] = 224,
  [SMALL_STATE(23)] = 237,
  [SMALL_STATE(24)] = 256,
  [SMALL_STATE(25)] = 275,
  [SMALL_STATE(26)] = 288,
  [SMALL_STATE(27)] = 301,
  [SMALL_STATE(28)] = 314,
  [SMALL_STATE(29)] = 327,
  [SMALL_STATE(30)] = 340,
  [SMALL_STATE(31)] = 353,
  [SMALL_STATE(32)] = 366,
  [SMALL_STATE(33)] = 376,
  [SMALL_STATE(34)] = 386,
  [SMALL_STATE(35)] = 396,
  [SMALL_STATE(36)] = 406,
  [SMALL_STATE(37)] = 416,
  [SMALL_STATE(38)] = 426,
  [SMALL_STATE(39)] = 443,
  [SMALL_STATE(40)] = 460,
  [SMALL_STATE(41)] = 471,
  [SMALL_STATE(42)] = 482,
  [SMALL_STATE(43)] = 496,
  [SMALL_STATE(44)] = 510,
  [SMALL_STATE(45)] = 518,
  [SMALL_STATE(46)] = 526,
  [SMALL_STATE(47)] = 534,
  [SMALL_STATE(48)] = 548,
  [SMALL_STATE(49)] = 564,
  [SMALL_STATE(50)] = 580,
  [SMALL_STATE(51)] = 588,
  [SMALL_STATE(52)] = 596,
  [SMALL_STATE(53)] = 604,
  [SMALL_STATE(54)] = 612,
  [SMALL_STATE(55)] = 626,
  [SMALL_STATE(56)] = 634,
  [SMALL_STATE(57)] = 642,
  [SMALL_STATE(58)] = 650,
  [SMALL_STATE(59)] = 658,
  [SMALL_STATE(60)] = 666,
  [SMALL_STATE(61)] = 680,
  [SMALL_STATE(62)] = 688,
  [SMALL_STATE(63)] = 701,
  [SMALL_STATE(64)] = 714,
  [SMALL_STATE(65)] = 720,
  [SMALL_STATE(66)] = 730,
  [SMALL_STATE(67)] = 736,
  [SMALL_STATE(68)] = 742,
  [SMALL_STATE(69)] = 752,
  [SMALL_STATE(70)] = 759,
  [SMALL_STATE(71)] = 764,
  [SMALL_STATE(72)] = 771,
  [SMALL_STATE(73)] = 775,
  [SMALL_STATE(74)] = 779,
  [SMALL_STATE(75)] = 783,
  [SMALL_STATE(76)] = 787,
  [SMALL_STATE(77)] = 791,
  [SMALL_STATE(78)] = 795,
  [SMALL_STATE(79)] = 799,
  [SMALL_STATE(80)] = 803,
  [SMALL_STATE(81)] = 807,
  [SMALL_STATE(82)] = 811,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_type, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaceable_type, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(76),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
