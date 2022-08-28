#include "main.h"
#include <string.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: 1st parameter
 * @letters: 2nd parameter
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = NULL;
	ssize_t rd, wr;

	if (filename)
		fd = open(filename, O_RDONLY);
	else
		return (0);

	if (fd == -1)
		return (0);

	if (buf == NULL)
		buf = (char *)malloc(letters);

	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	close(fd);
	free(buf);
	return (wr);
}
