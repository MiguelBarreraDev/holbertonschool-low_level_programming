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
	int pos = 0;
	char getC;

	while (str[pos])
	{
		getC = str[pos];
		if (getC >= 65 && getC <= 90)
			getC += 32;
		if (getC == 'a')
			str[pos] = '4';
		else if (getC == 'e')
			str[pos] = '3';
		else if (getC == 'o')
			str[pos] = '0';
		else if (getC == 't')
			str[pos] = '7';
		else if (getC == 'l')
			str[pos] = '1';
		pos++;
	}
	return (str);
}
