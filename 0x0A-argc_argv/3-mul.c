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
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: the strings
 * Return:0
 */
int main(int argc, char *argv[])
{	int num1;

	int num2;

	int result;

	if ((argc > 3) || (argc < 3))
	{
		printf("Error\n");
		return (1);
	}

	 num1 = _atoi(argv[1]);

	 num2 = _atoi(argv[2]);

	 result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
