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
	int middle = 0;
	if (size != 0)
	{
		middle = (size - 1) / 2;
	}
	else if (size == 0)
	{
		middle = 0;
	}
	if (array == NULL)
		return (-1);
	printf("Searching in array:");
	print_array(array, size);
	if (array[middle] == value)
	{
		printf("Found value at index: %d", middle);
		return (middle);
	}
	if (middle == 0 && value != array[middle])
	{
		return (-1);
	}
	if (array[middle] < value)
	{
		array = array + middle;
	}
	else if (array[middle] > value)
	{
		size = middle;
	}
	return (binary_search(array, size, value));
}


/**
 * print_array - prints an array
 * @array: the array to be printed
 * @size: size of the array
 * Return: nothing
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;
	printf(" ");
	for (; i < size; i++)
	{
		 i == size - 1 ? printf("%i ", array[i])\
		    : printf("%i, ", array[i]);
	}
	printf("\n");
}
