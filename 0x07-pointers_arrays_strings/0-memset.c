#include "main.h"

/**
 * _memset_fill  a block memory with a specific value.
 * @n: constant pointer
 * @s: constant byter
 * @b: byte
 * Return: always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
