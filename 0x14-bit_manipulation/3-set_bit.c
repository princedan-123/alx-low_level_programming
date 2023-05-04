#include "main.h"

/**
 * set_bit - sets a bit at a given index
 * @n: the number who's bit is to be set
 * @index: the position of the bit
 * Return: 1 is bit was succesfully set else 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;

	unsigned int size = sizeof(unsigned int) * 8 - 1;

	if (index > size)/*check if index is out of bounds*/
		return (-1);
	*n |= (check << index);
	return (1);
}
