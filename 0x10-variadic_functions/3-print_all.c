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

	int count = 0;

	char a = 0;

	char *str;

	int b = 0;

	float f = 0;
	va_list print;

	va_start(print, format);
	
	while(format[count])
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
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);			
			default:
			break;

		}
		count++;
	}
	va_end(print);
	printf("\n");
}
