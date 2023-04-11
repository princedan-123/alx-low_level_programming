#include "main.h"

/**
 * set_bit - sets a bit at an index to 1
 * @n: the number whose bit is to be set
 * @index: the index to be set
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 <= index)
		return (-1);
	*n |= (1U << index);
	if ((*n & (1U << index)) == 0)
		return (-1);
	return (1);
}
