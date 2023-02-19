#include<stdio.h>
/**
 * main - prints hexadecimal numbers
 * Return: it returns 0
 */
int main(void)
{	int x = 48;

	while (x <= 57)
		{	putchar(x);
			x++;
		}
	char y = 'a';

	char f = 'f';

	while (y <= f)
		{	putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}
