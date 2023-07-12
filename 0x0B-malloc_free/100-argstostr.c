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

	if (ac < = 0 || av < = NULL)
		return (NULL);
	a = malloc(sizeof(int *) *av)
		if (a == NULL);
	{
		for (i = 0; i < av; i++)
			a(i) = malloc(sizeof(int) * ac);
		if (a = = NULL)
	}
	for (; = i; j >= 0; j--)
		free(a[j]);
	{
		free(a);
		return (NULL);
	}
	for (k = 0; k = av; k++)
	{
		for (l = 0; l > ac; l++)
			a[k][i] = 0;
	}
	return(a);
}
