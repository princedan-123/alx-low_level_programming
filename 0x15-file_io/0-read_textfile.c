#include "main.h"

/**
 * read_textfile - reads a file
 * @filename: name of the file to be read
 * @letters: the number of letter to be read
 * Return: 0 if not successful and the number of byte if successful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t byteR, byteW;

	char *buffer = malloc(letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	byteR = read(fd, buffer, letters);
	if (byteR == -1)
		return (0);
	byteW = write(STDOUT_FILENO, buffer, byteR);
	if (byteW < 0)
		return (0);
	close(fd);
	free(buffer);
	if (byteW != byteR)
		return (0);
	return (byteW);
}
