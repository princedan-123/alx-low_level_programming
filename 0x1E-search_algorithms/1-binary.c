#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - uses binary search algorithm to search
 *
 * @array: pointer to the first element of a sorted array
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: -1 if array is null else 1 is returned
 *
 */


int binary_search(int *array, size_t size, int value)
{
	int left_index = 0, right_index = size - 1, middle = 0;

	while (left_index <= right_index)
	{
		printf("Searching in array:");
		print_array(array, left_index, right_index);
		middle = left_index + ((right_index - left_index) / 2);
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			right_index = middle - 1;
		else if (array[middle] < value)
			left_index = middle + 1;
	}
	return (-1);


}


/**
 * print_array - prints an array
 * @array: the array to be printed
 * @left_index: beginning of the array
 * @right_index: end of the array
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
