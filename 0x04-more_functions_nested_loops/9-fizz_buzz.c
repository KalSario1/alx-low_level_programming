#include <stdio.h>



void fizzBuzz(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
}


int main (void)
{
fizzBuzz(100);
}