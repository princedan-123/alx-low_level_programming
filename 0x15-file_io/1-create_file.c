#include "main.h"
#include <string.h>

/**
 * create_file - creates a file and writes into it
 * @filename: the name of the file
 * @text_content: the string to be written into the file
 * Return: 1 if successful and -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	int byteW;

	char *f = "failed";

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_RDWR, 0600);
		if (fd < 0)
			return (-1);
	}
	fd = open(filename, O_RDWR);
	if (fd > 0)
	{
			truncate(filename, 0);
	}
	else
		fd = open(filename, O_RDWR, 0600);
	if (fd < 0)
		return (-1);
	byteW = write(fd, text_content, strlen(text_content));
	if (byteW < 0)
		return (-1);
	else if (byteW == -1 && fd == -1)
	{
		write(STDOUT_FILENO, f, 6);
		return (-1);
	}
	return (1);
}
