#include "main.h"

/**
 * get_endianness -  checks endianness
 * Return: 0 for big endian or 1 for little endian
 */

int get_endianness(void)
{
	int check = 1;

	int result;

	int language = 0; /*note language represents endianness*/

	result = check & (1 & ((3 * sizeof(int)) / 4));
	if (result)
		language = 1;
	else
		language = 0;
	return (language);
}
