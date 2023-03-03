#include "main.h"
/**
 * print_sign - prints symbols
 * @n: the parameter in the function
 * Return:1 if it is positive, -1 for negative and 0 for anything else
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}

}
