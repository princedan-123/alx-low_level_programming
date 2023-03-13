#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{

	char *m;

	size_t n1 = _strlen(s1);

	size_t n2 = _strlen(s2);

	m = malloc(n1 + n2 + 1);
	if (m == NULL)
		return (NULL);
	_memcpy(m, s1, n1);
	_memcpy(m + n1, s2, n2 + 1);
	return (m);
}


/**
 * _strlen - Returns the lenght of a string
 * @s: the string
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}

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
