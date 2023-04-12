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

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		byteW = write(fd, text_content, strlen(text_content));
		if (byteW < 0)
		return (-1);
	}
	close(fd);
	return (1);
}
