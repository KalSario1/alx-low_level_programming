#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function
 * @min: min value
 * @max: max value
 * Return: int
*/

int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
{
return (NULL);
}
for (i = 0; min <= max; min++, i++)
{
arr[i] = min;
}
return (arr);
}
