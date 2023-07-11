#include "main.h"
#include <stdlib.h>

/**
 * _strdup function returns a pointer to the duplicated string
 * @str: The string that duplicate
 *
 * Return: the string duplicate
 */
char *_strdup(char *str)
{
	int l = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (l < i)
	{
	s[l] = str[l];
	l++;
	}
	s[l] = '\0';
	return (s);
}
