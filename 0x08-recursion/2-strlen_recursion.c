#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: Length of string
 * Return: 1
*/


int _strlen_recursion(char *s)
{
if (*s)
{
_strlen_recursion(s + 1);
__putchar(strlen(*s));
}
}
