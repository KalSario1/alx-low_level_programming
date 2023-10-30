#include "main.h"
/**
 * _strdup - function
 * @str: string
 * Return: NULL or CHAR
 */

char *_strdup(char *str)
{
	char *new_str;
	size_t i;
	size_t length;
	if (str == NULL)
		return NULL;
	while (str[length] != '\0') 
			length++;
		new_str = (char *)malloc(length + 1);
		if (new_str != NULL) {
			for (i = 0; i < length; i++) {
				new_str[i] = str[i];
			}
			new_str[i] = str[i];
		}
	return new_str;
}
