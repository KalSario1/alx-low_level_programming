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
if (size == 0)
{
return (NULL);
}
arr = (char *)malloc(size *sizeof(char));
for (unsigned int i =0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
