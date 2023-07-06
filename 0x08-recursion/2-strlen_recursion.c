#include "main.h"

/**
 *  _int_strlen_recursion a funtion  that return a lenght of string
 * @s: The lenght of string
 * Return : lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	s++;
	int_strlen_recursion(s);
}
