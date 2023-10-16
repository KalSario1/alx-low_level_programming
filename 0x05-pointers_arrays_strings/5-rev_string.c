#include "main.h"

/***
 * rev_string - function
 * @s: string
 * Return: Void
*/

void rev_string(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
int start = 0;
int end = len - 1;
char temp;
while (start > end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}