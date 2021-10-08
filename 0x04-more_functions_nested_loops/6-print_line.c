#include "main.h"
/*
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character'_'
 */
void print_line(int n)
{
	int cont;

	if (n > 0)
	{
		for (cont = 0; cont < n; cont++)
			_putchar('_');
	}
	_putchar(10);
}
