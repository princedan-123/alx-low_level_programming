#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 */
char *str_concat(char *s1, char *s2)
{
	char *m; 

	size_t n = _strlen(s2);

	char newString[] = _strncat(s1, s2, n);
	
	int size = strlen(newString) + 1;

	m = malloc(size);

	_memset = (m, newString, size);

	if (m == null)
		return (NULL);
	return (m);
	free(m);
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
 * _memset - allocates value to an address
 * @s: the pointer to the address
 * @b: the value to be allocated
 * @n: the size of memory to be allocated
 * Return: return the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: the size of the string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;

	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
