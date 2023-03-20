#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Returns the lenght of a string
 * @s: the string
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}

/**
 * *_strcpy - copies a string
 * @dest:destination value
 * @src: source value
 * Return: Return the pointer to desc
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}



/**
 * new_dog - creates a struct for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer is returned
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(_strlen(name) + 1);
	if (new_dog == NULL)
	{
		free(new_dog);
		return (new_dog);
	}
	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
