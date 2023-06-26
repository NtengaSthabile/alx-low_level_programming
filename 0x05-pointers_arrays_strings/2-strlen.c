#include <stdio.h>

/**
 * _ strlen_Return the length of string.
 * @str: The String to get the length of
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
