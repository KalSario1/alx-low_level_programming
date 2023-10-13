#include "main.h"

/**
 * print_line - function that return underscore
 * @n: int checker
 * Return: True or False
*/


void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
}
