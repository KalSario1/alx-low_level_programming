#include "main.h"

void _print_rev_recursion(char *s)
{
    if (*s != '\n')
    {
        _print_rev_recursion(*s);
    }
}
