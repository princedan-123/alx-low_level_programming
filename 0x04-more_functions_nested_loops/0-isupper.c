#include "main.h"
/**
 * _isupper - checks for case
 * @c: the parameter to be checked
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
