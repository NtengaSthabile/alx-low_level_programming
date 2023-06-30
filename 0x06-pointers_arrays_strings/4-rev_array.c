#include "main.h"

/**
 * _reverse_array-reverse array of integers
 * @:array
 * @:number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1;index >= n / 2; index --)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
