#include "main.h"

/**
 * print_square - function that return underscore
 * @size: int checker
 * Return: True or False
*/


void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');

}
}
}
