#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - append text to the file
 * @filename: file to append
 * @text_content: text to append to the file
 *
 * Description: if @text_content is NULL add do not add anything and
 * do not create if the file dosen't exist
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int r_value;
	ssize_t n_write;

	if (filename == NULL)
	{
		r_value = -1;
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		r_value = -1;
	}
	n_write = write(fd, text_content, strlen(text_content));
	if (n_write == -1)
	{
		r_value = -1;
	}

	close(fd);
	return (r_value);
}
