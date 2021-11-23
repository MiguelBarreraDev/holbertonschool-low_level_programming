#include "main.h"
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
	char *file_from = argv[1], *file_to = argv[2], *buff_from = NULL;
	int fd_ffrom, fd_fto, n_bytes_fto, len_buff_f;

	if (argc != 3)
		get_error(97);

	fd_ffrom = open(file_from, O_RDONLY);
	if (fd_ffrom == -1)
		get_error(98, file_from);
	buff_from = malloc(sizeof(char) * 1024);
	if (!buff_from)
		return (-1);
	len_buff_f = read(fd_ffrom, buff_from, 1024);
	if (len_buff_f == -1)
	{
		free(buff_from);
		if (close(fd_ffrom) == -1)
			get_error(100, fd_ffrom);
		get_error(98, file_from);
	}
	close(fd_ffrom);

	fd_fto = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_fto == -1)
	{
		free(buff_from);
		get_error(99, file_to);
	}
	n_bytes_fto = write(fd_fto, buff_from, len_buff_f);
	if (n_bytes_fto == -1)
	{
		free(buff_from);
		if (close(fd_fto) == -1)
			get_error(100, fd_fto);
		get_error(99, file_to);
	}

	free(buff_from);
	close(fd_fto);
	return (0);
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

