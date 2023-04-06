#include "main.h"
/**
 * int factorial - a function that returns the factorial of a given number
 * @n: int number
 * Return: 1 or 0
*/

int factorial(int n)
{
if (n < 0)
{
return (0);
}
else
{
return (n * factorial(n-1));
}
}
