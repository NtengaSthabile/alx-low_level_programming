#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print numberz
 * Return: Always 0 (Success)
 */

int main(void)

{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (low = 'a'; low <= 'f'; low++)
	puthchar(low);
	putchar('\n');

	return (0);
}
