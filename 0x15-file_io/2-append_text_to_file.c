#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends  a string to a file
 * @filename: name of the file
 * @text_content: the string to be added to the file
 * Return: 1 if successful or -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int byteW, fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);
	if (fd < 0)
		return (-1);
	else if (text_content == NULL)
		return (1);
	if (text_content != NULL)
		byteW = write(fd, text_content, strlen(text_content));
	if (byteW < 0)
		return (-1);
	close(fd);
	return (1);
}
