#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of n
 * 
 * @n: the number to be calculated
 */
int _sqrt_recursion(int n,)
{
	int i;

	i = 1;
	if (i > n)
		return (-1);
	if (i == n)
		return (i);
	i++;
	return (_sqrt_recursion(n));
}
