#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A variadic function that sums up its optional arguments
 * @n: the maximum number of arguments
 * Return: the sum is returned
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	va_list sum_up;

	int x = 0;

	if (n == 0)
		return  (0);
	va_start(sum_up, n);
	for (i = 0; i < n; i++)
	{
		x += va_arg(sum_up, int);
	}
	va_end(sum_up);
	return(x);
}
