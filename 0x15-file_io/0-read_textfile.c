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
	int fd_o = 0;
	ssize_t n_bytes;
	char *text;

	if (!filename)
		return (0);

	fd_o = open(filename, O_RDONLY);
	if (fd_o == -1)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (!text)
	{
		close(fd_o);
		return (0);
	}
	n_bytes = read(fd_o, text, letters);
	if (n_bytes == -1)
	{
		close(fd_o);
		free(text);
		return (0);
	}

	if (write(1, text, n_bytes) == -1)
	{
		close(fd_o);
		free(text);
		return (0);
	}

	free(text);
	close(fd_o);
	return (n_bytes);
}
