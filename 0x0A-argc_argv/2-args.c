#include "main.h"
#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * @argc: the argument count
 * @argv: the argument string
 * Return: zero
 */
int main(int argc, char *argv[])
{	int i;

	for (i = 0; i < argc; i++)
		printf("\n %s", argv[i]);
	printf("\n");
	return (0);
}
