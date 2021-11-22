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

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, strlen(text_content)) == -1)
		return (-1);

	return (1);
}
