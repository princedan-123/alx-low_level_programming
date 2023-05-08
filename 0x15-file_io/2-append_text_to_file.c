#include "main.h"

/**
 * append_text_to_file - appends content to a file
 * @filename: the name of the file
 * @text_content: the content to be appended to the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	fdw = write(fd, text_content, sizeof(text_content));
	if (fdw == -1)
		return (-1);
	close(fd);
	return (1);
}
