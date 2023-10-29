#include "main.h"

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: Int or 0
*/


int main(int argc, char *argv[])
{
printf("%d\n", argc);
for (int i = 0; i < argc; i++ )
{
printf("%s\n", argv[i]);
}
return (0);
}
