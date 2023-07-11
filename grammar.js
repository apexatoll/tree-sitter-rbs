module.exports = grammar({
  name: "rbs",

  rules: {
    program: $ => repeat(
      $.declaration
    ),

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
      // $.alias_name,
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

    _global: $ => /\$[a-zA-Z]\w+/,

    _constant: $ => /[A-Z]\w*/,

    _interface: $ => /_[A-Z]\w*/,

    _scope: $ => token("::"),

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
      "untyped"
    )
  }
})
