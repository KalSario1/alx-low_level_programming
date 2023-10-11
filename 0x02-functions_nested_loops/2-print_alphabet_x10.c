#include "main.h"


/**
 * print_alphabet_x10 - function
 * Return: Alphabet 10x lol
*/


void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char al;
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');
i++;
}
return (0);
}
