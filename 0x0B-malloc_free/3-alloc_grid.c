#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates memory to a 2D pointer array
 * @width: the row of the array
 * @height: the column of the array
 * Return: NULL if the function fails
 */
int **alloc_grid(int width, int height)
{
	int **array;

	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	array = malloc(width * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	}
	return (array);
}
