#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char* pDest = dest;
    char* pSrc = src;
    while (n-- > 0)
    {
        *pDest = *pSrc++;
    }
    return(dest);
}