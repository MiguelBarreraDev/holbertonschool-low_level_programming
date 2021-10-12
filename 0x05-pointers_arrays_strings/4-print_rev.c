#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer to char
 */
void print_rev(char *s)
{
	int cont = 0;
	char *save = s;

	while (*(save++))
		cont++;
	while (cont--)
		_putchar(*(s + cont));
	_putchar(10);
}
