#include "main.h"

/**
 * swap_int - function
 * @a: first value
 * @b: 2nd value
 * Return: Void 
*/

void swap_int(int *a, int *b)
{
int temp;
int *p = &a;
temp = a;
a = b;
b = temp;
}
