#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - uses exponential search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int i = 1, length = size - 1, prev = 0, result;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (array[i] < value && i < length)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		prev = i;
		i *= 2;
	}
	if (i > length)
		i = length;
	printf("Value found between indexes [%d] and [%d]\n", prev, i);
	result = binary_search_algo(array, prev, i, value);
	return (result);
}

/**
 * binary_search_algo -  uses binary search to  narrow the search
 *
 * @array: the to be searched
 * @low: the lowest index in the array
 * @high: the highest index in the array
 * @value: the value to be searched
 * Return: the index of the searched value else -1
 */

int binary_search_algo(int *array, int low, int high, int value)
{
	int m = 0; /* middle of the array */

	while (low <= high)
	{
		m = low + ((high - low) / 2);
		printf("Searching in array:");
		print_array(array, low, high);
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			high = m - 1;
		else if (array[m] < value)
			low = m + 1;
	}
	return (-1);
}

/**
 * print_array - prints elements of an array
 * @array: the array to be printed
 * @left_index: the starting point of the array
 * @right_index: the end index of the array
 * Return: nothing
 */

void print_array(int *array, int left_index, int right_index)
{
	int i = left_index;

	printf(" ");
	for (; i <= right_index; i++)
	{
		printf("%d", array[i]);
		if (i < right_index)
			printf(", ");
	}
	printf("\n");
}
