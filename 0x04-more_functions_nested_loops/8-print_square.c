#include "main.h"
/**
 * print_square - prints square
 * @size: is the size of the square
 */
void print_square(int size)
{
	int cont, n_char;

	if (size > 0)
	{
		for (cont = 0; cont < size; cont++)
		{
			for (n_char = 0; n_char < size; n_char++)
				_putchar('#');
			_putchar(10);
		}
	}
	else
		_putchar(10);

}
