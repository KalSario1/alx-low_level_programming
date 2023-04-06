#include "main.h"

/**
 * int factorial - a function that returns the factorial of a given number
 * @n: int number
 * Return: Factorial of n
*/

int factorial(int n)
{
if ( n < 0 )
{
return(-1);
}
if ( n == 0 )
{
return (1);
}
return( n * factorial(n - 1));
}
