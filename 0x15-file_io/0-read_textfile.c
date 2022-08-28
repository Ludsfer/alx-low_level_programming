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
	ssize_t rd, re;

	if (filename)
		fd = open(filename, O_RDONLY);
	else
		exit(1);


	if (fd == -1)
		exit(1);

	if (buf == NULL)
		buf = (char *)malloc(letters + 1);

	if (!buf)
		exit(1);


	rd = read(fd, buf, letters);
	buf[letters] = '\0';

	re = write(STDOUT_FILENO, buf, rd);
	close(fd);
	free(buf);

	return (re);
}
