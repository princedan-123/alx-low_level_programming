#include "main.h"

/**
 * flip_bits - checks the number of different bits between to numbers
 * @n: first number
 * @m: second number
 * Return: the count of the different numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check;

	int len = sizeof(unsigned long int) * 8;

	unsigned int count = 0;

	check = n ^ m;

	while (len > 0)
	{
		if (check & (1UL << len))
			count++;
		len--;
	}
	return (count);
}
