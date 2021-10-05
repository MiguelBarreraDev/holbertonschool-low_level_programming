#include "main.h"
/**
 * main - prints the alphabet, in lowercase, whithout standard library
 *
 * Return: Always 0(succes)
 */
void print_alphabet(void)
{
	int codeAscii;

	for (codeAscii = 97; codeAscii <= 122; codeAscii++)
		_putchar(codeAscii);
	_putchar('\n');
}
