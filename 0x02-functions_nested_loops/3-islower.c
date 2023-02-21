#include "main.h"
/**
 * _islower - checks for alphabet case
 * @c: the parameter to checked
 * Return: 1 for lower case, 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 127)
	return (1);

	return (0);
}
