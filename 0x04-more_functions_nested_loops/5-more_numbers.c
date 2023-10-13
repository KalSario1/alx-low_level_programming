#include "main.h"

/**
 * more_numbers - function that print 0 to 14 10x
 * Return: True or False
*/


void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            _putchar((j / 10) + '0');  // Print the tens digit
            _putchar((j % 10) + '0');  // Print the ones digit
        }
        _putchar('\n');
    }
}
