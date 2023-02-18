#include<stdio.h>
/**
 * main - prints alphabets execept q and e
 * Return:returns 0.
 */
int main(void)
{	char a = 'a';

	char e = 'e';

	char q = 'q';

	char z = 'z';

	while (a <= z)
	{
		if (a != e && a != q)
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
