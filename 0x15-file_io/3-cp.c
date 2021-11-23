#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdarg.h>

/*-------------- Macros ----------*/
#ifndef MACROS_H
#define MACROS_H

#define STD_E STDERR_FILENO
#define STD_O STDOUT_FILENO
#define STD_I STDON_FILENO

#define EX_ERR_97 "Usage: cp file_from file_to"
#define EX_ERR_98 "Error: Can't read from file"
#define EX_ERR_99 "Error: Can't write to"
#define EX_ERR_100 "Error: Can't close fd FD_VALUE"

#endif
/*------------------------------------*/

void get_error(int, ...);
int read_content(char *, int, char **);
void write_to_dest(char *file, int, char **content, int);

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: number of parameters
 * @argv: Pointer to parameters
 *
 * Return: Always 0(succes);
 */
int main(int argc, char **argv)
{
	char *buffer;
	int fd_f, fd_t, len = 1024;

	if (argc != 3)
		get_error(97);

	fd_f = open(argv[1], O_RDONLY);
	if (fd_f < 0)
		get_error(98, argv[1]);

	fd_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_t < 0)
		get_error(99, argv[2]);

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (-1);

	while (len == 1024)
	{
		len = read_content(argv[1], fd_f, &buffer);
		write_to_dest(argv[2], fd_t, &buffer, len);
	}

	free(buffer);
	if (close(fd_f) < 0)
		get_error(100, fd_f);
	if (close(fd_t) < 0)
		get_error(100, fd_t);

	return (0);
}
/**
 * read_content - Read from source file
 *
 * @file: source file
 * @buffer: pointer
 * @fd: file descriptor
 *
 * Return: n_bytes
 */
int read_content(char *file, int fd, char **buffer)
{
	int len;

	len = read(fd, *buffer, 1024);
	if (len < 0)
	{
		free(*buffer);
		get_error(98, file);
	}
	return (len);
}
/**
 * write_to_dest - write to destination file
 *
 * @file: destination file
 * @buffer: pointer
 * @fd: file descriptor
 * @len: n_bytes
 */
void write_to_dest(char *file, int fd, char **buffer, int len)
{
	int len_w;

	len_w = write(fd, *buffer, len);
	if (len_w < 0)
	{
		free(*buffer);
		get_error(99, file);
	}
}
/**
 * get_error - Displays the error correponding
 * to the exit code
 *
 * @ec: exit code
 */
void get_error(int ec, ...)
{
	va_list msg;

	va_start(msg, ec);

	if (ec ==  97)
	{
		dprintf(STD_E, "%s\n", EX_ERR_97);
		exit(97);
	}
	else if (ec == 98)
	{
		dprintf(STD_E, "%s %s\n", EX_ERR_98, va_arg(msg, char *));
		exit(98);
	}
	else if (ec == 99)
	{
		dprintf(STD_E, "%s %s\n", EX_ERR_99, va_arg(msg, char *));
		exit(99);
	}
	else if (100)
	{
		dprintf(STD_E, "%s %d\n", EX_ERR_100, va_arg(msg, int));
		exit(100);
	}
	va_end(msg);
}
