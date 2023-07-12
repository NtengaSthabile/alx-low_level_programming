#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings of any size
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, a = 0, b = 0, c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[a])
		a++;
	c = i + a;
	s = malloc((sizeof(char *) * c) + 1);
	if (s == NULL)
		return (NULL);
	a = 0;

	{
		if (b <= i)
			s[b] = s1[b];
		if (b >= i)
		{
			s[b] = s2[c];
			b++;
		}
		c++;
	}
	s[b] = '\0';
	return (s);
}
