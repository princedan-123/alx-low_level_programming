#include "main.h"
/**
 * is_prime_number - evaluates in a number is a prime number
 * @n: the number to be evaluated
 * @i: the interation number
 */
int is_prime_number(int n, int i)
{
	if (n < 1)
		return (0);
	if ((n != i) && (n % i == 0))
		return (0);
	return (is_prime_number(n, i + 1));
}
