#include <stdio.h>
#include <stdlib.h>
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
	int pos, res = 0, num = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (pos = 1; pos < argc; pos++)
		{
			num = atoi(argv[pos]);
			if (!num)
			{
				printf("Error\n");
				return (1);
			}
			res += num;
		}
		printf("%d\n", res);
	}
	return (0);
}

