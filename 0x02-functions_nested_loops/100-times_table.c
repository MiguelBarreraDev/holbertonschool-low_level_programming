#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: is a integer number
 */
void print_times_table(int n)
{
	int num1, num2, product;

	if (n <= 15 && n >= 0)
	{
	for (num1 = 0; num1 <= n; num1++)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			product = num1 * num2;
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
			if (num2 != n)
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
