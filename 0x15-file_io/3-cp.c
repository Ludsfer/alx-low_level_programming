#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @ac: number of arguments from the command line
 * @av: the pointer to the files
 * Return: success 0
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, rd, wr;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename text\n", av[0]);
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	while ((rd = read(fd_from, buf, 1024)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if ((wr == -1) || (fd_to == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd_from, value: %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd_to, value: %d", fd_to);
		exit(100);
	}
	return (0);
}
