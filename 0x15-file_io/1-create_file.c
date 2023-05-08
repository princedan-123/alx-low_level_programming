#include "main.h"
#include <string.h>

/**
 * create_file - creates a file and writes into it
 * @filename: the name of the file to be created
 * @text_content: the content to be written into the file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fdw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	fdw = write(fd, text_content, strlen(text_content));
	if (fdw == -1)
		return (-1);
	close(fd);
	return (1);
}
