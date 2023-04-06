#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: Length of string
 * Return: 1
*/


int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
_strlen_recursion(s + 1);
return (1);
}
}
