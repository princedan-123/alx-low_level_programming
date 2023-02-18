#include <stdio.h>
/**
 * main - prints three alphabets.
 * Return: Returns 0.
*/
int main(void)
{	char x = 'a';

	char y = 'A';

	while (x <= 'z')
	{putchar(x);
	 x++;	
	}
	while (y <= 'Z')
	{putchar(y); 
	 y++;
	}
	return (0);	
}
