#include "main.h"
/**
 * _strchr - searches for a character in a string.
 * @s: the string to be searched
 * @c: the character to be searched for
 * Return: returns a pointer or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if (s[i] == 'c')
		{
			return (s + i);
		}
		else
			return (NULL);
	}
}
