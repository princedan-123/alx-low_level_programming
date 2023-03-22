#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches an array
 * @array: a pointer to the first element of the array
 * @size: the size of an array
 * @cmp: a pointer to a function
 * Return: -1 or an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
