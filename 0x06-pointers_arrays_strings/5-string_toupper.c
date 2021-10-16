#include "main.h"
/**
 * string_toupper - changes all lowercase yo uppercase
 *
 * Return: pointer to char;
 */
char *string_toupper(char *str)
{
	char *save_pos = str;

	while(*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	str = save_pos;
	return str;
}
