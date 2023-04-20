#include "main.h"

/**
 *flip_bits - compares the bits of each digits
 * @n: the first digit
 * @m: the second digit
 * Return: the number of times both bits are different
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	unsigned long int result = 0;

	unsigned long int check = 0;

	result = n ^ m;

	while (result)
	{
		check = result & 1UL;
		if (check != 0)
			count++;
		result >>= 1UL;
	}
	return (count);
}
