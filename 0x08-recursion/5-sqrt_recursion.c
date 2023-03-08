#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of n
 * 
 * @n: the number to be calculated
 * @i: the iteration number
 */
int _sqrt_recursion(int n, int i)
{
	int i = 1;
	if (i > n)
		return (-1);
	if (i == n)
		return (i);
	return (_sqrt_recursion(n, i++))
}
