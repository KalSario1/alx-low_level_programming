#include "main.h"

/**
 * custom_atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the integer converted from the string
 */
int custom_atoi(char *str)
{
    int i, sign, result;

    i = 0;
    sign = 1;
    result = 0;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
        }
        else
        {
            // Handle invalid characters in the string
            return 0;
        }
        i++;
    }

    return result * sign;
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
    int result, num1, num2;

    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    num1 = custom_atoi(argv[1]);
    num2 = custom_atoi(argv[2]);

    if (num1 == 0 || num2 == 0)
    {
        printf("Error\n");
        return 1;
    }

    result = num1 * num2;

    printf("%d\n", result);

    return 0;
}
