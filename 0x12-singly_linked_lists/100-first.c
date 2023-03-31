#include <stdio.h>

/**
 * write - it prints a string before main is called
 * Return: nothing is returned
 */

void write(void) __attribute__((constructor));
/**
 * write - prints a string
 * Return: nothing is returned
 */

void write(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
