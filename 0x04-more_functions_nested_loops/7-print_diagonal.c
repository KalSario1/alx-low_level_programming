#include "main.h"

/**
 * print_diagonal - function that return underscore
 * @n: int checker
 * Return: True or False
*/


void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('\\');
while (n--)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
