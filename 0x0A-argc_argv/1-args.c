#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of args
 * @argc: argument count
 * @argc: argument vector
 *
 * Return: Always zero
 */
int main (int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", argc - 1);
	return (0);
}
