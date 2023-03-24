#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - collects arguments from the command linde
 * @argc: the argument count
 * @argv: the array of argument
 * Return: zero is returned
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	int (*cal)(int, int);

	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);

	num2 = atoi(argv[3]);

	op = argv[2];
	while (num2 == 0)
	{
		if (*argv[2] == '/' || *argv[2] == '%')
			printf("Error\n");
		exit(100);
	}
	cal = get_op_func(op);
	if (cal == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = cal(num1, num2);
	printf("%d\n", result);
	return (0);
}
