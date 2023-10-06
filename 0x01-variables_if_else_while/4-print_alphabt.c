#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n each time it is executed.
 * Return: is positive or negative or zero
*/


int main(void)
{
char al = 'a';
while (al <= 'z')
{
if (al != 'q' && al != "e")
{
putchar(al);
}
al++;
}
return (0);

}
