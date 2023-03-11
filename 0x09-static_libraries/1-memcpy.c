#include "main.h"
/**
 * _memcpy - copies the value of an address
 * @dest:destination
 * @src:source
 * @n: size of the value to be copied
 * Return: return the pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
