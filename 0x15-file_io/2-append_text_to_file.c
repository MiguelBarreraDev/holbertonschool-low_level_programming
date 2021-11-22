#include "main.h"
/**
 * append_text_to_file - function that creates a file
 *
 * @filename: file path
 * @text_content: content for add
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
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
