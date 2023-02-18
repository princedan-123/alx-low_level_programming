#include<stdio.h>
/**
 * main - prints alphabets
 * Return:returns 0
 */
int main(void)
{	char x = 'a';

	char y = 'A';

	while (x <= 'z')
	{	putchar(x);
		x++;
	}
	while (y <= 'Z')
	{	putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
