/*
TODO: find the minimal linker script that makes this work.

Current problem: puts not found. Likely because I don't understand dynamic linking?
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    puts("hello world");
    return EXIT_SUCCESS;
}