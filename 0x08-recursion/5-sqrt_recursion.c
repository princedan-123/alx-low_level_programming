#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of n
 * @i: the interation number
 * @n: the number to be calculated
 * Return: integers
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
