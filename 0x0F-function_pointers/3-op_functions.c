#include "3-calc.h"
/**
 * op_add - returns the sum of two numbers
 * @a:first number
 * @b:second number
 * Return: the sum;
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: the result of the subtraction is returned
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a:first number
 * @b:second number
 * Return: the result of the multiplication is returned
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: the result of the division operation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of a division operation
 * @a: first number
 * @b: divisor
 * Return: the remainder is returned
 */

int op_mod(int a, int b)
{
	return (a % b);
}
