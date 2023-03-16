#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates memory for an array
 * @min: minium value of the array element
 * @max: maximum value of the array element
 * Return: NULL if it fails or a pointer if successful
 */

int *array_range(int min, int max)
{
	int i;

	int *array;

	int size = max - min + 1;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}
