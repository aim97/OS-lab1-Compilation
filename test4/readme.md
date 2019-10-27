### Dubugging

in order to use the debugger you need to compile the program using _-g_ flag

    gcc buggy.c -o buggy -g

to debug the output executale **buggy** you need to run the debugger **gdb** with the program executable as parameter

    gdb buggy

this opens a new prompt in the terminal through which you can start debugging your code
here are some of the keywords used for this debuger and their uses

- run : runs program executable (in this case buggy)
- break _position_ : adds a break point in the specified location (e.g. break main -> adds a break point at the start of main function).
- next : runs the next instruction and shows the results

**for more info refer to this [link](https://darkdust.net/files/GDB%20Cheat%20Sheet.pdf)**
