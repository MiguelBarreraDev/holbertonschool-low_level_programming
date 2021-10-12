#include "main.h"
#include <unistd.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer to char
 */
void puts2(char *str)
{
	int cont = 0, pos;
	char *save = str;

	while (*(save++))
		cont++;
	for (pos = cont; pos > 0; pos -= 2)
	{
		_putchar(*(str));
		str += 2;
	}
	_putchar(10);
}
