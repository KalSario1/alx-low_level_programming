#include "main.h"

/**
 * more_numbers - function that print 0 to 14 10x
 * Return: True or False
*/

void more_numbers(void)
{
int i;
while (i < 15)
{
int al;
for (al = 0; al <= 10; al++)
{
_putchar(al);
}
_putchar(i);
}
_putchar('\n');
}
