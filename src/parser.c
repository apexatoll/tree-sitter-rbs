#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 2
#define TOKEN_COUNT 38
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
  sym__method = 8,
  sym__scope = 9,
  sym__symbol = 10,
  anon_sym_class = 11,
  anon_sym_end = 12,
  anon_sym_module = 13,
  anon_sym_interface = 14,
  anon_sym_type = 15,
  anon_sym_EQ = 16,
  anon_sym_COLON = 17,
  anon_sym_include = 18,
  anon_sym_extend = 19,
  anon_sym_prepend = 20,
  anon_sym_alias = 21,
  anon_sym_self_DOT = 22,
  anon_sym_top = 23,
  anon_sym_bot = 24,
  anon_sym_self = 25,
  anon_sym_instance = 26,
  anon_sym_nil = 27,
  anon_sym_bool = 28,
  anon_sym_void = 29,
  anon_sym_untyped = 30,
  aux_sym_string_literal_token1 = 31,
  aux_sym_string_literal_token2 = 32,
  sym_true_literal = 33,
  sym_false_literal = 34,
  anon_sym_PIPE = 35,
  anon_sym_AMP = 36,
  anon_sym_QMARK = 37,
  sym_program = 38,
  sym__integer = 39,
  sym_declaration = 40,
  sym_class_declaration = 41,
  sym_module_declaration = 42,
  sym_interface_declaration = 43,
  sym_type_alias_declaration = 44,
  sym_constant_declaration = 45,
  sym_global_declaration = 46,
  sym_members = 47,
  sym_member = 48,
  sym_ivar_member = 49,
  sym_include_member = 50,
  sym_extend_member = 51,
  sym_prepend_member = 52,
  sym_alias_member = 53,
  sym_alias_name = 54,
  sym_class_name = 55,
  sym_interface_name = 56,
  sym_namespace = 57,
  sym_method_name = 58,
  sym_singleton_method_name = 59,
  sym_type = 60,
  sym_builtin_type = 61,
  sym_literal_type = 62,
  sym_operator_type = 63,
  sym_namespaceable_type = 64,
  sym_string_literal = 65,
  sym_symbol_literal = 66,
  sym_union_type = 67,
  sym_intersection_type = 68,
  sym_optional_type = 69,
  aux_sym_program_repeat1 = 70,
  aux_sym_members_repeat1 = 71,
  alias_sym_constant = 72,
  alias_sym_module_name = 73,
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
  [sym__method] = "_method",
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
  [anon_sym_alias] = "alias",
  [anon_sym_self_DOT] = "self.",
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
  [sym_alias_member] = "alias_member",
  [sym_alias_name] = "alias_name",
  [sym_class_name] = "class_name",
  [sym_interface_name] = "interface_name",
  [sym_namespace] = "namespace",
  [sym_method_name] = "method_name",
  [sym_singleton_method_name] = "singleton_method_name",
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
  [sym__method] = sym__method,
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
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_self_DOT] = anon_sym_self_DOT,
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
  [sym_alias_member] = sym_alias_member,
  [sym_alias_name] = sym_alias_name,
  [sym_class_name] = sym_class_name,
  [sym_interface_name] = sym_interface_name,
  [sym_namespace] = sym_namespace,
  [sym_method_name] = sym_method_name,
  [sym_singleton_method_name] = sym_singleton_method_name,
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
  [sym__method] = {
    .visible = false,
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
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self_DOT] = {
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
  [sym_alias_member] = {
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
  [sym_method_name] = {
    .visible = true,
    .named = true,
  },
  [sym_singleton_method_name] = {
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
  [4] = 2,
  [5] = 3,
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
  [23] = 19,
  [24] = 18,
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
  [38] = 16,
  [39] = 21,
  [40] = 40,
  [41] = 37,
  [42] = 30,
  [43] = 20,
  [44] = 31,
  [45] = 34,
  [46] = 35,
  [47] = 27,
  [48] = 28,
  [49] = 22,
  [50] = 29,
  [51] = 17,
  [52] = 26,
  [53] = 32,
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
  [75] = 75,
  [76] = 76,
  [77] = 75,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 62,
  [96] = 96,
  [97] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '&') ADVANCE(184);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '?') ADVANCE(185);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(67);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(160);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 8:
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '_') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(4);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 87:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 89:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 92:
      if (eof) ADVANCE(95);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '&') ADVANCE(184);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(67);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      END_STATE();
    case 93:
      if (eof) ADVANCE(95);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '&') ADVANCE(184);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '?') ADVANCE(185);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '&') ADVANCE(184);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'c') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'f') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'y') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__delimited_symbol);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__integer_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__ivar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__method);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(139);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_self_DOT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_bot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_self);
      if (lookahead == '.') ADVANCE(160);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_instance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_untyped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_true_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_false_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 185:
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 93},
  [24] = {.lex_state = 93},
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
  [58] = {.lex_state = 93},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 93},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
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
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_self_DOT] = ACTIONS(1),
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
    [sym_program] = STATE(92),
    [sym_declaration] = STATE(10),
    [sym_class_declaration] = STATE(60),
    [sym_module_declaration] = STATE(60),
    [sym_interface_declaration] = STATE(60),
    [sym_type_alias_declaration] = STATE(60),
    [sym_constant_declaration] = STATE(60),
    [sym_global_declaration] = STATE(60),
    [aux_sym_program_repeat1] = STATE(10),
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
  [0] = 15,
    ACTIONS(17), 1,
      sym__alias,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    STATE(21), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(31), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(33), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(30), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(31), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(35), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(34), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(29), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [66] = 15,
    ACTIONS(17), 1,
      sym__alias,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    STATE(32), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(31), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(33), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(30), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(31), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(35), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(34), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(29), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [132] = 15,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(35), 1,
      sym__alias,
    ACTIONS(37), 1,
      sym__constant,
    ACTIONS(41), 1,
      aux_sym__integer_token1,
    ACTIONS(43), 1,
      sym__interface,
    STATE(39), 1,
      sym_type,
    STATE(77), 1,
      sym_namespace,
    ACTIONS(39), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(47), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(49), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(42), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(44), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(45), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(45), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [198] = 15,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(35), 1,
      sym__alias,
    ACTIONS(37), 1,
      sym__constant,
    ACTIONS(41), 1,
      aux_sym__integer_token1,
    ACTIONS(43), 1,
      sym__interface,
    STATE(53), 1,
      sym_type,
    STATE(77), 1,
      sym_namespace,
    ACTIONS(39), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(47), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(49), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(42), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(44), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(45), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(45), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [264] = 15,
    ACTIONS(17), 1,
      sym__alias,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    STATE(25), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(31), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(33), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(30), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(31), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(35), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(34), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(29), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [330] = 15,
    ACTIONS(17), 1,
      sym__alias,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    STATE(33), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(31), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(33), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(30), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(31), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(35), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(34), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(29), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [396] = 15,
    ACTIONS(17), 1,
      sym__alias,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    STATE(36), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(31), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(33), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(30), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(31), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(35), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(34), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(29), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [462] = 15,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(35), 1,
      sym__alias,
    ACTIONS(37), 1,
      sym__constant,
    ACTIONS(41), 1,
      aux_sym__integer_token1,
    ACTIONS(43), 1,
      sym__interface,
    STATE(40), 1,
      sym_type,
    STATE(77), 1,
      sym_namespace,
    ACTIONS(39), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(47), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(49), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(42), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(44), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(45), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(45), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [528] = 9,
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
    STATE(60), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [562] = 9,
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
    STATE(60), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [596] = 9,
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
    ACTIONS(83), 1,
      anon_sym_alias,
    STATE(91), 1,
      sym_members,
    STATE(14), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(64), 5,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
  [629] = 9,
    ACTIONS(73), 1,
      sym__ivar,
    ACTIONS(77), 1,
      anon_sym_include,
    ACTIONS(79), 1,
      anon_sym_extend,
    ACTIONS(81), 1,
      anon_sym_prepend,
    ACTIONS(83), 1,
      anon_sym_alias,
    ACTIONS(85), 1,
      anon_sym_end,
    STATE(93), 1,
      sym_members,
    STATE(14), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(64), 5,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
  [662] = 8,
    ACTIONS(73), 1,
      sym__ivar,
    ACTIONS(77), 1,
      anon_sym_include,
    ACTIONS(79), 1,
      anon_sym_extend,
    ACTIONS(81), 1,
      anon_sym_prepend,
    ACTIONS(83), 1,
      anon_sym_alias,
    ACTIONS(87), 1,
      anon_sym_end,
    STATE(15), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(64), 5,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
  [692] = 8,
    ACTIONS(89), 1,
      sym__ivar,
    ACTIONS(92), 1,
      anon_sym_end,
    ACTIONS(94), 1,
      anon_sym_include,
    ACTIONS(97), 1,
      anon_sym_extend,
    ACTIONS(100), 1,
      anon_sym_prepend,
    ACTIONS(103), 1,
      anon_sym_alias,
    STATE(15), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(64), 5,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
  [722] = 1,
    ACTIONS(106), 11,
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
  [736] = 1,
    ACTIONS(108), 11,
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
  [750] = 2,
    ACTIONS(112), 1,
      sym__scope,
    ACTIONS(110), 10,
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
  [766] = 2,
    ACTIONS(116), 1,
      sym__scope,
    ACTIONS(114), 10,
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
  [782] = 1,
    ACTIONS(118), 10,
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
  [795] = 4,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      anon_sym_QMARK,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [814] = 1,
    ACTIONS(128), 10,
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
  [827] = 2,
    ACTIONS(116), 1,
      sym__scope,
    ACTIONS(114), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [842] = 2,
    ACTIONS(112), 1,
      sym__scope,
    ACTIONS(110), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [857] = 4,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      anon_sym_QMARK,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [876] = 1,
    ACTIONS(132), 10,
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
  [889] = 1,
    ACTIONS(134), 10,
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
  [902] = 1,
    ACTIONS(136), 10,
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
  [915] = 1,
    ACTIONS(138), 10,
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
  [928] = 1,
    ACTIONS(140), 10,
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
  [941] = 1,
    ACTIONS(142), 10,
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
  [954] = 4,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      anon_sym_QMARK,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [973] = 4,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      anon_sym_QMARK,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [992] = 1,
    ACTIONS(148), 10,
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
  [1005] = 1,
    ACTIONS(150), 10,
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
  [1018] = 4,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      anon_sym_QMARK,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1037] = 1,
    ACTIONS(154), 10,
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
  [1050] = 1,
    ACTIONS(106), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1062] = 4,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(158), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_QMARK,
    ACTIONS(120), 6,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
  [1080] = 4,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(158), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_QMARK,
    ACTIONS(162), 6,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
  [1098] = 1,
    ACTIONS(154), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1110] = 1,
    ACTIONS(140), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1122] = 1,
    ACTIONS(118), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1134] = 1,
    ACTIONS(142), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1146] = 1,
    ACTIONS(148), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1158] = 1,
    ACTIONS(150), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1170] = 1,
    ACTIONS(134), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1182] = 1,
    ACTIONS(136), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1194] = 1,
    ACTIONS(128), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1206] = 1,
    ACTIONS(138), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1218] = 1,
    ACTIONS(108), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1230] = 1,
    ACTIONS(132), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1242] = 4,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(158), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_QMARK,
    ACTIONS(144), 6,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
  [1260] = 1,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1270] = 1,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1280] = 1,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1290] = 1,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1300] = 1,
    ACTIONS(172), 7,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_self_DOT,
  [1310] = 1,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1320] = 1,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1330] = 1,
    ACTIONS(178), 6,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
  [1339] = 1,
    ACTIONS(180), 6,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
  [1348] = 1,
    ACTIONS(182), 6,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
  [1357] = 1,
    ACTIONS(184), 6,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
  [1366] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    ACTIONS(43), 1,
      sym__interface,
    STATE(84), 1,
      sym_namespace,
    STATE(61), 2,
      sym_class_name,
      sym_interface_name,
  [1383] = 1,
    ACTIONS(186), 6,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
  [1392] = 1,
    ACTIONS(188), 6,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
  [1401] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    ACTIONS(43), 1,
      sym__interface,
    STATE(84), 1,
      sym_namespace,
    STATE(66), 2,
      sym_class_name,
      sym_interface_name,
  [1418] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      sym__interface,
    ACTIONS(190), 1,
      sym__constant,
    STATE(82), 1,
      sym_namespace,
    STATE(87), 1,
      sym_interface_name,
  [1434] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(190), 1,
      sym__constant,
    ACTIONS(192), 1,
      sym__alias,
    STATE(81), 1,
      sym_namespace,
    STATE(86), 1,
      sym_alias_name,
  [1450] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    STATE(13), 1,
      sym_class_name,
    STATE(89), 1,
      sym_namespace,
  [1463] = 4,
    ACTIONS(194), 1,
      sym__method,
    ACTIONS(196), 1,
      anon_sym_self_DOT,
    STATE(80), 1,
      sym_method_name,
    STATE(83), 1,
      sym_singleton_method_name,
  [1476] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    STATE(63), 1,
      sym_class_name,
    STATE(89), 1,
      sym_namespace,
  [1489] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    STATE(12), 1,
      sym_class_name,
    STATE(89), 1,
      sym_namespace,
  [1502] = 3,
    ACTIONS(198), 1,
      sym__alias,
    ACTIONS(200), 1,
      sym__constant,
    ACTIONS(202), 1,
      sym__interface,
  [1512] = 1,
    ACTIONS(204), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [1518] = 3,
    ACTIONS(206), 1,
      sym__alias,
    ACTIONS(208), 1,
      sym__constant,
    ACTIONS(210), 1,
      sym__interface,
  [1528] = 1,
    ACTIONS(212), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [1534] = 1,
    ACTIONS(214), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [1540] = 2,
    ACTIONS(216), 1,
      sym__method,
    STATE(67), 1,
      sym_method_name,
  [1547] = 2,
    ACTIONS(198), 1,
      sym__alias,
    ACTIONS(218), 1,
      sym__constant,
  [1554] = 2,
    ACTIONS(210), 1,
      sym__interface,
    ACTIONS(218), 1,
      sym__constant,
  [1561] = 2,
    ACTIONS(196), 1,
      anon_sym_self_DOT,
    STATE(67), 1,
      sym_singleton_method_name,
  [1568] = 2,
    ACTIONS(208), 1,
      sym__constant,
    ACTIONS(210), 1,
      sym__interface,
  [1575] = 1,
    ACTIONS(220), 1,
      anon_sym_COLON,
  [1579] = 1,
    ACTIONS(222), 1,
      anon_sym_EQ,
  [1583] = 1,
    ACTIONS(224), 1,
      anon_sym_end,
  [1587] = 1,
    ACTIONS(116), 1,
      sym__scope,
  [1591] = 1,
    ACTIONS(208), 1,
      sym__constant,
  [1595] = 1,
    ACTIONS(112), 1,
      sym__scope,
  [1599] = 1,
    ACTIONS(226), 1,
      anon_sym_end,
  [1603] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [1607] = 1,
    ACTIONS(230), 1,
      anon_sym_end,
  [1611] = 1,
    ACTIONS(232), 1,
      sym__method,
  [1615] = 1,
    ACTIONS(180), 1,
      sym__method,
  [1619] = 1,
    ACTIONS(234), 1,
      anon_sym_COLON,
  [1623] = 1,
    ACTIONS(236), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 330,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 462,
  [SMALL_STATE(10)] = 528,
  [SMALL_STATE(11)] = 562,
  [SMALL_STATE(12)] = 596,
  [SMALL_STATE(13)] = 629,
  [SMALL_STATE(14)] = 662,
  [SMALL_STATE(15)] = 692,
  [SMALL_STATE(16)] = 722,
  [SMALL_STATE(17)] = 736,
  [SMALL_STATE(18)] = 750,
  [SMALL_STATE(19)] = 766,
  [SMALL_STATE(20)] = 782,
  [SMALL_STATE(21)] = 795,
  [SMALL_STATE(22)] = 814,
  [SMALL_STATE(23)] = 827,
  [SMALL_STATE(24)] = 842,
  [SMALL_STATE(25)] = 857,
  [SMALL_STATE(26)] = 876,
  [SMALL_STATE(27)] = 889,
  [SMALL_STATE(28)] = 902,
  [SMALL_STATE(29)] = 915,
  [SMALL_STATE(30)] = 928,
  [SMALL_STATE(31)] = 941,
  [SMALL_STATE(32)] = 954,
  [SMALL_STATE(33)] = 973,
  [SMALL_STATE(34)] = 992,
  [SMALL_STATE(35)] = 1005,
  [SMALL_STATE(36)] = 1018,
  [SMALL_STATE(37)] = 1037,
  [SMALL_STATE(38)] = 1050,
  [SMALL_STATE(39)] = 1062,
  [SMALL_STATE(40)] = 1080,
  [SMALL_STATE(41)] = 1098,
  [SMALL_STATE(42)] = 1110,
  [SMALL_STATE(43)] = 1122,
  [SMALL_STATE(44)] = 1134,
  [SMALL_STATE(45)] = 1146,
  [SMALL_STATE(46)] = 1158,
  [SMALL_STATE(47)] = 1170,
  [SMALL_STATE(48)] = 1182,
  [SMALL_STATE(49)] = 1194,
  [SMALL_STATE(50)] = 1206,
  [SMALL_STATE(51)] = 1218,
  [SMALL_STATE(52)] = 1230,
  [SMALL_STATE(53)] = 1242,
  [SMALL_STATE(54)] = 1260,
  [SMALL_STATE(55)] = 1270,
  [SMALL_STATE(56)] = 1280,
  [SMALL_STATE(57)] = 1290,
  [SMALL_STATE(58)] = 1300,
  [SMALL_STATE(59)] = 1310,
  [SMALL_STATE(60)] = 1320,
  [SMALL_STATE(61)] = 1330,
  [SMALL_STATE(62)] = 1339,
  [SMALL_STATE(63)] = 1348,
  [SMALL_STATE(64)] = 1357,
  [SMALL_STATE(65)] = 1366,
  [SMALL_STATE(66)] = 1383,
  [SMALL_STATE(67)] = 1392,
  [SMALL_STATE(68)] = 1401,
  [SMALL_STATE(69)] = 1418,
  [SMALL_STATE(70)] = 1434,
  [SMALL_STATE(71)] = 1450,
  [SMALL_STATE(72)] = 1463,
  [SMALL_STATE(73)] = 1476,
  [SMALL_STATE(74)] = 1489,
  [SMALL_STATE(75)] = 1502,
  [SMALL_STATE(76)] = 1512,
  [SMALL_STATE(77)] = 1518,
  [SMALL_STATE(78)] = 1528,
  [SMALL_STATE(79)] = 1534,
  [SMALL_STATE(80)] = 1540,
  [SMALL_STATE(81)] = 1547,
  [SMALL_STATE(82)] = 1554,
  [SMALL_STATE(83)] = 1561,
  [SMALL_STATE(84)] = 1568,
  [SMALL_STATE(85)] = 1575,
  [SMALL_STATE(86)] = 1579,
  [SMALL_STATE(87)] = 1583,
  [SMALL_STATE(88)] = 1587,
  [SMALL_STATE(89)] = 1591,
  [SMALL_STATE(90)] = 1595,
  [SMALL_STATE(91)] = 1599,
  [SMALL_STATE(92)] = 1603,
  [SMALL_STATE(93)] = 1607,
  [SMALL_STATE(94)] = 1611,
  [SMALL_STATE(95)] = 1615,
  [SMALL_STATE(96)] = 1619,
  [SMALL_STATE(97)] = 1623,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(96),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 1),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(85),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(68),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(65),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(73),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(72),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaceable_type, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_type, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_method_name, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_member, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_name, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prepend_member, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_member, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_member, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
