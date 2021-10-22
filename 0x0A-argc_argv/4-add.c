#include <ctype.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int validateNumber(char *n);
/**
 * main - program that adds positive numbers.
 *
 * @argc: contains the number of arguments
 * @argv: argument vector
 *
 *Return: Always 0(succes)
 */
int main(int argc, char *argv[])
{
	int pos, res = 0, num = 0, band = 1;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (pos = 1; pos < argc; pos++)
		{
			band = validateNumber(argv[pos]);

			if (band == 0)
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[pos]);
			res += num;
		}
		printf("%d\n", res);
	}
	return (0);
}
/**
 * validateNumber - validate integer number
 *
 * @n: pointer a char
 *
 * Return: 1 if is a number. 0 if not is a numbe
 */
int validateNumber(char *n)
{
	if (*n == '\0')
		return (1);
	if (!isdigit(*n))
		return (0);

	return (validateNumber(n + 1));
}
