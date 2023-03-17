#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - copies the value of an address
 * @dest:destination
 * @src:source
 * @n: size of the value to be copied
 * Return: return the pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _realloc - reallocates memory
 * @ptr: a pointer to the old memory
 * @old_size: intial size of the old memory
 * @new_size: new size of the old memory
 * Return: Null on failure or a pointer on success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_memory;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	new_memory = malloc(new_size);
	if (new_size > old_size)
	{
		_memcpy(new_memory, ptr, old_size);
	}
	free(ptr);
	return (new_memory);
}
