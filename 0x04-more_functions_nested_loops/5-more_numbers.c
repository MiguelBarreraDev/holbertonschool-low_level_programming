#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int num, cont;

	for (cont = 0; cont < 10; cont++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar(10);
	}
}
