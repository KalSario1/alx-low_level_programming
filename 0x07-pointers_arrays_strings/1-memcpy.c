#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *dest_start = dest;
    while (n--)
    {
        *dest++ = *src++;
    }
    return(dest);
}