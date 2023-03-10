#include "main.h"
#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * @argc: the argument count
 * @argv: the argument string
 * Return: zero
 */
int main(int argc, char *argv[])
{
	for (i = 1; i < argc, i++)
		printf("/n %s", argv[i]);
	_putchar('\n');
	return (0);
}
