#include "main.h"
/**
 * _pow_recursion - computes the value of an integer
 * @x: the first parameter
 * @y: the power
 * Return: integers
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x,y--));
}
