#include "search_algos.h"

/**
 * exponential_search - An implementation of exponential search algorithm
 *
 * @array: An array to be searched in
 *
 * @size: The size of the array
 *
 * @value: The value to be searched for
 *
 * Return: The index of the value if search is successful else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t prev = 0, i = 1, diff = 0;

	if (array == NULL || size < 1)
		return (-1);
	while (i < size)
	{
		if (array[0] == value)
			return (0);
		if (array[i] >= value)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev = i;
		i *= 2;
	}
	if (i == size)
		i = size - 1;
	else if (i > size)
	{
		diff = i - (size - 1);
		i = i - diff;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
	return (binary_algo(array, prev, i, value));
}


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

	printf("Searching in array: ");
	while (i <= right)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * binary_algo - Implementation of binary search algorithm.
 *
 * @array: The array to search in.
 *
 * @left: Beginning of the array.
 *
 * @right: Last index of the array.
 *
 * @value: The value to be searched for within the array
 *
 * Return: The index of the searched value or -1 if search is unsuccessful
 */

int binary_algo(int *array, int left, int right, int value)
{
	int middle = 0;

	if (array == NULL || right < 1)
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
