#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - uses jump search algorithm to perform search operation
 *
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the target value
 * Return: the index of the value else - 1
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int i = 0, prev = 0, length = size - 1;
	size_t tmp = 0;

	while (array[i] < value && tmp < size - 1)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		tmp = i;
		prev = i;
		i += step;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, i);
	if (i > length)
	{
		i -= step;
	}
	while (prev <= i)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
