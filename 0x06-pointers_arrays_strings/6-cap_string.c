#include "main.h"
#include <stdio.h>
/**
 * cap_string -capitalizes all words of a string
 *
 * @str: string to capitalizes
 *
 * Return: pointer to char;
 */
char *cap_string(char *str)
{
	int pos = 0, i = 0;
	char separator[] = {32, 9, 10, 32, 46, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	char *ptr_sprt = separator;
	int check = 0;

	while (str[pos])
	{
		i = 0;
		check = 0;
		while (ptr_sprt[i])
		{
			if (ptr_sprt[i] == str[pos])
			{
				pos++;
				i = 0;
				check = 1;
			}
			else
				i++;
		}
		if ((str[pos] <= 122 && str[pos] >= 97) && (check == 1 || pos == 0))
			str[pos] -= 32;
		pos++;
	}
	return (str);
}
