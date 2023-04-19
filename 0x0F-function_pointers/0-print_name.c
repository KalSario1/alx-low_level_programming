#include "function_pointers.h"
#include<stdio.h>

/**
 * print_name - function that prints out name
 * @name: name
 * @f: return pointer
 * Return: nothing
*/


void print_name(char* name, void (*f)(char*))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}

