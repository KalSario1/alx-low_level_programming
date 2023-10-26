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
return sqrt_recursive_helper(n, 1, n-1);
}
}

int sqrt_recursive_helper(int n, int start, int end)
{
if (start > end)
{
return (-1);
}
int mid = (start + end) / 2;
int square = mid * mid;

if (square == n)
{
return (mid);
}
else if (square > n)
{
return sqrt_recursive_helper(n, start, mid - 1);
}
else
{
return sqrt_recursive_helper(n, mid + 1, end);
}


}
