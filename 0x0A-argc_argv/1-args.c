#include "main.h"

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: Int or 0
*/


int main(int argc, char *argv[])
{

if (argc > 1)
{
printf("%d\n", argc - 1);
}
else
{
printf("0\n");
}
return (0);
}
