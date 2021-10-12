#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string in the stdout
 *
 * @str: pointer to char
 */
void _puts(char *str)
{
	int cont = 0;
	char *save = str;

	while (*(save++))
		cont++;
	write(1, str, cont);
	_putchar(10);
}
