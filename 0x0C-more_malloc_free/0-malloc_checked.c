#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory for integer input
 * @b: the integer which memory is to be allocted for
 * Return: it returns void
 */

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(sizeof(unsigned int) * b);

	if (memory == NULL)
		exit(98);
	return (memory);
}
