# coal

C Oriented AOC Loader

minimal orchestration tool for advent of code solutions in c.
automatically fetches inputs, compiles, and runs your daily solutions.

```
usage: coal <command> [day] [options]

commands:
  setup <day>         create source file and fetch input
  run <day>           compile and run with real input
  compile <day>       compile only
  test <day>          run with test input (inputs/dayXX_test.txt)
  fetch <day>         fetch input only
  submit <day> <part> <answer>
                      submit answer for part 1 or 2
  clean [day]         remove binary (all if no day given)
  status              show progress
  help                show this message
```
