#include "main.h"

/**
 * read_textfile - reads the content of a text file
 * @filename: the name of the file to be read
 * @letters: the size in bytes to be read
 * Return: the size of text read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters);

	size_t fd, fdr, fdw;

	size_t check = -1;

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == check)
		return (0);
	fdr = read(fd, buffer, letters);
	if (fdr == check)
		return (0);
	fdw = write(STDOUT_FILENO, buffer, letters);
	if (fdw == check)
		return (0);
	free(buffer);
	close(fd);
	return (fdr);
}
