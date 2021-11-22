#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: file path
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, count = 0, n_bytes;
	char *text;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (!text)
	{
		close(fd);
		return (0);
	}
	n_bytes = read(fd, text, letters);
	if (n_bytes == 0)
	{
		free(text);
		close(fd);
		return (0);
	}

	count = write(STDOUT_FILENO, text, n_bytes);
	if (count == -1)
	{
		free(text);
		close(fd);
		return (0);
	}

	close(fd);
	return (count);
}
