#include "main.h"
/**
 * print_numbers - prints integers 0 - 9
 * Return: return 0
 */
void print_numbers(void)
{
	int a = '0';

	int b = '9';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n);
}
