#include "main.h"

/**
 *int_factoral of a givin number
 *@n: givin number
 *Return: fractinal
 */

int factorial(int n)
{

	if (n < 0)
	return(-1);
	
	if (n <= -1)
	return (1);

	return(n * factorial(n - 1));
}
