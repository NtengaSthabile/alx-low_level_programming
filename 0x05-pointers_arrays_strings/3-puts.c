#include"main.h"

/**
 * _Puts - Prints a String
 * @str: The string to print
 * Return: void
 */

void _Puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str ++);
	}
	_putchar('\n');
}
