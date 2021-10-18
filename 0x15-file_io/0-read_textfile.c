#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

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

int read_textfile(const char *filename, int letters)
{
	int fd, rsz, wsz;
	char *buff;

	if (filename == NULL)
	{
		exit(0);
	}
	buff = malloc(letters * sizeof(char));
	if (buff)
	{
		fd = open(filename, O_RDONLY);

		if (fd < 0)
		{
			exit(0);
		}

		rsz = read(fd, buff, letters);
		wsz = write(1, buff, rsz);
		if (wsz < 0)
		{
			exit(0);
		}
		if( wsz != rsz)
		{
			exit(0);
		}
	}
	free(buff);
	return rsz;
}
