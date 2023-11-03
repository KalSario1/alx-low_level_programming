#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: unsigned int
 * @size: int
 * Return: Void 
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
{
return (NULL);
}
void *ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return (NULL);
}
unsigned int total_size = nmemb * size;
unsigned char *char_ptr = (unsigned char *)ptr;

unsigned int i;

for (i = 0; i < total_size; i++)
{
char_ptr[i] = 0;
}
return (ptr);
}
