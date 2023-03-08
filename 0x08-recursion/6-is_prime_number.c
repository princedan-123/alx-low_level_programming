#include "main.h"
/**
 * is_prime_number - evaluates in a number is a prime number
 * @n: the number to be evaluated
 * @i: the interation number
 * Return: integers
 */
int is_prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
		return (1);
	if ((n != i) && (n % i == 0))
		return (0);
	else
		return (1);
	return (is_prime_number(n, i + 1));
}
