#include <stdio.h>

/**
 * main - prints the combination of three numbers
 * Return: 0
 */
int main(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (x = j + 1; x < 10; x++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(x + '0');
				if ((i == 7) && (j == 8) && (x == 9))
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
