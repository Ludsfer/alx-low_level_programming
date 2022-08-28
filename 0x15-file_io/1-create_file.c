#include "main.h"
#include <string.h>

/**
 * create_file - Create a function that creates a file
 * @filename: the name of the file
 * @text_content: stream of text to read
 * Return: text content
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	/* terminate if file can not be created */
	if (filename == NULL)
		return (-1);

	/*   */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);
	if (fd == -1)
		return (-1);

	/*   */
	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
