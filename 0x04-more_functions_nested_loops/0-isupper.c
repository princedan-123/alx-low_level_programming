#include "main.h"
/**
 * _isupper -  function that checkd case
 * @c: function parameter
 * Return: Returns 1 if c is uppercase else returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
