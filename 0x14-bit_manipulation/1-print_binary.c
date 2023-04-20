#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary form of a number
 * @n: the function parameter
 * Return: nothing
 *
 */

void print_binary(unsigned long int n)
{
	int index = 63;

	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (index >= 0)
	{
		if (n & (1UL << index))
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		index--;
	}
}
