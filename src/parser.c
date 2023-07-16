#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 212
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 3
#define TOKEN_COUNT 57
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
  sym_program = 57,
  sym__alias = 58,
  sym__integer = 59,
  sym__var = 60,
  sym_declaration = 61,
  sym_class_declaration = 62,
  sym_module_declaration = 63,
  sym_interface_declaration = 64,
  sym_type_alias_declaration = 65,
  sym_constant_declaration = 66,
  sym_global_declaration = 67,
  sym_members = 68,
  sym_member = 69,
  sym_ivar_member = 70,
  sym_method_member = 71,
  sym_attribute_member = 72,
  sym_include_member = 73,
  sym_extend_member = 74,
  sym_prepend_member = 75,
  sym_alias_member = 76,
  sym_visibility_member = 77,
  sym_visibility = 78,
  sym_alias_name = 79,
  sym_class_name = 80,
  sym_interface_name = 81,
  sym_ivar_name = 82,
  sym_var_name = 83,
  sym_namespace = 84,
  sym_method_name = 85,
  sym_singleton_method_name = 86,
  sym_attribute_type = 87,
  sym_instance_method = 88,
  sym_singleton_method = 89,
  sym_module_function = 90,
  sym_method_types = 91,
  sym_method_type = 92,
  sym_block = 93,
  sym_parameters = 94,
  sym__parameter = 95,
  sym_parameter = 96,
  sym_optional_parameter = 97,
  sym_splat_parameter = 98,
  sym_keyword_parameter = 99,
  sym_optional_keyword_parameter = 100,
  sym_double_splat_parameter = 101,
  sym_type = 102,
  sym_builtin_type = 103,
  sym_literal_type = 104,
  sym_operator_type = 105,
  sym_namespaceable_type = 106,
  sym_string_literal = 107,
  sym_symbol_literal = 108,
  sym_union_type = 109,
  sym_intersection_type = 110,
  sym_optional_type = 111,
  aux_sym_program_repeat1 = 112,
  aux_sym_members_repeat1 = 113,
  aux_sym_method_types_repeat1 = 114,
  aux_sym_parameters_repeat1 = 115,
  alias_sym_constant = 116,
  alias_sym_key = 117,
  alias_sym_module_name = 118,
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
  [17] = 11,
  [18] = 18,
  [19] = 11,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 15,
  [24] = 24,
  [25] = 15,
  [26] = 26,
  [27] = 11,
  [28] = 15,
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
  [69] = 52,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 54,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 46,
  [83] = 35,
  [84] = 40,
  [85] = 48,
  [86] = 47,
  [87] = 43,
  [88] = 39,
  [89] = 50,
  [90] = 53,
  [91] = 62,
  [92] = 36,
  [93] = 93,
  [94] = 94,
  [95] = 51,
  [96] = 37,
  [97] = 38,
  [98] = 98,
  [99] = 56,
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
  [110] = 36,
  [111] = 111,
  [112] = 112,
  [113] = 35,
  [114] = 114,
  [115] = 51,
  [116] = 50,
  [117] = 39,
  [118] = 118,
  [119] = 119,
  [120] = 38,
  [121] = 43,
  [122] = 47,
  [123] = 48,
  [124] = 40,
  [125] = 46,
  [126] = 53,
  [127] = 37,
  [128] = 52,
  [129] = 54,
  [130] = 62,
  [131] = 131,
  [132] = 56,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 51,
  [139] = 136,
  [140] = 140,
  [141] = 56,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 136,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 73,
  [161] = 161,
  [162] = 162,
  [163] = 163,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(137);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '&') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '?') ADVANCE(249);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == '_') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(95);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(134)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '?') ADVANCE(221);
      if (lookahead == '_') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == 'v') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(247);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(247);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(247);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(247);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '?') ADVANCE(128);
      if (lookahead == '_') ADVANCE(130);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '_') ADVANCE(184);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(219);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(189);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(215);
      END_STATE();
    case 17:
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '_') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(212);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(216);
      END_STATE();
    case 129:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(179);
      END_STATE();
    case 131:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 134:
      if (eof) ADVANCE(137);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '&') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '?') ADVANCE(222);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == '_') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(95);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(134)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 135:
      if (eof) ADVANCE(137);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '&') ADVANCE(247);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 136:
      if (eof) ADVANCE(137);
      if (lookahead == '$') ADVANCE(131);
      if (lookahead == '&') ADVANCE(247);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'a') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'c') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'd') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'f') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'p') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'p') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'u') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'y') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__delimited_symbol);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__integer_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__ivar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__method);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '?') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '.') ADVANCE(213);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '_') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(181);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_self_DOT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_attr_reader);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_attr_writer);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_attr_accessor);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_self_QMARK_DOT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_QMARK_LBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_supertype);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '{') ADVANCE(216);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_bot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_self);
      if (lookahead == '.') ADVANCE(208);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_instance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_untyped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_true_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_false_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      if (lookahead == '{') ADVANCE(216);
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
  [35] = {.lex_state = 135},
  [36] = {.lex_state = 135},
  [37] = {.lex_state = 135},
  [38] = {.lex_state = 135},
  [39] = {.lex_state = 135},
  [40] = {.lex_state = 135},
  [41] = {.lex_state = 135},
  [42] = {.lex_state = 135},
  [43] = {.lex_state = 135},
  [44] = {.lex_state = 135},
  [45] = {.lex_state = 135},
  [46] = {.lex_state = 135},
  [47] = {.lex_state = 135},
  [48] = {.lex_state = 135},
  [49] = {.lex_state = 135},
  [50] = {.lex_state = 135},
  [51] = {.lex_state = 135},
  [52] = {.lex_state = 135},
  [53] = {.lex_state = 135},
  [54] = {.lex_state = 135},
  [55] = {.lex_state = 135},
  [56] = {.lex_state = 135},
  [57] = {.lex_state = 135},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 135},
  [60] = {.lex_state = 135},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 135},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 135},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 135},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 135},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 135},
  [83] = {.lex_state = 135},
  [84] = {.lex_state = 135},
  [85] = {.lex_state = 135},
  [86] = {.lex_state = 135},
  [87] = {.lex_state = 135},
  [88] = {.lex_state = 135},
  [89] = {.lex_state = 135},
  [90] = {.lex_state = 135},
  [91] = {.lex_state = 135},
  [92] = {.lex_state = 135},
  [93] = {.lex_state = 135},
  [94] = {.lex_state = 135},
  [95] = {.lex_state = 135},
  [96] = {.lex_state = 135},
  [97] = {.lex_state = 135},
  [98] = {.lex_state = 135},
  [99] = {.lex_state = 135},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 135},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 135},
  [141] = {.lex_state = 135},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 135},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 135},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_program] = STATE(205),
    [sym_declaration] = STATE(61),
    [sym_class_declaration] = STATE(111),
    [sym_module_declaration] = STATE(111),
    [sym_interface_declaration] = STATE(111),
    [sym_type_alias_declaration] = STATE(111),
    [sym_constant_declaration] = STATE(111),
    [sym_global_declaration] = STATE(111),
    [aux_sym_program_repeat1] = STATE(61),
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
  [0] = 24,
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
    STATE(105), 1,
      sym_type,
    STATE(129), 1,
      sym__alias,
    STATE(148), 1,
      sym_namespace,
    STATE(149), 1,
      sym__var,
    STATE(176), 1,
      sym__parameter,
    STATE(196), 1,
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
    STATE(122), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(123), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(125), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(124), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(151), 6,
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
  [98] = 23,
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
    STATE(105), 1,
      sym_type,
    STATE(129), 1,
      sym__alias,
    STATE(148), 1,
      sym_namespace,
    STATE(149), 1,
      sym__var,
    STATE(176), 1,
      sym__parameter,
    STATE(196), 1,
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
    STATE(122), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(123), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(125), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(124), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(177), 6,
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
  [193] = 19,
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
    STATE(105), 1,
      sym_type,
    STATE(129), 1,
      sym__alias,
    STATE(148), 1,
      sym_namespace,
    STATE(149), 1,
      sym__var,
    STATE(171), 1,
      sym__parameter,
    STATE(211), 1,
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
    STATE(122), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(123), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(125), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(124), 4,
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
  [271] = 17,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      aux_sym__alias_token1,
    STATE(105), 1,
      sym_type,
    STATE(129), 1,
      sym__alias,
    STATE(148), 1,
      sym_namespace,
    STATE(167), 1,
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
    STATE(122), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(123), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(125), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(124), 4,
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
  [343] = 17,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      aux_sym__alias_token1,
    STATE(105), 1,
      sym_type,
    STATE(129), 1,
      sym__alias,
    STATE(148), 1,
      sym_namespace,
    STATE(165), 1,
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
    STATE(122), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(123), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(125), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(124), 4,
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
  [415] = 17,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      aux_sym__alias_token1,
    STATE(105), 1,
      sym_type,
    STATE(129), 1,
      sym__alias,
    STATE(148), 1,
      sym_namespace,
    STATE(175), 1,
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
    STATE(122), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(123), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(125), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(124), 4,
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
  [487] = 17,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      aux_sym__alias_token1,
    STATE(105), 1,
      sym_type,
    STATE(129), 1,
      sym__alias,
    STATE(148), 1,
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
    STATE(122), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(123), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(125), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(124), 4,
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
  [559] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(54), 1,
      sym__alias,
    STATE(57), 1,
      sym_type,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [628] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(53), 1,
      sym__interface,
    ACTIONS(61), 1,
      aux_sym__alias_token1,
    ACTIONS(65), 1,
      aux_sym__integer_token1,
    STATE(74), 1,
      sym__alias,
    STATE(137), 1,
      sym_namespace,
    STATE(140), 1,
      sym_type,
    ACTIONS(63), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(69), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(71), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(82), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(84), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(67), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [697] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(61), 1,
      aux_sym__alias_token1,
    ACTIONS(65), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__constant,
    ACTIONS(75), 1,
      sym__interface,
    STATE(74), 1,
      sym__alias,
    STATE(99), 1,
      sym_type,
    STATE(136), 1,
      sym_namespace,
    ACTIONS(63), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(69), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(71), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(82), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(84), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(67), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [766] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(61), 1,
      aux_sym__alias_token1,
    ACTIONS(65), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__constant,
    ACTIONS(75), 1,
      sym__interface,
    STATE(74), 1,
      sym__alias,
    STATE(93), 1,
      sym_type,
    STATE(136), 1,
      sym_namespace,
    ACTIONS(63), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(69), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(71), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(82), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(84), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(67), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [835] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(61), 1,
      aux_sym__alias_token1,
    ACTIONS(65), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__constant,
    ACTIONS(75), 1,
      sym__interface,
    STATE(74), 1,
      sym__alias,
    STATE(98), 1,
      sym_type,
    STATE(136), 1,
      sym_namespace,
    ACTIONS(63), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(69), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(71), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(82), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(84), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(67), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [904] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(53), 1,
      sym__interface,
    ACTIONS(61), 1,
      aux_sym__alias_token1,
    ACTIONS(65), 1,
      aux_sym__integer_token1,
    STATE(74), 1,
      sym__alias,
    STATE(137), 1,
      sym_namespace,
    STATE(144), 1,
      sym_type,
    ACTIONS(63), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(69), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(71), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(82), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(84), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(67), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [973] = 16,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      aux_sym__alias_token1,
    STATE(115), 1,
      sym_type,
    STATE(129), 1,
      sym__alias,
    STATE(148), 1,
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
    STATE(122), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(123), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(125), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(124), 4,
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
  [1042] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(54), 1,
      sym__alias,
    STATE(60), 1,
      sym_type,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1111] = 16,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(43), 1,
      aux_sym__alias_token1,
    STATE(129), 1,
      sym__alias,
    STATE(132), 1,
      sym_type,
    STATE(148), 1,
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
    STATE(122), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(123), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(125), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(124), 4,
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
  [1180] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(54), 1,
      sym__alias,
    STATE(59), 1,
      sym_type,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1249] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(53), 1,
      sym__interface,
    ACTIONS(61), 1,
      aux_sym__alias_token1,
    ACTIONS(65), 1,
      aux_sym__integer_token1,
    STATE(74), 1,
      sym__alias,
    STATE(137), 1,
      sym_namespace,
    STATE(141), 1,
      sym_type,
    ACTIONS(63), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(69), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(71), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(82), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(84), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(67), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1318] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(61), 1,
      aux_sym__alias_token1,
    ACTIONS(65), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__constant,
    ACTIONS(75), 1,
      sym__interface,
    STATE(74), 1,
      sym__alias,
    STATE(94), 1,
      sym_type,
    STATE(136), 1,
      sym_namespace,
    ACTIONS(63), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(69), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(71), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(82), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(84), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(67), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1387] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(45), 1,
      sym_type,
    STATE(54), 1,
      sym__alias,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1456] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(42), 1,
      sym_type,
    STATE(54), 1,
      sym__alias,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1525] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(53), 1,
      sym__interface,
    ACTIONS(61), 1,
      aux_sym__alias_token1,
    ACTIONS(65), 1,
      aux_sym__integer_token1,
    STATE(74), 1,
      sym__alias,
    STATE(137), 1,
      sym_namespace,
    STATE(138), 1,
      sym_type,
    ACTIONS(63), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(69), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(71), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(82), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(84), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(67), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1594] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(44), 1,
      sym_type,
    STATE(54), 1,
      sym__alias,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1663] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(61), 1,
      aux_sym__alias_token1,
    ACTIONS(65), 1,
      aux_sym__integer_token1,
    ACTIONS(73), 1,
      sym__constant,
    ACTIONS(75), 1,
      sym__interface,
    STATE(74), 1,
      sym__alias,
    STATE(95), 1,
      sym_type,
    STATE(136), 1,
      sym_namespace,
    ACTIONS(63), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(69), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(71), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(82), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(85), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(86), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(84), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(67), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1732] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(49), 1,
      sym_type,
    STATE(54), 1,
      sym__alias,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1801] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(54), 1,
      sym__alias,
    STATE(56), 1,
      sym_type,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1870] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(51), 1,
      sym_type,
    STATE(54), 1,
      sym__alias,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1939] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(41), 1,
      sym_type,
    STATE(54), 1,
      sym__alias,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2008] = 16,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(45), 1,
      aux_sym__alias_token1,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(51), 1,
      aux_sym__integer_token1,
    ACTIONS(53), 1,
      sym__interface,
    STATE(54), 1,
      sym__alias,
    STATE(55), 1,
      sym_type,
    STATE(139), 1,
      sym_namespace,
    ACTIONS(49), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(57), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(59), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(46), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(47), 3,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
    STATE(48), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(40), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    ACTIONS(55), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2077] = 16,
    ACTIONS(77), 1,
      sym__ivar,
    ACTIONS(79), 1,
      anon_sym_end,
    ACTIONS(81), 1,
      anon_sym_include,
    ACTIONS(83), 1,
      anon_sym_extend,
    ACTIONS(85), 1,
      anon_sym_prepend,
    ACTIONS(87), 1,
      anon_sym_alias,
    ACTIONS(93), 1,
      anon_sym_def,
    STATE(103), 1,
      sym_visibility,
    STATE(182), 1,
      sym_attribute_type,
    STATE(184), 1,
      sym_ivar_name,
    STATE(188), 1,
      sym_members,
    ACTIONS(89), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(33), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(91), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(76), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(81), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2139] = 16,
    ACTIONS(77), 1,
      sym__ivar,
    ACTIONS(81), 1,
      anon_sym_include,
    ACTIONS(83), 1,
      anon_sym_extend,
    ACTIONS(85), 1,
      anon_sym_prepend,
    ACTIONS(87), 1,
      anon_sym_alias,
    ACTIONS(93), 1,
      anon_sym_def,
    ACTIONS(95), 1,
      anon_sym_end,
    STATE(103), 1,
      sym_visibility,
    STATE(182), 1,
      sym_attribute_type,
    STATE(184), 1,
      sym_ivar_name,
    STATE(189), 1,
      sym_members,
    ACTIONS(89), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(33), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(91), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(76), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(81), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2201] = 15,
    ACTIONS(77), 1,
      sym__ivar,
    ACTIONS(81), 1,
      anon_sym_include,
    ACTIONS(83), 1,
      anon_sym_extend,
    ACTIONS(85), 1,
      anon_sym_prepend,
    ACTIONS(87), 1,
      anon_sym_alias,
    ACTIONS(93), 1,
      anon_sym_def,
    ACTIONS(97), 1,
      anon_sym_end,
    STATE(103), 1,
      sym_visibility,
    STATE(182), 1,
      sym_attribute_type,
    STATE(184), 1,
      sym_ivar_name,
    ACTIONS(89), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(34), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(91), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(76), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(81), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2260] = 15,
    ACTIONS(99), 1,
      sym__ivar,
    ACTIONS(102), 1,
      anon_sym_end,
    ACTIONS(104), 1,
      anon_sym_include,
    ACTIONS(107), 1,
      anon_sym_extend,
    ACTIONS(110), 1,
      anon_sym_prepend,
    ACTIONS(113), 1,
      anon_sym_alias,
    ACTIONS(122), 1,
      anon_sym_def,
    STATE(103), 1,
      sym_visibility,
    STATE(182), 1,
      sym_attribute_type,
    STATE(184), 1,
      sym_ivar_name,
    ACTIONS(116), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(34), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(119), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(76), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(81), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2319] = 2,
    ACTIONS(127), 1,
      sym__scope,
    ACTIONS(125), 16,
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
  [2341] = 2,
    ACTIONS(131), 1,
      sym__scope,
    ACTIONS(129), 16,
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
  [2363] = 1,
    ACTIONS(133), 16,
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
  [2382] = 1,
    ACTIONS(135), 16,
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
  [2401] = 1,
    ACTIONS(137), 15,
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
  [2419] = 1,
    ACTIONS(139), 15,
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
  [2437] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK2,
    ACTIONS(141), 12,
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
  [2461] = 3,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK2,
    ACTIONS(149), 13,
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
  [2483] = 1,
    ACTIONS(151), 15,
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
  [2501] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
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
  [2525] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
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
  [2549] = 1,
    ACTIONS(157), 15,
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
  [2567] = 1,
    ACTIONS(159), 15,
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
  [2585] = 1,
    ACTIONS(161), 15,
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
  [2603] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK2,
    ACTIONS(163), 12,
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
  [2627] = 1,
    ACTIONS(165), 15,
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
  [2645] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK2,
    ACTIONS(167), 12,
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
  [2669] = 1,
    ACTIONS(169), 15,
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
  [2687] = 1,
    ACTIONS(171), 15,
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
  [2705] = 1,
    ACTIONS(173), 15,
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
  [2723] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK2,
    ACTIONS(175), 12,
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
  [2747] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK2,
    ACTIONS(177), 12,
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
  [2771] = 3,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK2,
    ACTIONS(179), 13,
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
  [2793] = 9,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym__constant,
    ACTIONS(186), 1,
      sym__global,
    ACTIONS(189), 1,
      anon_sym_class,
    ACTIONS(192), 1,
      anon_sym_module,
    ACTIONS(195), 1,
      anon_sym_interface,
    ACTIONS(198), 1,
      anon_sym_type,
    STATE(58), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(111), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [2827] = 4,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK2,
    ACTIONS(201), 12,
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
  [2851] = 3,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_QMARK2,
    ACTIONS(203), 13,
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
  [2873] = 9,
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
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(111), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [2907] = 1,
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
  [2925] = 3,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      aux_sym_method_types_repeat1,
    ACTIONS(209), 12,
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
  [2946] = 3,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    STATE(65), 1,
      aux_sym_method_types_repeat1,
    ACTIONS(214), 12,
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
  [2967] = 3,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      aux_sym_method_types_repeat1,
    ACTIONS(218), 12,
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
  [2988] = 1,
    ACTIONS(209), 13,
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
  [3004] = 1,
    ACTIONS(220), 13,
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
  [3020] = 1,
    ACTIONS(222), 12,
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
  [3035] = 1,
    ACTIONS(169), 12,
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
  [3050] = 1,
    ACTIONS(224), 12,
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
  [3065] = 1,
    ACTIONS(226), 12,
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
  [3080] = 1,
    ACTIONS(228), 12,
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
  [3095] = 1,
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
  [3110] = 1,
    ACTIONS(173), 12,
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
  [3125] = 1,
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
  [3140] = 1,
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
  [3155] = 1,
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
  [3170] = 1,
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
  [3185] = 1,
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
  [3200] = 1,
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
  [3215] = 1,
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
  [3230] = 1,
    ACTIONS(157), 11,
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
  [3244] = 2,
    ACTIONS(127), 1,
      sym__scope,
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
      anon_sym_QMARK2,
  [3260] = 1,
    ACTIONS(139), 11,
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
  [3274] = 1,
    ACTIONS(161), 11,
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
  [3288] = 1,
    ACTIONS(159), 11,
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
  [3302] = 1,
    ACTIONS(151), 11,
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
  [3316] = 1,
    ACTIONS(137), 11,
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
  [3330] = 1,
    ACTIONS(165), 11,
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
  [3344] = 1,
    ACTIONS(171), 11,
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
  [3358] = 1,
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
  [3372] = 2,
    ACTIONS(131), 1,
      sym__scope,
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
      anon_sym_QMARK2,
  [3388] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      anon_sym_AMP,
    ACTIONS(252), 1,
      anon_sym_QMARK2,
    ACTIONS(246), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3407] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      anon_sym_AMP,
    ACTIONS(252), 1,
      anon_sym_QMARK2,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3426] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      anon_sym_AMP,
    ACTIONS(252), 1,
      anon_sym_QMARK2,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3445] = 1,
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
      anon_sym_QMARK2,
  [3458] = 1,
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
  [3471] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      anon_sym_AMP,
    ACTIONS(252), 1,
      anon_sym_QMARK2,
    ACTIONS(256), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3490] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      anon_sym_AMP,
    ACTIONS(252), 1,
      anon_sym_QMARK2,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3509] = 7,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      sym_method_type,
    STATE(72), 1,
      sym_method_types,
    STATE(135), 1,
      sym_parameters,
    STATE(204), 1,
      sym_block,
    ACTIONS(262), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [3532] = 7,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DASH_GT,
    ACTIONS(264), 1,
      sym_supertype,
    STATE(66), 1,
      sym_method_type,
    STATE(135), 1,
      sym_parameters,
    STATE(204), 1,
      sym_block,
    ACTIONS(262), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [3555] = 7,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      sym_method_type,
    STATE(70), 1,
      sym_method_types,
    STATE(135), 1,
      sym_parameters,
    STATE(204), 1,
      sym_block,
    ACTIONS(262), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [3578] = 5,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      anon_sym_def,
    STATE(174), 1,
      sym_attribute_type,
    STATE(78), 2,
      sym_instance_method,
      sym_singleton_method,
    ACTIONS(268), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [3597] = 7,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      sym_method_type,
    STATE(68), 1,
      sym_method_types,
    STATE(135), 1,
      sym_parameters,
    STATE(204), 1,
      sym_block,
    ACTIONS(262), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [3620] = 7,
    ACTIONS(272), 1,
      aux_sym__alias_token1,
    ACTIONS(276), 1,
      anon_sym_PIPE,
    ACTIONS(278), 1,
      anon_sym_AMP,
    ACTIONS(280), 1,
      anon_sym_QMARK2,
    STATE(149), 1,
      sym__var,
    STATE(168), 1,
      sym_var_name,
    ACTIONS(274), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3643] = 1,
    ACTIONS(282), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3653] = 1,
    ACTIONS(284), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3663] = 1,
    ACTIONS(286), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3673] = 1,
    ACTIONS(288), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3683] = 2,
    ACTIONS(131), 1,
      sym__scope,
    ACTIONS(129), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3695] = 1,
    ACTIONS(290), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3705] = 2,
    ACTIONS(294), 1,
      anon_sym_COLON,
    ACTIONS(292), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3717] = 2,
    ACTIONS(127), 1,
      sym__scope,
    ACTIONS(125), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3729] = 1,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [3739] = 4,
    ACTIONS(276), 1,
      anon_sym_PIPE,
    ACTIONS(278), 1,
      anon_sym_AMP,
    ACTIONS(280), 1,
      anon_sym_QMARK2,
    ACTIONS(167), 3,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3754] = 1,
    ACTIONS(165), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3763] = 1,
    ACTIONS(137), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3772] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(53), 1,
      sym__interface,
    STATE(166), 1,
      sym_namespace,
    STATE(79), 2,
      sym_class_name,
      sym_interface_name,
  [3789] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    ACTIONS(53), 1,
      sym__interface,
    STATE(166), 1,
      sym_namespace,
    STATE(71), 2,
      sym_class_name,
      sym_interface_name,
  [3806] = 1,
    ACTIONS(135), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3815] = 1,
    ACTIONS(151), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3824] = 1,
    ACTIONS(159), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3833] = 1,
    ACTIONS(161), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3842] = 1,
    ACTIONS(139), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3851] = 1,
    ACTIONS(157), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3860] = 1,
    ACTIONS(171), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3869] = 1,
    ACTIONS(133), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3878] = 1,
    ACTIONS(169), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3887] = 1,
    ACTIONS(173), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3896] = 1,
    ACTIONS(207), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3905] = 6,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(298), 1,
      aux_sym__alias_token1,
    ACTIONS(300), 1,
      sym__constant,
    STATE(74), 1,
      sym__alias,
    STATE(152), 1,
      sym_namespace,
    STATE(199), 1,
      sym_alias_name,
  [3924] = 4,
    ACTIONS(276), 1,
      anon_sym_PIPE,
    ACTIONS(278), 1,
      anon_sym_AMP,
    ACTIONS(280), 1,
      anon_sym_QMARK2,
    ACTIONS(177), 3,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3939] = 2,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(304), 4,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_def,
  [3949] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(53), 1,
      sym__interface,
    ACTIONS(300), 1,
      sym__constant,
    STATE(169), 1,
      sym_namespace,
    STATE(201), 1,
      sym_interface_name,
  [3965] = 3,
    ACTIONS(306), 1,
      anon_sym_DASH_GT,
    STATE(185), 1,
      sym_block,
    ACTIONS(262), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [3976] = 4,
    ACTIONS(308), 1,
      aux_sym__alias_token1,
    ACTIONS(310), 1,
      sym__constant,
    ACTIONS(312), 1,
      sym__interface,
    STATE(69), 1,
      sym__alias,
  [3989] = 4,
    ACTIONS(308), 1,
      aux_sym__alias_token1,
    ACTIONS(314), 1,
      sym__constant,
    ACTIONS(316), 1,
      sym__interface,
    STATE(69), 1,
      sym__alias,
  [4002] = 4,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(320), 1,
      anon_sym_AMP,
  [4015] = 4,
    ACTIONS(314), 1,
      sym__constant,
    ACTIONS(316), 1,
      sym__interface,
    ACTIONS(322), 1,
      aux_sym__alias_token1,
    STATE(52), 1,
      sym__alias,
  [4028] = 4,
    ACTIONS(252), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(320), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [4041] = 4,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(320), 1,
      anon_sym_AMP,
  [4054] = 4,
    ACTIONS(326), 1,
      sym__method,
    ACTIONS(328), 1,
      anon_sym_self_DOT,
    ACTIONS(330), 1,
      anon_sym_self_QMARK_DOT,
    STATE(194), 1,
      sym_method_name,
  [4067] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    STATE(32), 1,
      sym_class_name,
    STATE(203), 1,
      sym_namespace,
  [4080] = 4,
    ACTIONS(252), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(320), 1,
      anon_sym_AMP,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
  [4093] = 4,
    ACTIONS(326), 1,
      sym__method,
    ACTIONS(334), 1,
      anon_sym_self_DOT,
    STATE(180), 1,
      sym_singleton_method_name,
    STATE(181), 1,
      sym_method_name,
  [4106] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    STATE(31), 1,
      sym_class_name,
    STATE(203), 1,
      sym_namespace,
  [4119] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(47), 1,
      sym__constant,
    STATE(80), 1,
      sym_class_name,
    STATE(203), 1,
      sym_namespace,
  [4132] = 4,
    ACTIONS(336), 1,
      aux_sym__alias_token1,
    ACTIONS(338), 1,
      sym__constant,
    ACTIONS(340), 1,
      sym__interface,
    STATE(128), 1,
      sym__alias,
  [4145] = 1,
    ACTIONS(342), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4151] = 3,
    ACTIONS(77), 1,
      sym__ivar,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_ivar_name,
  [4161] = 3,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_parameters_repeat1,
  [4171] = 3,
    ACTIONS(308), 1,
      aux_sym__alias_token1,
    ACTIONS(350), 1,
      sym__constant,
    STATE(69), 1,
      sym__alias,
  [4181] = 1,
    ACTIONS(352), 3,
      aux_sym__alias_token1,
      sym__constant,
      sym__interface,
  [4187] = 3,
    ACTIONS(77), 1,
      sym__ivar,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_ivar_name,
  [4197] = 1,
    ACTIONS(356), 3,
      aux_sym__alias_token1,
      sym__constant,
      sym__interface,
  [4203] = 1,
    ACTIONS(358), 3,
      anon_sym_DASH_GT,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4209] = 3,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_parameters_repeat1,
  [4219] = 1,
    ACTIONS(365), 3,
      anon_sym_DASH_GT,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4225] = 3,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_parameters_repeat1,
  [4235] = 1,
    ACTIONS(230), 3,
      sym__method,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [4241] = 3,
    ACTIONS(326), 1,
      sym__method,
    ACTIONS(328), 1,
      anon_sym_self_DOT,
    STATE(194), 1,
      sym_method_name,
  [4251] = 1,
    ACTIONS(369), 3,
      anon_sym_DASH_GT,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4257] = 1,
    ACTIONS(371), 3,
      aux_sym__alias_token1,
      sym__constant,
      sym__interface,
  [4263] = 3,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_DASH_GT,
    STATE(206), 1,
      sym_parameters,
  [4273] = 1,
    ACTIONS(375), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4278] = 2,
    ACTIONS(314), 1,
      sym__constant,
    ACTIONS(316), 1,
      sym__interface,
  [4285] = 1,
    ACTIONS(377), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4290] = 1,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4295] = 2,
    ACTIONS(316), 1,
      sym__interface,
    ACTIONS(350), 1,
      sym__constant,
  [4302] = 2,
    ACTIONS(381), 1,
      anon_sym_COLON,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
  [4309] = 1,
    ACTIONS(385), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4314] = 1,
    ACTIONS(387), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [4319] = 2,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [4326] = 2,
    ACTIONS(393), 1,
      sym__method,
    STATE(170), 1,
      sym_method_name,
  [4333] = 1,
    ACTIONS(395), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4338] = 1,
    ACTIONS(397), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4343] = 1,
    ACTIONS(360), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4348] = 2,
    ACTIONS(393), 1,
      sym__method,
    STATE(200), 1,
      sym_method_name,
  [4355] = 2,
    ACTIONS(393), 1,
      sym__method,
    STATE(195), 1,
      sym_method_name,
  [4362] = 2,
    ACTIONS(334), 1,
      anon_sym_self_DOT,
    STATE(77), 1,
      sym_singleton_method_name,
  [4369] = 2,
    ACTIONS(399), 1,
      sym__method,
    STATE(77), 1,
      sym_method_name,
  [4376] = 2,
    ACTIONS(393), 1,
      sym__method,
    STATE(173), 1,
      sym_method_name,
  [4383] = 1,
    ACTIONS(401), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4388] = 1,
    ACTIONS(403), 1,
      anon_sym_COLON,
  [4392] = 1,
    ACTIONS(405), 1,
      anon_sym_DASH_GT,
  [4396] = 1,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [4400] = 1,
    ACTIONS(127), 1,
      sym__scope,
  [4404] = 1,
    ACTIONS(409), 1,
      anon_sym_end,
  [4408] = 1,
    ACTIONS(411), 1,
      anon_sym_end,
  [4412] = 1,
    ACTIONS(413), 1,
      anon_sym_COLON,
  [4416] = 1,
    ACTIONS(415), 1,
      sym__method,
  [4420] = 1,
    ACTIONS(417), 1,
      anon_sym_DASH_GT,
  [4424] = 1,
    ACTIONS(419), 1,
      anon_sym_DASH_GT,
  [4428] = 1,
    ACTIONS(421), 1,
      anon_sym_COLON,
  [4432] = 1,
    ACTIONS(423), 1,
      anon_sym_COLON,
  [4436] = 1,
    ACTIONS(425), 1,
      anon_sym_COLON,
  [4440] = 1,
    ACTIONS(427), 1,
      sym__method,
  [4444] = 1,
    ACTIONS(429), 1,
      anon_sym_COLON,
  [4448] = 1,
    ACTIONS(431), 1,
      anon_sym_EQ,
  [4452] = 1,
    ACTIONS(433), 1,
      anon_sym_COLON,
  [4456] = 1,
    ACTIONS(435), 1,
      anon_sym_end,
  [4460] = 1,
    ACTIONS(131), 1,
      sym__scope,
  [4464] = 1,
    ACTIONS(314), 1,
      sym__constant,
  [4468] = 1,
    ACTIONS(306), 1,
      anon_sym_DASH_GT,
  [4472] = 1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
  [4476] = 1,
    ACTIONS(439), 1,
      anon_sym_DASH_GT,
  [4480] = 1,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [4484] = 1,
    ACTIONS(441), 1,
      anon_sym_COLON,
  [4488] = 1,
    ACTIONS(443), 1,
      anon_sym_COLON,
  [4492] = 1,
    ACTIONS(445), 1,
      anon_sym_COLON,
  [4496] = 1,
    ACTIONS(447), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 193,
  [SMALL_STATE(5)] = 271,
  [SMALL_STATE(6)] = 343,
  [SMALL_STATE(7)] = 415,
  [SMALL_STATE(8)] = 487,
  [SMALL_STATE(9)] = 559,
  [SMALL_STATE(10)] = 628,
  [SMALL_STATE(11)] = 697,
  [SMALL_STATE(12)] = 766,
  [SMALL_STATE(13)] = 835,
  [SMALL_STATE(14)] = 904,
  [SMALL_STATE(15)] = 973,
  [SMALL_STATE(16)] = 1042,
  [SMALL_STATE(17)] = 1111,
  [SMALL_STATE(18)] = 1180,
  [SMALL_STATE(19)] = 1249,
  [SMALL_STATE(20)] = 1318,
  [SMALL_STATE(21)] = 1387,
  [SMALL_STATE(22)] = 1456,
  [SMALL_STATE(23)] = 1525,
  [SMALL_STATE(24)] = 1594,
  [SMALL_STATE(25)] = 1663,
  [SMALL_STATE(26)] = 1732,
  [SMALL_STATE(27)] = 1801,
  [SMALL_STATE(28)] = 1870,
  [SMALL_STATE(29)] = 1939,
  [SMALL_STATE(30)] = 2008,
  [SMALL_STATE(31)] = 2077,
  [SMALL_STATE(32)] = 2139,
  [SMALL_STATE(33)] = 2201,
  [SMALL_STATE(34)] = 2260,
  [SMALL_STATE(35)] = 2319,
  [SMALL_STATE(36)] = 2341,
  [SMALL_STATE(37)] = 2363,
  [SMALL_STATE(38)] = 2382,
  [SMALL_STATE(39)] = 2401,
  [SMALL_STATE(40)] = 2419,
  [SMALL_STATE(41)] = 2437,
  [SMALL_STATE(42)] = 2461,
  [SMALL_STATE(43)] = 2483,
  [SMALL_STATE(44)] = 2501,
  [SMALL_STATE(45)] = 2525,
  [SMALL_STATE(46)] = 2549,
  [SMALL_STATE(47)] = 2567,
  [SMALL_STATE(48)] = 2585,
  [SMALL_STATE(49)] = 2603,
  [SMALL_STATE(50)] = 2627,
  [SMALL_STATE(51)] = 2645,
  [SMALL_STATE(52)] = 2669,
  [SMALL_STATE(53)] = 2687,
  [SMALL_STATE(54)] = 2705,
  [SMALL_STATE(55)] = 2723,
  [SMALL_STATE(56)] = 2747,
  [SMALL_STATE(57)] = 2771,
  [SMALL_STATE(58)] = 2793,
  [SMALL_STATE(59)] = 2827,
  [SMALL_STATE(60)] = 2851,
  [SMALL_STATE(61)] = 2873,
  [SMALL_STATE(62)] = 2907,
  [SMALL_STATE(63)] = 2925,
  [SMALL_STATE(64)] = 2946,
  [SMALL_STATE(65)] = 2967,
  [SMALL_STATE(66)] = 2988,
  [SMALL_STATE(67)] = 3004,
  [SMALL_STATE(68)] = 3020,
  [SMALL_STATE(69)] = 3035,
  [SMALL_STATE(70)] = 3050,
  [SMALL_STATE(71)] = 3065,
  [SMALL_STATE(72)] = 3080,
  [SMALL_STATE(73)] = 3095,
  [SMALL_STATE(74)] = 3110,
  [SMALL_STATE(75)] = 3125,
  [SMALL_STATE(76)] = 3140,
  [SMALL_STATE(77)] = 3155,
  [SMALL_STATE(78)] = 3170,
  [SMALL_STATE(79)] = 3185,
  [SMALL_STATE(80)] = 3200,
  [SMALL_STATE(81)] = 3215,
  [SMALL_STATE(82)] = 3230,
  [SMALL_STATE(83)] = 3244,
  [SMALL_STATE(84)] = 3260,
  [SMALL_STATE(85)] = 3274,
  [SMALL_STATE(86)] = 3288,
  [SMALL_STATE(87)] = 3302,
  [SMALL_STATE(88)] = 3316,
  [SMALL_STATE(89)] = 3330,
  [SMALL_STATE(90)] = 3344,
  [SMALL_STATE(91)] = 3358,
  [SMALL_STATE(92)] = 3372,
  [SMALL_STATE(93)] = 3388,
  [SMALL_STATE(94)] = 3407,
  [SMALL_STATE(95)] = 3426,
  [SMALL_STATE(96)] = 3445,
  [SMALL_STATE(97)] = 3458,
  [SMALL_STATE(98)] = 3471,
  [SMALL_STATE(99)] = 3490,
  [SMALL_STATE(100)] = 3509,
  [SMALL_STATE(101)] = 3532,
  [SMALL_STATE(102)] = 3555,
  [SMALL_STATE(103)] = 3578,
  [SMALL_STATE(104)] = 3597,
  [SMALL_STATE(105)] = 3620,
  [SMALL_STATE(106)] = 3643,
  [SMALL_STATE(107)] = 3653,
  [SMALL_STATE(108)] = 3663,
  [SMALL_STATE(109)] = 3673,
  [SMALL_STATE(110)] = 3683,
  [SMALL_STATE(111)] = 3695,
  [SMALL_STATE(112)] = 3705,
  [SMALL_STATE(113)] = 3717,
  [SMALL_STATE(114)] = 3729,
  [SMALL_STATE(115)] = 3739,
  [SMALL_STATE(116)] = 3754,
  [SMALL_STATE(117)] = 3763,
  [SMALL_STATE(118)] = 3772,
  [SMALL_STATE(119)] = 3789,
  [SMALL_STATE(120)] = 3806,
  [SMALL_STATE(121)] = 3815,
  [SMALL_STATE(122)] = 3824,
  [SMALL_STATE(123)] = 3833,
  [SMALL_STATE(124)] = 3842,
  [SMALL_STATE(125)] = 3851,
  [SMALL_STATE(126)] = 3860,
  [SMALL_STATE(127)] = 3869,
  [SMALL_STATE(128)] = 3878,
  [SMALL_STATE(129)] = 3887,
  [SMALL_STATE(130)] = 3896,
  [SMALL_STATE(131)] = 3905,
  [SMALL_STATE(132)] = 3924,
  [SMALL_STATE(133)] = 3939,
  [SMALL_STATE(134)] = 3949,
  [SMALL_STATE(135)] = 3965,
  [SMALL_STATE(136)] = 3976,
  [SMALL_STATE(137)] = 3989,
  [SMALL_STATE(138)] = 4002,
  [SMALL_STATE(139)] = 4015,
  [SMALL_STATE(140)] = 4028,
  [SMALL_STATE(141)] = 4041,
  [SMALL_STATE(142)] = 4054,
  [SMALL_STATE(143)] = 4067,
  [SMALL_STATE(144)] = 4080,
  [SMALL_STATE(145)] = 4093,
  [SMALL_STATE(146)] = 4106,
  [SMALL_STATE(147)] = 4119,
  [SMALL_STATE(148)] = 4132,
  [SMALL_STATE(149)] = 4145,
  [SMALL_STATE(150)] = 4151,
  [SMALL_STATE(151)] = 4161,
  [SMALL_STATE(152)] = 4171,
  [SMALL_STATE(153)] = 4181,
  [SMALL_STATE(154)] = 4187,
  [SMALL_STATE(155)] = 4197,
  [SMALL_STATE(156)] = 4203,
  [SMALL_STATE(157)] = 4209,
  [SMALL_STATE(158)] = 4219,
  [SMALL_STATE(159)] = 4225,
  [SMALL_STATE(160)] = 4235,
  [SMALL_STATE(161)] = 4241,
  [SMALL_STATE(162)] = 4251,
  [SMALL_STATE(163)] = 4257,
  [SMALL_STATE(164)] = 4263,
  [SMALL_STATE(165)] = 4273,
  [SMALL_STATE(166)] = 4278,
  [SMALL_STATE(167)] = 4285,
  [SMALL_STATE(168)] = 4290,
  [SMALL_STATE(169)] = 4295,
  [SMALL_STATE(170)] = 4302,
  [SMALL_STATE(171)] = 4309,
  [SMALL_STATE(172)] = 4314,
  [SMALL_STATE(173)] = 4319,
  [SMALL_STATE(174)] = 4326,
  [SMALL_STATE(175)] = 4333,
  [SMALL_STATE(176)] = 4338,
  [SMALL_STATE(177)] = 4343,
  [SMALL_STATE(178)] = 4348,
  [SMALL_STATE(179)] = 4355,
  [SMALL_STATE(180)] = 4362,
  [SMALL_STATE(181)] = 4369,
  [SMALL_STATE(182)] = 4376,
  [SMALL_STATE(183)] = 4383,
  [SMALL_STATE(184)] = 4388,
  [SMALL_STATE(185)] = 4392,
  [SMALL_STATE(186)] = 4396,
  [SMALL_STATE(187)] = 4400,
  [SMALL_STATE(188)] = 4404,
  [SMALL_STATE(189)] = 4408,
  [SMALL_STATE(190)] = 4412,
  [SMALL_STATE(191)] = 4416,
  [SMALL_STATE(192)] = 4420,
  [SMALL_STATE(193)] = 4424,
  [SMALL_STATE(194)] = 4428,
  [SMALL_STATE(195)] = 4432,
  [SMALL_STATE(196)] = 4436,
  [SMALL_STATE(197)] = 4440,
  [SMALL_STATE(198)] = 4444,
  [SMALL_STATE(199)] = 4448,
  [SMALL_STATE(200)] = 4452,
  [SMALL_STATE(201)] = 4456,
  [SMALL_STATE(202)] = 4460,
  [SMALL_STATE(203)] = 4464,
  [SMALL_STATE(204)] = 4468,
  [SMALL_STATE(205)] = 4472,
  [SMALL_STATE(206)] = 4476,
  [SMALL_STATE(207)] = 4480,
  [SMALL_STATE(208)] = 4484,
  [SMALL_STATE(209)] = 4488,
  [SMALL_STATE(210)] = 4492,
  [SMALL_STATE(211)] = 4496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 1),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(172),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(119),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(118),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(147),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(145),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(133),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(191),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(142),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_type, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 7),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 8),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_type, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaceable_type, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_type, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(209),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(208),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(143),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(146),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(134),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(131),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_type, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_types_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_types_repeat1, 2), SHIFT_REPEAT(101),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_types, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_types, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_method_name, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_method, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_member, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_function, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_name, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_member, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_member, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_member, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_member, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_member, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prepend_member, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_name, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_parameter, 3, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_splat_parameter, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_parameter, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_name, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_parameter, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_keyword_parameter, 4, .production_id = 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_type, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [437] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
