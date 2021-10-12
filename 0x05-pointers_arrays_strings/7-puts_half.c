#include "main.h"
#include <unistd.h>
/**
 * puts_half - prints half of a string
 *
 * @str: pointer to char
 */
void puts_half(char *str)
{
	int cont = 0, pos, posHalf = 0;
	char *save = str;

	while (*(save++))
		cont++;
	posHalf = cont / 2;
	str += posHalf;
	for (pos = 0; pos < posHalf; pos++)
	{
		_putchar(*str);
		if (pos == (posHalf - 1))
			break;
		str++;
	}
	_putchar(10);
}
