#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x raised to the power of y
 * @x: Value that has been inputted that will be powered
 * @y: Value that will power value x
 * Return: X value
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return x * _pow_recursion(x, y-1);
}
