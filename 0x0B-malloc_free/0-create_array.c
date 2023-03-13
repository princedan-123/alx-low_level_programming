#include "main.h"
#include <stdlib.h>
/**
 * create_array - it creates an array of characters
 * @c: the character
 * @size: the size of the array
 * Return: null if size is zero or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size * sizeof(char));

	unsigned int i;

	if (size == 0)
		return (NULL);
	if (s == NULL)

		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
	free(s);

}
