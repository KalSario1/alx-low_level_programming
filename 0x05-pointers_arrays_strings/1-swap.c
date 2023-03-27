#include "main.h"
/**
* swap_int: function that swap between
* @a: first integer to be swapped
* @b: second integer to be swapped
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
