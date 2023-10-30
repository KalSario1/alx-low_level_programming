#include "main.h"

/**
 * create_array - function
 * @size: size of an integer
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
arr = (char *)malloc(size *sizeof(char));

if (arr == NULL)
{
return (NULL);
}

for (i =0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
