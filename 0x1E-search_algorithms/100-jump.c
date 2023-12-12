#include "search_algos.h"
#include <math.h>

/**
 * jump_search - An implementation of jump search algorithm
 *
 * @array: An array to be searched in
 *
 * @size: The size of the array
 *
 * @value: The value to be searched for
 *
 * Return: The index of the value if search is successful else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, i = 0;

	if (array == NULL || size < 1)
		return (-1);

	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev = i;
		i += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
	while (prev <= i)
	{
		if (i >= size)
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
