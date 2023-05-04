#include "main.h"

/**
 * get_endianness - checks the endiannes of a computer
 * Return: 0 if bid endian and 1 if little endian
 */

int get_endianness(void)
{
	int check = 1;

	int len = (sizeof(int) * 8 * 3) / 4;

	if (check & (1 << len))
		return (0);
	return (1);
}
