#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 250
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
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
  sym_record_type = 114,
  aux_sym_program_repeat1 = 115,
  aux_sym_members_repeat1 = 116,
  aux_sym_method_types_repeat1 = 117,
  aux_sym_parameters_repeat1 = 118,
  aux_sym_record_type_repeat1 = 119,
  alias_sym_constant = 120,
  alias_sym_key = 121,
  alias_sym_module_name = 122,
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
  [sym_record_type] = "record_type",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_members_repeat1] = "members_repeat1",
  [aux_sym_method_types_repeat1] = "method_types_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_record_type_repeat1] = "record_type_repeat1",
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
  [sym_record_type] = sym_record_type,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_members_repeat1] = aux_sym_members_repeat1,
  [aux_sym_method_types_repeat1] = aux_sym_method_types_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_record_type_repeat1] = aux_sym_record_type_repeat1,
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
  [sym_record_type] = {
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
  [aux_sym_record_type_repeat1] = {
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
    [1] = alias_sym_key,
  },
  [4] = {
    [0] = alias_sym_key,
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 16,
  [22] = 16,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 11,
  [29] = 11,
  [30] = 30,
  [31] = 11,
  [32] = 23,
  [33] = 33,
  [34] = 23,
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
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 53,
  [76] = 61,
  [77] = 77,
  [78] = 45,
  [79] = 79,
  [80] = 56,
  [81] = 50,
  [82] = 82,
  [83] = 43,
  [84] = 84,
  [85] = 85,
  [86] = 55,
  [87] = 54,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 59,
  [93] = 52,
  [94] = 94,
  [95] = 95,
  [96] = 46,
  [97] = 58,
  [98] = 98,
  [99] = 57,
  [100] = 44,
  [101] = 101,
  [102] = 49,
  [103] = 40,
  [104] = 39,
  [105] = 48,
  [106] = 47,
  [107] = 107,
  [108] = 42,
  [109] = 41,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 40,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 39,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 48,
  [129] = 49,
  [130] = 130,
  [131] = 50,
  [132] = 132,
  [133] = 43,
  [134] = 59,
  [135] = 42,
  [136] = 45,
  [137] = 46,
  [138] = 58,
  [139] = 127,
  [140] = 57,
  [141] = 141,
  [142] = 56,
  [143] = 47,
  [144] = 52,
  [145] = 53,
  [146] = 41,
  [147] = 61,
  [148] = 44,
  [149] = 54,
  [150] = 55,
  [151] = 127,
  [152] = 152,
  [153] = 48,
  [154] = 47,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 157,
  [160] = 160,
  [161] = 161,
  [162] = 160,
  [163] = 157,
  [164] = 161,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 157,
  [169] = 169,
  [170] = 170,
  [171] = 160,
  [172] = 172,
  [173] = 161,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 182,
  [183] = 179,
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
  [194] = 88,
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
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 222,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 222,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 244,
  [249] = 244,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(144);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(138);
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '?') ADVANCE(262);
      if (lookahead == '@') ADVANCE(139);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '?') ADVANCE(236);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(175);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == '?') ADVANCE(262);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '?') ADVANCE(262);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == '?') ADVANCE(135);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(263);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(234);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(223);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(204);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(230);
      END_STATE();
    case 17:
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '_') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(243);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 132:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 135:
      if (lookahead == '{') ADVANCE(231);
      END_STATE();
    case 136:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 138:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 141:
      if (eof) ADVANCE(144);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(138);
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '?') ADVANCE(236);
      if (lookahead == '@') ADVANCE(139);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 142:
      if (eof) ADVANCE(144);
      if (lookahead == '$') ADVANCE(138);
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '?') ADVANCE(262);
      if (lookahead == '@') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 143:
      if (eof) ADVANCE(144);
      if (lookahead == '$') ADVANCE(138);
      if (lookahead == '&') ADVANCE(261);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '@') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '|') ADVANCE(229);
      if (lookahead == '}') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == '(') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'c') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'd') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'd') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'f') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'g') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'p') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'p') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'u') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (lookahead == 'y') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__delimited_symbol);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__integer_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__ivar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__method);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '!') ADVANCE(196);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '?') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '.') ADVANCE(228);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(196);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__method);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__scope);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_self_DOT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_attr_reader);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_attr_writer);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_attr_accessor);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_self_QMARK_DOT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_QMARK_LBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_supertype);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_bot);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_bot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_self);
      if (lookahead == '.') ADVANCE(223);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_instance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_untyped);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_untyped);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_true_literal);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_true_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_false_literal);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_false_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 263:
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
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 142},
  [40] = {.lex_state = 142},
  [41] = {.lex_state = 142},
  [42] = {.lex_state = 142},
  [43] = {.lex_state = 142},
  [44] = {.lex_state = 142},
  [45] = {.lex_state = 142},
  [46] = {.lex_state = 142},
  [47] = {.lex_state = 142},
  [48] = {.lex_state = 142},
  [49] = {.lex_state = 142},
  [50] = {.lex_state = 142},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 142},
  [53] = {.lex_state = 142},
  [54] = {.lex_state = 142},
  [55] = {.lex_state = 142},
  [56] = {.lex_state = 142},
  [57] = {.lex_state = 142},
  [58] = {.lex_state = 142},
  [59] = {.lex_state = 142},
  [60] = {.lex_state = 142},
  [61] = {.lex_state = 142},
  [62] = {.lex_state = 142},
  [63] = {.lex_state = 142},
  [64] = {.lex_state = 142},
  [65] = {.lex_state = 142},
  [66] = {.lex_state = 142},
  [67] = {.lex_state = 142},
  [68] = {.lex_state = 142},
  [69] = {.lex_state = 142},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 142},
  [76] = {.lex_state = 142},
  [77] = {.lex_state = 142},
  [78] = {.lex_state = 142},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 142},
  [81] = {.lex_state = 142},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 142},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 142},
  [87] = {.lex_state = 142},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 142},
  [93] = {.lex_state = 142},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 142},
  [97] = {.lex_state = 142},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 142},
  [100] = {.lex_state = 142},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 142},
  [103] = {.lex_state = 142},
  [104] = {.lex_state = 142},
  [105] = {.lex_state = 142},
  [106] = {.lex_state = 142},
  [107] = {.lex_state = 142},
  [108] = {.lex_state = 142},
  [109] = {.lex_state = 142},
  [110] = {.lex_state = 142},
  [111] = {.lex_state = 142},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 142},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 142},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 142},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 142},
  [154] = {.lex_state = 142},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 142},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 142},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 142},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 142},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
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
    [sym_program] = STATE(215),
    [sym_declaration] = STATE(51),
    [sym_class_declaration] = STATE(122),
    [sym_module_declaration] = STATE(122),
    [sym_interface_declaration] = STATE(122),
    [sym_type_alias_declaration] = STATE(122),
    [sym_constant_declaration] = STATE(122),
    [sym_global_declaration] = STATE(122),
    [aux_sym_program_repeat1] = STATE(51),
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
  [0] = 26,
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
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      anon_sym_STAR_STAR,
    ACTIONS(45), 1,
      anon_sym_singleton_LPAREN,
    STATE(112), 1,
      sym_type,
    STATE(147), 1,
      sym__alias,
    STATE(157), 1,
      sym_namespace,
    STATE(187), 1,
      sym__var,
    STATE(196), 1,
      sym__parameter,
    STATE(231), 1,
      sym_var_name,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(41), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(43), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(142), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(149), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(150), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(140), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    STATE(185), 6,
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
  [106] = 25,
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
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      anon_sym_STAR_STAR,
    ACTIONS(45), 1,
      anon_sym_singleton_LPAREN,
    STATE(112), 1,
      sym_type,
    STATE(147), 1,
      sym__alias,
    STATE(157), 1,
      sym_namespace,
    STATE(187), 1,
      sym__var,
    STATE(196), 1,
      sym__parameter,
    STATE(231), 1,
      sym_var_name,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(41), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(43), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(142), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(149), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(150), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(140), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    STATE(209), 6,
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
  [209] = 21,
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
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_singleton_LPAREN,
    STATE(112), 1,
      sym_type,
    STATE(147), 1,
      sym__alias,
    STATE(157), 1,
      sym_namespace,
    STATE(187), 1,
      sym__var,
    STATE(214), 1,
      sym__parameter,
    STATE(220), 1,
      sym_var_name,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(41), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(43), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(142), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(149), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(150), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(140), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
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
  [295] = 19,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    STATE(112), 1,
      sym_type,
    STATE(147), 1,
      sym__alias,
    STATE(157), 1,
      sym_namespace,
    STATE(205), 1,
      sym__parameter,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(41), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(43), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(142), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(149), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(150), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(140), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
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
  [375] = 19,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    STATE(112), 1,
      sym_type,
    STATE(147), 1,
      sym__alias,
    STATE(157), 1,
      sym_namespace,
    STATE(197), 1,
      sym__parameter,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(41), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(43), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(142), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(149), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(150), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(140), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
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
  [455] = 19,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    STATE(112), 1,
      sym_type,
    STATE(147), 1,
      sym__alias,
    STATE(157), 1,
      sym_namespace,
    STATE(213), 1,
      sym__parameter,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(41), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(43), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(142), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(149), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(150), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(140), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
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
  [535] = 19,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    STATE(112), 1,
      sym_type,
    STATE(147), 1,
      sym__alias,
    STATE(157), 1,
      sym_namespace,
    STATE(210), 1,
      sym__parameter,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(41), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(43), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(142), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(149), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(150), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(140), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
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
  [615] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(61), 1,
      sym__alias,
    STATE(64), 1,
      sym_type,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [692] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(61), 1,
      sym__alias,
    STATE(67), 1,
      sym_type,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [769] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(48), 1,
      sym_type,
    STATE(61), 1,
      sym__alias,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [846] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(71), 1,
      sym__constant,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(77), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(111), 1,
      sym_type,
    STATE(163), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [923] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(71), 1,
      sym__constant,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(77), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(110), 1,
      sym_type,
    STATE(163), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1000] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(61), 1,
      sym__alias,
    STATE(68), 1,
      sym_type,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1077] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(61), 1,
      sym__alias,
    STATE(62), 1,
      sym_type,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1154] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(151), 1,
      sym_type,
    STATE(159), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1231] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(60), 1,
      sym_type,
    STATE(61), 1,
      sym__alias,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1308] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(156), 1,
      sym_type,
    STATE(159), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1385] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(159), 1,
      sym_namespace,
    STATE(174), 1,
      sym_type,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1462] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(61), 1,
      sym__alias,
    STATE(63), 1,
      sym_type,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1539] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(127), 1,
      sym_type,
    STATE(159), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1616] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(139), 1,
      sym_type,
    STATE(159), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1693] = 18,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    STATE(143), 1,
      sym_type,
    STATE(147), 1,
      sym__alias,
    STATE(157), 1,
      sym_namespace,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(41), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(43), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(142), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(149), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(150), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(140), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
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
  [1770] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(61), 1,
      sym__alias,
    STATE(69), 1,
      sym_type,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1847] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(61), 1,
      sym__alias,
    STATE(65), 1,
      sym_type,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [1924] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(47), 1,
      sym_type,
    STATE(61), 1,
      sym__alias,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2001] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(158), 1,
      sym_type,
    STATE(159), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2078] = 18,
    ACTIONS(19), 1,
      sym__constant,
    ACTIONS(23), 1,
      aux_sym__integer_token1,
    ACTIONS(25), 1,
      sym__interface,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_singleton_LPAREN,
    ACTIONS(47), 1,
      aux_sym__alias_token1,
    STATE(128), 1,
      sym_type,
    STATE(147), 1,
      sym__alias,
    STATE(157), 1,
      sym_namespace,
    ACTIONS(21), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(41), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(43), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(142), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(149), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(150), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(140), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
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
  [2155] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(153), 1,
      sym_type,
    STATE(159), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2232] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(71), 1,
      sym__constant,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(77), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(107), 1,
      sym_type,
    STATE(163), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2309] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(71), 1,
      sym__constant,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(77), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(105), 1,
      sym_type,
    STATE(163), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2386] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(71), 1,
      sym__constant,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(77), 1,
      sym__interface,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(106), 1,
      sym_type,
    STATE(163), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2463] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(49), 1,
      aux_sym__alias_token1,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(55), 1,
      aux_sym__integer_token1,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_singleton_LPAREN,
    STATE(61), 1,
      sym__alias,
    STATE(66), 1,
      sym_type,
    STATE(168), 1,
      sym_namespace,
    ACTIONS(53), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(63), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(65), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(54), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(56), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(55), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(57), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(59), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2540] = 18,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(69), 1,
      aux_sym__alias_token1,
    ACTIONS(75), 1,
      aux_sym__integer_token1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_singleton_LPAREN,
    STATE(76), 1,
      sym__alias,
    STATE(154), 1,
      sym_type,
    STATE(159), 1,
      sym_namespace,
    ACTIONS(73), 2,
      sym__delimited_symbol,
      sym__symbol,
    ACTIONS(83), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    ACTIONS(85), 2,
      sym_true_literal,
      sym_false_literal,
    STATE(80), 3,
      sym_alias_name,
      sym_class_name,
      sym_interface_name,
    STATE(87), 3,
      sym_union_type,
      sym_intersection_type,
      sym_optional_type,
    STATE(86), 4,
      sym_builtin_type,
      sym_literal_type,
      sym_operator_type,
      sym_namespaceable_type,
    STATE(99), 5,
      sym__integer,
      sym_string_literal,
      sym_symbol_literal,
      sym_class_singleton_type,
      sym_record_type,
    ACTIONS(79), 9,
      anon_sym_class,
      anon_sym_top,
      anon_sym_bot,
      anon_sym_self,
      anon_sym_instance,
      anon_sym_nil,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_untyped,
  [2617] = 16,
    ACTIONS(89), 1,
      sym__ivar,
    ACTIONS(91), 1,
      anon_sym_end,
    ACTIONS(93), 1,
      anon_sym_include,
    ACTIONS(95), 1,
      anon_sym_extend,
    ACTIONS(97), 1,
      anon_sym_prepend,
    ACTIONS(99), 1,
      anon_sym_alias,
    ACTIONS(105), 1,
      anon_sym_def,
    STATE(115), 1,
      sym_visibility,
    STATE(199), 1,
      sym_attribute_type,
    STATE(230), 1,
      sym_ivar_name,
    STATE(240), 1,
      sym_members,
    ACTIONS(101), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(38), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(103), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(98), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(95), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2679] = 16,
    ACTIONS(89), 1,
      sym__ivar,
    ACTIONS(93), 1,
      anon_sym_include,
    ACTIONS(95), 1,
      anon_sym_extend,
    ACTIONS(97), 1,
      anon_sym_prepend,
    ACTIONS(99), 1,
      anon_sym_alias,
    ACTIONS(105), 1,
      anon_sym_def,
    ACTIONS(107), 1,
      anon_sym_end,
    STATE(115), 1,
      sym_visibility,
    STATE(199), 1,
      sym_attribute_type,
    STATE(230), 1,
      sym_ivar_name,
    STATE(234), 1,
      sym_members,
    ACTIONS(101), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(38), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(103), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(98), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(95), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2741] = 15,
    ACTIONS(109), 1,
      sym__ivar,
    ACTIONS(112), 1,
      anon_sym_end,
    ACTIONS(114), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_extend,
    ACTIONS(120), 1,
      anon_sym_prepend,
    ACTIONS(123), 1,
      anon_sym_alias,
    ACTIONS(132), 1,
      anon_sym_def,
    STATE(115), 1,
      sym_visibility,
    STATE(199), 1,
      sym_attribute_type,
    STATE(230), 1,
      sym_ivar_name,
    ACTIONS(126), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(37), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(129), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(98), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(95), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2800] = 15,
    ACTIONS(89), 1,
      sym__ivar,
    ACTIONS(93), 1,
      anon_sym_include,
    ACTIONS(95), 1,
      anon_sym_extend,
    ACTIONS(97), 1,
      anon_sym_prepend,
    ACTIONS(99), 1,
      anon_sym_alias,
    ACTIONS(105), 1,
      anon_sym_def,
    ACTIONS(135), 1,
      anon_sym_end,
    STATE(115), 1,
      sym_visibility,
    STATE(199), 1,
      sym_attribute_type,
    STATE(230), 1,
      sym_ivar_name,
    ACTIONS(101), 2,
      anon_sym_private,
      anon_sym_public,
    STATE(37), 2,
      sym_member,
      aux_sym_members_repeat1,
    ACTIONS(103), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
    STATE(98), 3,
      sym_instance_method,
      sym_singleton_method,
      sym_module_function,
    STATE(95), 8,
      sym_ivar_member,
      sym_method_member,
      sym_attribute_member,
      sym_include_member,
      sym_extend_member,
      sym_prepend_member,
      sym_alias_member,
      sym_visibility_member,
  [2859] = 2,
    ACTIONS(139), 1,
      sym__scope,
    ACTIONS(137), 18,
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
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2883] = 2,
    ACTIONS(143), 1,
      sym__scope,
    ACTIONS(141), 18,
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
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2907] = 1,
    ACTIONS(145), 17,
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
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2927] = 1,
    ACTIONS(147), 17,
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
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [2947] = 1,
    ACTIONS(149), 15,
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
  [2965] = 1,
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
  [2983] = 1,
    ACTIONS(153), 15,
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
  [3001] = 1,
    ACTIONS(155), 15,
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
  [3019] = 4,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
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
  [3043] = 4,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_QMARK2,
    ACTIONS(165), 12,
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
  [3067] = 1,
    ACTIONS(167), 15,
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
  [3085] = 1,
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
  [3103] = 9,
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
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(70), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(122), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [3137] = 1,
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
  [3155] = 1,
    ACTIONS(175), 15,
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
  [3173] = 1,
    ACTIONS(177), 15,
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
  [3191] = 1,
    ACTIONS(179), 15,
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
  [3209] = 1,
    ACTIONS(181), 15,
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
  [3227] = 1,
    ACTIONS(183), 15,
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
  [3245] = 1,
    ACTIONS(185), 15,
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
  [3263] = 1,
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
  [3281] = 4,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_QMARK2,
    ACTIONS(189), 12,
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
  [3305] = 1,
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
  [3323] = 4,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_QMARK2,
    ACTIONS(193), 12,
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
  [3347] = 4,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_QMARK2,
    ACTIONS(195), 12,
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
  [3371] = 3,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_QMARK2,
    ACTIONS(197), 13,
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
  [3393] = 4,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_QMARK2,
    ACTIONS(199), 12,
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
  [3417] = 4,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
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
  [3441] = 3,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
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
  [3463] = 3,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_QMARK2,
    ACTIONS(205), 13,
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
  [3485] = 4,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_QMARK2,
    ACTIONS(207), 12,
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
  [3509] = 9,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      sym__constant,
    ACTIONS(214), 1,
      sym__global,
    ACTIONS(217), 1,
      anon_sym_class,
    ACTIONS(220), 1,
      anon_sym_module,
    ACTIONS(223), 1,
      anon_sym_interface,
    ACTIONS(226), 1,
      anon_sym_type,
    STATE(70), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(122), 6,
      sym_class_declaration,
      sym_module_declaration,
      sym_interface_declaration,
      sym_type_alias_declaration,
      sym_constant_declaration,
      sym_global_declaration,
  [3543] = 3,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_method_types_repeat1,
    ACTIONS(229), 12,
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
  [3564] = 3,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_method_types_repeat1,
    ACTIONS(233), 12,
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
  [3585] = 3,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_method_types_repeat1,
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
  [3606] = 1,
    ACTIONS(233), 13,
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
  [3622] = 1,
    ACTIONS(175), 13,
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
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3638] = 1,
    ACTIONS(191), 13,
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
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3654] = 1,
    ACTIONS(240), 13,
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
  [3670] = 1,
    ACTIONS(153), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3685] = 1,
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
  [3700] = 1,
    ACTIONS(181), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3715] = 1,
    ACTIONS(169), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3730] = 1,
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
  [3745] = 1,
    ACTIONS(149), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3760] = 1,
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
  [3775] = 1,
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
  [3790] = 1,
    ACTIONS(179), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3805] = 1,
    ACTIONS(177), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3820] = 1,
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
  [3835] = 1,
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
  [3850] = 1,
    ACTIONS(254), 12,
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
  [3865] = 1,
    ACTIONS(256), 12,
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
  [3880] = 1,
    ACTIONS(187), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3895] = 1,
    ACTIONS(173), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3910] = 1,
    ACTIONS(258), 12,
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
  [3925] = 1,
    ACTIONS(260), 12,
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
  [3940] = 1,
    ACTIONS(155), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3955] = 1,
    ACTIONS(185), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [3970] = 1,
    ACTIONS(262), 12,
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
  [3985] = 1,
    ACTIONS(183), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4000] = 1,
    ACTIONS(151), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4015] = 1,
    ACTIONS(264), 12,
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
  [4030] = 1,
    ACTIONS(167), 12,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4045] = 2,
    ACTIONS(143), 1,
      sym__scope,
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
  [4061] = 2,
    ACTIONS(139), 1,
      sym__scope,
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
      anon_sym_QMARK2,
  [4077] = 4,
    ACTIONS(266), 1,
      anon_sym_PIPE,
    ACTIONS(268), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4096] = 4,
    ACTIONS(266), 1,
      anon_sym_PIPE,
    ACTIONS(268), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4115] = 4,
    ACTIONS(266), 1,
      anon_sym_PIPE,
    ACTIONS(268), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(272), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4134] = 1,
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
      anon_sym_QMARK2,
  [4147] = 1,
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
      anon_sym_QMARK2,
  [4160] = 4,
    ACTIONS(266), 1,
      anon_sym_PIPE,
    ACTIONS(268), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(274), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4179] = 4,
    ACTIONS(266), 1,
      anon_sym_PIPE,
    ACTIONS(268), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(276), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4198] = 7,
    ACTIONS(278), 1,
      aux_sym__alias_token1,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_QMARK2,
    STATE(187), 1,
      sym__var,
    STATE(211), 1,
      sym_var_name,
    ACTIONS(280), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4221] = 7,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_DASH_GT,
    ACTIONS(294), 1,
      sym_supertype,
    STATE(74), 1,
      sym_method_type,
    STATE(167), 1,
      sym_parameters,
    STATE(242), 1,
      sym_block,
    ACTIONS(292), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4244] = 7,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_DASH_GT,
    STATE(73), 1,
      sym_method_type,
    STATE(90), 1,
      sym_method_types,
    STATE(167), 1,
      sym_parameters,
    STATE(242), 1,
      sym_block,
    ACTIONS(292), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4267] = 5,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(300), 1,
      anon_sym_def,
    STATE(208), 1,
      sym_attribute_type,
    STATE(79), 2,
      sym_instance_method,
      sym_singleton_method,
    ACTIONS(298), 3,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
  [4286] = 7,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_DASH_GT,
    STATE(73), 1,
      sym_method_type,
    STATE(91), 1,
      sym_method_types,
    STATE(167), 1,
      sym_parameters,
    STATE(242), 1,
      sym_block,
    ACTIONS(292), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4309] = 7,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      anon_sym_DASH_GT,
    STATE(73), 1,
      sym_method_type,
    STATE(89), 1,
      sym_method_types,
    STATE(167), 1,
      sym_parameters,
    STATE(242), 1,
      sym_block,
    ACTIONS(292), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4332] = 1,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4342] = 2,
    ACTIONS(143), 1,
      sym__scope,
    ACTIONS(141), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4354] = 1,
    ACTIONS(304), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4364] = 1,
    ACTIONS(306), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4374] = 1,
    ACTIONS(308), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4384] = 1,
    ACTIONS(310), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4394] = 2,
    ACTIONS(139), 1,
      sym__scope,
    ACTIONS(137), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4406] = 1,
    ACTIONS(312), 7,
      ts_builtin_sym_end,
      sym__constant,
      sym__global,
      anon_sym_class,
      anon_sym_module,
      anon_sym_interface,
      anon_sym_type,
  [4416] = 2,
    ACTIONS(316), 1,
      anon_sym_COLON,
    ACTIONS(314), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4428] = 6,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_AMP,
    STATE(179), 1,
      aux_sym_record_type_repeat1,
  [4447] = 4,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_QMARK2,
    ACTIONS(165), 3,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4462] = 1,
    ACTIONS(167), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4471] = 6,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(326), 1,
      aux_sym__alias_token1,
    ACTIONS(328), 1,
      sym__constant,
    STATE(76), 1,
      sym__alias,
    STATE(192), 1,
      sym_namespace,
    STATE(232), 1,
      sym_alias_name,
  [4490] = 1,
    ACTIONS(169), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4499] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    STATE(207), 1,
      sym_namespace,
    STATE(82), 2,
      sym_class_name,
      sym_interface_name,
  [4516] = 1,
    ACTIONS(149), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4525] = 1,
    ACTIONS(187), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4534] = 1,
    ACTIONS(147), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4543] = 1,
    ACTIONS(153), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4552] = 1,
    ACTIONS(155), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4561] = 1,
    ACTIONS(185), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4570] = 6,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      aux_sym_record_type_repeat1,
  [4589] = 1,
    ACTIONS(183), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4598] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    ACTIONS(57), 1,
      sym__interface,
    STATE(207), 1,
      sym_namespace,
    STATE(84), 2,
      sym_class_name,
      sym_interface_name,
  [4615] = 1,
    ACTIONS(181), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4624] = 4,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_QMARK2,
    ACTIONS(157), 3,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4639] = 1,
    ACTIONS(173), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4648] = 1,
    ACTIONS(175), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4657] = 1,
    ACTIONS(145), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4666] = 1,
    ACTIONS(191), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4675] = 1,
    ACTIONS(151), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4684] = 1,
    ACTIONS(177), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4693] = 1,
    ACTIONS(179), 6,
      aux_sym__alias_token1,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_QMARK2,
  [4702] = 6,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      aux_sym_record_type_repeat1,
  [4721] = 2,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 4,
      anon_sym_attr_reader,
      anon_sym_attr_writer,
      anon_sym_attr_accessor,
      anon_sym_def,
  [4731] = 4,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(165), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4745] = 4,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(157), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4759] = 5,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(57), 1,
      sym__interface,
    ACTIONS(328), 1,
      sym__constant,
    STATE(206), 1,
      sym_namespace,
    STATE(217), 1,
      sym_interface_name,
  [4775] = 4,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(338), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4789] = 4,
    ACTIONS(340), 1,
      aux_sym__alias_token1,
    ACTIONS(342), 1,
      sym__constant,
    ACTIONS(344), 1,
      sym__interface,
    STATE(145), 1,
      sym__alias,
  [4802] = 4,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
  [4815] = 4,
    ACTIONS(348), 1,
      aux_sym__alias_token1,
    ACTIONS(350), 1,
      sym__constant,
    ACTIONS(352), 1,
      sym__interface,
    STATE(75), 1,
      sym__alias,
  [4828] = 4,
    ACTIONS(278), 1,
      aux_sym__alias_token1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym__var,
    STATE(249), 1,
      sym_var_name,
  [4841] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    STATE(222), 1,
      sym_class_name,
    STATE(245), 1,
      sym_namespace,
  [4854] = 4,
    ACTIONS(278), 1,
      aux_sym__alias_token1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym__var,
    STATE(244), 1,
      sym_var_name,
  [4867] = 4,
    ACTIONS(348), 1,
      aux_sym__alias_token1,
    ACTIONS(358), 1,
      sym__constant,
    ACTIONS(360), 1,
      sym__interface,
    STATE(75), 1,
      sym__alias,
  [4880] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    STATE(237), 1,
      sym_class_name,
    STATE(245), 1,
      sym_namespace,
  [4893] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    STATE(36), 1,
      sym_class_name,
    STATE(245), 1,
      sym_namespace,
  [4906] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    STATE(35), 1,
      sym_class_name,
    STATE(245), 1,
      sym_namespace,
  [4919] = 3,
    ACTIONS(362), 1,
      anon_sym_DASH_GT,
    STATE(226), 1,
      sym_block,
    ACTIONS(292), 2,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [4930] = 4,
    ACTIONS(350), 1,
      sym__constant,
    ACTIONS(352), 1,
      sym__interface,
    ACTIONS(364), 1,
      aux_sym__alias_token1,
    STATE(53), 1,
      sym__alias,
  [4943] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    STATE(85), 1,
      sym_class_name,
    STATE(245), 1,
      sym_namespace,
  [4956] = 4,
    ACTIONS(366), 1,
      sym__method,
    ACTIONS(368), 1,
      anon_sym_self_DOT,
    STATE(203), 1,
      sym_singleton_method_name,
    STATE(204), 1,
      sym_method_name,
  [4969] = 4,
    ACTIONS(278), 1,
      aux_sym__alias_token1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym__var,
    STATE(248), 1,
      sym_var_name,
  [4982] = 4,
    ACTIONS(366), 1,
      sym__method,
    ACTIONS(372), 1,
      anon_sym_self_DOT,
    ACTIONS(374), 1,
      anon_sym_self_QMARK_DOT,
    STATE(223), 1,
      sym_method_name,
  [4995] = 4,
    ACTIONS(27), 1,
      sym__scope,
    ACTIONS(51), 1,
      sym__constant,
    STATE(241), 1,
      sym_class_name,
    STATE(245), 1,
      sym_namespace,
  [5008] = 4,
    ACTIONS(270), 1,
      anon_sym_QMARK2,
    ACTIONS(318), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
  [5021] = 3,
    ACTIONS(366), 1,
      sym__method,
    ACTIONS(372), 1,
      anon_sym_self_DOT,
    STATE(223), 1,
      sym_method_name,
  [5031] = 1,
    ACTIONS(378), 3,
      aux_sym__alias_token1,
      sym__constant,
      sym__interface,
  [5037] = 3,
    ACTIONS(89), 1,
      sym__ivar,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym_ivar_name,
  [5047] = 3,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_DASH_GT,
    STATE(228), 1,
      sym_parameters,
  [5057] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      aux_sym_record_type_repeat1,
  [5067] = 3,
    ACTIONS(89), 1,
      sym__ivar,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      sym_ivar_name,
  [5077] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      aux_sym_record_type_repeat1,
  [5087] = 3,
    ACTIONS(278), 1,
      aux_sym__alias_token1,
    STATE(187), 1,
      sym__var,
    STATE(221), 1,
      sym_var_name,
  [5097] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      aux_sym_record_type_repeat1,
  [5107] = 1,
    ACTIONS(392), 3,
      anon_sym_DASH_GT,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [5113] = 3,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_parameters_repeat1,
  [5123] = 1,
    ACTIONS(398), 3,
      aux_sym__alias_token1,
      sym__constant,
      sym__interface,
  [5129] = 1,
    ACTIONS(400), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5135] = 3,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_parameters_repeat1,
  [5145] = 1,
    ACTIONS(407), 3,
      anon_sym_DASH_GT,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [5151] = 3,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_record_type_repeat1,
  [5161] = 1,
    ACTIONS(414), 3,
      anon_sym_DASH_GT,
      anon_sym_QMARK_LBRACE,
      anon_sym_LBRACE,
  [5167] = 3,
    ACTIONS(348), 1,
      aux_sym__alias_token1,
    ACTIONS(416), 1,
      sym__constant,
    STATE(75), 1,
      sym__alias,
  [5177] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_parameters_repeat1,
  [5187] = 1,
    ACTIONS(250), 3,
      sym__method,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [5193] = 1,
    ACTIONS(420), 3,
      aux_sym__alias_token1,
      sym__constant,
      sym__interface,
  [5199] = 1,
    ACTIONS(422), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5204] = 1,
    ACTIONS(424), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5209] = 2,
    ACTIONS(426), 1,
      sym__method,
    STATE(235), 1,
      sym_method_name,
  [5216] = 2,
    ACTIONS(426), 1,
      sym__method,
    STATE(212), 1,
      sym_method_name,
  [5223] = 1,
    ACTIONS(428), 2,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [5228] = 2,
    ACTIONS(430), 1,
      anon_sym_COLON,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
  [5235] = 2,
    ACTIONS(426), 1,
      sym__method,
    STATE(239), 1,
      sym_method_name,
  [5242] = 2,
    ACTIONS(368), 1,
      anon_sym_self_DOT,
    STATE(101), 1,
      sym_singleton_method_name,
  [5249] = 2,
    ACTIONS(434), 1,
      sym__method,
    STATE(101), 1,
      sym_method_name,
  [5256] = 1,
    ACTIONS(436), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5261] = 2,
    ACTIONS(352), 1,
      sym__interface,
    ACTIONS(416), 1,
      sym__constant,
  [5268] = 2,
    ACTIONS(350), 1,
      sym__constant,
    ACTIONS(352), 1,
      sym__interface,
  [5275] = 2,
    ACTIONS(426), 1,
      sym__method,
    STATE(201), 1,
      sym_method_name,
  [5282] = 1,
    ACTIONS(402), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5287] = 1,
    ACTIONS(438), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5292] = 1,
    ACTIONS(440), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5297] = 2,
    ACTIONS(442), 1,
      anon_sym_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
  [5304] = 1,
    ACTIONS(446), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5309] = 1,
    ACTIONS(448), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5314] = 1,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
  [5318] = 1,
    ACTIONS(452), 1,
      anon_sym_COLON,
  [5322] = 1,
    ACTIONS(454), 1,
      anon_sym_end,
  [5326] = 1,
    ACTIONS(143), 1,
      sym__scope,
  [5330] = 1,
    ACTIONS(139), 1,
      sym__scope,
  [5334] = 1,
    ACTIONS(456), 1,
      anon_sym_COLON,
  [5338] = 1,
    ACTIONS(458), 1,
      anon_sym_COLON,
  [5342] = 1,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
  [5346] = 1,
    ACTIONS(462), 1,
      anon_sym_COLON,
  [5350] = 1,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [5354] = 1,
    ACTIONS(466), 1,
      anon_sym_COLON,
  [5358] = 1,
    ACTIONS(468), 1,
      anon_sym_DASH_GT,
  [5362] = 1,
    ACTIONS(470), 1,
      anon_sym_COLON,
  [5366] = 1,
    ACTIONS(472), 1,
      anon_sym_DASH_GT,
  [5370] = 1,
    ACTIONS(474), 1,
      sym__method,
  [5374] = 1,
    ACTIONS(476), 1,
      anon_sym_COLON,
  [5378] = 1,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [5382] = 1,
    ACTIONS(480), 1,
      anon_sym_EQ,
  [5386] = 1,
    ACTIONS(482), 1,
      anon_sym_DASH_GT,
  [5390] = 1,
    ACTIONS(484), 1,
      anon_sym_end,
  [5394] = 1,
    ACTIONS(486), 1,
      anon_sym_COLON,
  [5398] = 1,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
  [5402] = 1,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
  [5406] = 1,
    ACTIONS(490), 1,
      anon_sym_COLON,
  [5410] = 1,
    ACTIONS(492), 1,
      anon_sym_COLON,
  [5414] = 1,
    ACTIONS(494), 1,
      anon_sym_end,
  [5418] = 1,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [5422] = 1,
    ACTIONS(362), 1,
      anon_sym_DASH_GT,
  [5426] = 1,
    ACTIONS(498), 1,
      anon_sym_DASH_GT,
  [5430] = 1,
    ACTIONS(500), 1,
      anon_sym_COLON,
  [5434] = 1,
    ACTIONS(350), 1,
      sym__constant,
  [5438] = 1,
    ACTIONS(502), 1,
      sym__method,
  [5442] = 1,
    ACTIONS(504), 1,
      anon_sym_COLON,
  [5446] = 1,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [5450] = 1,
    ACTIONS(508), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 106,
  [SMALL_STATE(4)] = 209,
  [SMALL_STATE(5)] = 295,
  [SMALL_STATE(6)] = 375,
  [SMALL_STATE(7)] = 455,
  [SMALL_STATE(8)] = 535,
  [SMALL_STATE(9)] = 615,
  [SMALL_STATE(10)] = 692,
  [SMALL_STATE(11)] = 769,
  [SMALL_STATE(12)] = 846,
  [SMALL_STATE(13)] = 923,
  [SMALL_STATE(14)] = 1000,
  [SMALL_STATE(15)] = 1077,
  [SMALL_STATE(16)] = 1154,
  [SMALL_STATE(17)] = 1231,
  [SMALL_STATE(18)] = 1308,
  [SMALL_STATE(19)] = 1385,
  [SMALL_STATE(20)] = 1462,
  [SMALL_STATE(21)] = 1539,
  [SMALL_STATE(22)] = 1616,
  [SMALL_STATE(23)] = 1693,
  [SMALL_STATE(24)] = 1770,
  [SMALL_STATE(25)] = 1847,
  [SMALL_STATE(26)] = 1924,
  [SMALL_STATE(27)] = 2001,
  [SMALL_STATE(28)] = 2078,
  [SMALL_STATE(29)] = 2155,
  [SMALL_STATE(30)] = 2232,
  [SMALL_STATE(31)] = 2309,
  [SMALL_STATE(32)] = 2386,
  [SMALL_STATE(33)] = 2463,
  [SMALL_STATE(34)] = 2540,
  [SMALL_STATE(35)] = 2617,
  [SMALL_STATE(36)] = 2679,
  [SMALL_STATE(37)] = 2741,
  [SMALL_STATE(38)] = 2800,
  [SMALL_STATE(39)] = 2859,
  [SMALL_STATE(40)] = 2883,
  [SMALL_STATE(41)] = 2907,
  [SMALL_STATE(42)] = 2927,
  [SMALL_STATE(43)] = 2947,
  [SMALL_STATE(44)] = 2965,
  [SMALL_STATE(45)] = 2983,
  [SMALL_STATE(46)] = 3001,
  [SMALL_STATE(47)] = 3019,
  [SMALL_STATE(48)] = 3043,
  [SMALL_STATE(49)] = 3067,
  [SMALL_STATE(50)] = 3085,
  [SMALL_STATE(51)] = 3103,
  [SMALL_STATE(52)] = 3137,
  [SMALL_STATE(53)] = 3155,
  [SMALL_STATE(54)] = 3173,
  [SMALL_STATE(55)] = 3191,
  [SMALL_STATE(56)] = 3209,
  [SMALL_STATE(57)] = 3227,
  [SMALL_STATE(58)] = 3245,
  [SMALL_STATE(59)] = 3263,
  [SMALL_STATE(60)] = 3281,
  [SMALL_STATE(61)] = 3305,
  [SMALL_STATE(62)] = 3323,
  [SMALL_STATE(63)] = 3347,
  [SMALL_STATE(64)] = 3371,
  [SMALL_STATE(65)] = 3393,
  [SMALL_STATE(66)] = 3417,
  [SMALL_STATE(67)] = 3441,
  [SMALL_STATE(68)] = 3463,
  [SMALL_STATE(69)] = 3485,
  [SMALL_STATE(70)] = 3509,
  [SMALL_STATE(71)] = 3543,
  [SMALL_STATE(72)] = 3564,
  [SMALL_STATE(73)] = 3585,
  [SMALL_STATE(74)] = 3606,
  [SMALL_STATE(75)] = 3622,
  [SMALL_STATE(76)] = 3638,
  [SMALL_STATE(77)] = 3654,
  [SMALL_STATE(78)] = 3670,
  [SMALL_STATE(79)] = 3685,
  [SMALL_STATE(80)] = 3700,
  [SMALL_STATE(81)] = 3715,
  [SMALL_STATE(82)] = 3730,
  [SMALL_STATE(83)] = 3745,
  [SMALL_STATE(84)] = 3760,
  [SMALL_STATE(85)] = 3775,
  [SMALL_STATE(86)] = 3790,
  [SMALL_STATE(87)] = 3805,
  [SMALL_STATE(88)] = 3820,
  [SMALL_STATE(89)] = 3835,
  [SMALL_STATE(90)] = 3850,
  [SMALL_STATE(91)] = 3865,
  [SMALL_STATE(92)] = 3880,
  [SMALL_STATE(93)] = 3895,
  [SMALL_STATE(94)] = 3910,
  [SMALL_STATE(95)] = 3925,
  [SMALL_STATE(96)] = 3940,
  [SMALL_STATE(97)] = 3955,
  [SMALL_STATE(98)] = 3970,
  [SMALL_STATE(99)] = 3985,
  [SMALL_STATE(100)] = 4000,
  [SMALL_STATE(101)] = 4015,
  [SMALL_STATE(102)] = 4030,
  [SMALL_STATE(103)] = 4045,
  [SMALL_STATE(104)] = 4061,
  [SMALL_STATE(105)] = 4077,
  [SMALL_STATE(106)] = 4096,
  [SMALL_STATE(107)] = 4115,
  [SMALL_STATE(108)] = 4134,
  [SMALL_STATE(109)] = 4147,
  [SMALL_STATE(110)] = 4160,
  [SMALL_STATE(111)] = 4179,
  [SMALL_STATE(112)] = 4198,
  [SMALL_STATE(113)] = 4221,
  [SMALL_STATE(114)] = 4244,
  [SMALL_STATE(115)] = 4267,
  [SMALL_STATE(116)] = 4286,
  [SMALL_STATE(117)] = 4309,
  [SMALL_STATE(118)] = 4332,
  [SMALL_STATE(119)] = 4342,
  [SMALL_STATE(120)] = 4354,
  [SMALL_STATE(121)] = 4364,
  [SMALL_STATE(122)] = 4374,
  [SMALL_STATE(123)] = 4384,
  [SMALL_STATE(124)] = 4394,
  [SMALL_STATE(125)] = 4406,
  [SMALL_STATE(126)] = 4416,
  [SMALL_STATE(127)] = 4428,
  [SMALL_STATE(128)] = 4447,
  [SMALL_STATE(129)] = 4462,
  [SMALL_STATE(130)] = 4471,
  [SMALL_STATE(131)] = 4490,
  [SMALL_STATE(132)] = 4499,
  [SMALL_STATE(133)] = 4516,
  [SMALL_STATE(134)] = 4525,
  [SMALL_STATE(135)] = 4534,
  [SMALL_STATE(136)] = 4543,
  [SMALL_STATE(137)] = 4552,
  [SMALL_STATE(138)] = 4561,
  [SMALL_STATE(139)] = 4570,
  [SMALL_STATE(140)] = 4589,
  [SMALL_STATE(141)] = 4598,
  [SMALL_STATE(142)] = 4615,
  [SMALL_STATE(143)] = 4624,
  [SMALL_STATE(144)] = 4639,
  [SMALL_STATE(145)] = 4648,
  [SMALL_STATE(146)] = 4657,
  [SMALL_STATE(147)] = 4666,
  [SMALL_STATE(148)] = 4675,
  [SMALL_STATE(149)] = 4684,
  [SMALL_STATE(150)] = 4693,
  [SMALL_STATE(151)] = 4702,
  [SMALL_STATE(152)] = 4721,
  [SMALL_STATE(153)] = 4731,
  [SMALL_STATE(154)] = 4745,
  [SMALL_STATE(155)] = 4759,
  [SMALL_STATE(156)] = 4775,
  [SMALL_STATE(157)] = 4789,
  [SMALL_STATE(158)] = 4802,
  [SMALL_STATE(159)] = 4815,
  [SMALL_STATE(160)] = 4828,
  [SMALL_STATE(161)] = 4841,
  [SMALL_STATE(162)] = 4854,
  [SMALL_STATE(163)] = 4867,
  [SMALL_STATE(164)] = 4880,
  [SMALL_STATE(165)] = 4893,
  [SMALL_STATE(166)] = 4906,
  [SMALL_STATE(167)] = 4919,
  [SMALL_STATE(168)] = 4930,
  [SMALL_STATE(169)] = 4943,
  [SMALL_STATE(170)] = 4956,
  [SMALL_STATE(171)] = 4969,
  [SMALL_STATE(172)] = 4982,
  [SMALL_STATE(173)] = 4995,
  [SMALL_STATE(174)] = 5008,
  [SMALL_STATE(175)] = 5021,
  [SMALL_STATE(176)] = 5031,
  [SMALL_STATE(177)] = 5037,
  [SMALL_STATE(178)] = 5047,
  [SMALL_STATE(179)] = 5057,
  [SMALL_STATE(180)] = 5067,
  [SMALL_STATE(181)] = 5077,
  [SMALL_STATE(182)] = 5087,
  [SMALL_STATE(183)] = 5097,
  [SMALL_STATE(184)] = 5107,
  [SMALL_STATE(185)] = 5113,
  [SMALL_STATE(186)] = 5123,
  [SMALL_STATE(187)] = 5129,
  [SMALL_STATE(188)] = 5135,
  [SMALL_STATE(189)] = 5145,
  [SMALL_STATE(190)] = 5151,
  [SMALL_STATE(191)] = 5161,
  [SMALL_STATE(192)] = 5167,
  [SMALL_STATE(193)] = 5177,
  [SMALL_STATE(194)] = 5187,
  [SMALL_STATE(195)] = 5193,
  [SMALL_STATE(196)] = 5199,
  [SMALL_STATE(197)] = 5204,
  [SMALL_STATE(198)] = 5209,
  [SMALL_STATE(199)] = 5216,
  [SMALL_STATE(200)] = 5223,
  [SMALL_STATE(201)] = 5228,
  [SMALL_STATE(202)] = 5235,
  [SMALL_STATE(203)] = 5242,
  [SMALL_STATE(204)] = 5249,
  [SMALL_STATE(205)] = 5256,
  [SMALL_STATE(206)] = 5261,
  [SMALL_STATE(207)] = 5268,
  [SMALL_STATE(208)] = 5275,
  [SMALL_STATE(209)] = 5282,
  [SMALL_STATE(210)] = 5287,
  [SMALL_STATE(211)] = 5292,
  [SMALL_STATE(212)] = 5297,
  [SMALL_STATE(213)] = 5304,
  [SMALL_STATE(214)] = 5309,
  [SMALL_STATE(215)] = 5314,
  [SMALL_STATE(216)] = 5318,
  [SMALL_STATE(217)] = 5322,
  [SMALL_STATE(218)] = 5326,
  [SMALL_STATE(219)] = 5330,
  [SMALL_STATE(220)] = 5334,
  [SMALL_STATE(221)] = 5338,
  [SMALL_STATE(222)] = 5342,
  [SMALL_STATE(223)] = 5346,
  [SMALL_STATE(224)] = 5350,
  [SMALL_STATE(225)] = 5354,
  [SMALL_STATE(226)] = 5358,
  [SMALL_STATE(227)] = 5362,
  [SMALL_STATE(228)] = 5366,
  [SMALL_STATE(229)] = 5370,
  [SMALL_STATE(230)] = 5374,
  [SMALL_STATE(231)] = 5378,
  [SMALL_STATE(232)] = 5382,
  [SMALL_STATE(233)] = 5386,
  [SMALL_STATE(234)] = 5390,
  [SMALL_STATE(235)] = 5394,
  [SMALL_STATE(236)] = 5398,
  [SMALL_STATE(237)] = 5402,
  [SMALL_STATE(238)] = 5406,
  [SMALL_STATE(239)] = 5410,
  [SMALL_STATE(240)] = 5414,
  [SMALL_STATE(241)] = 5418,
  [SMALL_STATE(242)] = 5422,
  [SMALL_STATE(243)] = 5426,
  [SMALL_STATE(244)] = 5430,
  [SMALL_STATE(245)] = 5434,
  [SMALL_STATE(246)] = 5438,
  [SMALL_STATE(247)] = 5442,
  [SMALL_STATE(248)] = 5446,
  [SMALL_STATE(249)] = 5450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(200),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(132),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(141),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(169),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(170),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(152),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(229),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_members_repeat1, 2), SHIFT_REPEAT(172),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_members, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_name, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_literal, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 6, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 5, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_type, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_singleton_type, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_type, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaceable_type, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_member, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 8),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 7),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_type, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_type, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_type, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(216),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(247),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(166),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(155),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(130),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_types, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_types_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_types_repeat1, 2), SHIFT_REPEAT(113),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_types, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_method_name, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_member, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_member, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_member, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prepend_member, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_name, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_function, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singleton_method, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_member, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_member, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_member, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_declaration, 3, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3, .production_id = 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, .production_id = 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_repeat1, 4, .production_id = 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_name, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_repeat1, 2), SHIFT_REPEAT(182),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_parameter, 3, .production_id = 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_name, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_keyword_parameter, 4, .production_id = 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_splat_parameter, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_parameter, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_parameter, 2),
  [450] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_type, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
