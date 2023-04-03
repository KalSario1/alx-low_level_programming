#include "main.h"
/***
 * _memset: Function that store a constent byte in a memory
 * @s: The pointer where the memory is stored at
 * @b: The byte to fill with
 * @n: the number of bytes to fill with
*/
char *_memset(char *s, char b, unsigned int n)
{
char* p = s;
while (n-- > 1)
{
    *p++ = b;
}
return (s);

}
