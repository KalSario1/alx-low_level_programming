#include "main.h"
/***
 * _memset - Function that store a constent byte in a memory
 * @s: The pointer where the memory is stored at
 * @b: The byte to fill with
 * @n: the number of bytes to fill with
 * 
 * Return: changed array to new constent byte value
*/
char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;
    for ( ; n > 0; i++)
    {
        s[i] = b;
        n--;
    }
    return(s);
}
