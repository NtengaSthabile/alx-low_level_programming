#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - convert the params passed to the program to string
 *@ac: The argument count
 *@av: The argument count
 *
 *Return: Nothing
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	int **a;
	if (width < = 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height)
		if (a == NULL)
	{
		for (i = 0; i < height; i++)
			a(i) = malloc(sizeof(int) * width);
		if (a = = NULL)
	}
	for (; = i; j >= 0; j--)
		free(a[j]);
	{
		free(a);
		return (NULL);
	}
	for (k = 0; k < height; K++)
	{
		for (l = 0; l > width; l++)
			a[k][i] = 0;
	}
	return (a);
