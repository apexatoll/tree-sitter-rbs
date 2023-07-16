#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 3
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym__alias_token1 = 1,
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
  anon_sym_def = 31,
  anon_sym_self_QMARK_DOT = 32,
  anon_sym_PIPE = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_QMARK_LBRACE = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  sym_supertype = 38,
  anon_sym_COMMA = 39,
  anon_sym_QMARK = 40,
  anon_sym_STAR = 41,
  anon_sym_STAR_STAR = 42,
  anon_sym_top = 43,
  anon_sym_bot = 44,
  anon_sym_self = 45,
  anon_sym_instance = 46,
  anon_sym_nil = 47,
  anon_sym_bool = 48,
  anon_sym_void = 49,
  anon_sym_untyped = 50,
  aux_sym_string_literal_token1 = 51,
  aux_sym_string_literal_token2 = 52,
  sym_true_literal = 53,
  sym_false_literal = 54,
  anon_sym_AMP = 55,
  anon_sym_QMARK2 = 56,
  anon_sym_singleton_LPAREN = 57,
  sym_program = 58,
  sym__alias = 59,
  sym__integer = 60,
  sym__var = 61,
  sym_declaration = 62,
  sym_class_declaration = 63,
  sym_module_declaration = 64,
  sym_interface_declaration = 65,
  sym_type_alias_declaration = 66,
  sym_constant_declaration = 67,
  sym_global_declaration = 68,
  sym_members = 69,
  sym_member = 70,
  sym_ivar_member = 71,
  sym_method_member = 72,
  sym_attribute_member = 73,
  sym_include_member = 74,
  sym_extend_member = 75,
  sym_prepend_member = 76,
  sym_alias_member = 77,
  sym_visibility_member = 78,
  sym_visibility = 79,
  sym_alias_name = 80,
  sym_class_name = 81,
  sym_interface_name = 82,
  sym_ivar_name = 83,
  sym_var_name = 84,
  sym_namespace = 85,
  sym_method_name = 86,
  sym_singleton_method_name = 87,
  sym_attribute_type = 88,
  sym_instance_method = 89,
  sym_singleton_method = 90,
  sym_module_function = 91,
  sym_method_types = 92,
  sym_method_type = 93,
  sym_block = 94,
  sym_parameters = 95,
  sym__parameter = 96,
  sym_parameter = 97,
  sym_optional_parameter = 98,
  sym_splat_parameter = 99,
  sym_keyword_parameter = 100,
  sym_optional_keyword_parameter = 101,
  sym_double_splat_parameter = 102,
  sym_type = 103,
  sym_builtin_type = 104,
  sym_literal_type = 105,
  sym_operator_type = 106,
  sym_namespaceable_type = 107,
  sym_string_literal = 108,
  sym_symbol_literal = 109,
  sym_union_type = 110,
  sym_intersection_type = 111,
  sym_optional_type = 112,
  sym_class_singleton_type = 113,
  aux_sym_program_repeat1 = 114,
  aux_sym_members_repeat1 = 115,
  aux_sym_method_types_repeat1 = 116,
  aux_sym_parameters_repeat1 = 117,
  alias_sym_constant = 118,
  alias_sym_key = 119,
  alias_sym_module_name = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__alias_token1] = "_alias_token1",
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
  [anon_sym_def] = "def",
  [anon_sym_self_QMARK_DOT] = "self\?.",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_QMARK_LBRACE] = "\?{",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_supertype] = "supertype",
  [anon_sym_COMMA] = ",",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_STAR] = "**",
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
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK2] = "\?",
  [anon_sym_singleton_LPAREN] = "singleton(",
  [sym_program] = "program",
  [sym__alias] = "_alias",
  [sym__integer] = "integer_literal",
  [sym__var] = "_var",
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
  [sym_method_member] = "method_member",
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
  [sym_var_name] = "var_name",
  [sym_namespace] = "namespace",
  [sym_method_name] = "method_name",
  [sym_singleton_method_name] = "singleton_method_name",
  [sym_attribute_type] = "attribute_type",
  [sym_instance_method] = "instance_method",
  [sym_singleton_method] = "singleton_method",
  [sym_module_function] = "module_function",
  [sym_method_types] = "method_types",
  [sym_method_type] = "method_type",
  [sym_block] = "block",
  [sym_parameters] = "parameters",
  [sym__parameter] = "_parameter",
  [sym_parameter] = "parameter",
  [sym_optional_parameter] = "optional_parameter",
  [sym_splat_parameter] = "splat_parameter",
  [sym_keyword_parameter] = "keyword_parameter",
  [sym_optional_keyword_parameter] = "optional_keyword_parameter",
  [sym_double_splat_parameter] = "double_splat_parameter",
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
  [sym_class_singleton_type] = "class_singleton_type",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_members_repeat1] = "members_repeat1",
  [aux_sym_method_types_repeat1] = "method_types_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [alias_sym_constant] = "constant",
  [alias_sym_key] = "key",
  [alias_sym_module_name] = "module_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__alias_token1] = aux_sym__alias_token1,
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
  [anon_sym_def] = anon_sym_def,
  [anon_sym_self_QMARK_DOT] = anon_sym_self_QMARK_DOT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_QMARK_LBRACE] = anon_sym_QMARK_LBRACE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_supertype] = sym_supertype,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
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
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_QMARK2] = anon_sym_QMARK,
  [anon_sym_singleton_LPAREN] = anon_sym_singleton_LPAREN,
  [sym_program] = sym_program,
  [sym__alias] = sym__alias,
  [sym__integer] = sym__integer,
  [sym__var] = sym__var,
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
  [sym_method_member] = sym_method_member,
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
  [sym_var_name] = sym_var_name,
  [sym_namespace] = sym_namespace,
  [sym_method_name] = sym_method_name,
  [sym_singleton_method_name] = sym_singleton_method_name,
  [sym_attribute_type] = sym_attribute_type,
  [sym_instance_method] = sym_instance_method,
  [sym_singleton_method] = sym_singleton_method,
  [sym_module_function] = sym_module_function,
  [sym_method_types] = sym_method_types,
  [sym_method_type] = sym_method_type,
  [sym_block] = sym_block,
  [sym_parameters] = sym_parameters,
  [sym__parameter] = sym__parameter,
  [sym_parameter] = sym_parameter,
  [sym_optional_parameter] = sym_optional_parameter,
  [sym_splat_parameter] = sym_splat_parameter,
  [sym_keyword_parameter] = sym_keyword_parameter,
  [sym_optional_keyword_parameter] = sym_optional_keyword_parameter,
  [sym_double_splat_parameter] = sym_double_splat_parameter,
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
  [sym_class_singleton_type] = sym_class_singleton_type,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_members_repeat1] = aux_sym_members_repeat1,
  [aux_sym_method_types_repeat1] = aux_sym_method_types_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [alias_sym_constant] = alias_sym_constant,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_module_name] = alias_sym_module_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__alias_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self_QMARK_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_supertype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_singleton_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__alias] = {
    .visible = false,
    .named = true,
  },
  [sym__integer] = {
    .visible = true,
    .named = true,
  },
  [sym__var] = {
    .visible = false,
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
  [sym_method_member] = {
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
  [sym_var_name] = {
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
  [sym_instance_method] = {
    .visible = true,
    .named = true,
  },
  [sym_singleton_method] = {
    .visible = true,
    .named = true,
  },
  [sym_module_function] = {
    .visible = true,
    .named = true,
  },
  [sym_method_types] = {
    .visible = true,
    .named = true,
  },
  [sym_method_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_splat_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_keyword_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_double_splat_parameter] = {
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
  [sym_class_singleton_type] = {
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
  [aux_sym_method_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_constant] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_key] = {
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
  [3] = {
    [0] = alias_sym_key,
  },
  [4] = {
    [1] = alias_sym_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_class_name, 2,
    sym_class_name,
    alias_sym_module_name,
  sym_var_name, 2,
    sym_var_name,
    alias_sym_key,
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
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 10,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 10,
  [26] = 19,
  [27] = 27,
  [28] = 28,
  [29] = 19,
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
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
  [71] = 52,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 60,
  [81] = 81,
  [82] = 82,
  [83] = 59,
  [84] = 57,
  [85] = 56,
  [86] = 55,
  [87] = 35,
  [88] = 63,
  [89] = 62,
  [90] = 61,
  [91] = 49,
  [92] = 36,
  [93] = 51,
  [94] = 58,
  [95] = 95,
  [96] = 44,
  [97] = 42,
  [98] = 37,
  [99] = 99,
  [100] = 38,
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
  [113] = 36,
  [114] = 114,
  [115] = 35,
  [116] = 116,
  [117] = 57,
  [118] = 63,
  [119] = 44,
  [120] = 120,
  [121] = 49,
  [122] = 51,
  [123] = 123,
  [124] = 124,
  [125] = 52,
  [126] = 38,
  [127] = 55,
  [128] = 56,
  [129] = 37,
  [130] = 60,
  [131] = 42,
  [132] = 58,
  [133] = 59,
  [134] = 61,
  [135] = 62,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 140,
  [143] = 44,
  [144] = 144,
  [145] = 138,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 140,
  [150] = 150,
  [151] = 151,
  [152] = 42,
  [153] = 140,
  [154] = 138,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 69,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 190,
  [218] = 190,
  [219] = 219,
  [220] = 220,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(145);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '&') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '?') ADVANCE(265);
      if (lookahead == '@') ADVANCE(140);
      if (lookahead == '_') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(101);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '?') ADVANCE(237);
      if (lookahead == '_') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'v') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(263);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '?') ADVANCE(264);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(263);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(263);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '?') ADVANCE(264);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(263);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '?') ADVANCE(136);
      if (lookahead == '_') ADVANCE(138);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(266);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(235);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(224);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(231);
      END_STATE();
    case 18:
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '_') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(228);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(245);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 133:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 136:
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 139:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 142:
      if (eof) ADVANCE(145);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '&') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == '@') ADVANCE(140);
      if (lookahead == '_') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(101);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 143:
      if (eof) ADVANCE(145);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '&') ADVANCE(263);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '?') ADVANCE(264);
      if (lookahead == '@') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 144:
      if (eof) ADVANCE(145);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '&') ADVANCE(263);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '@') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == '(') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'a') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'c') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'd') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'd') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'f') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'g') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'i') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'i') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'p') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'u') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'y') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__delimited_symbol);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__integer_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__ivar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__method);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '?') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '.') ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(197);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_self_DOT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_attr_reader);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_attr_writer);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_attr_accessor);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_self_QMARK_DOT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_QMARK_LBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_supertype);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_bot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_self);
      if (lookahead == '.') ADVANCE(224);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_instance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_untyped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_true_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_false_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_singleton_LPAREN);
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
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 143},
  [36] = {.lex_state = 143},
  [37] = {.lex_state = 143},
  [38] = {.lex_state = 143},
  [39] = {.lex_state = 143},
  [40] = {.lex_state = 143},
  [41] = {.lex_state = 143},
  [42] = {.lex_state = 143},
  [43] = {.lex_state = 143},
  [44] = {.lex_state = 143},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 143},
  [47] = {.lex_state = 143},
  [48] = {.lex_state = 143},
  [49] = {.lex_state = 143},
  [50] = {.lex_state = 143},
  [51] = {.lex_state = 143},
  [52] = {.lex_state = 143},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 143},
  [55] = {.lex_state = 143},
  [56] = {.lex_state = 143},
  [57] = {.lex_state = 143},
  [58] = {.lex_state = 143},
  [59] = {.lex_state = 143},
  [60] = {.lex_state = 143},
  [61] = {.lex_state = 143},
  [62] = {.lex_state = 143},
  [63] = {.lex_state = 143},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 143},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 143},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 143},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 143},
  [84] = {.lex_state = 143},
  [85] = {.lex_state = 143},
  [86] = {.lex_state = 143},
  [87] = {.lex_state = 143},
  [88] = {.lex_state = 143},
  [89] = {.lex_state = 143},
  [90] = {.lex_state = 143},
  [91] = {.lex_state = 143},
  [92] = {.lex_state = 143},
  [93] = {.lex_state = 143},
  [94] = {.lex_state = 143},
  [95] = {.lex_state = 143},
  [96] = {.lex_state = 143},
  [97] = {.lex_state = 143},
  [98] = {.lex_state = 143},
  [99] = {.lex_state = 143},
  [100] = {.lex_state = 143},
  [101] = {.lex_state = 143},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 143},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 143},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 143},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 143},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 143},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
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
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_QMARK_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_supertype] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
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
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK2] = ACTIONS(1),
    [anon_sym_singleton_LPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(220),
    [sym_declaration] = STATE(53),
    [sym_class_declaration] = STATE(109),
    [sym_module_declaration] = STATE(109),
    [sym_interface_declaration] = STATE(109),
    [sym_type_alias_declaration] = STATE(109),
    [sym_constant_declaration] = STATE(109),
    [sym_global_declaration] = STATE(109),
    [aux_sym_program_repeat1] = STATE(53),
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
  [0] = 25,
    ACTIONS(17), 1,
      aux_sym__alias_token1,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_QMARK,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_singleton_LPAREN,
    STATE(107), 1,
      sym_type,
    STATE(130), 1,
      sym__alias,
    STATE(140), 1,
      sym_namespace,
    STATE(166), 1,
      sym__var,
    STATE(177), 1,
      sym__parameter,
    STATE(203), 1,
      sym_var_name,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(39), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(41), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(117), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(127), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(128), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(132), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    STATE(167), 6,
      sym_parameter,
      sym_optional_parameter,
      sym_splat_parameter,
      sym_keyword_parameter,
      sym_optional_keyword_parameter,
      sym_double_splat_parameter,
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
  [102] = 24,
    ACTIONS(17), 1,
      aux_sym__alias_token1,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(33), 1,
      anon_sym_QMARK,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_singleton_LPAREN,
    STATE(107), 1,
      sym_type,
    STATE(130), 1,
      sym__alias,
    STATE(140), 1,
      sym_namespace,
    STATE(166), 1,
      sym__var,
    STATE(177), 1,
      sym__parameter,
    STATE(203), 1,
      sym_var_name,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(39), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(41), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(117), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(127), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(128), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(132), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    STATE(173), 6,
      sym_parameter,
      sym_optional_parameter,
      sym_splat_parameter,
      sym_keyword_parameter,
      sym_optional_keyword_parameter,
      sym_double_splat_parameter,
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
  [201] = 20,
    ACTIONS(17), 1,
      aux_sym__alias_token1,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      anon_sym_singleton_LPAREN,
    STATE(107), 1,
      sym_type,
    STATE(130), 1,
      sym__alias,
    STATE(140), 1,
      sym_namespace,
    STATE(166), 1,
      sym__var,
    STATE(181), 1,
      sym__parameter,
    STATE(193), 1,
      sym_var_name,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(39), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(41), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(117), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(127), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(128), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(132), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
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
  [283] = 18,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    STATE(107), 1,
      sym_type,
    STATE(130), 1,
      sym__alias,
    STATE(140), 1,
      sym_namespace,
    STATE(172), 1,
      sym__parameter,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(39), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(41), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(117), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(127), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(128), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(132), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
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
  [359] = 18,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    STATE(107), 1,
      sym_type,
    STATE(130), 1,
      sym__alias,
    STATE(140), 1,
      sym_namespace,
    STATE(183), 1,
      sym__parameter,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(39), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(41), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(117), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(127), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(128), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(132), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
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
  [435] = 18,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    STATE(107), 1,
      sym_type,
    STATE(130), 1,
      sym__alias,
    STATE(140), 1,
      sym_namespace,
    STATE(185), 1,
      sym__parameter,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(39), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(41), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(117), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(127), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(128), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(132), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
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
  [511] = 18,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    STATE(107), 1,
      sym_type,
    STATE(130), 1,
      sym__alias,
    STATE(140), 1,
      sym_namespace,
    STATE(189), 1,
      sym__parameter,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(39), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(41), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(117), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(127), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(128), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(132), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
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
  [587] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(40), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [660] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(65), 1,
      aux_sym__alias_token1,
    ACTIONS(67), 1,
      sym__constant,
    ACTIONS(71), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_singleton_LPAREN,
    STATE(80), 1,
      sym__alias,
    STATE(96), 1,
      sym_type,
    STATE(142), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(79), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(84), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(94), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(75), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [733] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(65), 1,
      aux_sym__alias_token1,
    ACTIONS(67), 1,
      sym__constant,
    ACTIONS(71), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_singleton_LPAREN,
    STATE(80), 1,
      sym__alias,
    STATE(101), 1,
      sym_type,
    STATE(142), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(79), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(84), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(94), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(75), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [806] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(65), 1,
      aux_sym__alias_token1,
    ACTIONS(67), 1,
      sym__constant,
    ACTIONS(71), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_singleton_LPAREN,
    STATE(80), 1,
      sym__alias,
    STATE(95), 1,
      sym_type,
    STATE(142), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(79), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(84), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(94), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(75), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [879] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(41), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [952] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(39), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1025] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(43), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1098] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(50), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1171] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(65), 1,
      aux_sym__alias_token1,
    ACTIONS(71), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_singleton_LPAREN,
    STATE(80), 1,
      sym__alias,
    STATE(143), 1,
      sym_type,
    STATE(153), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(79), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(84), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(94), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(75), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1244] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(65), 1,
      aux_sym__alias_token1,
    ACTIONS(71), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_singleton_LPAREN,
    STATE(80), 1,
      sym__alias,
    STATE(139), 1,
      sym_type,
    STATE(153), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(79), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(84), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(94), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(75), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1317] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(65), 1,
      aux_sym__alias_token1,
    ACTIONS(67), 1,
      sym__constant,
    ACTIONS(71), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_singleton_LPAREN,
    STATE(80), 1,
      sym__alias,
    STATE(97), 1,
      sym_type,
    STATE(142), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(79), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(84), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(94), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(75), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1390] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(65), 1,
      aux_sym__alias_token1,
    ACTIONS(71), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_singleton_LPAREN,
    STATE(80), 1,
      sym__alias,
    STATE(152), 1,
      sym_type,
    STATE(153), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(79), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(84), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(94), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(75), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1463] = 17,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    STATE(119), 1,
      sym_type,
    STATE(130), 1,
      sym__alias,
    STATE(140), 1,
      sym_namespace,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(39), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(41), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(117), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(127), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(128), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(132), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
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
  [1536] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(48), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1609] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(47), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1682] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(65), 1,
      aux_sym__alias_token1,
    ACTIONS(71), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_singleton_LPAREN,
    STATE(80), 1,
      sym__alias,
    STATE(148), 1,
      sym_type,
    STATE(153), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(79), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(84), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(94), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(75), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1755] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(44), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1828] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(42), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1901] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(65), 1,
      aux_sym__alias_token1,
    ACTIONS(67), 1,
      sym__constant,
    ACTIONS(71), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_singleton_LPAREN,
    STATE(80), 1,
      sym__alias,
    STATE(99), 1,
      sym_type,
    STATE(142), 1,
      sym_namespace,
    ACTIONS(69), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(79), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(84), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(94), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(75), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1974] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(46), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2047] = 17,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    STATE(130), 1,
      sym__alias,
    STATE(131), 1,
      sym_type,
    STATE(140), 1,
      sym_namespace,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(39), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(41), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(117), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(127), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(128), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(132), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
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
  [2120] = 17,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(53), 1,
      aux_sym__integer_token1,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(63), 1,
      anon_sym_singleton_LPAREN,
    STATE(54), 1,
      sym_type,
    STATE(60), 1,
      sym__alias,
    STATE(149), 1,
      sym_namespace,
    ACTIONS(51), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(59), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(61), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(55), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(57), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(56), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(58), 4,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
    ACTIONS(57), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2193] = 16,
    ACTIONS(83), 1,
      sym__ivar,
    ACTIONS(85), 1,
      anon_sym_end,
    ACTIONS(87), 1,
      anon_sym_include,
    ACTIONS(89), 1,
      anon_sym_extend,
    ACTIONS(91), 1,
      anon_sym_prepend,
    ACTIONS(93), 1,
      anon_sym_alias,
    ACTIONS(99), 1,
      anon_sym_def,
    STATE(106), 1,
      sym_visibility,
    STATE(175), 1,
      sym_attribute_type,
    STATE(204), 1,
      sym_members,
    STATE(210), 1,
      sym_ivar_name,
    ACTIONS(95), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(34), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(97), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(75), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(70), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2255] = 16,
    ACTIONS(83), 1,
      sym__ivar,
    ACTIONS(87), 1,
      anon_sym_include,
    ACTIONS(89), 1,
      anon_sym_extend,
    ACTIONS(91), 1,
      anon_sym_prepend,
    ACTIONS(93), 1,
      anon_sym_alias,
    ACTIONS(99), 1,
      anon_sym_def,
    ACTIONS(101), 1,
      anon_sym_end,
    STATE(106), 1,
      sym_visibility,
    STATE(175), 1,
      sym_attribute_type,
    STATE(202), 1,
      sym_members,
    STATE(210), 1,
      sym_ivar_name,
    ACTIONS(95), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(34), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(97), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(75), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(70), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2317] = 15,
    ACTIONS(103), 1,
      sym__ivar,
    ACTIONS(106), 1,
      anon_sym_end,
    ACTIONS(108), 1,
      anon_sym_include,
    ACTIONS(111), 1,
      anon_sym_extend,
    ACTIONS(114), 1,
      anon_sym_prepend,
    ACTIONS(117), 1,
      anon_sym_alias,
    ACTIONS(126), 1,
      anon_sym_def,
    STATE(106), 1,
      sym_visibility,
    STATE(175), 1,
      sym_attribute_type,
    STATE(210), 1,
      sym_ivar_name,
    ACTIONS(120), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(33), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(123), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(75), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(70), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2376] = 15,
    ACTIONS(83), 1,
      sym__ivar,
    ACTIONS(87), 1,
      anon_sym_include,
    ACTIONS(89), 1,
      anon_sym_extend,
    ACTIONS(91), 1,
      anon_sym_prepend,
    ACTIONS(93), 1,
      anon_sym_alias,
    ACTIONS(99), 1,
      anon_sym_def,
    ACTIONS(129), 1,
      anon_sym_end,
    STATE(106), 1,
      sym_visibility,
    STATE(175), 1,
      sym_attribute_type,
    STATE(210), 1,
      sym_ivar_name,
    ACTIONS(95), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(33), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(97), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(75), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(70), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2435] = 2,
    ACTIONS(133), 1,
      sym__scope,
    ACTIONS(131), 17,
      sym__ivar,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2458] = 2,
    ACTIONS(137), 1,
      sym__scope,
    ACTIONS(135), 17,
      sym__ivar,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_include,
      anon_sym_extend,
      anon_sym_prepend,
      anon_sym_alias,
      anon_sym_private,
      anon_sym_public,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2481] = 1,
    ACTIONS(139), 16,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2500] = 1,
    ACTIONS(141), 16,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2519] = 4,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(143), 12,
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
      anon_sym_def,
  [2543] = 3,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(151), 13,
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
      anon_sym_def,
      anon_sym_PIPE,
  [2565] = 4,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(153), 12,
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
      anon_sym_def,
  [2589] = 4,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(155), 12,
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
      anon_sym_def,
  [2613] = 4,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(157), 12,
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
      anon_sym_def,
  [2637] = 4,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(159), 12,
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
      anon_sym_def,
  [2661] = 9,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      sym__constant,
    ACTIONS(166), 1,
      sym__global,
    ACTIONS(169), 1,
      anon_sym_class,
    ACTIONS(172), 1,
      anon_sym_module,
    ACTIONS(175), 1,
      anon_sym_interface,
    ACTIONS(178), 1,
      anon_sym_type,
    STATE(45), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(109), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [2695] = 4,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(181), 12,
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
      anon_sym_def,
  [2719] = 3,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(183), 13,
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
      anon_sym_def,
      anon_sym_PIPE,
  [2741] = 4,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(185), 12,
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
      anon_sym_def,
  [2765] = 1,
    ACTIONS(187), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2783] = 3,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(189), 13,
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
      anon_sym_def,
      anon_sym_PIPE,
  [2805] = 1,
    ACTIONS(191), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2823] = 1,
    ACTIONS(193), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2841] = 9,
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
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(45), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(109), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [2875] = 4,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_QMARK2,
    ACTIONS(197), 12,
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
      anon_sym_def,
  [2899] = 1,
    ACTIONS(199), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2917] = 1,
    ACTIONS(201), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2935] = 1,
    ACTIONS(203), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2953] = 1,
    ACTIONS(205), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2971] = 1,
    ACTIONS(207), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2989] = 1,
    ACTIONS(209), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3007] = 1,
    ACTIONS(211), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3025] = 1,
    ACTIONS(213), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3043] = 1,
    ACTIONS(215), 15,
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
      anon_sym_def,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3061] = 3,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    STATE(65), 1,
      aux_sym_method_types_repeat1,
    ACTIONS(217), 12,
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
      anon_sym_def,
  [3082] = 3,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_method_types_repeat1,
    ACTIONS(221), 12,
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
      anon_sym_def,
  [3103] = 3,
    ACTIONS(225), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_method_types_repeat1,
    ACTIONS(223), 12,
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
      anon_sym_def,
  [3124] = 1,
    ACTIONS(223), 13,
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
      anon_sym_def,
      anon_sym_PIPE,
  [3140] = 1,
    ACTIONS(228), 13,
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
      anon_sym_def,
  [3156] = 1,
    ACTIONS(230), 12,
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
      anon_sym_def,
  [3171] = 1,
    ACTIONS(232), 12,
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
      anon_sym_def,
  [3186] = 1,
    ACTIONS(193), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3201] = 1,
    ACTIONS(234), 12,
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
      anon_sym_def,
  [3216] = 1,
    ACTIONS(236), 12,
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
      anon_sym_def,
  [3231] = 1,
    ACTIONS(238), 12,
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
      anon_sym_def,
  [3246] = 1,
    ACTIONS(240), 12,
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
      anon_sym_def,
  [3261] = 1,
    ACTIONS(242), 12,
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
      anon_sym_def,
  [3276] = 1,
    ACTIONS(244), 12,
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
      anon_sym_def,
  [3291] = 1,
    ACTIONS(246), 12,
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
      anon_sym_def,
  [3306] = 1,
    ACTIONS(248), 12,
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
      anon_sym_def,
  [3321] = 1,
    ACTIONS(209), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3336] = 1,
    ACTIONS(250), 12,
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
      anon_sym_def,
  [3351] = 1,
    ACTIONS(252), 12,
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
      anon_sym_def,
  [3366] = 1,
    ACTIONS(207), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3380] = 1,
    ACTIONS(203), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3394] = 1,
    ACTIONS(201), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3408] = 1,
    ACTIONS(199), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3422] = 2,
    ACTIONS(133), 1,
      sym__scope,
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
      anon_sym_QMARK2,
  [3438] = 1,
    ACTIONS(215), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3452] = 1,
    ACTIONS(213), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3466] = 1,
    ACTIONS(211), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3480] = 1,
    ACTIONS(187), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3494] = 2,
    ACTIONS(137), 1,
      sym__scope,
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
      anon_sym_QMARK2,
  [3510] = 1,
    ACTIONS(191), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3524] = 1,
    ACTIONS(205), 11,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3538] = 4,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_AMP,
    ACTIONS(260), 1,
      anon_sym_QMARK2,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3557] = 4,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_AMP,
    ACTIONS(260), 1,
      anon_sym_QMARK2,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3576] = 4,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_AMP,
    ACTIONS(260), 1,
      anon_sym_QMARK2,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3595] = 1,
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
      anon_sym_QMARK2,
  [3608] = 4,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_AMP,
    ACTIONS(260), 1,
      anon_sym_QMARK2,
    ACTIONS(262), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3627] = 1,
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
      anon_sym_QMARK2,
  [3640] = 4,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_AMP,
    ACTIONS(260), 1,
      anon_sym_QMARK2,
    ACTIONS(264), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3659] = 7,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_DASH_GT,
    ACTIONS(272), 1,
      sym_supertype,
    STATE(67), 1,
      sym_method_type,
    STATE(151), 1,
      sym_parameters,
    STATE(216), 1,
      sym_block,
    ACTIONS(270), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [3682] = 7,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      sym_method_type,
    STATE(79), 1,
      sym_method_types,
    STATE(151), 1,
      sym_parameters,
    STATE(216), 1,
      sym_block,
    ACTIONS(270), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [3705] = 7,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      sym_method_type,
    STATE(81), 1,
      sym_method_types,
    STATE(151), 1,
      sym_parameters,
    STATE(216), 1,
      sym_block,
    ACTIONS(270), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [3728] = 7,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      sym_method_type,
    STATE(72), 1,
      sym_method_types,
    STATE(151), 1,
      sym_parameters,
    STATE(216), 1,
      sym_block,
    ACTIONS(270), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [3751] = 5,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(278), 1,
      anon_sym_def,
    STATE(178), 1,
      sym_attribute_type,
    STATE(78), 2,
      sym_instance_method,
      sym_singleton_method,
    ACTIONS(276), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [3770] = 7,
    ACTIONS(280), 1,
      aux_sym__alias_token1,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_AMP,
    ACTIONS(288), 1,
      anon_sym_QMARK2,
    STATE(166), 1,
      sym__var,
    STATE(184), 1,
      sym_var_name,
    ACTIONS(282), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3793] = 2,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(290), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3805] = 1,
    ACTIONS(294), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3815] = 1,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3825] = 1,
    ACTIONS(298), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3835] = 1,
    ACTIONS(300), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3845] = 2,
    ACTIONS(137), 1,
      sym__scope,
    ACTIONS(135), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3857] = 1,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3867] = 2,
    ACTIONS(133), 1,
      sym__scope,
    ACTIONS(131), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3879] = 1,
    ACTIONS(304), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3889] = 1,
    ACTIONS(203), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3898] = 1,
    ACTIONS(215), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3907] = 4,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_AMP,
    ACTIONS(288), 1,
      anon_sym_QMARK2,
    ACTIONS(159), 3,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3922] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(55), 1,
      sym__interface,
    STATE(174), 1,
      sym_namespace,
    STATE(76), 2,
      sym_class_name,
      sym_interface_name,
  [3939] = 1,
    ACTIONS(187), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3948] = 1,
    ACTIONS(191), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3957] = 6,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(306), 1,
      aux_sym__alias_token1,
    ACTIONS(308), 1,
      sym__constant,
    STATE(80), 1,
      sym__alias,
    STATE(155), 1,
      sym_namespace,
    STATE(194), 1,
      sym_alias_name,
  [3976] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    ACTIONS(55), 1,
      sym__interface,
    STATE(174), 1,
      sym_namespace,
    STATE(74), 2,
      sym_class_name,
      sym_interface_name,
  [3993] = 1,
    ACTIONS(193), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4002] = 1,
    ACTIONS(141), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4011] = 1,
    ACTIONS(199), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4020] = 1,
    ACTIONS(201), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4029] = 1,
    ACTIONS(139), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4038] = 1,
    ACTIONS(209), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4047] = 4,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    ACTIONS(286), 1,
      anon_sym_AMP,
    ACTIONS(288), 1,
      anon_sym_QMARK2,
    ACTIONS(155), 3,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4062] = 1,
    ACTIONS(205), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4071] = 1,
    ACTIONS(207), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4080] = 1,
    ACTIONS(211), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4089] = 1,
    ACTIONS(213), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4098] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(55), 1,
      sym__interface,
    ACTIONS(308), 1,
      sym__constant,
    STATE(186), 1,
      sym_namespace,
    STATE(205), 1,
      sym_interface_name,
  [4114] = 2,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(312), 4,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_def,
  [4124] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    STATE(214), 1,
      sym_namespace,
    STATE(218), 1,
      sym_class_name,
  [4137] = 4,
    ACTIONS(260), 1,
      anon_sym_QMARK2,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      anon_sym_AMP,
  [4150] = 4,
    ACTIONS(320), 1,
      aux_sym__alias_token1,
    ACTIONS(322), 1,
      sym__constant,
    ACTIONS(324), 1,
      sym__interface,
    STATE(125), 1,
      sym__alias,
  [4163] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    STATE(32), 1,
      sym_class_name,
    STATE(214), 1,
      sym_namespace,
  [4176] = 4,
    ACTIONS(326), 1,
      aux_sym__alias_token1,
    ACTIONS(328), 1,
      sym__constant,
    ACTIONS(330), 1,
      sym__interface,
    STATE(71), 1,
      sym__alias,
  [4189] = 4,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      anon_sym_QMARK2,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(318), 1,
      anon_sym_AMP,
  [4202] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    STATE(31), 1,
      sym_class_name,
    STATE(214), 1,
      sym_namespace,
  [4215] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    STATE(190), 1,
      sym_class_name,
    STATE(214), 1,
      sym_namespace,
  [4228] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    STATE(77), 1,
      sym_class_name,
    STATE(214), 1,
      sym_namespace,
  [4241] = 4,
    ACTIONS(332), 1,
      sym__method,
    ACTIONS(334), 1,
      anon_sym_self_DOT,
    STATE(179), 1,
      sym_method_name,
    STATE(180), 1,
      sym_singleton_method_name,
  [4254] = 4,
    ACTIONS(260), 1,
      anon_sym_QMARK2,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(318), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
  [4267] = 4,
    ACTIONS(338), 1,
      aux_sym__alias_token1,
    ACTIONS(340), 1,
      sym__constant,
    ACTIONS(342), 1,
      sym__interface,
    STATE(52), 1,
      sym__alias,
  [4280] = 4,
    ACTIONS(332), 1,
      sym__method,
    ACTIONS(344), 1,
      anon_sym_self_DOT,
    ACTIONS(346), 1,
      anon_sym_self_QMARK_DOT,
    STATE(197), 1,
      sym_method_name,
  [4293] = 3,
    ACTIONS(348), 1,
      anon_sym_DASH_GT,
    STATE(198), 1,
      sym_block,
    ACTIONS(270), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4304] = 4,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      anon_sym_QMARK2,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(318), 1,
      anon_sym_AMP,
  [4317] = 4,
    ACTIONS(326), 1,
      aux_sym__alias_token1,
    ACTIONS(340), 1,
      sym__constant,
    ACTIONS(342), 1,
      sym__interface,
    STATE(71), 1,
      sym__alias,
  [4330] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      sym__constant,
    STATE(214), 1,
      sym_namespace,
    STATE(217), 1,
      sym_class_name,
  [4343] = 3,
    ACTIONS(326), 1,
      aux_sym__alias_token1,
    ACTIONS(350), 1,
      sym__constant,
    STATE(71), 1,
      sym__alias,
  [4353] = 3,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_parameters_repeat1,
  [4363] = 1,
    ACTIONS(356), 3,
      aux_sym__alias_token1,
      sym__constant,
      sym__interface,
  [4369] = 3,
    ACTIONS(83), 1,
      sym__ivar,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      sym_ivar_name,
  [4379] = 3,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_DASH_GT,
    STATE(191), 1,
      sym_parameters,
  [4389] = 1,
    ACTIONS(362), 3,
      anon_sym_DASH_GT,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4395] = 3,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_parameters_repeat1,
  [4405] = 3,
    ACTIONS(83), 1,
      sym__ivar,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_ivar_name,
  [4415] = 1,
    ACTIONS(230), 3,
      sym__method,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [4421] = 1,
    ACTIONS(371), 3,
      anon_sym_DASH_GT,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4427] = 1,
    ACTIONS(373), 3,
      aux_sym__alias_token1,
      sym__constant,
      sym__interface,
  [4433] = 1,
    ACTIONS(375), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4439] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_parameters_repeat1,
  [4449] = 3,
    ACTIONS(332), 1,
      sym__method,
    ACTIONS(344), 1,
      anon_sym_self_DOT,
    STATE(197), 1,
      sym_method_name,
  [4459] = 1,
    ACTIONS(379), 3,
      aux_sym__alias_token1,
      sym__constant,
      sym__interface,
  [4465] = 1,
    ACTIONS(381), 3,
      anon_sym_DASH_GT,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4471] = 2,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
  [4478] = 1,
    ACTIONS(387), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4483] = 1,
    ACTIONS(364), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4488] = 2,
    ACTIONS(340), 1,
      sym__constant,
    ACTIONS(342), 1,
      sym__interface,
  [4495] = 2,
    ACTIONS(389), 1,
      sym__method,
    STATE(171), 1,
      sym_method_name,
  [4502] = 2,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
  [4509] = 1,
    ACTIONS(395), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4514] = 2,
    ACTIONS(389), 1,
      sym__method,
    STATE(176), 1,
      sym_method_name,
  [4521] = 2,
    ACTIONS(397), 1,
      sym__method,
    STATE(73), 1,
      sym_method_name,
  [4528] = 2,
    ACTIONS(334), 1,
      anon_sym_self_DOT,
    STATE(73), 1,
      sym_singleton_method_name,
  [4535] = 1,
    ACTIONS(399), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4540] = 2,
    ACTIONS(389), 1,
      sym__method,
    STATE(209), 1,
      sym_method_name,
  [4547] = 1,
    ACTIONS(401), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4552] = 1,
    ACTIONS(403), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4557] = 1,
    ACTIONS(405), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4562] = 2,
    ACTIONS(342), 1,
      sym__interface,
    ACTIONS(350), 1,
      sym__constant,
  [4569] = 2,
    ACTIONS(389), 1,
      sym__method,
    STATE(199), 1,
      sym_method_name,
  [4576] = 1,
    ACTIONS(407), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [4581] = 1,
    ACTIONS(409), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4586] = 1,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
  [4590] = 1,
    ACTIONS(413), 1,
      anon_sym_DASH_GT,
  [4594] = 1,
    ACTIONS(415), 1,
      sym__method,
  [4598] = 1,
    ACTIONS(417), 1,
      anon_sym_COLON,
  [4602] = 1,
    ACTIONS(419), 1,
      anon_sym_EQ,
  [4606] = 1,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [4610] = 1,
    ACTIONS(423), 1,
      anon_sym_COLON,
  [4614] = 1,
    ACTIONS(425), 1,
      anon_sym_COLON,
  [4618] = 1,
    ACTIONS(427), 1,
      anon_sym_DASH_GT,
  [4622] = 1,
    ACTIONS(429), 1,
      anon_sym_COLON,
  [4626] = 1,
    ACTIONS(133), 1,
      sym__scope,
  [4630] = 1,
    ACTIONS(137), 1,
      sym__scope,
  [4634] = 1,
    ACTIONS(431), 1,
      anon_sym_end,
  [4638] = 1,
    ACTIONS(433), 1,
      anon_sym_COLON,
  [4642] = 1,
    ACTIONS(435), 1,
      anon_sym_end,
  [4646] = 1,
    ACTIONS(437), 1,
      anon_sym_end,
  [4650] = 1,
    ACTIONS(439), 1,
      sym__method,
  [4654] = 1,
    ACTIONS(441), 1,
      anon_sym_DASH_GT,
  [4658] = 1,
    ACTIONS(443), 1,
      anon_sym_COLON,
  [4662] = 1,
    ACTIONS(445), 1,
      anon_sym_COLON,
  [4666] = 1,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [4670] = 1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [4674] = 1,
    ACTIONS(449), 1,
      anon_sym_COLON,
  [4678] = 1,
    ACTIONS(451), 1,
      anon_sym_COLON,
  [4682] = 1,
    ACTIONS(340), 1,
      sym__constant,
  [4686] = 1,
    ACTIONS(453), 1,
      anon_sym_COLON,
  [4690] = 1,
    ACTIONS(348), 1,
      anon_sym_DASH_GT,
  [4694] = 1,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [4698] = 1,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
  [4702] = 1,
    ACTIONS(459), 1,
      anon_sym_DASH_GT,
  [4706] = 1,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 201,
  [SMALL_STATE(5)] = 283,
  [SMALL_STATE(6)] = 359,
  [SMALL_STATE(7)] = 435,
  [SMALL_STATE(8)] = 511,
  [SMALL_STATE(9)] = 587,
  [SMALL_STATE(10)] = 660,
  [SMALL_STATE(11)] = 733,
  [SMALL_STATE(12)] = 806,
  [SMALL_STATE(13)] = 879,
  [SMALL_STATE(14)] = 952,
  [SMALL_STATE(15)] = 1025,
  [SMALL_STATE(16)] = 1098,
  [SMALL_STATE(17)] = 1171,
  [SMALL_STATE(18)] = 1244,
  [SMALL_STATE(19)] = 1317,
  [SMALL_STATE(20)] = 1390,
  [SMALL_STATE(21)] = 1463,
  [SMALL_STATE(22)] = 1536,
  [SMALL_STATE(23)] = 1609,
  [SMALL_STATE(24)] = 1682,
  [SMALL_STATE(25)] = 1755,
  [SMALL_STATE(26)] = 1828,
  [SMALL_STATE(27)] = 1901,
  [SMALL_STATE(28)] = 1974,
  [SMALL_STATE(29)] = 2047,
  [SMALL_STATE(30)] = 2120,
  [SMALL_STATE(31)] = 2193,
  [SMALL_STATE(32)] = 2255,
  [SMALL_STATE(33)] = 2317,
  [SMALL_STATE(34)] = 2376,
  [SMALL_STATE(35)] = 2435,
  [SMALL_STATE(36)] = 2458,
  [SMALL_STATE(37)] = 2481,
  [SMALL_STATE(38)] = 2500,
  [SMALL_STATE(39)] = 2519,
  [SMALL_STATE(40)] = 2543,
  [SMALL_STATE(41)] = 2565,
  [SMALL_STATE(42)] = 2589,
  [SMALL_STATE(43)] = 2613,
  [SMALL_STATE(44)] = 2637,
  [SMALL_STATE(45)] = 2661,
  [SMALL_STATE(46)] = 2695,
  [SMALL_STATE(47)] = 2719,
  [SMALL_STATE(48)] = 2741,
  [SMALL_STATE(49)] = 2765,
  [SMALL_STATE(50)] = 2783,
  [SMALL_STATE(51)] = 2805,
  [SMALL_STATE(52)] = 2823,
  [SMALL_STATE(53)] = 2841,
  [SMALL_STATE(54)] = 2875,
  [SMALL_STATE(55)] = 2899,
  [SMALL_STATE(56)] = 2917,
  [SMALL_STATE(57)] = 2935,
  [SMALL_STATE(58)] = 2953,
  [SMALL_STATE(59)] = 2971,
  [SMALL_STATE(60)] = 2989,
  [SMALL_STATE(61)] = 3007,
  [SMALL_STATE(62)] = 3025,
  [SMALL_STATE(63)] = 3043,
  [SMALL_STATE(64)] = 3061,
  [SMALL_STATE(65)] = 3082,
  [SMALL_STATE(66)] = 3103,
  [SMALL_STATE(67)] = 3124,
  [SMALL_STATE(68)] = 3140,
  [SMALL_STATE(69)] = 3156,
  [SMALL_STATE(70)] = 3171,
  [SMALL_STATE(71)] = 3186,
  [SMALL_STATE(72)] = 3201,
  [SMALL_STATE(73)] = 3216,
  [SMALL_STATE(74)] = 3231,
  [SMALL_STATE(75)] = 3246,
  [SMALL_STATE(76)] = 3261,
  [SMALL_STATE(77)] = 3276,
  [SMALL_STATE(78)] = 3291,
  [SMALL_STATE(79)] = 3306,
  [SMALL_STATE(80)] = 3321,
  [SMALL_STATE(81)] = 3336,
  [SMALL_STATE(82)] = 3351,
  [SMALL_STATE(83)] = 3366,
  [SMALL_STATE(84)] = 3380,
  [SMALL_STATE(85)] = 3394,
  [SMALL_STATE(86)] = 3408,
  [SMALL_STATE(87)] = 3422,
  [SMALL_STATE(88)] = 3438,
  [SMALL_STATE(89)] = 3452,
  [SMALL_STATE(90)] = 3466,
  [SMALL_STATE(91)] = 3480,
  [SMALL_STATE(92)] = 3494,
  [SMALL_STATE(93)] = 3510,
  [SMALL_STATE(94)] = 3524,
  [SMALL_STATE(95)] = 3538,
  [SMALL_STATE(96)] = 3557,
  [SMALL_STATE(97)] = 3576,
  [SMALL_STATE(98)] = 3595,
  [SMALL_STATE(99)] = 3608,
  [SMALL_STATE(100)] = 3627,
  [SMALL_STATE(101)] = 3640,
  [SMALL_STATE(102)] = 3659,
  [SMALL_STATE(103)] = 3682,
  [SMALL_STATE(104)] = 3705,
  [SMALL_STATE(105)] = 3728,
  [SMALL_STATE(106)] = 3751,
  [SMALL_STATE(107)] = 3770,
  [SMALL_STATE(108)] = 3793,
  [SMALL_STATE(109)] = 3805,
  [SMALL_STATE(110)] = 3815,
  [SMALL_STATE(111)] = 3825,
  [SMALL_STATE(112)] = 3835,
  [SMALL_STATE(113)] = 3845,
  [SMALL_STATE(114)] = 3857,
  [SMALL_STATE(115)] = 3867,
  [SMALL_STATE(116)] = 3879,
  [SMALL_STATE(117)] = 3889,
  [SMALL_STATE(118)] = 3898,
  [SMALL_STATE(119)] = 3907,
  [SMALL_STATE(120)] = 3922,
  [SMALL_STATE(121)] = 3939,
  [SMALL_STATE(122)] = 3948,
  [SMALL_STATE(123)] = 3957,
  [SMALL_STATE(124)] = 3976,
  [SMALL_STATE(125)] = 3993,
  [SMALL_STATE(126)] = 4002,
  [SMALL_STATE(127)] = 4011,
  [SMALL_STATE(128)] = 4020,
  [SMALL_STATE(129)] = 4029,
  [SMALL_STATE(130)] = 4038,
  [SMALL_STATE(131)] = 4047,
  [SMALL_STATE(132)] = 4062,
  [SMALL_STATE(133)] = 4071,
  [SMALL_STATE(134)] = 4080,
  [SMALL_STATE(135)] = 4089,
  [SMALL_STATE(136)] = 4098,
  [SMALL_STATE(137)] = 4114,
  [SMALL_STATE(138)] = 4124,
  [SMALL_STATE(139)] = 4137,
  [SMALL_STATE(140)] = 4150,
  [SMALL_STATE(141)] = 4163,
  [SMALL_STATE(142)] = 4176,
  [SMALL_STATE(143)] = 4189,
  [SMALL_STATE(144)] = 4202,
  [SMALL_STATE(145)] = 4215,
  [SMALL_STATE(146)] = 4228,
  [SMALL_STATE(147)] = 4241,
  [SMALL_STATE(148)] = 4254,
  [SMALL_STATE(149)] = 4267,
  [SMALL_STATE(150)] = 4280,
  [SMALL_STATE(151)] = 4293,
  [SMALL_STATE(152)] = 4304,
  [SMALL_STATE(153)] = 4317,
  [SMALL_STATE(154)] = 4330,
  [SMALL_STATE(155)] = 4343,
  [SMALL_STATE(156)] = 4353,
  [SMALL_STATE(157)] = 4363,
  [SMALL_STATE(158)] = 4369,
  [SMALL_STATE(159)] = 4379,
  [SMALL_STATE(160)] = 4389,
  [SMALL_STATE(161)] = 4395,
  [SMALL_STATE(162)] = 4405,
  [SMALL_STATE(163)] = 4415,
  [SMALL_STATE(164)] = 4421,
  [SMALL_STATE(165)] = 4427,
  [SMALL_STATE(166)] = 4433,
  [SMALL_STATE(167)] = 4439,
  [SMALL_STATE(168)] = 4449,
  [SMALL_STATE(169)] = 4459,
  [SMALL_STATE(170)] = 4465,
  [SMALL_STATE(171)] = 4471,
  [SMALL_STATE(172)] = 4478,
  [SMALL_STATE(173)] = 4483,
  [SMALL_STATE(174)] = 4488,
  [SMALL_STATE(175)] = 4495,
  [SMALL_STATE(176)] = 4502,
  [SMALL_STATE(177)] = 4509,
  [SMALL_STATE(178)] = 4514,
  [SMALL_STATE(179)] = 4521,
  [SMALL_STATE(180)] = 4528,
  [SMALL_STATE(181)] = 4535,
  [SMALL_STATE(182)] = 4540,
  [SMALL_STATE(183)] = 4547,
  [SMALL_STATE(184)] = 4552,
  [SMALL_STATE(185)] = 4557,
  [SMALL_STATE(186)] = 4562,
  [SMALL_STATE(187)] = 4569,
  [SMALL_STATE(188)] = 4576,
  [SMALL_STATE(189)] = 4581,
  [SMALL_STATE(190)] = 4586,
  [SMALL_STATE(191)] = 4590,
  [SMALL_STATE(192)] = 4594,
  [SMALL_STATE(193)] = 4598,
  [SMALL_STATE(194)] = 4602,
  [SMALL_STATE(195)] = 4606,
  [SMALL_STATE(196)] = 4610,
  [SMALL_STATE(197)] = 4614,
  [SMALL_STATE(198)] = 4618,
  [SMALL_STATE(199)] = 4622,
  [SMALL_STATE(200)] = 4626,
  [SMALL_STATE(201)] = 4630,
  [SMALL_STATE(202)] = 4634,
  [SMALL_STATE(203)] = 4638,
  [SMALL_STATE(204)] = 4642,
  [SMALL_STATE(205)] = 4646,
  [SMALL_STATE(206)] = 4650,
  [SMALL_STATE(207)] = 4654,
  [SMALL_STATE(208)] = 4658,
  [SMALL_STATE(209)] = 4662,
  [SMALL_STATE(210)] = 4666,
  [SMALL_STATE(211)] = 4670,
  [SMALL_STATE(212)] = 4674,
  [SMALL_STATE(213)] = 4678,
  [SMALL_STATE(214)] = 4682,
  [SMALL_STATE(215)] = 4686,
  [SMALL_STATE(216)] = 4690,
  [SMALL_STATE(217)] = 4694,
  [SMALL_STATE(218)] = 4698,
  [SMALL_STATE(219)] = 4702,
  [SMALL_STATE(220)] = 4706,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(188),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(124),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(120),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(146),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(147),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(137),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(192),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(150),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 7),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_type, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(215),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(213),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(141),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(144),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(136),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_type, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_singleton_type, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_type, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 8),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_type, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaceable_type, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_types, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_types, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_types_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_types_repeat1, 2), SHIFT_REPEAT(102),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_method_name, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_name, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_function, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_member, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_member, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_member, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_member, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prepend_member, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_member, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_method, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_member, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, .production_id = 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_name, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_keyword_parameter, 4, .production_id = 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_parameter, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_parameter, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_splat_parameter, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_name, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_parameter, 3, .production_id = 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_type, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [461] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
