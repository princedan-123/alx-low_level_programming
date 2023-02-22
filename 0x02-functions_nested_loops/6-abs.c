#include "main.h"
/**
 * _abs - computes the absolute value of integer
 * @c: it is the parameter of the function
 * Return: Returns the absolute value of  an integer or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
