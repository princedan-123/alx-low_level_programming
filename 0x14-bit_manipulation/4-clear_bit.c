#include "main.h"

/**
 * clear_bit - clears a bit by setting it to 0
 * @n: a pointer to the data to be cleared
 * @index: the index or position of the bit to be cleared
 * Return:1 if successful, else -1 is returned
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 <= index)/*check if index is out of bounds*/
		return (-1);
	if ((*n & (1 << index)) != 0)
	{
		*n ^= (1 << index);
	}
	else
		return (1);
	return (1);
}
