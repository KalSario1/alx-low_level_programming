#include <stdio.h>

/**
 * Main - Write a C program that prints the size of various types on the computer it is compiled and run on.
 * Return 0: false
*/


int main() {
    int interger;
    double intergermore;
    float floattype;
    char str;

    printf("Integer Size: %zu\n", sizeof(interger));
    printf("Double Size: %zu\n", sizeof(intergermore));
    printf("Float Size: %zu\n", sizeof(floattype));
    printf("Char Size: %zu\n", sizeof(str));


    return 0;
}