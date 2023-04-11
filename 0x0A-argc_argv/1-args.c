#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it.
 * @argc: number of command lines
 * @argv: an array
 * Return: 0
*/

int main(int argc, char *argv[])
{
int i;
for (i=0; i < argc; i++)
{
printf("%d\n", argv[i]);
}
return (0);
}
