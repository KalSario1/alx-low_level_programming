#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: integer
 * Return: int
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
double x0 = n;
double x1 = (x0 + n / x0) / 2;
while (x1 < x0)
{
x0 = x1;
x1 = (x0 + n / x0) / 2;
}
return (x0);
}
}
