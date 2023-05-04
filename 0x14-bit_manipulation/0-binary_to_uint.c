#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a string of 0s and 1s to integers
 * @b: a pointer to the string to be converted
 * Return: 0 if unsuccessful and integer(s) if successful
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len, shift;

	unsigned int result = 0;

	i = 0;
	len = _strlen(b);
	shift = len - 1;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] < '0') || (b[i] > '1'))
			return (0);
		result += (b[i] - '0') << shift;
		i++;
		shift--;
	}
	return (result);
}
/**
 * _strlen - evaluates the lenght of string
 * @b: a pointer to the string
 * Return: 0 or integer value
 */
int _strlen(const char *b)
{
	int len = 0;

	if  (b == NULL)
		return (0);
	while (*b != '\0')
	{
		len++;
		b++;
	}
	return (len);
}
