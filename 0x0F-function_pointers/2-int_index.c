#include "main.h"

/**
 * int_index - function
 * @array: int
 * @size: int
 * @cmp: function pointer
 * Return: int
*/


int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && size && cmp)
{
while (i < size)
{
if(cmp(array[i]))
{
return (i);
}
i++;
}
}
return (-1);
}
