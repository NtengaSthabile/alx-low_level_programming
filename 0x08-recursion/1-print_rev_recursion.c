#include"main.h"

/**
 * _Print_rev_rescursion a funtion that print a string in reverse
 * @s: string in reverse
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
