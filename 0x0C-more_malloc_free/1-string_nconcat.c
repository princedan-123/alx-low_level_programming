#include "main.h"
#include <stdlib.h>
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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memory;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
	{
		s1 = "";

		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = "";

		s2 = '\0';
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	memory = malloc(sizeof(char) * len1 + len2);

	if (memory == NULL)
		return (NULL);

	if (n >= len2)
	{
		_memcpy(memory, s1, len1);
		_memcpy(memory + len2, s2, len2);
	}
	if (n < len2)
	{
		_memcpy(memory, s1, len1);
		_memcpy(memory + n, s2, n);
	}
	return (memory);
}
