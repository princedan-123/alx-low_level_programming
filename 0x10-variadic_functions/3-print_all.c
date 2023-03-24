#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - A function that prints its parameter
 * @format: The string that specifies the parameter to print
 * Return: Nothing is returned
 */

void print_all(const char * const format, ...)
{
	int count = 0, b = 0;
	char a, *str;
	float f;
	va_list print;

	va_start(print, format);
	while (format[count])
	{
		switch (format[count])
		{
			case 'c':
			a = va_arg(print, int);
			printf("%c", a);
			break;
			case 'i':
			b = va_arg(print, int);
			printf("%d", b);
			break;
			case 'f':
			f = va_arg(print, double);
			printf("%f", f);
			break;
			case 's':
			str = va_arg(print, char *);
			if (str != NULL)
				printf("%s", str);
			while (str == NULL)
			{
				printf("(nil)");
				break;
			}
			break;
			default:
			count++;
			continue;
		}

		if (format[count + 1])
			printf(", ");
		count++;
	}
	printf("\n");
	va_end(print);
}
