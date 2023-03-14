#include "main.h"
#include <stdlib.h>
/**
 *  free_grid - frees memory of another function
 *  @grid: the array to be freed
 *  @height: the column of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
