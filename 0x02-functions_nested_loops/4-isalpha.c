#include "main.h"
/**
 * _isalpha - checks if the parameter is a letter
 * @c: it is the parameter of the function
 * Return: it will return 1 for alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	return (1);
	return (0);
}
