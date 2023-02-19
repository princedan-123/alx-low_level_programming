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
	int y = '97';

	int f = '102';

	while (y <= f)
		{	putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}
