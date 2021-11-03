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
	int num1, num2, res;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(op)(num1, num2);

	printf("%d\n", res);

	return (0);
}
