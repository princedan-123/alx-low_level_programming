#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest:destination string
 * @src:source string
 * Return: returns the value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j;

	while (dest[i])
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
