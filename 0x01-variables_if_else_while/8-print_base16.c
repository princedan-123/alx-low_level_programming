#include<stdio.h>
/**
 * main - prints hexadecimal numbers
 * Return: it returns 0
 */
int main(void)
{	int x = '0';

	char y = 'a';

	char f = 'f';

	while (x <= '9')
		{	putchar(x);
			x++;
		}
	while (y <= f)
		{	putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}
