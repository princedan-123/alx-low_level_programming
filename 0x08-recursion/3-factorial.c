#include "main.h"
/**
 * factorial - evaluates the factorial of a parameter
 * @n: the parameter to be evaluated
 * Return: integer values
 */
int factorial(int n)
{
	if ((n == 0) || (n == 1)
		return (1);
	else if (n < 0)
		return (- 1);
	return (n * factorial(n-1));
}
