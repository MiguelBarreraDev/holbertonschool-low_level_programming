#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always 0(succes)
 */
int print_alphabet_x10(void)
{
	int codeAscii, cont;

	for (cont = 0; cont < 10; cont++)
	{
		for (codeAscii = 97; codeAscii <= 122; codeAscii++)
			_putchar(codeAscii);
		_putchar('\n');
	}
	return (0);
}
