module.exports = grammar({
  name: "rbs",

  rules: {
    program: $ => repeat(
      $.declaration
    ),

    _alias: $ => /[a-z]\w*/,

    _constant: $ => /[A-Z]\w*/,

    _global: $ => /\$[a-zA-Z]\w+/,

    _interface: $ => /_[A-Z]\w*/,

    _scope: $ => token("::"),

    declaration: $ => choice(
      $.class_declaration,
      $.module_declaration,
      $.interface_declaration,
      $.type_alias_declaration,
      $.constant_declaration,
      $.global_declaration
    ),

    class_declaration: $ => seq(
      "class",
      $.class_name,
      // $.module_type_parameters,
      // < $.class_name $.type_arguments
      // $.members,
      "end"
    ),

    module_declaration: $ => seq(
      "module",
      alias($.class_name, $.module_name),
      // $.module_type_parameters,
      // : $.module_self_types,
      // $.members,
      "end"
    ),

    interface_declaration: $ => seq(
      "interface",
      $.interface_name,
      // $.module_type_parameters,
      // $.interface_members,
      "end"
    ),

    type_alias_declaration: $ => seq(
      "type",
      $.alias_name,
      // $.module_type_parameters,
      "=",
      $.type
    ),

    constant_declaration: $ => seq(
      alias($._constant, $.constant),
      ":",
      $.type
    ),
    
    global_declaration: $ => seq(
      alias($._global, $.global),
      ":",
      $.type
    ),

    alias_name: $ => seq(
      optional($.namespace),
      $._alias
    ),

    class_name: $ => seq(
      optional($.namespace),
      $._constant
    ),

    interface_name: $ => seq(
      optional($.namespace),
      $._interface
    ),

    namespace: $ => choice(
      $._scope,
      seq(optional($.namespace), $._constant, $._scope)
    ),

    type: $ => choice(
      $._builtin_type,
      // $._literal_type,
      // $._operator_type,
      // $._namespaceable_type,
    ),

    _builtin_type: $ => choice(
      // "top",
      // "bot",
      // "self"
      // "instance",
      // "class",
      // "nil",
      // "bool",
      // "void",
      "untyped"
    ),

    // _literal_type: $ => choice(
      // $.string_literal,
      // $.symbol_literal,
      // $.integer_literal,
      // $.true,
      // $.false
    // ),

    // _operator_type: $ => choice(
      // $.union_type,
      // $.intersection_type,
      // $.optional_type
    // ),

    // _namespaceable_type: $ => seq(
      // choice(
        // $.class_name,
        // $.interface_name,
        // $.alias_name
      // ),
      // $.type_arguments
    // ),
  }
})
