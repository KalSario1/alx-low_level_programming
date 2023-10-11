#include "main.h"

/**
 * print_last_digit - check if words that are undercase
 * @n: the charcter checker
 * Return: 1 if c is lowercase, 0 if otherwise
*/

int print_last_digit(int n)
{
int a;

if (n < 0)
{
n = -n;
}
a = n % 10;

if (a < 0)
{
a = -a;
}
_putchar(a + '0');

return (a);
}
