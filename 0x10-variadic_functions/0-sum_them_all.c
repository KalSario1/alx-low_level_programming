#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: the numbers of arguments that are in the parameters
 * @va_list: lists of the arguments
 * @va_start: start of counting the arguments
 * @va_end: ends of arguments
 * @i: the numbers increase
 * @sum:: Sum of I till 0
 * Return: 0 or sum
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
    return (0);

va_list args;
int sum = 0;
unsigned int i;

va_start(args,n);
for (i = 0; i < n; i++)
    sum += va_arg(args,int);

va_end(args);

return (sum);
}
