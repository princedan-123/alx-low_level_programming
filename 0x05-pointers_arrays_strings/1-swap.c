#include "main.h"
/**
 * swap_int - swaps the value of integers
 * @a: first integer
 * @b:second integer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
