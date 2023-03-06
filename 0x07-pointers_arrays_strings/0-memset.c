#include "main.h"
/**
 * _memset - allocates value to an address
 * @s: the pointer to the address
 * @b: the value to be allocated
 * @n: the size of memory to be allocated
 * Return: return the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
