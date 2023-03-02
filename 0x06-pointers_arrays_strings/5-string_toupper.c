#include "main.h"
/**
 * string_toupper -  changes lower case letters
 * @str:the string to be changed
 * Return: a pointer  to the changed string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if ((str[i] >= 97)&& (str[i] <= 122))
		{
			str[i] -= 32;
		}
	}
	return (str);
}
