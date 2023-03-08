#include "main.h"
/**
 * _print_rev_recursion - reverses a string
 * @s: the string to be reversed
 * Return: returns nothing
 */
void _print_rev_recursion(char *s)
{
	s = '\0' - 1;
	_putchar(*s);
	--s;
	_print_rev_recursion(*s);
}
