#include "main.h"

/**
 * clear_bit - sets a bit at an index to zero
 * @n: the number who's bit is to be cleared
 * @index: the position of the bit
 * Return: 1 if successful and -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bounds = sizeof(unsigned long int) * 8 - 1;

	int check;

	if (index > bounds)/*check if the index is out of bounds*/
		return (-1);
	check = ~(1UL << index);
	*n &= check;
	return (1);
}
