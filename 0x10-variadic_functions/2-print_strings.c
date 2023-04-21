#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the string to be printed between numbers
 * Return: None
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);

for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n-1 && separator != NULL)
{
printf("%s", separator);
}
printf("\n");
va_end(args);
}
}
