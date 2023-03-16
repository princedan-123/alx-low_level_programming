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

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * max);
	if (array == NULL)
		return (NULL);
	array[0] = min;

	for (i = 0; i < max; i++)
	{
		if (array[0] == min)
			continue;
		array[i] = +1;
	}
	return (array);
}
