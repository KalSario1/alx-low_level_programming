#include "function_pointers.h"

/**
 * print_name - function
 * @name: char
 * @f: function pointer
 * Return: Void 
*/


void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
