#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This program will assign a random number to the variable n each time it is executed.
 * Return: is positive or negative or zero
*/


/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    if (n > 0)
    {
        printf("%d\n is positive", n);
    }
    else if (n == 0)
    {
        printf("%d\n is zero", n);
    }
    else if (n < 0)
    {
        printf(" %d\n is negative", n);
    }

	return (0);
}
