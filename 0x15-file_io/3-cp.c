#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file into another
 * @argc: argument count
 * @argv: an array of strings passed as arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, fdr, fdw, cfd1, cfd2;

	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		fdr = read(fd1, buffer, 1024);
		if ((fd1 == -1) || (fdr == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}
		fdw = write(fd2, buffer, fdr);
		if ((fd2 == -1) || (fdw == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (fdr != 0);
	cfd1 = close(fd1);
	cfd2 = close(fd2);
	if (cfd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	if (cfd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
	return (0);
}
