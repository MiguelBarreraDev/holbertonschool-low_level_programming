#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: is a integer number
 */
void print_times_table(int n)
{
	int factor1, factor2, product;

	if (n <= 15 && n >= 0)
	{
		for (factor1 = 0; factor1 <= n; factor1++)
		{
			for (factor2 = 0; factor2 <= n; factor2++)
			{
				product = factor1 * factor2;
				if (product < 10)
					_putchar(product + 48);
				if (product < 100 && product >= 10)
				{
					_putchar((product / 10) + 48);
					_putchar((product % 10) + 48);
				}
				if (product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar(((product / 10) % 10) + 48);
					_putchar((product % 10) + 48);
				}
				if (factor2 != n)
					_putchar(',');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				if (product >= 10 && product < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (product >= 100)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
