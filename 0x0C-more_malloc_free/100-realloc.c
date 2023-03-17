#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: a pointer to the old memory
 * @old_size: intial size of the old memory
 * @new_size: new size of the old memory
 * Return: Null on failure or a pointer on success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	ptr = malloc(old_size);

	if (new_size > old_size)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
