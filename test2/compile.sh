#!/bin/bash
# first compile the helper.c file to get the object file helper.o (use -c flag to prevent linker stage)
gcc -Wall -O -c helper.c -o helper.o
# similarly compile the main.c file to get the object file main.c
gcc -Wall -O -c main.c -o main.o
# then directly link the generated object files to get the executable
gcc -o main main.o helper.o
