#include  <stdio.h>
#include "search_algos.h"

/**
 * linear_search - uses linear search algorithim to search for data
 * @array: a pointer to the first element of an array to be searched
 * @size : the size of the array
 * @value: the value to be searched
 *
 * Return: the index of the data is returned
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0, element = 0, check = value;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		element = array[i];
		printf("Value checked array[%li] = [%li]\n", i, element);
		if (element == check)
			return (i);
	}
	return (-1);
}
