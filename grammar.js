module.exports = grammar({
  name: "rbs",

  rules: {
    program: $ => optional(/\w+/)
  }
})
