#include "main.h"
/**
 * read_textfile - read text from a file and print
 * the content and also return no of chars read
 * @filename: pointer to file to read
 * @letters: no of chars to read
 *
 * Return: if sucessful not of chars read
 * 0 if filename is NULL or
 * open fail to open the file or
 * write dosen't write the expected amount of
 * letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rsz, wsz;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(letters * sizeof(char));
	if (buff)
	{
		fd = open(filename, O_RDONLY);

		if (fd < 0)
		{
		return (0);
		}

		rsz = read(fd, buff, letters);
		wsz = write(STDOUT_FILENO, buff, rsz);
		if (wsz < 0)
		{
		return (0);
		}
		if (wsz != rsz)
		{
		return (0);
		}
	}
	free(buff);
	close(fd);
	return (rsz);
}
