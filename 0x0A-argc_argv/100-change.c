#include <stdio.h>
#include <stdlib.h>
/**
 * main -program that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: contains the number of arguments
 * @argv: argument vector
 *
 *Return: Always 0(succes)
 */
int main(int argc, char *argv[])
{
	int money, change = 0, cont = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
		printf("0\n");
	else
	{
		while (money != 0)
		{
			cont++;
			if (money >= 25)
				money -= 25;
			else if (money >= 10)
				money -= 10;
			else if (money >= 5)
				money -= 5;
			else if (money >= 2)
				money -= 2;
			else
				money -= 1;
		}
		printf("%d\n", cont);
	}
	return (0);
}

