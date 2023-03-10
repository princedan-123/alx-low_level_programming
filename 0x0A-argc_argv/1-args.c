#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments it recieved
 * @argc: the parameter that stores argument count
 * @argv: the parameter that stores argument string
 * Return: it returns zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("\n %d", argc - 1);
	return (0);
}
