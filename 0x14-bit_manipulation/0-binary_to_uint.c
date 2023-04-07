#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts to decimal
 * @b: a pointer to a string literal
 * Return: 0, or the converted string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0;

	unsigned int i;

	unsigned int num = 0;

	unsigned int x;

	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)/*check for non-digit characters*/
	{
		if ((b[i] > 49) || (b[i] < 48))
			return (0);
		length++;
	}
	x = length - 1;
	for (i = 0; b[i] != '\0'; i++, x--)
	{
		num = b[i] - '0';
		result += num * (1 << x);
	}
	return (result);
}
