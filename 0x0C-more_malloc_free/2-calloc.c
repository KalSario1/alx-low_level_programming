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
memset(ptr, 0, nmemb * size);
return (ptr);
}
