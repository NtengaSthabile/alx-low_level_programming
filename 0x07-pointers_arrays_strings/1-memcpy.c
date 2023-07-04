#include "main.h"

/**
 * _ memcpy - function that copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 *@n: number of bytes
 *Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
