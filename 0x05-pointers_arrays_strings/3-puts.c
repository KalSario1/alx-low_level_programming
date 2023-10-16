#include "main.h"

/**
 * _puts - function
 * @str: string
 * Return: Void
*/

void _puts(char *str)
{
int i;
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
write(1, "\n", 1);
}
