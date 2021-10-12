#include "main.h"
#include <stdlib.h>
/**
 * rev_string - prints a string in reverse
 *
 * @s: pointer to char
 */
void rev_string(char *s)
{

	int cont = 0, saveCont = 0;
	char *save = s;
	char *ns;

	while (*(save++))
		cont++;
	saveCont = cont;
	ns = malloc(sizeof(char) * cont);
	while (cont--)
	{
		*ns = *(s + cont);
		ns++;
	}
	while (saveCont--)
	{
		*s = *(ns - (saveCont + 1));
		if (saveCont == 0)
			break;
		s++;
	}
	_putchar(10);
}
