#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: function parameter
 * Return: return 0
 */
void print_to_98(int n)
{
	if ((n == -1) || (n < -1))
	{
		for (n = -1; n <= 98;  n++)
		{
			printf("%d", n);
			if (n != 98)
			printf("%c ", 44);
		}
		putchar('\n');
	}
	else if (n == 0)
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			printf("%c ", 44);
		}
		putchar('\n');
	}
	else if ((n > 0) && (n < 98))
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			printf("%c ", 44);
		}
		putchar('\n');
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			printf("%c ", 44);
		}
		putchar('\n');
	}
}
