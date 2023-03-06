#include "main.h"
/**
 *  _strspn - entry point
 *  @s: initial string
 *  @accept: other string
 *  Return: the number of byte in the initial string segment
 */
unsigned int _strspn(char *s, char *accept)
{
	{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (r = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

}
