#include "main.h"

/**
 * get_endianness -  checks endianness
 * Return: 0 for big endian or 1 for little endian
 */

int get_endianness(void)
{
	int check = 1;

	int result;

	result = check & (1 << 24);
	if (result)
		return (1);
	return (0);
}
