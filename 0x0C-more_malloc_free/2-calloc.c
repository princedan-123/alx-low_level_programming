#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: number of elements in the array
 * @size: the size of the array
 * Return: NULL if it fails or a pointer if successful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if ((size == 0) || (nmemb == 0))
		return (NULL);

	memory = malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		memory[i] = 0;
	return (memory);
}
