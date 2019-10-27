/**
 * the definition of HELPER here is used for protection against problem
 * of multiple definition that would occur when a file is included twice
*/

#ifndef HELPER // if HELPER is not defined
#define HELPER // define HELPER

int add(int a, int b);

int sub(int a, int b);

int mul(int a, int b);

int div(int a, int b);

#endif