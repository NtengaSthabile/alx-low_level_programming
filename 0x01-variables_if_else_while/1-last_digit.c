#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The last digit is greater than 5,zero and less 6
 *
 *Return: Always 0 
*/
int main(void)
	
{
	int n;		

		srand(time(0));
		n = rand() - RAND_MAX / 2;
	if (n% > 5)
		printf("last digit of %i is greater than 5\n", n);
	if (n% == 0)
		printf("last digit of %i is zero\n", n);
	if (n% < 6)
		printf("last digit of %i is less than 6\n", n)
	return (0);
}
