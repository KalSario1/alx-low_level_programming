#include "main.h"
/***
 * _memcpy - function that copies the memory value from src to dest
 * @src: where the memory is copied
 * @dest: where memory is stored
 * @n : the amount of numbers
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int r = 0;
    int i = n;
    for (; r < i; r++)
    {
        dest[r] = src[r];
        n--;
    }
    
    return(dest);
}
