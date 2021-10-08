#include "main.h"

/**
 * print_number - prints an integer.
 * @n: is a integer number
 */

void print_number(int n)
{
	int idNegative, digit, order, result, num_0, cont;

	order = 0;
	result = 0;
	if (n < 0)
	{
		n *= -1;
		idNegative = 1;
	}
	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
		num_0 = 1;

		for (cont = 0; cont < order; cont++)
		{
			num_0 *= 10;
		}

		result += (digit * num_0);
		order++;
	}
	if (idNegative == 1)
		result *= -1;
	printf("%d\n", result);
}
