#include"main.h"
/**
 * swap the value of two integers.
 * @a: The first swaped
 * @b: The second swaped
 * Return:0
 */
void swap_int(int *a, int *b)
/* The function that swap values of two integers.*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
