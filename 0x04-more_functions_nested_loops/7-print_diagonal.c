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
int spaces;
for (spaces = 0; spaces < n; spaces++)
{
int backslash;
for (backslash = 0; backslash < spaces; backslash++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
