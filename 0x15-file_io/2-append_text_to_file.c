#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: the text content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 00664);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
