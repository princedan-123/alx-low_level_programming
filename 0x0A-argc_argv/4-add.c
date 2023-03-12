#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s:the pointer to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int c = 0;

	unsigned int ni = 0;

	int min = 1;

	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
			break;
		c++;
	}
	ni *= min;
	return (ni);
}

#include "main.h"
#include <stdio.h>
/**
 * main - adds two strings converted to integers
 * @argv: strings to be coverted to integers
 * @argc: the count of the strings
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 3)
		printf("0");
	if ((argv[1] > 57) || (argv[1] < 48))
	{
		printf("Error\n");
		return (1);
	}
	if  ((argv[2] > 57 ) || (argv[2] < 48))
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	
	num2 = _atoi(argv[2]);

	result = num1 + num2;
}

