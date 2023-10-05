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

printf("Size of a char: %zu byte(s)\n", sizeof(interger));
printf("Size of an int: %zu byte(s)\n", sizeof(intergermore));
printf("Size of a long int: %zu byte(s)\n", sizeof(floattype));
printf("Size of a float: %zu byte(s)\n", sizeof(str));


return (0);
}
