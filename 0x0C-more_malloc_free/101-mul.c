#include <stdio.h>
/**
 * print_number - prints a number with putchar
 * @n: parameter
 */
void print_number(long n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + '0');
}

#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s:the pointer to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int c = 0;

	unsigned int ni = 0;

	int min = 1;

	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
			break;
		c++;
	}
	ni *= min;
	return (ni);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplis two integers and prints the results
 * @argc: the number of integers to be added
 * @argv: a poiter to the integers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	long num1, num2, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if ((*argv[1] < '0') || (*argv[1] > '9'))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if ((*argv[2] < '0') || (*argv[2] > '9'))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;
	print_number(result);
	_putchar('\n');
	return (0);
}
