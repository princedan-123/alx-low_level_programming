#include<stdio.h>
/**
 * main - prints alphabets in reverse
 * Return:returns 0
 */
int main(void)
{	char z = 'z';

	char a = 'a';

	while (a <= z)
	{	putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
