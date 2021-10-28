#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  function that concatenates two strings.
 *
 * @s1: pointer
 * @s2: pointer
 * @n: number
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2;
	char *str;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n > len_s2)
	{
		str = malloc(sizeof(char) * (len_s1 + len_s2));
		n = len_s2;
	}
	else
		str = malloc(sizeof(char) * (len_s1 + n));

	if (str == NULL)
		return (NULL);

	strcat(str, s1);
	strncat(str, s2, n);

	return (str);
}
