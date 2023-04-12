#include "main.h"

/**
 * get_bit - gets the bit at a particular index
 * @n: the number whose bit is required
 * @index: the position of the bit
 * Return: the value at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (sizeof(unsigned long int) * 8 < index)
		return (-1);

	result = n & (1 << index);

	if (result)
		index = 1;
	else
		index = 0;
	return (index);
}
