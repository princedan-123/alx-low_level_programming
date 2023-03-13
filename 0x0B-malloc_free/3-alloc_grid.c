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
	int *array[][];

	int i, j, size;

	size = width * height;
	
	if ((width <= 0) || (height < = 0))
		return (NULL);
	array[][] = malloc(size * sizeof(int));

	for (i = 0; i <= width; i++)
	{
		for (j = 0; j <= height; j++)
		{
			array[i][j] = 0;
		}
	}
	
	if (array == NULL)
		return (NULL);
	return (array[][]);
}
