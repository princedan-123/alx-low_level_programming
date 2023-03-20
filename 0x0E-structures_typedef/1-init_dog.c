#include "dog.h"
/**
 * init_dog - a function that initializes a struct
 * @d: the variable to be initialized
 * @name:the name
 * @owner: the owner
 * @age: the age
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;

	(*d).age = age;

	(*d).owner = owner;
}
