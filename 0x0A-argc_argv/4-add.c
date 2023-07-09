#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of argc positive number
 * @argc: argument count
 * @argv: argument ventor
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int l, sum = 0;
	char *c;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
	c = argv[i];
	for (l = 0; l < strlen(c); l++)
	{
	if (c[l] < 48 || c[l] > 57)
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(c);
	c++;
	}
	printf("0\n");
	}
	else
	{
	printf("\n");
	}
	return (0);
}
