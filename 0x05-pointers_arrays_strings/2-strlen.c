#include "main.h"

/**
 * _strlen - function
 * @s: char checker
 * Return: int
*/


int _strlen(char *s)
{
int len;
while (s[len] != '\0')
{
len++;
}
return len;
}
