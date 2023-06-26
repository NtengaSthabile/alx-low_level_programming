#include"main.h"
/**
 * Swap_int -swaps the value of two inergers.
 * @a: The first swaped.
 * @b: The second swaped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the function that swap values of two integers. */
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
