#include "search_algos.h"

/**
 * print_array - Prints the element in an array.
 *
 * @array: A pointer to the array to be printed.
 *
 * @left: The starting index of the array.
 *
 * @right: The end index of the array.
 *
 * Return: Nothing is returned.
 *
 */

void print_array(int *array, int left, int right)
{
	int i = left;

	printf("Searching in array:");
	while (i <= right)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(",");
		i++;
	}
	printf("\n");
}

/**
 * binary_search - Implementation of binary search algorithm.
 *
 * @array: The array to search in.
 *
 * @size: The size of the array.
 *
 * @value: The value to be searched for within the array
 *
 * Return: The index of the searched value or -1 if search is unsuccessful
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	int middle = 0;

	if (array == NULL || size < 1)
		return (-1);

	while (left <= right)
	{
		middle = left + ((right - left) / 2);
		print_array(array, left, right);
		if (array[middle] == value)
			return (middle);
		if (value > array[middle])
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
