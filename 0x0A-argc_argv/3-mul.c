#include "main.h"

int _atoi(char *str)
{
int result = 0;
int sign = 1;
if (str[0] == '-')
{
sign = -1;
str++;
}
else if (str[0] == '+')
{
str++;
}
for (; *str != '\0'; str++)
{
if (*str >= '0' && *str <= '9')
{
result = result * 10 + (*str - '0');
}
else
{
break;
}
}
return result * sign;
}

int main (int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
}
int num1 = _atoi(argv[1]);
int num2 = _atoi(argv[2]);

int result = num1 * num2;
printf("%d\n", result);
return (0);
}
