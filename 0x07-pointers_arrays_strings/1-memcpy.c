#include "main.h"
/***/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int r = 0;
    int i = n;
    for (; n > 0; r++)
    {
        src[i] = dest[r];
        n--;
    }
    
    return(dest);
}
