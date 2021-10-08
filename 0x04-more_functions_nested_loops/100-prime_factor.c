#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0(succes);
 */

int main(void)
{
	int  possibleFactor;
	long int  number = 612852475143, largFactor = 0;

	possibleFactor = 2;
	while (number >= possibleFactor)
	{
		while (number % possibleFactor == 0)
		{
			number /= possibleFactor;
			if (possibleFactor > largFactor)
				largFactor = possibleFactor;
		}
		possibleFactor++;
	}
	printf("%ld\n", largFactor);
	return (0);
}
