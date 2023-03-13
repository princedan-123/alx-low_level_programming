#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string past to the function parameter
 * @str: the function parameter to recieve the string
 * Return: NULL
 */
char *_strdup(char *str)
{
	size_t len = _strlen(str);

	char *s;

	len = len + 1;

	s =  malloc(len);
	if (s != NULL)
	{
		_memcpy(s, str, len);
	}
	if (s == NULL)
		return (NULL);
	return (s);
	free(s);
}
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
