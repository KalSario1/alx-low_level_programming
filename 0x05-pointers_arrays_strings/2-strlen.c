#include "main.h"

/**
 * _strlen - function
 * @s: char checker
 * Return: int
*/


int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return len;
}
