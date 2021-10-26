#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: number of arguments
 * @av: pointer to arguments
 *
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	int row, size = 0;
	char *str;

	if (ac == 0 || av == 0)
		return ('\0');

	for (row = 0; row < ac; row++)
	{
		size += strlen(av[row]);
	}
	size += ac + 1;

	str = malloc(sizeof(char) * size);
	if (str == 0)
	{
		free(str);
		return ('\0');
	}
	for (row = 0; row < ac; row++)
	{
		strcat(str, av[row]);
		if (row <= ac - 1)
			strcat(str, "\n");
	}
	return (str);
}
