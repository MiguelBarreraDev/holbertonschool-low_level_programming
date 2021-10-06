#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num1, num2, product;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			product = num1 * num2;
			if (product < 10)
			{
				_putchar(product + 48);
			}
			else
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			if (num2 != 9)
			{
				_putchar(',');
				if ((num1 * (num2 + 1)) >= 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
