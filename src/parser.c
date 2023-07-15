#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 2
#define TOKEN_COUNT 41
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
  anon_sym_LF = 22,
  anon_sym_private = 23,
  anon_sym_public = 24,
  anon_sym_self_DOT = 25,
  anon_sym_top = 26,
  anon_sym_bot = 27,
  anon_sym_self = 28,
  anon_sym_instance = 29,
  anon_sym_nil = 30,
  anon_sym_bool = 31,
  anon_sym_void = 32,
  anon_sym_untyped = 33,
  aux_sym_string_literal_token1 = 34,
  aux_sym_string_literal_token2 = 35,
  sym_true_literal = 36,
  sym_false_literal = 37,
  anon_sym_PIPE = 38,
  anon_sym_AMP = 39,
  anon_sym_QMARK = 40,
  sym_program = 41,
  sym__integer = 42,
  sym_declaration = 43,
  sym_class_declaration = 44,
  sym_module_declaration = 45,
  sym_interface_declaration = 46,
  sym_type_alias_declaration = 47,
  sym_constant_declaration = 48,
  sym_global_declaration = 49,
  sym_members = 50,
  sym_member = 51,
  sym_ivar_member = 52,
  sym_include_member = 53,
  sym_extend_member = 54,
  sym_prepend_member = 55,
  sym_alias_member = 56,
  sym_visibility_member = 57,
  sym_visibility = 58,
  sym_alias_name = 59,
  sym_class_name = 60,
  sym_interface_name = 61,
  sym_namespace = 62,
  sym_method_name = 63,
  sym_singleton_method_name = 64,
  sym_type = 65,
  sym_builtin_type = 66,
  sym_literal_type = 67,
  sym_operator_type = 68,
  sym_namespaceable_type = 69,
  sym_string_literal = 70,
  sym_symbol_literal = 71,
  sym_union_type = 72,
  sym_intersection_type = 73,
  sym_optional_type = 74,
  aux_sym_program_repeat1 = 75,
  aux_sym_members_repeat1 = 76,
  alias_sym_constant = 77,
  alias_sym_module_name = 78,
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
  [anon_sym_LF] = "\n",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
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
  [sym_visibility_member] = "visibility_member",
  [sym_visibility] = "visibility",
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
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
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
  [sym_visibility_member] = sym_visibility_member,
  [sym_visibility] = sym_visibility,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
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
  [sym_visibility_member] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
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
  [26] = 22,
  [27] = 17,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 16,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 29,
  [40] = 21,
  [41] = 35,
  [42] = 42,
  [43] = 20,
  [44] = 25,
  [45] = 18,
  [46] = 46,
  [47] = 30,
  [48] = 31,
  [49] = 49,
  [50] = 36,
  [51] = 19,
  [52] = 23,
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 76,
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
  [92] = 58,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(104);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(98);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '?') ADVANCE(197);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'v') ADVANCE(74);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(169);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead == 'v') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '_') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 95:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 98:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 101:
      if (eof) ADVANCE(104);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(98);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'v') ADVANCE(74);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 102:
      if (eof) ADVANCE(104);
      if (lookahead == '$') ADVANCE(98);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '?') ADVANCE(197);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 103:
      if (eof) ADVANCE(104);
      if (lookahead == '$') ADVANCE(98);
      if (lookahead == '&') ADVANCE(196);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'f') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'u') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'y') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__delimited_symbol);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__integer_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__ivar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__method);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(148);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_self_DOT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_self);
      if (lookahead == '.') ADVANCE(172);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_instance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_untyped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_true_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_false_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 102},
  [17] = {.lex_state = 102},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 102},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 102},
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
  [54] = {.lex_state = 102},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 102},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
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
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
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
    [sym_program] = STATE(93),
    [sym_declaration] = STATE(14),
    [sym_class_declaration] = STATE(63),
    [sym_module_declaration] = STATE(63),
    [sym_interface_declaration] = STATE(63),
    [sym_type_alias_declaration] = STATE(63),
    [sym_constant_declaration] = STATE(63),
    [sym_global_declaration] = STATE(63),
    [aux_sym_program_repeat1] = STATE(14),
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
    STATE(46), 1,
      sym_type,
    STATE(76), 1,
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
    STATE(39), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(45), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 4,
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
    STATE(38), 1,
      sym_type,
    STATE(76), 1,
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
    STATE(39), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(45), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 4,
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
    STATE(25), 1,
      sym_type,
    STATE(79), 1,
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
    STATE(18), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(29), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(31), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(30), 4,
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
    STATE(37), 1,
      sym_type,
    STATE(79), 1,
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
    STATE(18), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(29), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(31), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(30), 4,
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
    STATE(44), 1,
      sym_type,
    STATE(76), 1,
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
    STATE(39), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(45), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 4,
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
    STATE(28), 1,
      sym_type,
    STATE(79), 1,
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
    STATE(18), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(29), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(31), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(30), 4,
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
    STATE(42), 1,
      sym_type,
    STATE(76), 1,
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
    STATE(39), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(45), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 4,
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
    STATE(49), 1,
      sym_type,
    STATE(76), 1,
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
    STATE(39), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(45), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 4,
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
  [528] = 11,
    ACTIONS(51), 1,
      sym__ivar,
    ACTIONS(53), 1,
      anon_sym_end,
    ACTIONS(55), 1,
      anon_sym_include,
    ACTIONS(57), 1,
      anon_sym_extend,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_alias,
    STATE(97), 1,
      sym_visibility,
    STATE(98), 1,
      sym_members,
    ACTIONS(63), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(12), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(57), 6,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [569] = 11,
    ACTIONS(51), 1,
      sym__ivar,
    ACTIONS(55), 1,
      anon_sym_include,
    ACTIONS(57), 1,
      anon_sym_extend,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_alias,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(96), 1,
      sym_members,
    STATE(97), 1,
      sym_visibility,
    ACTIONS(63), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(12), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(57), 6,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [610] = 10,
    ACTIONS(51), 1,
      sym__ivar,
    ACTIONS(55), 1,
      anon_sym_include,
    ACTIONS(57), 1,
      anon_sym_extend,
    ACTIONS(59), 1,
      anon_sym_prepend,
    ACTIONS(61), 1,
      anon_sym_alias,
    ACTIONS(67), 1,
      anon_sym_end,
    STATE(97), 1,
      sym_visibility,
    ACTIONS(63), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(13), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(57), 6,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [648] = 10,
    ACTIONS(69), 1,
      sym__ivar,
    ACTIONS(72), 1,
      anon_sym_end,
    ACTIONS(74), 1,
      anon_sym_include,
    ACTIONS(77), 1,
      anon_sym_extend,
    ACTIONS(80), 1,
      anon_sym_prepend,
    ACTIONS(83), 1,
      anon_sym_alias,
    STATE(97), 1,
      sym_visibility,
    ACTIONS(86), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(13), 2,
      sym_member,
      aux_sym_members_repeat1,
    STATE(57), 6,
      sym_ivar_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [686] = 9,
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
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(63), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [720] = 9,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym__constant,
    ACTIONS(96), 1,
      sym__global,
    ACTIONS(99), 1,
      anon_sym_class,
    ACTIONS(102), 1,
      anon_sym_module,
    ACTIONS(105), 1,
      anon_sym_interface,
    ACTIONS(108), 1,
      anon_sym_type,
    STATE(15), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(63), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [754] = 2,
    ACTIONS(113), 1,
      sym__scope,
    ACTIONS(111), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [771] = 2,
    ACTIONS(117), 1,
      sym__scope,
    ACTIONS(115), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [788] = 1,
    ACTIONS(119), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [802] = 1,
    ACTIONS(121), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [816] = 1,
    ACTIONS(123), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [830] = 1,
    ACTIONS(125), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [844] = 1,
    ACTIONS(127), 11,
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
  [858] = 1,
    ACTIONS(129), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [872] = 1,
    ACTIONS(131), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [886] = 4,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_AMP,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(133), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [906] = 1,
    ACTIONS(127), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [920] = 2,
    ACTIONS(117), 1,
      sym__scope,
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
  [936] = 4,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_AMP,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(141), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [956] = 1,
    ACTIONS(143), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [970] = 1,
    ACTIONS(145), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [984] = 1,
    ACTIONS(147), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [998] = 2,
    ACTIONS(113), 1,
      sym__scope,
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
  [1014] = 1,
    ACTIONS(149), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1028] = 1,
    ACTIONS(149), 11,
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
  [1042] = 1,
    ACTIONS(151), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1056] = 1,
    ACTIONS(153), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1070] = 4,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_AMP,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(155), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [1090] = 4,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1109] = 1,
    ACTIONS(143), 10,
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
  [1122] = 1,
    ACTIONS(125), 10,
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
  [1135] = 1,
    ACTIONS(151), 10,
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
  [1148] = 4,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1167] = 1,
    ACTIONS(123), 10,
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
  [1180] = 4,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1199] = 1,
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
  [1212] = 4,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1231] = 1,
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
  [1244] = 1,
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
  [1257] = 4,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1276] = 1,
    ACTIONS(153), 10,
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
  [1289] = 1,
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
  [1302] = 1,
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
  [1315] = 1,
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
  [1328] = 1,
    ACTIONS(169), 9,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_self_DOT,
  [1340] = 1,
    ACTIONS(171), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [1351] = 1,
    ACTIONS(173), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [1362] = 1,
    ACTIONS(175), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [1373] = 1,
    ACTIONS(177), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [1384] = 1,
    ACTIONS(179), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [1395] = 1,
    ACTIONS(181), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [1406] = 1,
    ACTIONS(183), 8,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
  [1417] = 1,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1427] = 1,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1437] = 1,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1447] = 1,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1457] = 1,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1467] = 1,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1477] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    ACTIONS(43), 1,
      sym__interface,
    STATE(85), 1,
      sym_namespace,
    STATE(61), 2,
      sym_class_name,
      sym_interface_name,
  [1494] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    ACTIONS(43), 1,
      sym__interface,
    STATE(85), 1,
      sym_namespace,
    STATE(60), 2,
      sym_class_name,
      sym_interface_name,
  [1511] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(197), 1,
      sym__alias,
    ACTIONS(199), 1,
      sym__constant,
    STATE(81), 1,
      sym_namespace,
    STATE(87), 1,
      sym_alias_name,
  [1527] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      sym__interface,
    ACTIONS(199), 1,
      sym__constant,
    STATE(84), 1,
      sym_namespace,
    STATE(88), 1,
      sym_interface_name,
  [1543] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    STATE(11), 1,
      sym_class_name,
    STATE(90), 1,
      sym_namespace,
  [1556] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    STATE(10), 1,
      sym_class_name,
    STATE(90), 1,
      sym_namespace,
  [1569] = 4,
    ACTIONS(201), 1,
      sym__method,
    ACTIONS(203), 1,
      anon_sym_self_DOT,
    STATE(82), 1,
      sym_singleton_method_name,
    STATE(83), 1,
      sym_method_name,
  [1582] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(37), 1,
      sym__constant,
    STATE(56), 1,
      sym_class_name,
    STATE(90), 1,
      sym_namespace,
  [1595] = 3,
    ACTIONS(205), 1,
      sym__alias,
    ACTIONS(207), 1,
      sym__constant,
    ACTIONS(209), 1,
      sym__interface,
  [1605] = 1,
    ACTIONS(211), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [1611] = 1,
    ACTIONS(213), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [1617] = 3,
    ACTIONS(215), 1,
      sym__alias,
    ACTIONS(217), 1,
      sym__constant,
    ACTIONS(219), 1,
      sym__interface,
  [1627] = 1,
    ACTIONS(221), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [1633] = 2,
    ACTIONS(205), 1,
      sym__alias,
    ACTIONS(223), 1,
      sym__constant,
  [1640] = 2,
    ACTIONS(203), 1,
      anon_sym_self_DOT,
    STATE(59), 1,
      sym_singleton_method_name,
  [1647] = 2,
    ACTIONS(225), 1,
      sym__method,
    STATE(59), 1,
      sym_method_name,
  [1654] = 2,
    ACTIONS(219), 1,
      sym__interface,
    ACTIONS(223), 1,
      sym__constant,
  [1661] = 2,
    ACTIONS(217), 1,
      sym__constant,
    ACTIONS(219), 1,
      sym__interface,
  [1668] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [1672] = 1,
    ACTIONS(229), 1,
      anon_sym_EQ,
  [1676] = 1,
    ACTIONS(231), 1,
      anon_sym_end,
  [1680] = 1,
    ACTIONS(117), 1,
      sym__scope,
  [1684] = 1,
    ACTIONS(217), 1,
      sym__constant,
  [1688] = 1,
    ACTIONS(233), 1,
      sym__method,
  [1692] = 1,
    ACTIONS(177), 1,
      sym__method,
  [1696] = 1,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
  [1700] = 1,
    ACTIONS(237), 1,
      anon_sym_COLON,
  [1704] = 1,
    ACTIONS(113), 1,
      sym__scope,
  [1708] = 1,
    ACTIONS(239), 1,
      anon_sym_end,
  [1712] = 1,
    ACTIONS(241), 1,
      anon_sym_LF,
  [1716] = 1,
    ACTIONS(243), 1,
      anon_sym_end,
  [1720] = 1,
    ACTIONS(245), 1,
      anon_sym_COLON,
  [1724] = 1,
    ACTIONS(247), 1,
      anon_sym_LF,
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
  [SMALL_STATE(11)] = 569,
  [SMALL_STATE(12)] = 610,
  [SMALL_STATE(13)] = 648,
  [SMALL_STATE(14)] = 686,
  [SMALL_STATE(15)] = 720,
  [SMALL_STATE(16)] = 754,
  [SMALL_STATE(17)] = 771,
  [SMALL_STATE(18)] = 788,
  [SMALL_STATE(19)] = 802,
  [SMALL_STATE(20)] = 816,
  [SMALL_STATE(21)] = 830,
  [SMALL_STATE(22)] = 844,
  [SMALL_STATE(23)] = 858,
  [SMALL_STATE(24)] = 872,
  [SMALL_STATE(25)] = 886,
  [SMALL_STATE(26)] = 906,
  [SMALL_STATE(27)] = 920,
  [SMALL_STATE(28)] = 936,
  [SMALL_STATE(29)] = 956,
  [SMALL_STATE(30)] = 970,
  [SMALL_STATE(31)] = 984,
  [SMALL_STATE(32)] = 998,
  [SMALL_STATE(33)] = 1014,
  [SMALL_STATE(34)] = 1028,
  [SMALL_STATE(35)] = 1042,
  [SMALL_STATE(36)] = 1056,
  [SMALL_STATE(37)] = 1070,
  [SMALL_STATE(38)] = 1090,
  [SMALL_STATE(39)] = 1109,
  [SMALL_STATE(40)] = 1122,
  [SMALL_STATE(41)] = 1135,
  [SMALL_STATE(42)] = 1148,
  [SMALL_STATE(43)] = 1167,
  [SMALL_STATE(44)] = 1180,
  [SMALL_STATE(45)] = 1199,
  [SMALL_STATE(46)] = 1212,
  [SMALL_STATE(47)] = 1231,
  [SMALL_STATE(48)] = 1244,
  [SMALL_STATE(49)] = 1257,
  [SMALL_STATE(50)] = 1276,
  [SMALL_STATE(51)] = 1289,
  [SMALL_STATE(52)] = 1302,
  [SMALL_STATE(53)] = 1315,
  [SMALL_STATE(54)] = 1328,
  [SMALL_STATE(55)] = 1340,
  [SMALL_STATE(56)] = 1351,
  [SMALL_STATE(57)] = 1362,
  [SMALL_STATE(58)] = 1373,
  [SMALL_STATE(59)] = 1384,
  [SMALL_STATE(60)] = 1395,
  [SMALL_STATE(61)] = 1406,
  [SMALL_STATE(62)] = 1417,
  [SMALL_STATE(63)] = 1427,
  [SMALL_STATE(64)] = 1437,
  [SMALL_STATE(65)] = 1447,
  [SMALL_STATE(66)] = 1457,
  [SMALL_STATE(67)] = 1467,
  [SMALL_STATE(68)] = 1477,
  [SMALL_STATE(69)] = 1494,
  [SMALL_STATE(70)] = 1511,
  [SMALL_STATE(71)] = 1527,
  [SMALL_STATE(72)] = 1543,
  [SMALL_STATE(73)] = 1556,
  [SMALL_STATE(74)] = 1569,
  [SMALL_STATE(75)] = 1582,
  [SMALL_STATE(76)] = 1595,
  [SMALL_STATE(77)] = 1605,
  [SMALL_STATE(78)] = 1611,
  [SMALL_STATE(79)] = 1617,
  [SMALL_STATE(80)] = 1627,
  [SMALL_STATE(81)] = 1633,
  [SMALL_STATE(82)] = 1640,
  [SMALL_STATE(83)] = 1647,
  [SMALL_STATE(84)] = 1654,
  [SMALL_STATE(85)] = 1661,
  [SMALL_STATE(86)] = 1668,
  [SMALL_STATE(87)] = 1672,
  [SMALL_STATE(88)] = 1676,
  [SMALL_STATE(89)] = 1680,
  [SMALL_STATE(90)] = 1684,
  [SMALL_STATE(91)] = 1688,
  [SMALL_STATE(92)] = 1692,
  [SMALL_STATE(93)] = 1696,
  [SMALL_STATE(94)] = 1700,
  [SMALL_STATE(95)] = 1704,
  [SMALL_STATE(96)] = 1708,
  [SMALL_STATE(97)] = 1712,
  [SMALL_STATE(98)] = 1716,
  [SMALL_STATE(99)] = 1720,
  [SMALL_STATE(100)] = 1724,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 1),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(86),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(69),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(68),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(75),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(74),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(100),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(99),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaceable_type, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_type, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_method_name, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_member, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prepend_member, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_name, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_member, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_member, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_member, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [235] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
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
