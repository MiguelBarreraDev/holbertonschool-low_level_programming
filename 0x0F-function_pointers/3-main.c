#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that performs simple operations
 *
 * @argc: integer
 * @argv: pointer to argument
 *
 * Return: Always 0(succes);
 */
int main(int argc, char **argv)
{
	int (*ptr_Op)(int, int);
	int res = 0, i = 0;
	/* - - - -- - - Restriction - - - - - - - */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	/* -  - ---- ---  - - -- - - - -- - -- - -- -- - */
	ptr_Op = get_op_func(argv[2]);
	res = ptr_Op(atoi(argv[1]), atoi(argv[3]));

	printf("-> %d\n", res);

	return (0);
}
