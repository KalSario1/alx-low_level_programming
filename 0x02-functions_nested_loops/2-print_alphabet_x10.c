#include "main.h"
void print_alphabet_x10(void)
{
    int i = 0;
    while (i < 10)
    {
        for (char al = 'a'; al <= 'z'; al++)
        {
            _putchar(al);
        }
        _putchar('\n');
        i++;    }
    return (0);
}