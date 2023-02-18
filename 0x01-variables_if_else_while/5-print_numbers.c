#include<stdio.h>
/**
 * main - prints base ten numbers
 * Return: returns 0
 */
int main(void)
{	int number = 0;

	while (number <= 9)
	{	printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
