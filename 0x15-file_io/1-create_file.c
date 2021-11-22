#include "main.h"
/**
 * create_file - function that creates a file
 *
 * @filename: file path
 * @text_content: content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, (text_content) ? strlen(text_content) : 0) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
