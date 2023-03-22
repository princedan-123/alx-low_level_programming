#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - iterates over an array to print its elements
 * @array: the pointer to the elements of the array
 * @size: the size of the array
 * @action: a function pointer to the index
 * Return: nothing is returned
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
