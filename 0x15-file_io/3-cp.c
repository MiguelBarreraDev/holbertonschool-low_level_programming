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
char *read_content(char *);
void write_to_dest(char *file, char *content);

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
	char *file_from = argv[1], *file_to = argv[2];
	char *buffer;

	if (argc != 3)
		get_error(97);

	buffer = read_content(file_from);

	write_to_dest(file_to, buffer);

	return (0);
}
/**
 * read_content - Read from source file
 *
 * @file: source file
 *
 * Return: content
 */
char *read_content(char *file)
{
	char *buffer;
	int fd, len, success_close;

	fd = open(file, O_RDONLY);

	if (fd == -1)
		get_error(98, file);
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (NULL);
	len = read(fd, buffer, 1024);

	if (len == -1)
	{
		free(buffer);
		success_close = close(fd);
		if (success_close == -1)
			get_error(100, fd);
		get_error(98, file);
	}

	close(fd);
	return (buffer);
}
/**
 * write_to_dest - write to destination file
 *
 * @file: destination file
 * @buffer: content
 */
void write_to_dest(char *file, char *buffer)
{
	int fd, len, success_close;

	fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		free(buffer);
		get_error(99, file);
	}
	len = write(fd, buffer, strlen(buffer));

	if (len == -1)
	{
		free(buffer);
		success_close = close(fd);
		if (success_close == -1)
			get_error(100, fd);
		get_error(99, file);
	}

	close(fd);
	free(buffer);
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
		dprintf(STD_E, "%s %s\n", EX_ERR_100, va_arg(msg, char *));
		exit(100);
	}
	va_end(msg);
}
