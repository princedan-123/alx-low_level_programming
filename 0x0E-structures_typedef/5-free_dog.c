#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory
 * @d: the struct to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
