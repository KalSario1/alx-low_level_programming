#include "main.h"

/**
 * _memcpy - function
 * @dest: destination pointer
 * @src: source pointer
 * @n: unsigned int
 * Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr_dest = dest;
char *ptr_src = src;

for (unsigned int i =0; i < n; i++)
{
ptr_dest[i] = ptr_src[i];
}
return (dest);
}
