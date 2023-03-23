#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - A variadic function that prints out strings
 * @separator: A pointer to a string that sepatres the outputed strings
 * @n: The maximum number of strings to be printed
 * Return: Nothing is returned
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list string;

	va_start(string, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n -1)
			printf("%s", separator);
	}
	va_end(string);
	printf("\n");
}
