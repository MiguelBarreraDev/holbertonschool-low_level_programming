#include "main.h"
/**
 * leet - function
 *
 * @str: string to encodes
 *
 * Return: str
 */
char *leet(char *str)
{
	int pos = 0, cont = 0; /* a e o t l */
	char encode[5] = "43071";
	char valueEntry[5] = "aeotl";
	char getC;

	while (str[pos])
	{
		cont = 0;
		getC = str[pos];
		while (valueEntry[cont])
		{
			if (getC == valueEntry[cont] || (getC + 32) == valueEntry[cont])
				str[pos] = encode[cont];
			cont++;
		}
		pos++;
	}
	return (str);
}
