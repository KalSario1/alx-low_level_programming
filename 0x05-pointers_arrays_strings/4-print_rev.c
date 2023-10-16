#include "main.h"

/**
 * print_rev - function
 * @s: char
 * Return: Void
*/


void print_rev(char *s)
{
int i;
int len;
while (s[len] != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);

}
_putchar('\n');
}
