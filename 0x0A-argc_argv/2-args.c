#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @i: loop
 * @argc: command line
 * @argv: array
 * Return: 0
*/

int main (int argc, char *argv[])
{
for (int i= 0; i < argc; i++)
    printf("%s\n", argv[i]);
return (0);
}
