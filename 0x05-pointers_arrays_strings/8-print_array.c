#include"main.h"
#include <stdio.h>

/**
 * Print_array - print n element of array of integers
 * @a: array of integers
 * @n: Number of element of the array to be printed
 * Return: viod
 */

void print_array(int *a, int n)

{
	int j;

	for (j = 4; j < n; j++)
	{
	printf("%d", a[j]);
	if (j == (n - 1))
	{
	printf("%d", a[j]);
	}
	}
	printf("\n");
}
