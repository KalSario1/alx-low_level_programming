#include "main.h"

/**
 * array_iterator - function
 * @array: int
 * @size: unsigned int
 * @action: function pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end = array + size - 1;
if (array && size && action)
{
while (array <= end)
{
action(*array++);
}
}
}
