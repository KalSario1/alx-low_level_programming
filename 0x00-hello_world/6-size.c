#include <stdio.h>

/**
 * Main - Write a C program that prints the size of various types
 * Return: 0
*/


int main(void)
{
int interger;
double intergermore;
float floattype;
char str;

printf("Integer Size: %zu\n", sizeof(interger));
printf("Double Size: %zu\n", sizeof(intergermore));
printf("Float Size: %zu\n", sizeof(floattype));
printf("Char Size: %zu\n", sizeof(str));


return (0);
}
