#!/bin/bash
gcc -Wall -O -c helper.c -o helper.o
gcc -Wall -O -c main.c -o main.o
gcc -o main main.o helper.o
