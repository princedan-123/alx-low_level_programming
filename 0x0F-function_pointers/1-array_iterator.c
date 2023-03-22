#include <stdio.h>
#include "function_pointers.h"

/**
 * print_array - prints the elements of an array
 * @index: the index of each elements
 * Return: nothing is returned
 */

void print_array(int index)
{
	printf("\n%d", index);
}

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
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
