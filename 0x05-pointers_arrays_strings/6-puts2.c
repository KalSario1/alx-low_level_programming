#include "main.h"

/**
 * puts2 - function
 * @str: string
 * Return: Void
*/

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
