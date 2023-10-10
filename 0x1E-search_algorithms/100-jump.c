#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - uses jump search algorithm to perform search operation
 *
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the target value
 * Return: the index of the value else -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_size = sqrt(size), step = jump_size;
	int last = 0; /* last index in each step */
	size_t tmp = 0; /* to hold the value of last */

	while (array[step - 1] <= value)
	{
		tmp = step - 1;
		if (tmp == size - 1)
			return (-1);
		if (array[step - 1] == value)
			return (step - 1);
		step += jump_size;
	}
	last = step - 1;
	while (last > 0)
	{
		printf("Value checked array[%d] = [%d]\n", last, array[last]);
		if (array[last] == value)
			return (last);
		last--;
	}
	return (-1);
}
