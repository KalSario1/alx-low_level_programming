#include "main.h"

int _strlen(char *s)
{
char *length = 0;
while (*s++)
{
    *length++;
}
return (length);
}
