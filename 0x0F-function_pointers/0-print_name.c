#include <stdio.h>
/**
 * print_format - prints a name as is
 * @name: the name to be printed
 * Return: nothing
 */

void print_format(char *name)
{
	printf("Hello, my name is %s\n", name);
}
/**
 * print_name - prints a name
 * @name: the name to  be printed
 * @f: a function pointer
 * Return: it returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
