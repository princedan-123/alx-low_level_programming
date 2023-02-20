#include<stdio.h>
/**
 * main - prints hexadecimal numbers
 * Return: it returns 0
 */
int main(void)
{	int x = '0';

	while (x <= '9')
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
