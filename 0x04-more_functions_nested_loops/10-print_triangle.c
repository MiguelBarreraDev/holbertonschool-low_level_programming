#include "main.h"
/**
 * print_triangle - prints square
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int cont, n_char, n_space;

	if (size > 0)
	{
		for (cont = size; cont > 0; cont--)
		{
			for (n_space = 0; n_space < (cont - 1); n_space++)
				_putchar(' ');
			for (n_char = (cont - 1); n_char < size ; n_char++)
				_putchar('#');
			_putchar(10);
		}
	}
	else
		_putchar(10);

}
