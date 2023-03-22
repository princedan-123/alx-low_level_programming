#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to  be printed
 * @f: a function pointer
 * Return: it returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
