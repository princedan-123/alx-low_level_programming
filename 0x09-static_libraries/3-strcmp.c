#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointers to the first string
 * @s2: pointer to the second string
 * Return: if str1 < str2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
