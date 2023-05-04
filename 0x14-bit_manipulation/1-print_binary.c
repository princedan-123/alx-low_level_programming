#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number who's binary form is to be printed
 * Return: nothing is returned
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned int) * 8 - 1;

	unsigned long int check = 1;

	int print_zero = 0;

	if (n == 0)
		_putchar ('0');
	while (size >= 0)
	{
		if (n & (check << size))
		{
			_putchar('1');
			print_zero = 1;
		}
		else if (print_zero == 1)
			_putchar('0');
		size--;
	}
}
