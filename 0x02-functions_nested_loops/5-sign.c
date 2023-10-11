#include "main.h"

/**
 * _print_sign- check if words that are undercase
 * @n: the charcter checker
 * Return: 1 if c is lowercase, 0 if otherwise
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar ('-');

}
return (-1);
}
