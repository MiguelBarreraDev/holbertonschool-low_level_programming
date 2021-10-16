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
		switch (getC)
		{
			case 'a':
				str[pos] = '4';
				break;
			case 'e':
				str[pos] = '3';
				break;
			case 'o':
				str[pos] = '0';
				break;
			case 't':
				str[pos] = '7';
				break;
			case 'l':
				str[pos] = '1';
				break;
		}
		pos++;
	}
	return (str);
}
