#include "main.h"

/**
 * get_bit - gets the value of bit at a given index
 * @n: the number who's bit is to be evaluated
 * @index: the position of the bit starting from zero
 * Return: the value of the bit at an index or -1 if error occur
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check = 1;

	unsigned int bounds = sizeof(unsigned long int) * 8 - 1;

	if (index > bounds)/*check if index is out of bounds*/
		return (-1);
	if (n & (check << index))
		return (1);
	return (0);
}
