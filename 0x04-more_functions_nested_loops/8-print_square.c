#include "main.h"
/**
 * print_square - prints square
 * @size: parameter of the function
 * Return:returns nothing
 */
void print_square(int size)
{
	int i = size;

	int y = size;

	int x;

	for (x = 1; x <= y; x++)
	{
		for (size = 1; size <= i; size++)
		{
			if (size <= 0)
				break;
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
