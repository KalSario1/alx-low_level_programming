#include "main.h"

/**
 * _memset - function
 * @dest: destination pointer
 * @src: source pointer
 * @n: unsigned int
 * Return: Char
*/

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n > 0)
{
*ptr = b;
ptr++;
n--;
}
return (s);
}
