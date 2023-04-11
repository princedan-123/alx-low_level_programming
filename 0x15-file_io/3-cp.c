#include "main.h"
#include <stddef.h>

/**
 * allocate - allocates memory to buffer
 * Return: a pointer to memory location
 */
char *allocate()
{
	char *buffer = malloc(1024);

	return (buffer);
}
/**
 * main - copies a file to another file
 * @argc: the count of argument
 * @argv: pointer to strings of argument passed
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int fd, fdw, byteW, byteR;
	char *buffer = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s", argv[1]);
		exit(98);
	}
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 664);
	if (fdw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		buffer = allocate();
		byteR = read(fd, buffer, 1024);
		byteW = write(fdw, buffer, 1024);
		if (byteW < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		else if (byteR < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't from %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
	} while (byteR > 0);
	free(buffer);
	close_file(fd, fdw);
	return (0);
}

/**
 * close_file - closes opened file
 * @fd: file descriptor of first file
 * @fdw: file descriptor of second file
 * Return: void
 */

void close_file(int fd, int fdw)
{
	int n,  m;

	n = close(fd);

	m = close(fdw);

	if ((n < 0) || (m < 0))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
}
