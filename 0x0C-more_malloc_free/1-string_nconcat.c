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
/**
 * string_nconcat - allocates memory and concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memory;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
	{
		s1 = "";

		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = "";

		s2[0] = '\0';
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;

	memory = malloc(sizeof(char) * (len1 + n + 1));

	if (memory == NULL)
		return (NULL);

	if (n >= len2)
	{

		_memcpy(memory, s1, len1);
		_memcpy(memory + len1, s2, len2);
		memory[len1 + len2] = '\0';
	}
	if (n < len2)
	{
		_memcpy(memory, s1, len1);
		_memcpy(memory + len1, s2, n);
		memory[len1 + n] = '\0';
	}
	return (memory);
}
