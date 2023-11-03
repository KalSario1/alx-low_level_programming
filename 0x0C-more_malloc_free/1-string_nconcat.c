#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: Char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, result_len, i,j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (n >= len2)
n = len2;
result_len = len1 + n;
result =(char *)malloc(result_len +1);
if (result == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (j = 0; j < n; j++)
{
result[i++] = s2[j];
}
result[i] = '\0';
return (result);
}
