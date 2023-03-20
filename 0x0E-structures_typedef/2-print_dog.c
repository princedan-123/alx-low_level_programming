#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * @d: a pointer to the struct dog data type
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)");
	if (d->age == -1.0)
		printf("(nil)");
	if (d->owner == NULL)
		printf("(nil)");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
	
