#include "main.h"
#include <unistd.h>
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
	posHalf = (cont % 2 == 0)? ctn : ctn + 1 ;
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
