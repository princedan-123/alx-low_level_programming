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
	size_t prev = 0, i = 0, new_size = 0;
	int ptr_array = NULL;

	if (array == NULL || size < 1)
		return (-1);
	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev = i;
		if (i == 0)
			i += 2;
		else
			i *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
	ptr_array = &array[prev];
	new_size = i - 1;
	return (binary_search(ptr_array, new_size, value));
}

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
