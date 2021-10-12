#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: pointer to char
 */
void puts_half(char *str)
{
	long int cont = 0, pos, posHalf = 0, ctn;
	char *save = str;

	while (*(save++))
		cont++;
	ctn = cont / 2;
	posHalf = ctn;
	if (cont % 2 == 0)
		str += ctn;
	else
		str += (ctn + 1);

	for (pos = 0; pos < posHalf; pos++)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
