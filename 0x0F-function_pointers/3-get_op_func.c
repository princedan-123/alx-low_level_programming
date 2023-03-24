#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - a function that returns a function pointer
 * @s: a string which represents arithmetic operator
 * Return: Returns a function pointer to a fuction that returns an integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}

