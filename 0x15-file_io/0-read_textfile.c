#include "main.h"
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - read a text file and print to stdout
 * @filename: pointert the text file
 * @letters: number of letters it should read and print
 *
 * Return: on success amount of bytes read or 0
 * if filename is NULL | write fails | can't write @letters size of chars
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	ssize_t n_read;
	ssize_t n_write;

	if (filename == NULL)
	return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	n_read = read(fd, buf, letters);
	if (n_read == -1)
	return (0);
	n_write = write(STDOUT_FILENO, buf, n_read);
	if (n_write == -1)
	return (0);
	return (n_read);

}
