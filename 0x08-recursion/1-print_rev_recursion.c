#include "main.h"
/**
 * _print_rev_recursion - reverses a string
 * @s: the string to be reversed
 * Return: returns nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	--s
	if (s - 1 != s)
		_putchar(*s);
	_print_rev_recursion(s);
}
