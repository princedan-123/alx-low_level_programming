#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - gives change
 * @argv:string argument
 * @argc:argument count
 * Return: 1 if there is error, 0 if none.
 */
int main(int argc, char *argv[])
{
	int i;

	int num = atoi(argv[1]);/*converts the argument string to integer*/

	int num2[] = {25, 10, 5, 2, 1};/*an array that holds the value of the coin*/

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num < 0)
		printf("0");/*checks if the argument is negative*/
	for (i = 0; i < 5; i++)
	{
		if (num % num2[i] == 0)
		{
			printf("%d\n", num / num2[i]);
			break;

		}

	}
	return (0);
}
