#include "search_algos.h"

/**
 * linear_search - uses linear search algorithm to perform search operation
 *
 * @array: the array to be searched
 *
 * @size: the size of the array
 *
 * @value:  the value to be searched for
 *
 * Return: the index where the first value is found or -1 if unsuccessful
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL || size < 1)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
