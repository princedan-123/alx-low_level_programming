#include "main.h"
/**
 * cap_string - capitalises all words in a string
 * @str: the string
 * Return: a pointer to the string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if (str[i] <= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
