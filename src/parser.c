#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 2
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_include = 20,
  anon_sym_extend = 21,
  anon_sym_prepend = 22,
  anon_sym_alias = 23,
  anon_sym_LF = 24,
  anon_sym_private = 25,
  anon_sym_public = 26,
  anon_sym_self_DOT = 27,
  anon_sym_attr_reader = 28,
  anon_sym_attr_writer = 29,
  anon_sym_attr_accessor = 30,
  anon_sym_top = 31,
  anon_sym_bot = 32,
  anon_sym_self = 33,
  anon_sym_instance = 34,
  anon_sym_nil = 35,
  anon_sym_bool = 36,
  anon_sym_void = 37,
  anon_sym_untyped = 38,
  aux_sym_string_literal_token1 = 39,
  aux_sym_string_literal_token2 = 40,
  sym_true_literal = 41,
  sym_false_literal = 42,
  anon_sym_PIPE = 43,
  anon_sym_AMP = 44,
  anon_sym_QMARK = 45,
  sym_program = 46,
  sym__integer = 47,
  sym_declaration = 48,
  sym_class_declaration = 49,
  sym_module_declaration = 50,
  sym_interface_declaration = 51,
  sym_type_alias_declaration = 52,
  sym_constant_declaration = 53,
  sym_global_declaration = 54,
  sym_members = 55,
  sym_member = 56,
  sym_ivar_member = 57,
  sym_attribute_member = 58,
  sym_include_member = 59,
  sym_extend_member = 60,
  sym_prepend_member = 61,
  sym_alias_member = 62,
  sym_visibility_member = 63,
  sym_visibility = 64,
  sym_alias_name = 65,
  sym_class_name = 66,
  sym_interface_name = 67,
  sym_ivar_name = 68,
  sym_namespace = 69,
  sym_method_name = 70,
  sym_singleton_method_name = 71,
  sym_attribute_type = 72,
  sym_type = 73,
  sym_builtin_type = 74,
  sym_literal_type = 75,
  sym_operator_type = 76,
  sym_namespaceable_type = 77,
  sym_string_literal = 78,
  sym_symbol_literal = 79,
  sym_union_type = 80,
  sym_intersection_type = 81,
  sym_optional_type = 82,
  aux_sym_program_repeat1 = 83,
  aux_sym_members_repeat1 = 84,
  alias_sym_constant = 85,
  alias_sym_module_name = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__alias] = "_alias",
  [sym__constant] = "_constant",
  [sym__delimited_symbol] = "_delimited_symbol",
  [sym__global] = "global",
  [aux_sym__integer_token1] = "_integer_token1",
  [sym__interface] = "_interface",
  [sym__ivar] = "_ivar",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_include] = "include",
  [anon_sym_extend] = "extend",
  [anon_sym_prepend] = "prepend",
  [anon_sym_alias] = "alias",
  [anon_sym_LF] = "\n",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
  [anon_sym_self_DOT] = "self.",
  [anon_sym_attr_reader] = "attr_reader",
  [anon_sym_attr_writer] = "attr_writer",
  [anon_sym_attr_accessor] = "attr_accessor",
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
  [sym_attribute_member] = "attribute_member",
  [sym_include_member] = "include_member",
  [sym_extend_member] = "extend_member",
  [sym_prepend_member] = "prepend_member",
  [sym_alias_member] = "alias_member",
  [sym_visibility_member] = "visibility_member",
  [sym_visibility] = "visibility",
  [sym_alias_name] = "alias_name",
  [sym_class_name] = "class_name",
  [sym_interface_name] = "interface_name",
  [sym_ivar_name] = "ivar_name",
  [sym_namespace] = "namespace",
  [sym_method_name] = "method_name",
  [sym_singleton_method_name] = "singleton_method_name",
  [sym_attribute_type] = "attribute_type",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_self_DOT] = anon_sym_self_DOT,
  [anon_sym_attr_reader] = anon_sym_attr_reader,
  [anon_sym_attr_writer] = anon_sym_attr_writer,
  [anon_sym_attr_accessor] = anon_sym_attr_accessor,
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
  [sym_attribute_member] = sym_attribute_member,
  [sym_include_member] = sym_include_member,
  [sym_extend_member] = sym_extend_member,
  [sym_prepend_member] = sym_prepend_member,
  [sym_alias_member] = sym_alias_member,
  [sym_visibility_member] = sym_visibility_member,
  [sym_visibility] = sym_visibility,
  [sym_alias_name] = sym_alias_name,
  [sym_class_name] = sym_class_name,
  [sym_interface_name] = sym_interface_name,
  [sym_ivar_name] = sym_ivar_name,
  [sym_namespace] = sym_namespace,
  [sym_method_name] = sym_method_name,
  [sym_singleton_method_name] = sym_singleton_method_name,
  [sym_attribute_type] = sym_attribute_type,
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
    .visible = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_attr_reader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attr_writer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attr_accessor] = {
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
  [sym_attribute_member] = {
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
  [sym_ivar_name] = {
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
  [sym_attribute_type] = {
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
  [7] = 5,
  [8] = 3,
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 20,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 27,
  [53] = 53,
  [54] = 41,
  [55] = 19,
  [56] = 38,
  [57] = 35,
  [58] = 58,
  [59] = 43,
  [60] = 29,
  [61] = 28,
  [62] = 30,
  [63] = 63,
  [64] = 39,
  [65] = 65,
  [66] = 34,
  [67] = 42,
  [68] = 26,
  [69] = 25,
  [70] = 40,
  [71] = 31,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 53,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 89,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(127);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == ')') ADVANCE(189);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '?') ADVANCE(225);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(86);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == 'v') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '_') ADVANCE(173);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(197);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(178);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '_') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 118:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 119:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 121:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 124:
      if (eof) ADVANCE(127);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == ')') ADVANCE(189);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(86);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 125:
      if (eof) ADVANCE(127);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(224);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '?') ADVANCE(225);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(126)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(224);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(126)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'c') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'd') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'f') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'p') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 's') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alias);
      if (lookahead == 'y') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__delimited_symbol);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__integer_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__ivar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__method);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '_') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(171);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_self_DOT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_attr_reader);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_attr_writer);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_attr_accessor);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_bot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_self);
      if (lookahead == '.') ADVANCE(197);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_instance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_untyped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '"') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_true_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_false_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 225:
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
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 125},
  [20] = {.lex_state = 125},
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
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 125},
  [45] = {.lex_state = 125},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 125},
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
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 125},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_prepend] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_self_DOT] = ACTIONS(1),
    [anon_sym_attr_reader] = ACTIONS(1),
    [anon_sym_attr_writer] = ACTIONS(1),
    [anon_sym_attr_accessor] = ACTIONS(1),
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
    [sym_program] = STATE(117),
    [sym_declaration] = STATE(21),
    [sym_class_declaration] = STATE(75),
    [sym_module_declaration] = STATE(75),
    [sym_interface_declaration] = STATE(75),
    [sym_type_alias_declaration] = STATE(75),
    [sym_constant_declaration] = STATE(75),
    [sym_global_declaration] = STATE(75),
    [aux_sym_program_repeat1] = STATE(21),
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
    STATE(33), 1,
      sym_type,
    STATE(89), 1,
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
    STATE(34), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(38), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(43), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(39), 4,
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
    STATE(61), 1,
      sym_type,
    STATE(95), 1,
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
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(59), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(66), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(64), 4,
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
    STATE(63), 1,
      sym_type,
    STATE(95), 1,
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
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(59), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(66), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(64), 4,
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
    STATE(60), 1,
      sym_type,
    STATE(95), 1,
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
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(59), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(66), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(64), 4,
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
    STATE(23), 1,
      sym_type,
    STATE(89), 1,
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
    STATE(34), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(38), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(43), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(39), 4,
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
    STATE(29), 1,
      sym_type,
    STATE(89), 1,
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
    STATE(34), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(38), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(43), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(39), 4,
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
    STATE(28), 1,
      sym_type,
    STATE(89), 1,
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
    STATE(34), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(38), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(43), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(39), 4,
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
    STATE(24), 1,
      sym_type,
    STATE(89), 1,
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
    STATE(34), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(38), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(43), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(39), 4,
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
  [528] = 15,
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
    STATE(89), 1,
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
    STATE(34), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(38), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(43), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(39), 4,
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
  [594] = 15,
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
    STATE(65), 1,
      sym_type,
    STATE(95), 1,
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
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(59), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(66), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(64), 4,
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
  [660] = 15,
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
    STATE(58), 1,
      sym_type,
    STATE(95), 1,
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
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(59), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(66), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(64), 4,
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
  [726] = 15,
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
    STATE(37), 1,
      sym_type,
    STATE(89), 1,
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
    STATE(34), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(38), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(43), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(39), 4,
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
  [792] = 15,
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
    STATE(89), 1,
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
    STATE(34), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(38), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(43), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(39), 4,
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
  [858] = 14,
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
    STATE(80), 1,
      sym_visibility,
    STATE(105), 1,
      sym_attribute_type,
    STATE(106), 1,
      sym_members,
    STATE(118), 1,
      sym_ivar_name,
    ACTIONS(63), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(17), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(65), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(48), 7,
      sym_ivar_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [911] = 14,
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
    STATE(80), 1,
      sym_visibility,
    STATE(105), 1,
      sym_attribute_type,
    STATE(114), 1,
      sym_members,
    STATE(118), 1,
      sym_ivar_name,
    ACTIONS(63), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(17), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(65), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(48), 7,
      sym_ivar_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [964] = 13,
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
    ACTIONS(69), 1,
      anon_sym_end,
    STATE(80), 1,
      sym_visibility,
    STATE(105), 1,
      sym_attribute_type,
    STATE(118), 1,
      sym_ivar_name,
    ACTIONS(63), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(18), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(65), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(48), 7,
      sym_ivar_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [1014] = 13,
    ACTIONS(71), 1,
      sym__ivar,
    ACTIONS(74), 1,
      anon_sym_end,
    ACTIONS(76), 1,
      anon_sym_include,
    ACTIONS(79), 1,
      anon_sym_extend,
    ACTIONS(82), 1,
      anon_sym_prepend,
    ACTIONS(85), 1,
      anon_sym_alias,
    STATE(80), 1,
      sym_visibility,
    STATE(105), 1,
      sym_attribute_type,
    STATE(118), 1,
      sym_ivar_name,
    ACTIONS(88), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(18), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(91), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(48), 7,
      sym_ivar_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [1064] = 2,
    ACTIONS(96), 1,
      sym__scope,
    ACTIONS(94), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1084] = 2,
    ACTIONS(100), 1,
      sym__scope,
    ACTIONS(98), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1104] = 9,
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
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(75), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [1138] = 9,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      sym__constant,
    ACTIONS(109), 1,
      sym__global,
    ACTIONS(112), 1,
      anon_sym_class,
    ACTIONS(115), 1,
      anon_sym_module,
    ACTIONS(118), 1,
      anon_sym_interface,
    ACTIONS(121), 1,
      anon_sym_type,
    STATE(22), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(75), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [1172] = 4,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(124), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1195] = 4,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(132), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1218] = 1,
    ACTIONS(134), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1235] = 1,
    ACTIONS(136), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1252] = 1,
    ACTIONS(138), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1269] = 4,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(140), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1292] = 4,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(142), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1315] = 1,
    ACTIONS(144), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1332] = 1,
    ACTIONS(146), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1349] = 4,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(148), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1372] = 4,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(150), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1395] = 1,
    ACTIONS(152), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1412] = 1,
    ACTIONS(154), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1429] = 4,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(156), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1452] = 4,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_QMARK,
    ACTIONS(158), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1475] = 1,
    ACTIONS(160), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1492] = 1,
    ACTIONS(162), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1509] = 1,
    ACTIONS(164), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1526] = 1,
    ACTIONS(166), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1543] = 1,
    ACTIONS(168), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1560] = 1,
    ACTIONS(170), 14,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK,
  [1577] = 1,
    ACTIONS(172), 12,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_self_DOT,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1592] = 2,
    ACTIONS(100), 1,
      sym__scope,
    ACTIONS(98), 10,
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
  [1608] = 1,
    ACTIONS(174), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1622] = 1,
    ACTIONS(176), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1636] = 1,
    ACTIONS(178), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1650] = 1,
    ACTIONS(180), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1664] = 1,
    ACTIONS(182), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1678] = 1,
    ACTIONS(184), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1692] = 1,
    ACTIONS(138), 11,
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
  [1706] = 1,
    ACTIONS(186), 11,
      sym__ivar,
      anon_sym_end,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [1720] = 1,
    ACTIONS(166), 11,
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
  [1734] = 2,
    ACTIONS(96), 1,
      sym__scope,
    ACTIONS(94), 10,
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
  [1750] = 1,
    ACTIONS(160), 10,
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
  [1763] = 1,
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
  [1776] = 4,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_AMP,
    ACTIONS(194), 1,
      anon_sym_QMARK,
    ACTIONS(188), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1795] = 1,
    ACTIONS(170), 10,
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
  [1808] = 4,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_AMP,
    ACTIONS(194), 1,
      anon_sym_QMARK,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1827] = 4,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_AMP,
    ACTIONS(194), 1,
      anon_sym_QMARK,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1846] = 1,
    ACTIONS(144), 10,
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
  [1859] = 4,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_AMP,
    ACTIONS(194), 1,
      anon_sym_QMARK,
    ACTIONS(196), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1878] = 1,
    ACTIONS(162), 10,
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
  [1891] = 4,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_AMP,
    ACTIONS(194), 1,
      anon_sym_QMARK,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1910] = 1,
    ACTIONS(152), 10,
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
  [1923] = 1,
    ACTIONS(168), 10,
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
  [1936] = 1,
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
  [1949] = 1,
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
  [1962] = 1,
    ACTIONS(164), 10,
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
  [1975] = 1,
    ACTIONS(146), 10,
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
  [1988] = 1,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [1998] = 1,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [2008] = 1,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [2018] = 1,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [2028] = 1,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [2038] = 1,
    ACTIONS(210), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [2048] = 5,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    STATE(98), 1,
      sym_namespace,
    STATE(49), 2,
      sym_class_name,
      sym_interface_name,
  [2065] = 5,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    STATE(98), 1,
      sym_namespace,
    STATE(50), 2,
      sym_class_name,
      sym_interface_name,
  [2082] = 3,
    ACTIONS(212), 1,
      anon_sym_LF,
    STATE(104), 1,
      sym_attribute_type,
    ACTIONS(214), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [2094] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(216), 1,
      sym__alias,
    ACTIONS(218), 1,
      sym__constant,
    STATE(100), 1,
      sym_namespace,
    STATE(109), 1,
      sym_alias_name,
  [2110] = 5,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(218), 1,
      sym__constant,
    STATE(99), 1,
      sym_namespace,
    STATE(111), 1,
      sym_interface_name,
  [2126] = 2,
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(222), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [2135] = 4,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(27), 1,
      sym__scope,
    STATE(16), 1,
      sym_class_name,
    STATE(113), 1,
      sym_namespace,
  [2148] = 4,
    ACTIONS(224), 1,
      sym__method,
    ACTIONS(226), 1,
      anon_sym_self_DOT,
    STATE(96), 1,
      sym_singleton_method_name,
    STATE(103), 1,
      sym_method_name,
  [2161] = 4,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(27), 1,
      sym__scope,
    STATE(47), 1,
      sym_class_name,
    STATE(113), 1,
      sym_namespace,
  [2174] = 4,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(27), 1,
      sym__scope,
    STATE(15), 1,
      sym_class_name,
    STATE(113), 1,
      sym_namespace,
  [2187] = 3,
    ACTIONS(51), 1,
      sym__ivar,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_ivar_name,
  [2197] = 3,
    ACTIONS(230), 1,
      sym__alias,
    ACTIONS(232), 1,
      sym__constant,
    ACTIONS(234), 1,
      sym__interface,
  [2207] = 1,
    ACTIONS(236), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [2213] = 1,
    ACTIONS(186), 3,
      sym__method,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [2219] = 1,
    ACTIONS(238), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [2225] = 3,
    ACTIONS(51), 1,
      sym__ivar,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_ivar_name,
  [2235] = 1,
    ACTIONS(242), 3,
      sym__alias,
      sym__constant,
      sym__interface,
  [2241] = 3,
    ACTIONS(244), 1,
      sym__alias,
    ACTIONS(246), 1,
      sym__constant,
    ACTIONS(248), 1,
      sym__interface,
  [2251] = 2,
    ACTIONS(226), 1,
      anon_sym_self_DOT,
    STATE(51), 1,
      sym_singleton_method_name,
  [2258] = 1,
    ACTIONS(250), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [2263] = 2,
    ACTIONS(232), 1,
      sym__constant,
    ACTIONS(234), 1,
      sym__interface,
  [2270] = 2,
    ACTIONS(234), 1,
      sym__interface,
    ACTIONS(252), 1,
      sym__constant,
  [2277] = 2,
    ACTIONS(244), 1,
      sym__alias,
    ACTIONS(252), 1,
      sym__constant,
  [2284] = 2,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
  [2291] = 2,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
  [2298] = 2,
    ACTIONS(262), 1,
      sym__method,
    STATE(51), 1,
      sym_method_name,
  [2305] = 2,
    ACTIONS(264), 1,
      sym__method,
    STATE(101), 1,
      sym_method_name,
  [2312] = 2,
    ACTIONS(264), 1,
      sym__method,
    STATE(102), 1,
      sym_method_name,
  [2319] = 1,
    ACTIONS(266), 1,
      anon_sym_end,
  [2323] = 1,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [2327] = 1,
    ACTIONS(270), 1,
      sym__method,
  [2331] = 1,
    ACTIONS(272), 1,
      anon_sym_EQ,
  [2335] = 1,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [2339] = 1,
    ACTIONS(276), 1,
      anon_sym_end,
  [2343] = 1,
    ACTIONS(96), 1,
      sym__scope,
  [2347] = 1,
    ACTIONS(232), 1,
      sym__constant,
  [2351] = 1,
    ACTIONS(278), 1,
      anon_sym_end,
  [2355] = 1,
    ACTIONS(280), 1,
      sym__method,
  [2359] = 1,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
  [2363] = 1,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
  [2367] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [2371] = 1,
    ACTIONS(288), 1,
      anon_sym_COLON,
  [2375] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [2379] = 1,
    ACTIONS(100), 1,
      sym__scope,
  [2383] = 1,
    ACTIONS(292), 1,
      anon_sym_COLON,
  [2387] = 1,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
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
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 660,
  [SMALL_STATE(13)] = 726,
  [SMALL_STATE(14)] = 792,
  [SMALL_STATE(15)] = 858,
  [SMALL_STATE(16)] = 911,
  [SMALL_STATE(17)] = 964,
  [SMALL_STATE(18)] = 1014,
  [SMALL_STATE(19)] = 1064,
  [SMALL_STATE(20)] = 1084,
  [SMALL_STATE(21)] = 1104,
  [SMALL_STATE(22)] = 1138,
  [SMALL_STATE(23)] = 1172,
  [SMALL_STATE(24)] = 1195,
  [SMALL_STATE(25)] = 1218,
  [SMALL_STATE(26)] = 1235,
  [SMALL_STATE(27)] = 1252,
  [SMALL_STATE(28)] = 1269,
  [SMALL_STATE(29)] = 1292,
  [SMALL_STATE(30)] = 1315,
  [SMALL_STATE(31)] = 1332,
  [SMALL_STATE(32)] = 1349,
  [SMALL_STATE(33)] = 1372,
  [SMALL_STATE(34)] = 1395,
  [SMALL_STATE(35)] = 1412,
  [SMALL_STATE(36)] = 1429,
  [SMALL_STATE(37)] = 1452,
  [SMALL_STATE(38)] = 1475,
  [SMALL_STATE(39)] = 1492,
  [SMALL_STATE(40)] = 1509,
  [SMALL_STATE(41)] = 1526,
  [SMALL_STATE(42)] = 1543,
  [SMALL_STATE(43)] = 1560,
  [SMALL_STATE(44)] = 1577,
  [SMALL_STATE(45)] = 1592,
  [SMALL_STATE(46)] = 1608,
  [SMALL_STATE(47)] = 1622,
  [SMALL_STATE(48)] = 1636,
  [SMALL_STATE(49)] = 1650,
  [SMALL_STATE(50)] = 1664,
  [SMALL_STATE(51)] = 1678,
  [SMALL_STATE(52)] = 1692,
  [SMALL_STATE(53)] = 1706,
  [SMALL_STATE(54)] = 1720,
  [SMALL_STATE(55)] = 1734,
  [SMALL_STATE(56)] = 1750,
  [SMALL_STATE(57)] = 1763,
  [SMALL_STATE(58)] = 1776,
  [SMALL_STATE(59)] = 1795,
  [SMALL_STATE(60)] = 1808,
  [SMALL_STATE(61)] = 1827,
  [SMALL_STATE(62)] = 1846,
  [SMALL_STATE(63)] = 1859,
  [SMALL_STATE(64)] = 1878,
  [SMALL_STATE(65)] = 1891,
  [SMALL_STATE(66)] = 1910,
  [SMALL_STATE(67)] = 1923,
  [SMALL_STATE(68)] = 1936,
  [SMALL_STATE(69)] = 1949,
  [SMALL_STATE(70)] = 1962,
  [SMALL_STATE(71)] = 1975,
  [SMALL_STATE(72)] = 1988,
  [SMALL_STATE(73)] = 1998,
  [SMALL_STATE(74)] = 2008,
  [SMALL_STATE(75)] = 2018,
  [SMALL_STATE(76)] = 2028,
  [SMALL_STATE(77)] = 2038,
  [SMALL_STATE(78)] = 2048,
  [SMALL_STATE(79)] = 2065,
  [SMALL_STATE(80)] = 2082,
  [SMALL_STATE(81)] = 2094,
  [SMALL_STATE(82)] = 2110,
  [SMALL_STATE(83)] = 2126,
  [SMALL_STATE(84)] = 2135,
  [SMALL_STATE(85)] = 2148,
  [SMALL_STATE(86)] = 2161,
  [SMALL_STATE(87)] = 2174,
  [SMALL_STATE(88)] = 2187,
  [SMALL_STATE(89)] = 2197,
  [SMALL_STATE(90)] = 2207,
  [SMALL_STATE(91)] = 2213,
  [SMALL_STATE(92)] = 2219,
  [SMALL_STATE(93)] = 2225,
  [SMALL_STATE(94)] = 2235,
  [SMALL_STATE(95)] = 2241,
  [SMALL_STATE(96)] = 2251,
  [SMALL_STATE(97)] = 2258,
  [SMALL_STATE(98)] = 2263,
  [SMALL_STATE(99)] = 2270,
  [SMALL_STATE(100)] = 2277,
  [SMALL_STATE(101)] = 2284,
  [SMALL_STATE(102)] = 2291,
  [SMALL_STATE(103)] = 2298,
  [SMALL_STATE(104)] = 2305,
  [SMALL_STATE(105)] = 2312,
  [SMALL_STATE(106)] = 2319,
  [SMALL_STATE(107)] = 2323,
  [SMALL_STATE(108)] = 2327,
  [SMALL_STATE(109)] = 2331,
  [SMALL_STATE(110)] = 2335,
  [SMALL_STATE(111)] = 2339,
  [SMALL_STATE(112)] = 2343,
  [SMALL_STATE(113)] = 2347,
  [SMALL_STATE(114)] = 2351,
  [SMALL_STATE(115)] = 2355,
  [SMALL_STATE(116)] = 2359,
  [SMALL_STATE(117)] = 2363,
  [SMALL_STATE(118)] = 2367,
  [SMALL_STATE(119)] = 2371,
  [SMALL_STATE(120)] = 2375,
  [SMALL_STATE(121)] = 2379,
  [SMALL_STATE(122)] = 2383,
  [SMALL_STATE(123)] = 2387,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 1),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(97),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(79),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(78),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(86),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(85),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(83),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(108),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(120),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(81),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 8),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 7),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaceable_type, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_type, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_method_name, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_member, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prepend_member, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_member, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_member, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_member, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_name, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_name, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_type, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [284] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
