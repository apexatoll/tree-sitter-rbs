#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 2
#define TOKEN_COUNT 35
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
  anon_sym_include = 17,
  anon_sym_extend = 18,
  anon_sym_prepend = 19,
  anon_sym_top = 20,
  anon_sym_bot = 21,
  anon_sym_self = 22,
  anon_sym_instance = 23,
  anon_sym_nil = 24,
  anon_sym_bool = 25,
  anon_sym_void = 26,
  anon_sym_untyped = 27,
  aux_sym_string_literal_token1 = 28,
  aux_sym_string_literal_token2 = 29,
  sym_true_literal = 30,
  sym_false_literal = 31,
  anon_sym_PIPE = 32,
  anon_sym_AMP = 33,
  anon_sym_QMARK = 34,
  sym_program = 35,
  sym__integer = 36,
  sym_declaration = 37,
  sym_class_declaration = 38,
  sym_module_declaration = 39,
  sym_interface_declaration = 40,
  sym_type_alias_declaration = 41,
  sym_constant_declaration = 42,
  sym_global_declaration = 43,
  sym_members = 44,
  sym_member = 45,
  sym_ivar_member = 46,
  sym_include_member = 47,
  sym_extend_member = 48,
  sym_prepend_member = 49,
  sym_alias_name = 50,
  sym_class_name = 51,
  sym_interface_name = 52,
  sym_namespace = 53,
  sym_type = 54,
  sym_builtin_type = 55,
  sym_literal_type = 56,
  sym_operator_type = 57,
  sym_namespaceable_type = 58,
  sym_string_literal = 59,
  sym_symbol_literal = 60,
  sym_union_type = 61,
  sym_intersection_type = 62,
  sym_optional_type = 63,
  aux_sym_program_repeat1 = 64,
  aux_sym_members_repeat1 = 65,
  alias_sym_constant = 66,
  alias_sym_module_name = 67,
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
  [anon_sym_include] = "include",
  [anon_sym_extend] = "extend",
  [anon_sym_prepend] = "prepend",
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
  [sym_include_member] = "include_member",
  [sym_extend_member] = "extend_member",
  [sym_prepend_member] = "prepend_member",
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
  [anon_sym_include] = anon_sym_include,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_prepend] = anon_sym_prepend,
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
  [sym_include_member] = sym_include_member,
  [sym_extend_member] = sym_extend_member,
  [sym_prepend_member] = sym_prepend_member,
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
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
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
  [sym_include_member] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_member] = {
    .visible = true,
    .named = true,
  },
  [sym_prepend_member] = {
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
  [5] = 3,
  [6] = 4,
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
  [36] = 17,
  [37] = 16,
  [38] = 26,
  [39] = 20,
  [40] = 33,
  [41] = 25,
  [42] = 34,
  [43] = 15,
  [44] = 21,
  [45] = 45,
  [46] = 31,
  [47] = 30,
  [48] = 22,
  [49] = 29,
  [50] = 27,
  [51] = 28,
  [52] = 19,
  [53] = 24,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 73,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(130);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '_') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 80:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 83:
      if (eof) ADVANCE(86);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 84:
      if (eof) ADVANCE(86);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(166);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'c') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'f') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'u') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'y') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__delimited_symbol);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__integer_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__ivar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_bot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_instance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_untyped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_true_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_false_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 167:
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
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 84},
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
  [36] = {.lex_state = 84},
  [37] = {.lex_state = 84},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
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
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
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
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_prepend] = ACTIONS(1),
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
    [sym_program] = STATE(83),
    [sym_declaration] = STATE(10),
    [sym_class_declaration] = STATE(59),
    [sym_module_declaration] = STATE(59),
    [sym_interface_declaration] = STATE(59),
    [sym_type_alias_declaration] = STATE(59),
    [sym_constant_declaration] = STATE(59),
    [sym_global_declaration] = STATE(59),
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
    [sym__integer] = STATE(47),
    [sym_alias_name] = STATE(46),
    [sym_class_name] = STATE(46),
    [sym_interface_name] = STATE(46),
    [sym_namespace] = STATE(73),
    [sym_type] = STATE(45),
    [sym_builtin_type] = STATE(40),
    [sym_literal_type] = STATE(40),
    [sym_operator_type] = STATE(40),
    [sym_namespaceable_type] = STATE(40),
    [sym_string_literal] = STATE(47),
    [sym_symbol_literal] = STATE(47),
    [sym_union_type] = STATE(42),
    [sym_intersection_type] = STATE(42),
    [sym_optional_type] = STATE(42),
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
    [sym_namespace] = STATE(75),
    [sym_type] = STATE(21),
    [sym_builtin_type] = STATE(33),
    [sym_literal_type] = STATE(33),
    [sym_operator_type] = STATE(33),
    [sym_namespaceable_type] = STATE(33),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(34),
    [sym_intersection_type] = STATE(34),
    [sym_optional_type] = STATE(34),
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
    [sym_namespace] = STATE(75),
    [sym_type] = STATE(22),
    [sym_builtin_type] = STATE(33),
    [sym_literal_type] = STATE(33),
    [sym_operator_type] = STATE(33),
    [sym_namespaceable_type] = STATE(33),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(34),
    [sym_intersection_type] = STATE(34),
    [sym_optional_type] = STATE(34),
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
    [sym__integer] = STATE(47),
    [sym_alias_name] = STATE(46),
    [sym_class_name] = STATE(46),
    [sym_interface_name] = STATE(46),
    [sym_namespace] = STATE(73),
    [sym_type] = STATE(44),
    [sym_builtin_type] = STATE(40),
    [sym_literal_type] = STATE(40),
    [sym_operator_type] = STATE(40),
    [sym_namespaceable_type] = STATE(40),
    [sym_string_literal] = STATE(47),
    [sym_symbol_literal] = STATE(47),
    [sym_union_type] = STATE(42),
    [sym_intersection_type] = STATE(42),
    [sym_optional_type] = STATE(42),
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
  [6] = {
    [sym__integer] = STATE(47),
    [sym_alias_name] = STATE(46),
    [sym_class_name] = STATE(46),
    [sym_interface_name] = STATE(46),
    [sym_namespace] = STATE(73),
    [sym_type] = STATE(48),
    [sym_builtin_type] = STATE(40),
    [sym_literal_type] = STATE(40),
    [sym_operator_type] = STATE(40),
    [sym_namespaceable_type] = STATE(40),
    [sym_string_literal] = STATE(47),
    [sym_symbol_literal] = STATE(47),
    [sym_union_type] = STATE(42),
    [sym_intersection_type] = STATE(42),
    [sym_optional_type] = STATE(42),
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
  [7] = {
    [sym__integer] = STATE(30),
    [sym_alias_name] = STATE(31),
    [sym_class_name] = STATE(31),
    [sym_interface_name] = STATE(31),
    [sym_namespace] = STATE(75),
    [sym_type] = STATE(23),
    [sym_builtin_type] = STATE(33),
    [sym_literal_type] = STATE(33),
    [sym_operator_type] = STATE(33),
    [sym_namespaceable_type] = STATE(33),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(34),
    [sym_intersection_type] = STATE(34),
    [sym_optional_type] = STATE(34),
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
    [sym__integer] = STATE(30),
    [sym_alias_name] = STATE(31),
    [sym_class_name] = STATE(31),
    [sym_interface_name] = STATE(31),
    [sym_namespace] = STATE(75),
    [sym_type] = STATE(32),
    [sym_builtin_type] = STATE(33),
    [sym_literal_type] = STATE(33),
    [sym_operator_type] = STATE(33),
    [sym_namespaceable_type] = STATE(33),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(34),
    [sym_intersection_type] = STATE(34),
    [sym_optional_type] = STATE(34),
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
  [9] = {
    [sym__integer] = STATE(30),
    [sym_alias_name] = STATE(31),
    [sym_class_name] = STATE(31),
    [sym_interface_name] = STATE(31),
    [sym_namespace] = STATE(75),
    [sym_type] = STATE(35),
    [sym_builtin_type] = STATE(33),
    [sym_literal_type] = STATE(33),
    [sym_operator_type] = STATE(33),
    [sym_namespaceable_type] = STATE(33),
    [sym_string_literal] = STATE(30),
    [sym_symbol_literal] = STATE(30),
    [sym_union_type] = STATE(34),
    [sym_intersection_type] = STATE(34),
    [sym_optional_type] = STATE(34),
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
    STATE(59), 6,
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
    STATE(59), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [68] = 8,
    ACTIONS(73), 1,
      sym__ivar,
    ACTIONS(75), 1,
      anon_sym_end,
    ACTIONS(77), 1,
      anon_sym_include,
    ACTIONS(79), 1,
      anon_sym_extend,
    ACTIONS(81), 1,
      anon_sym_prepend,
    STATE(84), 1,
      sym_members,
    STATE(14), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(62), 4,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
  [97] = 8,
    ACTIONS(73), 1,
      sym__ivar,
    ACTIONS(77), 1,
      anon_sym_include,
    ACTIONS(79), 1,
      anon_sym_extend,
    ACTIONS(81), 1,
      anon_sym_prepend,
    ACTIONS(83), 1,
      anon_sym_end,
    STATE(87), 1,
      sym_members,
    STATE(14), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(62), 4,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
  [126] = 7,
    ACTIONS(73), 1,
      sym__ivar,
    ACTIONS(77), 1,
      anon_sym_include,
    ACTIONS(79), 1,
      anon_sym_extend,
    ACTIONS(81), 1,
      anon_sym_prepend,
    ACTIONS(85), 1,
      anon_sym_end,
    STATE(18), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(62), 4,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
  [152] = 1,
    ACTIONS(87), 11,
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
  [166] = 2,
    ACTIONS(91), 1,
      sym__scope,
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
  [182] = 2,
    ACTIONS(95), 1,
      sym__scope,
    ACTIONS(93), 10,
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
  [198] = 7,
    ACTIONS(97), 1,
      sym__ivar,
    ACTIONS(100), 1,
      anon_sym_end,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(105), 1,
      anon_sym_extend,
    ACTIONS(108), 1,
      anon_sym_prepend,
    STATE(18), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(62), 4,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
  [224] = 1,
    ACTIONS(111), 11,
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
  [238] = 1,
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
  [251] = 4,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_QMARK,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [270] = 4,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_QMARK,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [289] = 4,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_QMARK,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [308] = 1,
    ACTIONS(127), 10,
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
  [321] = 1,
    ACTIONS(129), 10,
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
  [334] = 1,
    ACTIONS(131), 10,
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
  [347] = 1,
    ACTIONS(133), 10,
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
  [360] = 1,
    ACTIONS(135), 10,
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
  [373] = 1,
    ACTIONS(137), 10,
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
  [386] = 1,
    ACTIONS(139), 10,
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
  [399] = 1,
    ACTIONS(141), 10,
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
  [412] = 4,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_QMARK,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [431] = 1,
    ACTIONS(145), 10,
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
  [444] = 1,
    ACTIONS(147), 10,
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
  [457] = 4,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_QMARK,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [476] = 2,
    ACTIONS(95), 1,
      sym__scope,
    ACTIONS(93), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [490] = 2,
    ACTIONS(91), 1,
      sym__scope,
    ACTIONS(89), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [504] = 1,
    ACTIONS(131), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [515] = 1,
    ACTIONS(113), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [526] = 1,
    ACTIONS(145), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [537] = 1,
    ACTIONS(129), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [548] = 1,
    ACTIONS(147), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [559] = 1,
    ACTIONS(87), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [570] = 4,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      anon_sym_QMARK,
    ACTIONS(115), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
  [587] = 4,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      anon_sym_QMARK,
    ACTIONS(157), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
  [604] = 1,
    ACTIONS(141), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [615] = 1,
    ACTIONS(139), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [626] = 4,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_AMP,
    ACTIONS(155), 1,
      anon_sym_QMARK,
    ACTIONS(123), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
  [643] = 1,
    ACTIONS(137), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [654] = 1,
    ACTIONS(133), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [665] = 1,
    ACTIONS(135), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [676] = 1,
    ACTIONS(111), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [687] = 1,
    ACTIONS(127), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [698] = 1,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [708] = 1,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [718] = 1,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [728] = 1,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [738] = 1,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [748] = 1,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [758] = 5,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    STATE(76), 1,
      sym_namespace,
    STATE(64), 2,
      sym_class_name,
      sym_interface_name,
  [775] = 5,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    STATE(76), 1,
      sym_namespace,
    STATE(63), 2,
      sym_class_name,
      sym_interface_name,
  [792] = 1,
    ACTIONS(171), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
  [800] = 1,
    ACTIONS(173), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
  [808] = 1,
    ACTIONS(175), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
  [816] = 1,
    ACTIONS(177), 5,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
  [824] = 5,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(179), 1,
      sym__constant,
    STATE(78), 1,
      sym_namespace,
    STATE(82), 1,
      sym_interface_name,
  [840] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(179), 1,
      sym__constant,
    ACTIONS(181), 1,
      sym__alias,
    STATE(77), 1,
      sym_namespace,
    STATE(85), 1,
      sym_alias_name,
  [856] = 4,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(27), 1,
      sym__scope,
    STATE(13), 1,
      sym_class_name,
    STATE(81), 1,
      sym_namespace,
  [869] = 4,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(27), 1,
      sym__scope,
    STATE(12), 1,
      sym_class_name,
    STATE(81), 1,
      sym_namespace,
  [882] = 4,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(27), 1,
      sym__scope,
    STATE(65), 1,
      sym_class_name,
    STATE(81), 1,
      sym_namespace,
  [895] = 1,
    ACTIONS(183), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [901] = 1,
    ACTIONS(185), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [907] = 3,
    ACTIONS(187), 1,
      sym__alias,
    ACTIONS(189), 1,
      sym__constant,
    ACTIONS(191), 1,
      sym__interface,
  [917] = 1,
    ACTIONS(193), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [923] = 3,
    ACTIONS(195), 1,
      sym__alias,
    ACTIONS(197), 1,
      sym__constant,
    ACTIONS(199), 1,
      sym__interface,
  [933] = 2,
    ACTIONS(189), 1,
      sym__constant,
    ACTIONS(191), 1,
      sym__interface,
  [940] = 2,
    ACTIONS(195), 1,
      sym__alias,
    ACTIONS(201), 1,
      sym__constant,
  [947] = 2,
    ACTIONS(191), 1,
      sym__interface,
    ACTIONS(201), 1,
      sym__constant,
  [954] = 1,
    ACTIONS(95), 1,
      sym__scope,
  [958] = 1,
    ACTIONS(91), 1,
      sym__scope,
  [962] = 1,
    ACTIONS(189), 1,
      sym__constant,
  [966] = 1,
    ACTIONS(203), 1,
      anon_sym_end,
  [970] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [974] = 1,
    ACTIONS(207), 1,
      anon_sym_end,
  [978] = 1,
    ACTIONS(209), 1,
      anon_sym_EQ,
  [982] = 1,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [986] = 1,
    ACTIONS(213), 1,
      anon_sym_end,
  [990] = 1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [994] = 1,
    ACTIONS(217), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 34,
  [SMALL_STATE(12)] = 68,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 126,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 182,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 224,
  [SMALL_STATE(20)] = 238,
  [SMALL_STATE(21)] = 251,
  [SMALL_STATE(22)] = 270,
  [SMALL_STATE(23)] = 289,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 321,
  [SMALL_STATE(26)] = 334,
  [SMALL_STATE(27)] = 347,
  [SMALL_STATE(28)] = 360,
  [SMALL_STATE(29)] = 373,
  [SMALL_STATE(30)] = 386,
  [SMALL_STATE(31)] = 399,
  [SMALL_STATE(32)] = 412,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 444,
  [SMALL_STATE(35)] = 457,
  [SMALL_STATE(36)] = 476,
  [SMALL_STATE(37)] = 490,
  [SMALL_STATE(38)] = 504,
  [SMALL_STATE(39)] = 515,
  [SMALL_STATE(40)] = 526,
  [SMALL_STATE(41)] = 537,
  [SMALL_STATE(42)] = 548,
  [SMALL_STATE(43)] = 559,
  [SMALL_STATE(44)] = 570,
  [SMALL_STATE(45)] = 587,
  [SMALL_STATE(46)] = 604,
  [SMALL_STATE(47)] = 615,
  [SMALL_STATE(48)] = 626,
  [SMALL_STATE(49)] = 643,
  [SMALL_STATE(50)] = 654,
  [SMALL_STATE(51)] = 665,
  [SMALL_STATE(52)] = 676,
  [SMALL_STATE(53)] = 687,
  [SMALL_STATE(54)] = 698,
  [SMALL_STATE(55)] = 708,
  [SMALL_STATE(56)] = 718,
  [SMALL_STATE(57)] = 728,
  [SMALL_STATE(58)] = 738,
  [SMALL_STATE(59)] = 748,
  [SMALL_STATE(60)] = 758,
  [SMALL_STATE(61)] = 775,
  [SMALL_STATE(62)] = 792,
  [SMALL_STATE(63)] = 800,
  [SMALL_STATE(64)] = 808,
  [SMALL_STATE(65)] = 816,
  [SMALL_STATE(66)] = 824,
  [SMALL_STATE(67)] = 840,
  [SMALL_STATE(68)] = 856,
  [SMALL_STATE(69)] = 869,
  [SMALL_STATE(70)] = 882,
  [SMALL_STATE(71)] = 895,
  [SMALL_STATE(72)] = 901,
  [SMALL_STATE(73)] = 907,
  [SMALL_STATE(74)] = 917,
  [SMALL_STATE(75)] = 923,
  [SMALL_STATE(76)] = 933,
  [SMALL_STATE(77)] = 940,
  [SMALL_STATE(78)] = 947,
  [SMALL_STATE(79)] = 954,
  [SMALL_STATE(80)] = 958,
  [SMALL_STATE(81)] = 962,
  [SMALL_STATE(82)] = 966,
  [SMALL_STATE(83)] = 970,
  [SMALL_STATE(84)] = 974,
  [SMALL_STATE(85)] = 978,
  [SMALL_STATE(86)] = 982,
  [SMALL_STATE(87)] = 986,
  [SMALL_STATE(88)] = 990,
  [SMALL_STATE(89)] = 994,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(88),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(67),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(86),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(61),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(60),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(70),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaceable_type, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_type, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_member, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_member, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prepend_member, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
