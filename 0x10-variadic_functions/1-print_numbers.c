#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - A variadic function that prints out integers
 * @separator: A string that seperates the integers
 * @n: The maximum number of integers to be printed
 * Return: Nothing is returned
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int x = 0;

	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(print, int);

		printf("%d", x);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(print);
	printf("\n");
}
