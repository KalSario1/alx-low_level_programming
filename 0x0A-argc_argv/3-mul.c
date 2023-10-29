#include "main.h"

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/

int main(int agrc, char *argv[])
{
if (agrc != 3)
{
printf("Error\n");
return (1);
} 
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

int results = num1 * num2;
printf("%d\n", results);
return (0);
}
