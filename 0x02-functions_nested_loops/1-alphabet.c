#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowecase
 *
 */
void print_alphabet(void)
{
	int codeAscii;

	for (codeAscii = 97; codeAscii <= 122; codeAscii++)
		_putchar(codeAscii);
	_putchar('\n');
}
