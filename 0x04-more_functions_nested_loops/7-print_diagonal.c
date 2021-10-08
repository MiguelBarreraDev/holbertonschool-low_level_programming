#include "main.h"
/**
 * print_diagonal - draws a straight line in the terminal
 * @n: the number of times the character'\'
 */
void print_diagonal(int n)
{
	int cont, n_space;

	if (n > 0)
	{
		for (cont = 0; cont < n; cont++)
		{
			for (n_space = 0; n_space < cont; n_space++)
				_putchar(' ');
			_putchar('\\');
			_putchar(10);
		}
	}
	else
		_putchar(10);

}
