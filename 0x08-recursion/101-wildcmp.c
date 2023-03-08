#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * @i: iteration number
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2, int i)
{
	if (i != '\0')
	{
		if (*(s1[i]) == (*s2[i]))
			return (1);
	}
	if (i == '\0')
		return (0);
	wildcmp(s1, s2, i + 1);
}
