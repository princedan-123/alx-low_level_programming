#include "main.h"
/**
 *  _strspn - entry point
 *  @s: initial string
 *  @accept: other string
 *  Return: the number of byte in the initial string segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check1;
			}
		}
	}
}
