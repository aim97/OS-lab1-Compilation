## How to compile a C file

    gcc fileName.c

## C flags

they are flags added to the call of the compiler to control it.

-o OutputName : specify the name of the output executable.  
-std=c11 : specify the version of c to use, can have other values  
-Werror : treat warnings as errors  
-Wall : show more details about warnings  
-O : optimize the compilation process (make the process compile faster)  
-c : stop compilation at the assembly stage (create an object file without calling the linker)  
-g : enable duggging the programming

### example

    gcc hello.c -o hello -O -Wall -std=c11

### for more info

check the help page from linux terminal using command

    gcc --help
