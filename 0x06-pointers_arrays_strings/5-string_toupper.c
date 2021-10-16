#include "main.h"
/**
 * string_toupper - changes all lowercase yo uppercase
 *
 * @str: string to modify
 *
 * Return: pointer to char;
 */
char *string_toupper(char *str)
{
	int pos = 0;

	while (str[pos])
	{
		if (str[pos] >= 97 && str[pos] <= 122)
			str[pos] -= 32;

		pos++;
	}
	return (str);
}
