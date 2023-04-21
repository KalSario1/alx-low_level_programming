#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char c, *s;
va_start(args, format);

while (format && format[i])
{
    switch (format[i])
    {
    case 'c':
    c = va_arg(args, int);
    printf("%c", c);
        break;

    case 'i':
    i = va_arg(args, int);
    printf("%i", i);
        break;
    case 'f':
    f = va_arg(args, double);
    printf("%f", f);
        break;
    case 's':
    s = va_arg(args, char *);
    if (!s)
        printf("(nil)");
    printf("%s", s);    
    break;
    }
    va_end(args);
    printf("\n");
}

}