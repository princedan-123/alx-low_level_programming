#include<stdio.h>
/**
 * main - prints out integers using putchar
 * Return:return 0
 */
int main(void)
{	int x = '0';

	while (x <= '9')
	{	putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
