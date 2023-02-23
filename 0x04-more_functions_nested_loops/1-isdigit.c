#include "main.h"
/**
 * _isdigit - it checks for a number
 * @c: the parameter that is checked
 * Return: it returns 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= '0') || (c <= '9'))
		return (1);
	else
		return (0);
}
