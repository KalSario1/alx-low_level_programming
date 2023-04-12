#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * *create_array: Write a function that creates an array of chars, and initializes it with a specific char.
 * @size: size of the char
 * @c : characters
 * Return: Null or c
*/

char *create_array(unsigned int size, char c)
{
char *array = NULL;
unsigned int i;

if (size == 0)
{
return (NULL);
}
if (size != 0)
{
array = (char *)malloc(size * sizeof(char));
if (array != NULL)
{
for (i = 0; i < size; i++)
array[i] = c;
}
}
return (array);
}